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
           outcontrol : out  STD_LOGIC_VECTOR (1 downto 0));
end UnitControl;

architecture Behavioral of UnitControl is	
	function fetch_instruction (state: integer) return STD_LOGIC_VECTOR is
		variable control: STD_LOGIC_VECTOR (16 downto 0) := "00000000000000000";
	begin
		case state is
			when 1 =>
					control := "00000000000000010";
					return control;
			when 2 =>
					control := "00000000000000100";
					return control;
			when 3 =>
					control := "00000000000001000";
					return control;
			when 4 =>
					control := "00001000000000000";
					return control;
			when 5 =>
					control := "00000000000010000";
					return control;
			when 6 =>
					control := "00000000000100000";
					return control;
			when 7 =>
					control := "00000000001000000";
					return control;
			when 8 =>
					control := "00000000010000000";
					return control;
			when others =>
					return control;
		end case;
	end fetch_instruction;
	function storage (state: integer) return STD_LOGIC_VECTOR is
		variable control: STD_LOGIC_VECTOR (16 downto 0) := "00000000000000000";
	begin
		case state is
			when 1 =>
				control := "00000010000000000";
				return control;
			when 2 =>
				control := "00000001000000000";
				return control;
			when 3 =>
				control := "00000100000000000";
				return control;
			when others =>
				return control;
		end case;
	end storage;
	function move_rb_ra (state: integer) return STD_LOGIC_VECTOR is
		variable control: STD_LOGIC_VECTOR (16 downto 0) := "00000000000000000";
	begin
		case state is
			when 1 =>
				control := "10000000000000000";
				return control;
			when 2 =>
				control := "00010000000000000";
				return control;
			when others =>
				return control;
		end case;
	end move_rb_ra;
	function move_ra_rb (state: integer) return STD_LOGIC_VECTOR is
		variable control: STD_LOGIC_VECTOR (16 downto 0) := "00000000000000000";
	begin
		case state is
			when 1 =>
				control := "00100000000000000";
				return control;
			when 2 =>
				control := "01000000000000000";
				return control;
			when others =>
				return control;
		end case;
	end move_ra_rb;
	function move_ram_ra (state: integer) return STD_LOGIC_VECTOR is
		variable control: STD_LOGIC_VECTOR (16 downto 0) := "00000000000000000";
	begin
		case state is
			when 1 =>
				control := "00000001000000000";
				return control;
			when 2 =>
				control := "10000000000000000";
				return control;
			when 3 =>
				control := "00000100000000000";
				return control;
			when others =>
				return control;
		end case;
	end move_ram_ra;
	function move_ram_rb (state: integer) return STD_LOGIC_VECTOR is
		variable control: STD_LOGIC_VECTOR (16 downto 0) := "00000000000000000";
	begin
		case state is
			when 1 =>
				control := "00000001000000000";
				return control;
			when 2 =>
				control := "00100000000000000";
				return control;
			when 3 =>
				control := "00000100000000000";
				return control;
			when others =>
				return control;
		end case;
	end move_ram_rb;
	function move_ra_ram (state: integer) return STD_LOGIC_VECTOR is
		variable control: STD_LOGIC_VECTOR (16 downto 0) := "00000000000000000";
	begin
		case state is
			when 1 =>
				control := "00000000100000000";
				return control;
			when 2 =>
				control := "00001000000000000";
				return control;
			when 3 =>
				control := "01000000000000000";
				return control;
			when others =>
				return control;
		end case;
	end move_ra_ram;
	type states is (fetch,
						 decoding);
	signal present_state, next_state: states;
begin

process(clock)
	variable data_ir: STD_LOGIC_VECTOR (15 downto 0);
	variable control: STD_LOGIC_VECTOR (16 downto 0);
	variable counter: integer := 0;
	variable counter_decoding: integer := 0;
