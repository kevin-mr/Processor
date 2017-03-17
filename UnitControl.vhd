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
           incontrol : out  STD_LOGIC_VECTOR (7 downto 0);
           outcontrol : out  STD_LOGIC_VECTOR (1 downto 0));
end UnitControl;

architecture Behavioral of UnitControl is
	type states is (fetch,
						 decoding);
	signal present_state, next_state: states;
	function fetch_instruction (state: integer) return STD_LOGIC_VECTOR is
		variable control: STD_LOGIC_VECTOR (7 downto 0) := "00000000";
	begin
		case state is
			when 0 =>
					control := "00000010";
					return control;
			when 1 =>
					control := "00000100";
					return control;
			when 2 =>
					control := "00001000";
					return control;
			when 3 =>
					control := "00010000";
					return control;
			when 4 =>
					control := "00100000";
					return control;
			when 5 =>
					control := "01000000";
					return control;
			when 6 =>
					control := "10000000";
					return control;
			when others =>
					return control;
		end case;
	end fetch_instruction;
begin

process(clock,present_state)
	variable counter: integer := 0;
begin
	if clock'event and clock = '1' then
		present_state <= next_state;
	
		case present_state is
			when fetch =>
				if counter > 6 then
					counter := 0;
					next_state <= present_state;
				else
					incontrol <= fetch_instruction(counter);
					counter := counter + 1;
				end if;
			when others =>
		end case;
	
	end if;

end process;

end Behavioral;

