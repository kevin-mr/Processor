--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   10:51:00 03/17/2017
-- Design Name:   
-- Module Name:   C:/Users/U/Documents/UNIVERSIDAD/Semestre 9/Arquitectura de procesadores/Procesador2/ProyectoFinalArquitecturaProcesadores/Maintest.vhd
-- Project Name:  ProyectoFinalArquitecturaProcesadores
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Main
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY Maintest IS
END Maintest;
 
ARCHITECTURE behavior OF Maintest IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Main
    PORT(
         clock : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clock : std_logic := '0';

   -- Clock period definitions
   constant clock_period : time := 1 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Main PORT MAP (
          clock => clock
        );

   -- Clock process definitions
   clock_process :process
   begin
		clock <= '0';
		wait for clock_period/2;
		clock <= '1';
		wait for clock_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	
      wait for clock_period*10;
      -- insert stimulus here 

      wait;
   end process;

END;
