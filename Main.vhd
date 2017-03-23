----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    09:17:22 03/17/2017 
-- Design Name: 
-- Module Name:    Main - Behavioral 
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

entity Main is
	Port ( clock : in  STD_LOGIC);
end Main;

architecture Behavioral of Main is
	component MBR is
		Port ( clock : in  STD_LOGIC;
             control : in  STD_LOGIC_VECTOR (1 downto 0);
             input : in  STD_LOGIC_VECTOR (15 downto 0);
             output : out  STD_LOGIC_VECTOR (15 downto 0));
	end component;
	component MAR is
		Port ( clock : in  STD_LOGIC;
             control : in  STD_LOGIC_VECTOR (1 downto 0);
             input : in  STD_LOGIC_VECTOR (15 downto 0);
             output : out  STD_LOGIC_VECTOR (15 downto 0));
	end component;
	component PC is
		Port ( clock : in  STD_LOGIC;
             control : in  STD_LOGIC_VECTOR (1 downto 0);
             input : in  STD_LOGIC_VECTOR (15 downto 0);
             output : out  STD_LOGIC_VECTOR (15 downto 0));
	end component;
	component IR is
		Port ( clock : in  STD_LOGIC;
             control : in  STD_LOGIC_VECTOR (1 downto 0);
             input : in  STD_LOGIC_VECTOR (15 downto 0);
             output : out  STD_LOGIC_VECTOR (15 downto 0));
	end component;
	component UnitControl is
		Port ( clock : in  STD_LOGIC;
				 data: in STD_LOGIC_VECTOR (15 downto 0);
				 operando_1: out  STD_LOGIC_VECTOR (5 downto 0);
				 operando_2: out  STD_LOGIC_VECTOR (5 downto 0);
				 scontrol: out  STD_LOGIC_VECTOR (2 downto 0);
             incontrol : out  STD_LOGIC_VECTOR (7 downto 0);
				 rcontrol: out  STD_LOGIC_VECTOR (3 downto 0);
             outcontrol : out  STD_LOGIC_VECTOR (1 downto 0);
				 acontrol: out  STD_LOGIC_VECTOR (3 downto 0);
				 ccontrol: out  STD_LOGIC_VECTOR (1 downto 0);
				 pcontrol: out  STD_LOGIC_VECTOR (1 downto 0));
	end component;
	component DataBusControl is
		Port ( clock : in  STD_LOGIC;
				 control: in  STD_LOGIC_VECTOR (8 downto 0);
				 data_pc : in  STD_LOGIC_VECTOR (15 downto 0);
				 data_mar : in  STD_LOGIC_VECTOR (15 downto 0);
				 data_mbr : in  STD_LOGIC_VECTOR (15 downto 0);
				 data_ir : in  STD_LOGIC_VECTOR (15 downto 0);
				 output : out  STD_LOGIC_VECTOR (15 downto 0));
	end component;
	component RAM is
		Port ( clock : in  STD_LOGIC;
             control : in  STD_LOGIC_VECTOR (1 downto 0);
			    address : in  STD_LOGIC_VECTOR (5 downto 0);
             input : in  STD_LOGIC_VECTOR (15 downto 0);
             output : out  STD_LOGIC_VECTOR (15 downto 0));
	end component;
	component RA is
		Port ( clock : in  STD_LOGIC;
             control : in  STD_LOGIC_VECTOR (1 downto 0);
             input : in  STD_LOGIC_VECTOR (15 downto 0);
             output : out  STD_LOGIC_VECTOR (15 downto 0));
	end component;
	component RB is
		Port ( clock : in  STD_LOGIC;
             control : in  STD_LOGIC_VECTOR (1 downto 0);
             input : in  STD_LOGIC_VECTOR (15 downto 0);
             output : out  STD_LOGIC_VECTOR (15 downto 0));
	end component;
	component ALU is
		Port ( clock : in  STD_LOGIC;
			    control : in  STD_LOGIC_VECTOR (3 downto 0);
             inputTA : in  STD_LOGIC_VECTOR (15 downto 0);
             inputTB : in  STD_LOGIC_VECTOR (15 downto 0);
             output : out  STD_LOGIC_VECTOR (15 downto 0));
	end component;
	component PR is
		Port ( clock : in  STD_LOGIC;
             control : in  STD_LOGIC_VECTOR (1 downto 0);
             input : in  STD_LOGIC_VECTOR (15 downto 0);
             output : out  STD_LOGIC_VECTOR (15 downto 0));
	end component;
	component RC is
		Port ( clock : in  STD_LOGIC;
             control : in  STD_LOGIC_VECTOR (1 downto 0);
             input : in  STD_LOGIC_VECTOR (15 downto 0);
             output : out  STD_LOGIC_VECTOR (15 downto 0));
	end component;
	
	signal pcontrol: STD_LOGIC_VECTOR (1 downto 0);
	signal ccontrol: STD_LOGIC_VECTOR (1 downto 0);
	signal acontrol: STD_LOGIC_VECTOR (3 downto 0);
	signal rcontrol: STD_LOGIC_VECTOR (3 downto 0);
	signal scontrol: STD_LOGIC_VECTOR (2 downto 0);
	signal incontrol: STD_LOGIC_VECTOR (7 downto 0);
	signal outcontrol: STD_LOGIC_VECTOR (1 downto 0);
	signal operando_1: STD_LOGIC_VECTOR (5 downto 0);
	signal operando_2: STD_LOGIC_VECTOR (5 downto 0);
	signal data_pc: STD_LOGIC_VECTOR (15 downto 0);
	signal data_mar: STD_LOGIC_VECTOR (15 downto 0);
	signal data_mbr: STD_LOGIC_VECTOR (15 downto 0);
	signal data_ir: STD_LOGIC_VECTOR (15 downto 0);
	signal data_ra: STD_LOGIC_VECTOR (15 downto 0);
	signal data_rb: STD_LOGIC_VECTOR (15 downto 0);
	signal data_ram: STD_LOGIC_VECTOR (15 downto 0);
	signal data_alu: STD_LOGIC_VECTOR (15 downto 0);
	signal data_pr: STD_LOGIC_VECTOR (15 downto 0);
	signal data_rc: STD_LOGIC_VECTOR (15 downto 0);
	signal data_bus_in: STD_LOGIC_VECTOR (15 downto 0);
	signal data_bus: STD_LOGIC_VECTOR (15 downto 0);
	signal address_bus: STD_LOGIC_VECTOR (5 downto 0);
