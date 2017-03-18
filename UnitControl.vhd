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
			  operando_1: out  STD_LOGIC_VECTOR (5 downto 0);
			  operando_2: out  STD_LOGIC_VECTOR (5 downto 0);
			  scontrol: out  STD_LOGIC_VECTOR (1 downto 0);
           incontrol : out  STD_LOGIC_VECTOR (7 downto 0);
           outcontrol : out  STD_LOGIC_VECTOR (1 downto 0));
end UnitControl;

architecture Behavioral of UnitControl is	
	function fetch_instruction (state: integer) return STD_LOGIC_VECTOR is
		variable control: STD_LOGIC_VECTOR (11 downto 0) := "000000000000";
	begin
		case state is
			when 1 =>
					control := "000000000010";
					return control;
			when 2 =>
					control := "000000000100";
					return control;
			when 3 =>
					control := "000000001000";
					return control;
			when 4 =>
					control := "100000000000";
					return control;
			when 5 =>
					control := "000000010000";
					return control;
			when 6 =>
					control := "000000100000";
					return control;
			when 7 =>
					control := "000001000000";
					return control;
			when 8 =>
					control := "000010000000";
					return control;
			when others =>
					return control;
		end case;
	end fetch_instruction;
	function storage (state: integer) return STD_LOGIC_VECTOR is
		variable control: STD_LOGIC_VECTOR (11 downto 0) := "000000000000";
	begin
		case state is
			when 1 =>
				control := "001000000000";
				return control;
			when 2 =>
				control := "000100001000";
				return control;
			when 3 =>
				control := "000000000000";
				return control;
			when others =>
		end case;
	end storage;
	type states is (fetch,
						 decoding);
	signal present_state, next_state: states;
begin

process(clock)
	variable control: STD_LOGIC_VECTOR (11 downto 0);
	variable counter: integer := 0;
begin
	if clock'event and clock = '1' then
		counter := counter + 1;
		
		case present_state is
			when fetch =>
				if counter = 8 then
					control := fetch_instruction(counter);
					incontrol <= control(7 downto 0);
					outcontrol <= control(11 downto 10);
					scontrol <= control(9 downto 8);
					next_state <= decoding;
				elsif counter > 0 then
					control := fetch_instruction(counter);
					incontrol <= control(7 downto 0);
					outcontrol <= control(11 downto 10);
					scontrol <= control(9 downto 8);
				end if;
			when decoding =>
				counter := 0;
				incontrol <= X"00";
				case data(15 downto 12) is
					when "0000" =>
						if counter = 8 then
							control := storage(counter);
							incontrol <= control(7 downto 0);
							outcontrol <= control(11 downto 10);
							scontrol <= control(9 downto 8);
							next_state <= decoding;
						elsif counter > 0 then
							control := storage(counter);
							incontrol <= control(7 downto 0);
							outcontrol <= control(11 downto 10);
							scontrol <= control(9 downto 8);
					end if;
					when others =>
				end case;
		end case;
		
		present_state <= next_state;
	end if;
end process;

end Behavioral;

