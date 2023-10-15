// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vinst_fetch.h for the primary calling header

#ifndef VERILATED_VINST_FETCH___024ROOT_H_
#define VERILATED_VINST_FETCH___024ROOT_H_  // guard

#include "verilated.h"

class Vinst_fetch__Syms;

class Vinst_fetch___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*5:0*/ inst_fetch__DOT__pc;
    CData/*0:0*/ inst_fetch__DOT__rom_ce;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    VL_OUT(inst_o,31,0);
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 64> inst_fetch__DOT__rom0__DOT__rom;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vinst_fetch__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vinst_fetch___024root(Vinst_fetch__Syms* symsp, const char* v__name);
    ~Vinst_fetch___024root();
    VL_UNCOPYABLE(Vinst_fetch___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
