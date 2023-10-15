#include <stdlib.h>
#include <iostream>
#include<verilated_vcd_c.h>
#include"Vinst_fetch.h"
#include"Vinst_fetch___024root.h"
#define MAX_SIM_TIME 40//仿真时钟边沿数
vluint64_t sim_time=0;//用于计数时钟边沿
int main(int argc,char** argv,char** env){
    Vinst_fetch * dut=new Vinst_fetch;//例化top模块
    // 接下来的四行代码用于设置波形存储为VCD文件
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;  
    dut->trace(m_trace, 5); //意思是将 m_trace 传递给 dut,5表示跟踪深度限制在DUT的5级以内，这个5级目前我理解为DUT的子模块层级。              
    m_trace->open("waveform.vcd");
	  // 实际进行仿真的代码
    while (sim_time < MAX_SIM_TIME) {
        if(sim_time<5)
           dut->rst=0;
        else
           dut->rst=1;
        dut->clk ^= 1; // 的意思是 clk 与 1 异或，翻转时钟
        dut->eval();  //eval()函数更新电路的状态，可理解为仿真 ALU 模型中的所有信号
        m_trace->dump(sim_time);//将所有被追踪的信号写入波形中
        sim_time++; // 更新仿真时间
    }

    m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
   
}