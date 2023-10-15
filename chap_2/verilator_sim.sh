#!/bin/bash
# 获取命令行参数
echo "runing simulation"
param1="$1"
str1="init_first"
str2="build_make"
str3="run_mk"
echo $0
# 使用if语句进行条件判断
if [ $param1 = $str1 ]; then
    verilator --cc inst_fetch.v 
elif [ $param1 = $str2 ]; then
    verilator -Wall --trace -cc inst_fetch.v --exe tb.cpp 
    make -C obj_dir -f Vinst_fetch.mk Vinst_fetch
    # 在此执行其他操作，根据需要添加更多分支
elif [ $param1 = $str3 ]; then
    ./obj_dir/Vinst_fetch  
    gtkwave waveform.vcd  
fi
