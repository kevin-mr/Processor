----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    09:37:52 03/17/2017 
-- Design Name: 
-- Module Name:    UnitControl - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity UnitControl is
    Port ( clock : in  STD_LOGIC;
			  data: in STD_LOGIC_VECTOR (15 downto 0);
           incontrol : out  STD_LOGIC_VECTOR (7 downto 0);
           outcontrol : out  STD_LOGIC_VECTOR (1 downto 0));
end UnitControl;

architecture Behavioral of UnitControl is	
	function fetch_instruction (state: integer) return STD_LOGIC_VECTOR is
		variable control: STD_LOGIC_VECTOR (7 downto 0) := "00000000";
	begin
		case state is
			when 1 =>
					control := "00000010";
					return control;
			when 2 =>
					control := "00000100";
					return control;
			when 3 =>
					control := "00001000";
					return control;
			when 5 =>
					control := "00010000";
					return control;
			when 6 =>
					control := "00100000";
					return control;
			when 7 =>
					control := "01000000";
					return control;
			when 8 =>
					control := "10000000";
					return control;
			when others =>
					return control;
		end case;
	end fetch_instruction;
	type states is (fetch,
						 decoding);
	signal present_state, next_state: states;
begin

process(clock)
	variable control: STD_LOGIC_VECTOR (9 downto 0);
	variable counter: integer := 0;
begin
	if clock'event and clock = '1' then
		counter := counter + 1;
		
		case present_state is
			when fetch =>
				if counter = 8 then
					incontrol <= fetch_instruction(counter);
					next_state <= decoding;
				elsif counter > 4 then
					incontrol <= fetch_instruction(counter);
					outcontrol <= "00";
				elsif counter = 4 then
					incontrol <= X"00";
					outcontrol <= "10";
				elsif counter > 0 then
					incontrol <= fetch_instruction(counter);
				end if;
			when decoding =>
				counter := 0;
				incontrol <= X"00";
				case data(15 downto 12) is
					when "0000" =>
						outcontrol <= "11";
					when others =>
				end case;
		end case;
		
		present_state <= next_state;
	end if;
end process;

end Behavioral;

