----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:40:18 03/20/2017 
-- Design Name: 
-- Module Name:    ALU - Behavioral 
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
use IEEE.NUMERIC_STD.all;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ALU is
    Port ( clock : in  STD_LOGIC;
			  control : in  STD_LOGIC_VECTOR (3 downto 0);
           inputTA : in  STD_LOGIC_VECTOR (15 downto 0);
           inputTB : in  STD_LOGIC_VECTOR (15 downto 0);
           output : out  STD_LOGIC_VECTOR (15 downto 0));
end ALU;

architecture Behavioral of ALU is

begin

process(clock,control,inputTA,inputTB)
	variable TA: STD_LOGIC_VECTOR (15 downto 0);
	variable TB: STD_LOGIC_VECTOR (15 downto 0);
	variable TC: STD_LOGIC_VECTOR (15 downto 0);
begin
if clock'event and clock = '1' then
	case control(2 downto 0) is
		when "001" =>
			TA := inputTA;
		when "010" =>
			TB := inputTB;
		when "011" =>
			TC := STD_LOGIC_VECTOR(UNSIGNED(TA) + UNSIGNED(TB));
		when "100" =>
			TC := TA and TB;
		when others =>
	end case;
	if control(3) = '1' then
		output <= TC;
	end if;
end if;
output <= TC;
end process;

end Behavioral;

