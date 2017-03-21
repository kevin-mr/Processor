----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:43:23 03/21/2017 
-- Design Name: 
-- Module Name:    RC - Behavioral 
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

entity RC is
	Port ( clock : in  STD_LOGIC;
          control : in  STD_LOGIC_VECTOR (1 downto 0);
          input : in  STD_LOGIC_VECTOR (15 downto 0);
          output : out  STD_LOGIC_VECTOR (15 downto 0));
end RC;

architecture Behavioral of RC is
function logic (cmp: STD_LOGIC_VECTOR(1 downto 0)) return STD_LOGIC is
	variable result: STD_LOGIC;
begin
	case cmp is
		when "00" =>
			result := '0';
		when "01" =>
			result := '1';
		when "10" =>
			result := '0';
		when "11" =>
			result := '1';
		when others =>
	end case;
	return result;
end logic; 
begin

process(clock,control,input)
	variable registro: STD_LOGIC_VECTOR (15 downto 0) := X"0000";
begin
	if clock'event and clock = '1' then
		case control is
			when "01" =>
				for i in 15 downto 0 loop
					registro(i) := logic(registro(i) & input(i)); 
				end loop;
			when "10" =>
				output <= registro;
			when others =>
		end case;
	end if;
	output <= registro;
end process;

end Behavioral;

