----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    09:19:52 03/17/2017 
-- Design Name: 
-- Module Name:    MBR - Behavioral 
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

entity MBR is
    Port ( clock : in  STD_LOGIC;
           control : in  STD_LOGIC_VECTOR (1 downto 0);
           input : in  STD_LOGIC_VECTOR (15 downto 0);
           output : out  STD_LOGIC_VECTOR (15 downto 0));
end MBR;

architecture Behavioral of MBR is
	
begin

process(clock,control,input)
	variable registro: STD_LOGIC_VECTOR (15 downto 0);
begin
	if clock'event and clock = '1' then
		case control is
			when "01" =>
				registro := input;
			when "10" =>
				output <= registro;
			when others =>
		end case;
	end if;
	output <= registro;
end process;

end Behavioral;