begin

G1: UnitControl 
	 Port Map(
		clock => clock,
		data => data_bus_in,
		operando_1 => operando_1,
		operando_2 => operando_2,
		scontrol => scontrol,
		incontrol => incontrol,
		rcontrol => rcontrol,
		outcontrol => outcontrol,
		acontrol => acontrol,
		ccontrol => ccontrol,
		pcontrol => pcontrol);
G2: PC Port Map(
		clock => clock,
		control => incontrol(1 downto 0),
		input => data_bus_in,
		output => data_pc);
G3: MAR Port Map(
		clock => clock,
		control => incontrol(3 downto 2),
		input => data_bus_in,
		output => data_mar);
G4: MBR Port Map(
		clock => clock,
		control => incontrol(5 downto 4),
		input => data_bus,
		output => data_mbr);
G5: IR Port Map(
		clock => clock,
		control => incontrol(7 downto 6),
		input => data_bus_in,
		output => data_ir);
G6: RAM Port Map(
		clock => clock,
		control => outcontrol,
		address => address_bus,
		input => data_bus,
		output => data_ram);
G7: RA Port Map(
		clock => clock,
		control => rcontrol(3 downto 2),
		input => data_bus,
		output => data_ra);
G8: RB Port Map(
		clock => clock,
		control => rcontrol(1 downto 0),
		input => data_bus,
		output => data_rb);
G9: ALU Port Map(
		clock => clock,
		control => acontrol,
		inputTA => data_bus,
		inputTB => data_bus,
		output => data_alu);
G10: PR Port Map(
		clock => clock,
		control => pcontrol,
		input => data_bus,
		output => data_pr);
G11: RC Port Map(
		clock => clock,
		control => ccontrol,
		input => data_bus,
		output => data_rc);
		
process(incontrol,outcontrol,scontrol,acontrol,ccontrol,pcontrol,data_pc,data_mar,data_mbr,data_ir,data_ram,operando_1,operando_2,data_ra,data_rb,data_alu,data_pr,data_rc)
	variable edata: STD_LOGIC_VECTOR (15 downto 0):= X"0000";
begin
	if outcontrol(1) = '1' then
		edata := data_ram;
--	elsif scontrol(2) = '1' then
--		edata := "0000000000" & operando_2;
	elsif rcontrol(1) = '1' then
		edata := data_rb;
	elsif rcontrol(3) = '1' then
		edata := data_ra;
	elsif acontrol(3) = '1' then
		edata := data_alu;
	elsif ccontrol(1) = '1' then
		edata := data_rc;
	elsif pcontrol(1) = '1' then
		edata := data_pr;
	elsif scontrol(1) = '1' then
		edata := "0000000000" & operando_1;
	elsif scontrol(0) = '1' then
		edata := "0000000000" & operando_2;
	end if;
	data_bus <= edata;
end process;

process(incontrol,scontrol,data_mar,operando_1,operando_2)
	variable eaddress: STD_LOGIC_VECTOR (5 downto 0):= "000000";
begin
	if incontrol(3) = '1' then 
		eaddress := data_mar(5 downto 0);
	end if;
	address_bus <= eaddress;
end process;

process(incontrol,data_pc,data_mbr,data_ir)
	variable edata: STD_LOGIC_VECTOR (15 downto 0):= X"0000";
begin
	if incontrol(1) = '1' then 
		edata := data_pc;
	elsif incontrol(5) = '1' then 
		edata := data_mbr;
	elsif incontrol(7) = '1' then 
		edata := data_ir;
	end if;
	data_bus_in <= edata;
end process;

end Behavioral;

