----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:54:54 03/17/2017 
-- Design Name: 
-- Module Name:    DataBusControl - Behavioral 
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

entity DataBusControl is
    Port ( clock : in  STD_LOGIC;
			  control: in  STD_LOGIC_VECTOR (8 downto 0);
           data_pc : in  STD_LOGIC_VECTOR (15 downto 0);
           data_mar : in  STD_LOGIC_VECTOR (15 downto 0);
           data_mbr : in  STD_LOGIC_VECTOR (15 downto 0);
           data_ir : in  STD_LOGIC_VECTOR (15 downto 0);
           output : out  STD_LOGIC_VECTOR (15 downto 0));
end DataBusControl;

architecture Behavioral of DataBusControl is

begin

process(control,data_pc,data_mar,data_mbr,data_ir)
	variable data: STD_LOGIC_VECTOR (15 downto 0):= X"0000";
begin
			if control(1) = '1' then 
				data := data_pc;
			elsif control(3) = '1' then
				data := data_mar;
			elsif control(5) = '1' then 
				data := data_mbr;
			elsif control(7) = '1' then 
				data := data_ir;
			end if;
			output <= data;
end process;

end Behavioral;

