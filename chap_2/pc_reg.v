module  pc_reg(
    input wire clk,
    input wire rst,
    output reg[5:0] pc,
    output reg ce
);
always @(posedge clk) begin
    if(rst==1'b1)begin
        ce<=1'b0;
    end
    else begin
        ce<='b1;
    end

end
always @(posedge clk) begin
    if(ce==1'b1)begin
        pc<=6'h00; //指令存储器使能信号无效，pc保持0
    end
    else begin
        pc<=pc+1'b1;//pc在每个时钟周期+1
    end
end
    
endmodule

