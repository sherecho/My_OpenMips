`timescale 1ns/1ps
module tb;
reg clk;
reg rst;
wire[31:0] inst;

initial begin
    clk=1'b0;
    forever #10 clk=~clk;
    
end
initial begin
    rst=1'b1;
    #195 rst=1'b0;
    #1000 $stop;
end

inst_fetch inst_fetch0(.clk(clk),.rst(rst),.inst_o(inst));
endmodule