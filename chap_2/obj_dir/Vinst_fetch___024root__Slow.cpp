// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinst_fetch.h for the primary calling header

#include "verilated.h"

#include "Vinst_fetch__Syms.h"
#include "Vinst_fetch___024root.h"

void Vinst_fetch___024root___ctor_var_reset(Vinst_fetch___024root* vlSelf);

Vinst_fetch___024root::Vinst_fetch___024root(Vinst_fetch__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vinst_fetch___024root___ctor_var_reset(this);
}

void Vinst_fetch___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vinst_fetch___024root::~Vinst_fetch___024root() {
}
