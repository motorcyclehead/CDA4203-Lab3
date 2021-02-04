// Wrapper to add programmability to a 7-bit counter.
// This module contains the logic to stop a counter when it
// reaches a designated value. The maximum value is 99 (decimal)

module prog_count_7(max_count, run, CLK, count_out);

input [6:0] max_count;
input run, CLK;
output [6:0] count_out;

// Wires/Registers required go here.
reg [6:0] count_out;
wire [6:0} counter;

// 7-bit counter instance
count_7 counter_1(.run(run),
		  .CLK(CLK),
		  .count_out(counter));


// TODO: Write logic for Counter control
//In your always block, first check if run == 0, then read 
//max_count. Compare max_count with count_out to stop.

always @(posedge CLK) begin

	if((run == 1) & (counter < 100)) begin
		if(counter < max_count +1) begin
			count_out = counter;
		end
	end 
end
	
endmodule 