begin
	if clock'event and clock = '1' then
		case present_state is
			when fetch =>
				counter_decoding := 0; 
				counter := counter + 1;
				if counter = 8 then
					control := fetch_instruction(counter);
					incontrol <= control(7 downto 0);
					scontrol <= control(10 downto 8);
					outcontrol <= control(12 downto 11);
					rcontrol <= control(16 downto 13);
					next_state <= decoding;
					data_ir := data;
				elsif counter > 0 then
					control := fetch_instruction(counter);
					incontrol <= control(7 downto 0);
					scontrol <= control(10 downto 8);
					outcontrol <= control(12 downto 11);
					rcontrol <= control(16 downto 13);
				end if;
			when decoding =>
				counter := 0; 
				counter_decoding := counter_decoding + 1;				
				operando_1 <= data_ir(11 downto 6);
				operando_2 <= data_ir(5 downto 0);
				case data_ir(15 downto 12) is
					when "0000" =>
						if counter_decoding = 3 then
							control := storage(counter_decoding);
							incontrol <= control(7 downto 0);
							scontrol <= control(10 downto 8);
							outcontrol <= control(12 downto 11);
							rcontrol <= control(16 downto 13);
							next_state <= fetch;
						elsif counter_decoding > 0 then
							control := storage(counter_decoding);
							incontrol <= control(7 downto 0);
							scontrol <= control(10 downto 8);
							outcontrol <= control(12 downto 11);
							rcontrol <= control(16 downto 13);
						end if;
					when "0001" =>
						if data_ir(11 downto 6) = "111110" and data_ir(5 downto 0) = "111101" then
							if counter_decoding = 2 then
								control := move_rb_ra(counter_decoding);
								incontrol <= control(7 downto 0);
								scontrol <= control(10 downto 8);
								outcontrol <= control(12 downto 11);
								rcontrol <= control(16 downto 13);
								next_state <= fetch;
							elsif counter_decoding > 0 then
								control := move_rb_ra(counter_decoding);
								incontrol <= control(7 downto 0);
								scontrol <= control(10 downto 8);
								outcontrol <= control(12 downto 11);
								rcontrol <= control(16 downto 13);
							end if;
						elsif data_ir(11 downto 6) = "111101" and data_ir(5 downto 0) = "111110" then
							if counter_decoding = 2 then
								control := move_ra_rb(counter_decoding);
								incontrol <= control(7 downto 0);
								scontrol <= control(10 downto 8);
								outcontrol <= control(12 downto 11);
								rcontrol <= control(16 downto 13);
								next_state <= fetch;
							elsif counter_decoding > 0 then
								control := move_ra_rb(counter_decoding);
								incontrol <= control(7 downto 0);
								scontrol <= control(10 downto 8);
								outcontrol <= control(12 downto 11);
								rcontrol <= control(16 downto 13);
							end if;
						elsif data_ir(5 downto 0) = "111101" then
							if counter_decoding = 3 then
								control := move_ram_ra(counter_decoding);
								incontrol <= control(7 downto 0);
								scontrol <= control(10 downto 8);
								outcontrol <= control(12 downto 11);
								rcontrol <= control(16 downto 13);
								next_state <= fetch;
							elsif counter_decoding > 0 then
								control := move_ram_ra(counter_decoding);
								incontrol <= control(7 downto 0);
								scontrol <= control(10 downto 8);
								outcontrol <= control(12 downto 11);
								rcontrol <= control(16 downto 13);
							end if;
						elsif data_ir(5 downto 0) = "111110" then
							if counter_decoding = 3 then
								control := move_ram_rb(counter_decoding);
								incontrol <= control(7 downto 0);
								scontrol <= control(10 downto 8);
								outcontrol <= control(12 downto 11);
								rcontrol <= control(16 downto 13);
								next_state <= fetch;
							elsif counter_decoding > 0 then
								control := move_ram_rb(counter_decoding);
								incontrol <= control(7 downto 0);
								scontrol <= control(10 downto 8);
								outcontrol <= control(12 downto 11);
								rcontrol <= control(16 downto 13);
							end if;
						elsif data_ir(11 downto 6) = "111101" then
							if counter_decoding = 3 then
								control := move_ra_ram(counter_decoding);
								incontrol <= control(7 downto 0);
								scontrol <= control(10 downto 8);
								outcontrol <= control(12 downto 11);
								rcontrol <= control(16 downto 13);
								next_state <= fetch;
							elsif counter_decoding > 0 then
								control := move_ra_ram(counter_decoding);
								incontrol <= control(7 downto 0);
								scontrol <= control(10 downto 8);
								outcontrol <= control(12 downto 11);
								rcontrol <= control(16 downto 13);
							end if;
						end if;
						
					when others =>
				end case;
		end case;
		
		present_state <= next_state;
	end if;
end process;

end Behavioral;

