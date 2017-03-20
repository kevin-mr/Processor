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
			  scontrol: out  STD_LOGIC_VECTOR (2 downto 0);
           incontrol : out  STD_LOGIC_VECTOR (7 downto 0);
			  rcontrol: out  STD_LOGIC_VECTOR (3 downto 0);
           outcontrol : out  STD_LOGIC_VECTOR (1 downto 0);
			  acontrol : out  STD_LOGIC_VECTOR (3 downto 0));
end UnitControl;

architecture Behavioral of UnitControl is	
	function fetch_instruction (state: integer) return STD_LOGIC_VECTOR is
		variable vscontrol: STD_LOGIC_VECTOR (2 downto 0) := "000";
		variable vincontrol: STD_LOGIC_VECTOR (7 downto 0):= X"00";
		variable voutcontrol: STD_LOGIC_VECTOR (1 downto 0):= "00";
		variable vrcontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable vacontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable control: STD_LOGIC_VECTOR (20 downto 0) := "000000000000000000000";
	begin
		case state is
			when 1 =>
					vincontrol:= "00000010";
			when 2 =>
					vincontrol:= "00000100";
			when 3 =>
					vincontrol:= "00001000";
			when 4 =>
					voutcontrol:= "10";
			when 5 =>
					vincontrol:= "00010000";
			when 6 =>
					vincontrol:= "00100000";
			when 7 =>
					vincontrol:= "01000000";
			when 8 =>
					vincontrol:= "10000000";
			when others =>					
		end case;
		control := vacontrol & vrcontrol & voutcontrol & vscontrol & vincontrol;
		return control;
	end fetch_instruction;
	function storage_ram (state: integer) return STD_LOGIC_VECTOR is
		variable vscontrol: STD_LOGIC_VECTOR (2 downto 0) := "000";
		variable vincontrol: STD_LOGIC_VECTOR (7 downto 0):= X"00";
		variable voutcontrol: STD_LOGIC_VECTOR (1 downto 0):= "00";
		variable vrcontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable vacontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable control: STD_LOGIC_VECTOR (20 downto 0) := "000000000000000000000";
	begin
		case state is
			when 1 =>
				vscontrol:= "100";
			when 2 =>
				vscontrol:= "010";
			when 3 =>
				voutcontrol:= "01";
			when others =>
		end case;
		control := vacontrol & vrcontrol & voutcontrol & vscontrol & vincontrol;
		return control;
	end storage_ram;
	function storage_ra (state: integer) return STD_LOGIC_VECTOR is
		variable vscontrol: STD_LOGIC_VECTOR (2 downto 0) := "000";
		variable vincontrol: STD_LOGIC_VECTOR (7 downto 0):= X"00";
		variable voutcontrol: STD_LOGIC_VECTOR (1 downto 0):= "00";
		variable vrcontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable vacontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable control: STD_LOGIC_VECTOR (20 downto 0) := "000000000000000000000";
	begin
		case state is
			when 1 =>
				vscontrol:= "100";
			when 2 =>
				vrcontrol:= "0100";
			when others =>
		end case;
		control := vacontrol & vrcontrol & voutcontrol & vscontrol & vincontrol;
		return control;
	end storage_ra;
	function storage_rb (state: integer) return STD_LOGIC_VECTOR is
		variable vscontrol: STD_LOGIC_VECTOR (2 downto 0) := "000";
		variable vincontrol: STD_LOGIC_VECTOR (7 downto 0):= X"00";
		variable voutcontrol: STD_LOGIC_VECTOR (1 downto 0):= "00";
		variable vrcontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable vacontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable control: STD_LOGIC_VECTOR (20 downto 0) := "000000000000000000000";
	begin
		case state is
			when 1 =>
				vscontrol:= "100";
			when 2 =>
				vrcontrol:= "0001";
			when others =>
		end case;
		control := vacontrol & vrcontrol & voutcontrol & vscontrol & vincontrol;
		return control;
	end storage_rb;
	function move_rb_ra (state: integer) return STD_LOGIC_VECTOR is
		variable vscontrol: STD_LOGIC_VECTOR (2 downto 0) := "000";
		variable vincontrol: STD_LOGIC_VECTOR (7 downto 0):= X"00";
		variable voutcontrol: STD_LOGIC_VECTOR (1 downto 0):= "00";
		variable vrcontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable vacontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable control: STD_LOGIC_VECTOR (20 downto 0) := "000000000000000000000";
	begin
		case state is
			when 1 =>
				vrcontrol:= "1000";		
			when 2 =>
				vrcontrol:= "0001";
			when others =>
		end case;
		control := vacontrol & vrcontrol & voutcontrol & vscontrol & vincontrol;
		return control;
	end move_rb_ra;
	function move_ra_rb (state: integer) return STD_LOGIC_VECTOR is
		variable vscontrol: STD_LOGIC_VECTOR (2 downto 0) := "000";
		variable vincontrol: STD_LOGIC_VECTOR (7 downto 0):= X"00";
		variable voutcontrol: STD_LOGIC_VECTOR (1 downto 0):= "00";
		variable vrcontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable vacontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable control: STD_LOGIC_VECTOR (20 downto 0) := "000000000000000000000";
	begin
		case state is
			when 1 =>
				vrcontrol:= "0010";
			when 2 =>
				vrcontrol:= "0100";
			when others =>
		end case;
		control := vacontrol & vrcontrol & voutcontrol & vscontrol & vincontrol;
		return control;
	end move_ra_rb;
	function move_ram_ra (state: integer) return STD_LOGIC_VECTOR is
		variable vscontrol: STD_LOGIC_VECTOR (2 downto 0) := "000";
		variable vincontrol: STD_LOGIC_VECTOR (7 downto 0):= X"00";
		variable voutcontrol: STD_LOGIC_VECTOR (1 downto 0):= "00";
		variable vrcontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable vacontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable control: STD_LOGIC_VECTOR (20 downto 0) := "000000000000000000000";
	begin
		case state is
			when 1 =>
				vscontrol:= "010";
			when 2 =>
				vrcontrol:= "1000";
			when 3 =>
				voutcontrol:= "01";
			when others =>
		end case;
		control := vacontrol & vrcontrol & voutcontrol & vscontrol & vincontrol;
		return control;
	end move_ram_ra;
	function move_ram_rb (state: integer) return STD_LOGIC_VECTOR is
		variable vscontrol: STD_LOGIC_VECTOR (2 downto 0) := "000";
		variable vincontrol: STD_LOGIC_VECTOR (7 downto 0):= X"00";
		variable voutcontrol: STD_LOGIC_VECTOR (1 downto 0):= "00";
		variable vrcontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable vacontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable control: STD_LOGIC_VECTOR (20 downto 0) := "000000000000000000000";
	begin
		case state is
			when 1 =>
				vscontrol:= "010";
			when 2 =>
				vrcontrol:= "0010";
			when 3 =>
				voutcontrol:= "01";
			when others =>
			control := vacontrol & vrcontrol & voutcontrol & vscontrol & vincontrol;
			return control;
		end case;
	end move_ram_rb;
	function move_ra_ram (state: integer) return STD_LOGIC_VECTOR is
		variable vscontrol: STD_LOGIC_VECTOR (2 downto 0) := "000";
		variable vincontrol: STD_LOGIC_VECTOR (7 downto 0):= X"00";
		variable voutcontrol: STD_LOGIC_VECTOR (1 downto 0):= "00";
		variable vrcontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable vacontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable control: STD_LOGIC_VECTOR (20 downto 0) := "000000000000000000000";
	begin
		case state is
			when 1 =>
				vscontrol:= "001";
			when 2 =>
				voutcontrol:= "10";
			when 3 =>
				vrcontrol:= "0100";
			when others =>
		end case;
		control := vacontrol & vrcontrol & voutcontrol & vscontrol & vincontrol;
		return control;
	end move_ra_ram;
	function move_rb_ram (state: integer) return STD_LOGIC_VECTOR is
		variable vscontrol: STD_LOGIC_VECTOR (2 downto 0) := "000";
		variable vincontrol: STD_LOGIC_VECTOR (7 downto 0):= X"00";
		variable voutcontrol: STD_LOGIC_VECTOR (1 downto 0):= "00";
		variable vrcontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable vacontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable control: STD_LOGIC_VECTOR (20 downto 0) := "000000000000000000000";
	begin
		case state is
			when 1 =>
				vscontrol:= "001";
			when 2 =>
				voutcontrol:= "10";
			when 3 =>
				vrcontrol:= "0001";
			when others =>
		end case;
		control := vacontrol & vrcontrol & voutcontrol & vscontrol & vincontrol;
		return control;
	end move_rb_ram;
	function add_ra_rb (state: integer) return STD_LOGIC_VECTOR is
		variable vscontrol: STD_LOGIC_VECTOR (2 downto 0) := "000";
		variable vincontrol: STD_LOGIC_VECTOR (7 downto 0):= X"00";
		variable voutcontrol: STD_LOGIC_VECTOR (1 downto 0):= "00";
		variable vrcontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable vacontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable control: STD_LOGIC_VECTOR (20 downto 0) := "000000000000000000000";
	begin
		case state is
			when 1 =>
				vrcontrol:= "1000";
			when 2 =>
				vacontrol:= "0001";
			when 3 =>
				vrcontrol:= "0010";
			when 4 =>
				vacontrol:= "0010";
			when 5 =>
				vacontrol:= "0011";
			when 6 =>
				vacontrol:= "1000";
			when 7 =>
				vrcontrol:= "0100";
			when others =>
		end case;
		control := vacontrol & vrcontrol & voutcontrol & vscontrol & vincontrol;
		return control;
	end add_ra_rb;
	function add_ram_ra (state: integer) return STD_LOGIC_VECTOR is
		variable vscontrol: STD_LOGIC_VECTOR (2 downto 0) := "000";
		variable vincontrol: STD_LOGIC_VECTOR (7 downto 0):= X"00";
		variable voutcontrol: STD_LOGIC_VECTOR (1 downto 0):= "00";
		variable vrcontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable vacontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable control: STD_LOGIC_VECTOR (20 downto 0) := "000000000000000000000";
	begin
		case state is
			when 1 =>
				vrcontrol:= "1000";
			when 2 =>
				vacontrol:= "0001";
			when 3 =>
				vscontrol:= "001";
			when 4 =>
				voutcontrol:= "10";
			when 5 =>
				vacontrol:= "0010";
			when 6 =>
				vacontrol:= "0011";
			when 7 =>
				vacontrol:= "1000";
			when 8 =>
				vrcontrol:= "0100";
			when others =>
		end case;
		control := vacontrol & vrcontrol & voutcontrol & vscontrol & vincontrol;
		return control;
	end add_ram_ra;
	function add_ram_rb (state: integer) return STD_LOGIC_VECTOR is
		variable vscontrol: STD_LOGIC_VECTOR (2 downto 0) := "000";
		variable vincontrol: STD_LOGIC_VECTOR (7 downto 0):= X"00";
		variable voutcontrol: STD_LOGIC_VECTOR (1 downto 0):= "00";
		variable vrcontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable vacontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable control: STD_LOGIC_VECTOR (20 downto 0) := "000000000000000000000";
	begin
		case state is
			when 1 =>
				vrcontrol:= "0010";
			when 2 =>
				vacontrol:= "0001";
			when 3 =>
				vscontrol:= "001";
			when 4 =>
				voutcontrol:= "10";
			when 5 =>
				vacontrol:= "0010";
			when 6 =>
				vacontrol:= "0011";
			when 7 =>
				vacontrol:= "1000";
			when 8 =>
				vrcontrol:= "0001";
			when others =>
		end case;
		control := vacontrol & vrcontrol & voutcontrol & vscontrol & vincontrol;
		return control;
	end add_ram_rb;
	function and_ra_rb (state: integer) return STD_LOGIC_VECTOR is
		variable vscontrol: STD_LOGIC_VECTOR (2 downto 0) := "000";
		variable vincontrol: STD_LOGIC_VECTOR (7 downto 0):= X"00";
		variable voutcontrol: STD_LOGIC_VECTOR (1 downto 0):= "00";
		variable vrcontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable vacontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable control: STD_LOGIC_VECTOR (20 downto 0) := "000000000000000000000";
	begin
		case state is
			when 1 =>
				vrcontrol:= "1000";
			when 2 =>
				vacontrol:= "0001";
			when 3 =>
				vrcontrol:= "0010";
			when 4 =>
				vacontrol:= "0010";
			when 5 =>
				vacontrol:= "0100";
			when 6 =>
				vacontrol:= "1000";
			when 7 =>
				vrcontrol:= "0100";
			when others =>
		end case;
		control := vacontrol & vrcontrol & voutcontrol & vscontrol & vincontrol;
		return control;
	end and_ra_rb;
	function and_ra_ram (state: integer) return STD_LOGIC_VECTOR is
		variable vscontrol: STD_LOGIC_VECTOR (2 downto 0) := "000";
		variable vincontrol: STD_LOGIC_VECTOR (7 downto 0):= X"00";
		variable voutcontrol: STD_LOGIC_VECTOR (1 downto 0):= "00";
		variable vrcontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable vacontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable control: STD_LOGIC_VECTOR (20 downto 0) := "000000000000000000000";
	begin
		case state is
			when 1 =>
				vrcontrol:= "1000";
			when 2 =>
				vacontrol:= "0001";
			when 3 =>
				vscontrol:= "001";
			when 4 =>
				voutcontrol:= "10";
			when 5 =>
				vacontrol:= "0010";
			when 6 =>
				vacontrol:= "0100";
			when 7 =>
				vacontrol:= "1000";
			when 8 =>
				vrcontrol:= "0100";
			when others =>
		end case;
		control := vacontrol & vrcontrol & voutcontrol & vscontrol & vincontrol;
		return control;
	end and_ra_ram;
	function and_rb_ram (state: integer) return STD_LOGIC_VECTOR is
		variable vscontrol: STD_LOGIC_VECTOR (2 downto 0) := "000";
		variable vincontrol: STD_LOGIC_VECTOR (7 downto 0):= X"00";
		variable voutcontrol: STD_LOGIC_VECTOR (1 downto 0):= "00";
		variable vrcontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable vacontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable control: STD_LOGIC_VECTOR (20 downto 0) := "000000000000000000000";
	begin
		case state is
			when 1 =>
				vrcontrol:= "0010";
			when 2 =>
				vacontrol:= "0001";
			when 3 =>
				vscontrol:= "001";
			when 4 =>
				voutcontrol:= "10";
			when 5 =>
				vacontrol:= "0010";
			when 6 =>
				vacontrol:= "0100";
			when 7 =>
				vacontrol:= "1000";
			when 8 =>
				vrcontrol:= "0001";
			when others =>
		end case;
		control := vacontrol & vrcontrol & voutcontrol & vscontrol & vincontrol;
		return control;
	end and_rb_ram;
	function not_ra (state: integer) return STD_LOGIC_VECTOR is
		variable vscontrol: STD_LOGIC_VECTOR (2 downto 0) := "000";
		variable vincontrol: STD_LOGIC_VECTOR (7 downto 0):= X"00";
		variable voutcontrol: STD_LOGIC_VECTOR (1 downto 0):= "00";
		variable vrcontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable vacontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable control: STD_LOGIC_VECTOR (20 downto 0) := "000000000000000000000";
	begin
		case state is
			when 1 =>
				vrcontrol:= "1000";
			when 2 =>
				vacontrol:= "0001";
			when 3 =>
				vacontrol:= "0101";
			when 4 =>
				vacontrol:= "1000";
			when 5 =>
				vrcontrol:= "0100";
			when others =>
		end case;
		control := vacontrol & vrcontrol & voutcontrol & vscontrol & vincontrol;
		return control;
	end not_ra;
	function not_rb (state: integer) return STD_LOGIC_VECTOR is
		variable vscontrol: STD_LOGIC_VECTOR (2 downto 0) := "000";
		variable vincontrol: STD_LOGIC_VECTOR (7 downto 0):= X"00";
		variable voutcontrol: STD_LOGIC_VECTOR (1 downto 0):= "00";
		variable vrcontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable vacontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable control: STD_LOGIC_VECTOR (20 downto 0) := "000000000000000000000";
	begin
		case state is
			when 1 =>
				vrcontrol:= "0010";
			when 2 =>
				vacontrol:= "0001";
			when 3 =>
				vacontrol:= "0101";
			when 4 =>
				vacontrol:= "1000";
			when 5 =>
				vrcontrol:= "0001";
			when others =>
		end case;
		control := vacontrol & vrcontrol & voutcontrol & vscontrol & vincontrol;
		return control;
	end not_rb;
	function not_ram (state: integer) return STD_LOGIC_VECTOR is
		variable vscontrol: STD_LOGIC_VECTOR (2 downto 0) := "000";
		variable vincontrol: STD_LOGIC_VECTOR (7 downto 0):= X"00";
		variable voutcontrol: STD_LOGIC_VECTOR (1 downto 0):= "00";
		variable vrcontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable vacontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable control: STD_LOGIC_VECTOR (20 downto 0) := "000000000000000000000";
	begin
		case state is
			when 1 =>
				vscontrol:= "010";
			when 2 =>
				voutcontrol:= "10";
			when 3 =>
				vacontrol:= "0001";
			when 4 =>
				vacontrol:= "0101";
			when 5 =>
				vacontrol:= "1000";
			when 6 =>
				voutcontrol:= "01";
			when others =>
		end case;
		control := vacontrol & vrcontrol & voutcontrol & vscontrol & vincontrol;
		return control;
	end not_ram;
	function dec_ra (state: integer) return STD_LOGIC_VECTOR is
		variable vscontrol: STD_LOGIC_VECTOR (2 downto 0) := "000";
		variable vincontrol: STD_LOGIC_VECTOR (7 downto 0):= X"00";
		variable voutcontrol: STD_LOGIC_VECTOR (1 downto 0):= "00";
		variable vrcontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable vacontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable control: STD_LOGIC_VECTOR (20 downto 0) := "000000000000000000000";
	begin
		case state is
			when 1 =>
				vrcontrol:= "1000";
			when 2 =>
				vacontrol:= "0001";
			when 3 =>
				vacontrol:= "0110";
			when 4 =>
				vacontrol:= "1000";
			when 5 =>
				vrcontrol:= "0100";
			when others =>
		end case;
		control := vacontrol & vrcontrol & voutcontrol & vscontrol & vincontrol;
		return control;
	end dec_ra;
	function dec_rb (state: integer) return STD_LOGIC_VECTOR is
		variable vscontrol: STD_LOGIC_VECTOR (2 downto 0) := "000";
		variable vincontrol: STD_LOGIC_VECTOR (7 downto 0):= X"00";
		variable voutcontrol: STD_LOGIC_VECTOR (1 downto 0):= "00";
		variable vrcontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable vacontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable control: STD_LOGIC_VECTOR (20 downto 0) := "000000000000000000000";
	begin
		case state is
			when 1 =>
				vrcontrol:= "0010";
			when 2 =>
				vacontrol:= "0001";
			when 3 =>
				vacontrol:= "0110";
			when 4 =>
				vacontrol:= "1000";
			when 5 =>
				vrcontrol:= "0001";
			when others =>
		end case;
		control := vacontrol & vrcontrol & voutcontrol & vscontrol & vincontrol;
		return control;
	end dec_rb;
	function dec_ram (state: integer) return STD_LOGIC_VECTOR is
		variable vscontrol: STD_LOGIC_VECTOR (2 downto 0) := "000";
		variable vincontrol: STD_LOGIC_VECTOR (7 downto 0):= X"00";
		variable voutcontrol: STD_LOGIC_VECTOR (1 downto 0):= "00";
		variable vrcontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable vacontrol: STD_LOGIC_VECTOR (3 downto 0) :=  X"0";
		variable control: STD_LOGIC_VECTOR (20 downto 0) := "000000000000000000000";
	begin
		case state is
			when 1 =>
				vscontrol:= "010";
			when 2 =>
				voutcontrol:= "10";
			when 3 =>
				vacontrol:= "0001";
			when 4 =>
				vacontrol:= "0110";
			when 5 =>
				vacontrol:= "1000";
			when 6 =>
				voutcontrol:= "01";
			when others =>
		end case;
		control := vacontrol & vrcontrol & voutcontrol & vscontrol & vincontrol;
		return control;
	end dec_ram;
	type states is (fetch,
						 decoding);
	signal present_state, next_state: states;
