`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:48:33 02/03/2021
// Design Name:   prog_count_7
// Module Name:   C:/Users/subhi/Documents/CDA4203 - System Design/Lab3/prog_counter_testbench.v
// Project Name:  Lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: prog_count_7
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module prog_counter_testbench;

	// Inputs
	reg [6:0] max_count;
	reg run;
	reg CLK;

	// Outputs
	wire [6:0] count_out;

	// Instantiate the Unit Under Test (UUT)
	prog_count_7 uut (
		.max_count(max_count), 
		.run(run), 
		.CLK(CLK), 
		.count_out(count_out)
	);
		
	// Clock Generator
	always begin
		CLK = ~CLK;
		#5;
	end

	initial begin
		// Initialize Inputs
		max_count = 0;
		run = 1;
		CLK = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		max_count = 10;
		#50;
		run = 0;
		#10;
		run = 1;
		max_count = 60;
		#150;
	end
      
endmodule

