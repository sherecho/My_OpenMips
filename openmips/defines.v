//***全局宏定义****//
`define RstEnable 1'b1 //复位信号有效
`define RstDisable 1'b0 //复位信号无效
`define ZeroWord 32'h00000000 //4字节0（一个字=4字节）
`define WriteEnable 1'b1//写使能
`define WriteDisable 1'b0//禁止写
`define ReadEnable 1'b1//使能读
`define ReadDisable 1'b0//进制读
`define AluOpBus 7:0//译码阶段输出aluop_o宽度
`define AluSelBus 2:0//译码阶段输出alusel_o 宽度
`define InstValid 1'b0 //指令有效
`define InstInvalid 1'b1//指令无效
`define Stop 1'b1//
`define NoStop 1'b0
`define InDelaySlot 1'b1
`define NotInDelaySlot 1'b0
`define Branch 1'b1
`define NotBranch 1'b0
`define InterruptAssert 1'b1
`define InterruptNotAssert 1'b0
`define TrapAssert 1'b1
`define TrapNotAssert 1'b0
`define True_v 1'b1
`define False_v 1'b0
`define ChipEnable 1'b1
`define ChipDisable 1'b0
/*与具体指令相关的宏定义*/
`define EXE_ORI  6'b001101 //指令ori指令码
`define EXE_NOP 6'b000000
//AluOp
`define EXE_OR_OP    8'b00100101
`define EXE_ORI_OP  8'b01011010
`define EXE_NOP_OP    8'b00000000
//AluSel
`define EXE_RES_LOGIC 3'b001
`define EXE_RES_NOP 3'b000
/*与指令存储器ROM有关*/
`define InstAddrBus 31:0//ROM地址总线宽度
`define InstBus 31:0//ROM数据总线宽度
`define InstMemNum 131071//ROM实际大小128kb
`define InstMemNumLog2 17//ROM实际使用的地址线宽度
/*通用寄存器和Regfile有关的宏定义*/
`define RegAddrBus 4:0//Regfile模块的地址线宽度
`define RegBus 31:0//Regfile模块的数据线宽度
`define RegWidth 32//通用寄存器宽度
`define DoubleRegWidth 64//两倍
`define DoubleRegBus 63:0//两倍寄存器数据线宽度
`define RegNum 32//通用寄存器数量
`define RegNumLog2 5//寻址通用寄存器使用的地址位数
`define NOPRegAddr 5'b00000