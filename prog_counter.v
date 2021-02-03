// Wrapper to add programmability to a 7-bit counter.
// This module contains the logic to stop a counter when it
// reaches a designated value. The maximum value is 99 (decimal)

module prog_count_7(max_count, run, CLK, count_out);

input [6:0] max_count;
input run, CLK;
output [6:0] count_out;

// Wires/Registers required go here.
wire [6:0] count_out;

// 7-bit counter instance
count_7 counter_1(.run(run),
		  .CLK(CLK),
		  .count_out(count_out));


// TODO: Write logic for Counter control
//In your always block, first check if run == 0, then read //max_count. Compare max_count with count_out to stop.

always @(posedge CLK) begin

	if((run == 1) & (count_out < 99)) begin
		if(count_out < max_count) begin
			assign count_out = count_out;
		end
	end 
end
	
endmodule 