begin

process(clock)
	variable data_ir: STD_LOGIC_VECTOR (15 downto 0);
	variable control: STD_LOGIC_VECTOR (20 downto 0);
	variable counter: integer := 0;
	variable counter_decoding: integer := 0;
begin
	if clock'event and clock = '1' then
		case present_state is
			when fetch =>
				counter_decoding := 0; 
				counter := counter + 1;
				if counter = 8 then
					next_state <= decoding;
					data_ir := data;
				end if;
				control := fetch_instruction(counter);
				incontrol <= control(7 downto 0);
				scontrol <= control(10 downto 8);
				outcontrol <= control(12 downto 11);
				rcontrol <= control(16 downto 13);
				acontrol <= control(20 downto 17);
			when decoding =>
				counter := 0; 
				counter_decoding := counter_decoding + 1;				
				operando_1 <= data_ir(11 downto 6);
				operando_2 <= data_ir(5 downto 0);
				case data_ir(15 downto 12) is
					when "0000" =>
						if data_ir(11 downto 6) = "111101" then
							if counter_decoding = 2 then
								next_state <= fetch;
							end if;
								control := storage_ra(counter_decoding);
						elsif data_ir(11 downto 6) = "111110" then
							if counter_decoding = 2 then
								next_state <= fetch;
							end if;
								control := storage_rb(counter_decoding);
						else
							if counter_decoding = 3 then
								next_state <= fetch;
							end if;
								control := storage_ram(counter_decoding);
						end if;
						
							
					when "0001" =>
						if data_ir(11 downto 6) = "111110" and data_ir(5 downto 0) = "111101" then
							if counter_decoding = 2 then
								next_state <= fetch;
							end if;
								control := move_rb_ra(counter_decoding);
						elsif data_ir(11 downto 6) = "111101" and data_ir(5 downto 0) = "111110" then
							if counter_decoding = 2 then
								next_state <= fetch;
							end if;
								control := move_ra_rb(counter_decoding);
						elsif data_ir(5 downto 0) = "111101" then
							if counter_decoding = 3 then
								next_state <= fetch;
							end if;
								control := move_ram_ra(counter_decoding);
						elsif data_ir(5 downto 0) = "111110" then
							if counter_decoding = 3 then
								next_state <= fetch;
							end if;
								control := move_ram_rb(counter_decoding);
						elsif data_ir(11 downto 6) = "111101" then
							if counter_decoding = 3 then
								next_state <= fetch;
							end if;
								control := move_ra_ram(counter_decoding);
						elsif data_ir(11 downto 6) = "111110" then
							if counter_decoding = 3 then
								next_state <= fetch;
							end if;
								control := move_rb_ram(counter_decoding);
						end if;
					when "0010" =>
						if data_ir(11 downto 6) = "111101" and data_ir(5 downto 0) = "111110"then
							if counter_decoding = 7 then
								next_state <= fetch;
							end if;
								control := add_ra_rb(counter_decoding);
						elsif data_ir(11 downto 6) = "111101" and data_ir(5 downto 0) /= "111110"then
							if counter_decoding = 8 then
								next_state <= fetch;
							end if;
								control := add_ram_ra(counter_decoding);
						elsif data_ir(11 downto 6) = "111110" and data_ir(5 downto 0) /= "111101"then
							if counter_decoding = 8 then
								next_state <= fetch;
							end if;
								control := add_ram_rb(counter_decoding);
						end if;
					when "0011" =>
						if data_ir(11 downto 6) = "111101" and data_ir(5 downto 0) = "111110"then
							if counter_decoding = 7 then
								next_state <= fetch;
							end if;
								control := and_ra_rb(counter_decoding);
						elsif data_ir(11 downto 6) = "111101" and data_ir(5 downto 0) /= "111110"then
							if counter_decoding = 8 then
								next_state <= fetch;
							end if;
								control := and_ra_ram(counter_decoding);
						elsif data_ir(11 downto 6) = "111110" and data_ir(5 downto 0) /= "111101"then
							if counter_decoding = 8 then
								next_state <= fetch;
							end if;
								control := and_rb_ram(counter_decoding);
						end if;
					when "0100" =>
						if data_ir(11 downto 6) = "111101" then
							if counter_decoding = 5 then
								next_state <= fetch;
							end if;
								control := not_ra(counter_decoding);
						elsif data_ir(11 downto 6) = "111110" then
							if counter_decoding = 5 then
								next_state <= fetch;
							end if;
								control := not_rb(counter_decoding);
						else
							if counter_decoding = 6 then
								next_state <= fetch;
							end if;
								control := not_ram(counter_decoding);
						end if;
					when "0101" =>
						if data_ir(11 downto 6) = "111101" then
							if counter_decoding = 5 then
								next_state <= fetch;
							end if;
								control := dec_ra(counter_decoding);
						elsif data_ir(11 downto 6) = "111110" then
							if counter_decoding = 5 then
								next_state <= fetch;
							end if;
								control := dec_rb(counter_decoding);
						else
							if counter_decoding = 6 then
								next_state <= fetch;
							end if;
								control := dec_ram(counter_decoding);
						end if;
					when others =>
				end case;
								incontrol <= control(7 downto 0);
								scontrol <= control(10 downto 8);
								outcontrol <= control(12 downto 11);
								rcontrol <= control(16 downto 13);
								acontrol <= control(20 downto 17);
		end case;
		
		present_state <= next_state;
	end if;
end process;

end Behavioral;

