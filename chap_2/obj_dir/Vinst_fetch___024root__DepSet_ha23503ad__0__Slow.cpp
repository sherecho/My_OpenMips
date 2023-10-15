// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinst_fetch.h for the primary calling header

#include "verilated.h"

#include "Vinst_fetch___024root.h"

VL_ATTR_COLD void Vinst_fetch___024root___eval_static(Vinst_fetch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinst_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinst_fetch___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vinst_fetch___024root___eval_initial(Vinst_fetch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinst_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinst_fetch___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vinst_fetch___024root___eval_final(Vinst_fetch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinst_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinst_fetch___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vinst_fetch___024root___eval_triggers__stl(Vinst_fetch___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vinst_fetch___024root___dump_triggers__stl(Vinst_fetch___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vinst_fetch___024root___eval_stl(Vinst_fetch___024root* vlSelf);

VL_ATTR_COLD void Vinst_fetch___024root___eval_settle(Vinst_fetch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinst_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinst_fetch___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vinst_fetch___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vinst_fetch___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("inst_fetch.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vinst_fetch___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinst_fetch___024root___dump_triggers__stl(Vinst_fetch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinst_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinst_fetch___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vinst_fetch___024root___stl_sequent__TOP__0(Vinst_fetch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinst_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinst_fetch___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->inst_o = ((IData)(vlSelf->inst_fetch__DOT__rom_ce)
                       ? vlSelf->inst_fetch__DOT__rom0__DOT__rom
                      [vlSelf->inst_fetch__DOT__pc]
                       : 0U);
}

VL_ATTR_COLD void Vinst_fetch___024root___eval_stl(Vinst_fetch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinst_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinst_fetch___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vinst_fetch___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinst_fetch___024root___dump_triggers__act(Vinst_fetch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinst_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinst_fetch___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinst_fetch___024root___dump_triggers__nba(Vinst_fetch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinst_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinst_fetch___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vinst_fetch___024root___ctor_var_reset(Vinst_fetch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinst_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinst_fetch___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->inst_o = VL_RAND_RESET_I(32);
    vlSelf->inst_fetch__DOT__pc = VL_RAND_RESET_I(6);
    vlSelf->inst_fetch__DOT__rom_ce = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->inst_fetch__DOT__rom0__DOT__rom[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
}
