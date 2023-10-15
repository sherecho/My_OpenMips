// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vinst_fetch__Syms.h"


VL_ATTR_COLD void Vinst_fetch___024root__trace_init_sub__TOP__0(Vinst_fetch___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vinst_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinst_fetch___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+3,"inst_o", false,-1, 31,0);
    tracep->pushNamePrefix("inst_fetch ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+3,"inst_o", false,-1, 31,0);
    tracep->declBus(c+4,"pc", false,-1, 5,0);
    tracep->declBit(c+5,"rom_ce", false,-1);
    tracep->pushNamePrefix("pc_reg0 ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+4,"pc", false,-1, 5,0);
    tracep->declBit(c+5,"ce", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rom0 ");
    tracep->declBit(c+5,"ce", false,-1);
    tracep->declBus(c+4,"addr", false,-1, 5,0);
    tracep->declBus(c+3,"inst", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vinst_fetch___024root__trace_init_top(Vinst_fetch___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vinst_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinst_fetch___024root__trace_init_top\n"); );
    // Body
    Vinst_fetch___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vinst_fetch___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vinst_fetch___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vinst_fetch___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vinst_fetch___024root__trace_register(Vinst_fetch___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vinst_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinst_fetch___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vinst_fetch___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vinst_fetch___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vinst_fetch___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vinst_fetch___024root__trace_full_sub_0(Vinst_fetch___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vinst_fetch___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinst_fetch___024root__trace_full_top_0\n"); );
    // Init
    Vinst_fetch___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vinst_fetch___024root*>(voidSelf);
    Vinst_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vinst_fetch___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vinst_fetch___024root__trace_full_sub_0(Vinst_fetch___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vinst_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinst_fetch___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst));
    bufp->fullIData(oldp+3,(vlSelf->inst_o),32);
    bufp->fullCData(oldp+4,(vlSelf->inst_fetch__DOT__pc),6);
    bufp->fullBit(oldp+5,(vlSelf->inst_fetch__DOT__rom_ce));
}
