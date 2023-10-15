// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vinst_fetch__Syms.h"


void Vinst_fetch___024root__trace_chg_sub_0(Vinst_fetch___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vinst_fetch___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinst_fetch___024root__trace_chg_top_0\n"); );
    // Init
    Vinst_fetch___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vinst_fetch___024root*>(voidSelf);
    Vinst_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vinst_fetch___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vinst_fetch___024root__trace_chg_sub_0(Vinst_fetch___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vinst_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinst_fetch___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->rst));
    bufp->chgIData(oldp+2,(vlSelf->inst_o),32);
    bufp->chgCData(oldp+3,(vlSelf->inst_fetch__DOT__pc),6);
    bufp->chgBit(oldp+4,(vlSelf->inst_fetch__DOT__rom_ce));
}

void Vinst_fetch___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinst_fetch___024root__trace_cleanup\n"); );
    // Init
    Vinst_fetch___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vinst_fetch___024root*>(voidSelf);
    Vinst_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
