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

begin

process(clock)
	variable counter: integer := 0;
	
	function fetch (state: integer) return STD_LOGIC_VECTOR is
		variable icontrol: STD_LOGIC_VECTOR (7 downto 0) := X"00";
	begin
		case state is
			when 0 =>
					icontrol := "00000110";
					return icontrol;
			when 1 =>
					return icontrol;
			when 2 =>
					return icontrol;
			when 3 =>
					icontrol := "00001000";
					return icontrol;
			when others =>
					return icontrol;
		end case;
	end fetch;

begin
	if clock'event and clock = '1' then
		
		if counter > 3 then
			counter := 0;
		end if;
		
		incontrol <= fetch(counter);
		counter := counter + 1;
	
	end if;
	


end process;

end Behavioral;

