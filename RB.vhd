----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:39:56 03/20/2017 
-- Design Name: 
-- Module Name:    RB - Behavioral 
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

entity RB is
    Port ( clock : in  STD_LOGIC;
           control : in  STD_LOGIC_VECTOR (1 downto 0);
           input : in  STD_LOGIC_VECTOR (15 downto 0);
           output : out  STD_LOGIC_VECTOR (15 downto 0));
end RB;

architecture Behavioral of RB is

begin

process(clock,control,input)
	variable registro: STD_LOGIC_VECTOR (15 downto 0) := X"000A";
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

