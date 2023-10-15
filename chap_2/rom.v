module rom(
    input wire ce,
    input wire[5:0] addr,
    output reg [31:0]inst
);
//使用二维向量定义存储器
reg[31:0] rom [63:0];//这段 Verilog 代码描述了一个名为 rom 的数组，它包含 64 个元素，每个元素都是一个 32 位的寄存器（reg[31:0]），表示为 [63:0]
always@(*)begin 
    if(ce==1'b0)begin
        inst<=32'h0;
    end
    else begin
     inst<=rom[addr];
    end
end

endmodule