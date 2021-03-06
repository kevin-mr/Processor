----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:57:44 03/17/2017 
-- Design Name: 
-- Module Name:    RAM - Behavioral 
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

entity RAM is
    Port ( clock : in  STD_LOGIC;
           control : in  STD_LOGIC_VECTOR (1 downto 0);
			  address : in  STD_LOGIC_VECTOR (5 downto 0);
           input : in  STD_LOGIC_VECTOR (15 downto 0);
           output : out  STD_LOGIC_VECTOR (15 downto 0));
end RAM;

architecture Behavioral of RAM is
begin

process(clock,control,address)
	type ram_type is array (64 downto 0) of std_logic_vector (15 downto 0);
	variable ram: ram_type;
	variable data: STD_LOGIC_VECTOR (15 downto 0);
begin


if clock'event and clock = '1' then
	ram(30) := "0000000000000111";
	ram(31) := "0000000001000000";
	ram(32) := "0000111110001000";
	ram(33) := "0000111101000000";
	ram(34) := "0010111101000000";
	ram(35) := "0101111110000000";
	ram(36) := "0111111110000001";
	ram(37) := "1000000000100010";
	ram(38) := "0110111101000000";
	ram(39) := "1111000000000000";
	
	if control = "10" then	
		data := ram(to_integer(unsigned(address)));
	elsif control = "01" then
		ram(to_integer(unsigned(address))) := input;
	end if;
end if;
output <= ram(to_integer(unsigned(address)));

end process;

end Behavioral;

