// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vinst_fetch.h"
#include "Vinst_fetch__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vinst_fetch::Vinst_fetch(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vinst_fetch__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , inst_o{vlSymsp->TOP.inst_o}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vinst_fetch::Vinst_fetch(const char* _vcname__)
    : Vinst_fetch(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vinst_fetch::~Vinst_fetch() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vinst_fetch___024root___eval_debug_assertions(Vinst_fetch___024root* vlSelf);
#endif  // VL_DEBUG
void Vinst_fetch___024root___eval_static(Vinst_fetch___024root* vlSelf);
void Vinst_fetch___024root___eval_initial(Vinst_fetch___024root* vlSelf);
void Vinst_fetch___024root___eval_settle(Vinst_fetch___024root* vlSelf);
void Vinst_fetch___024root___eval(Vinst_fetch___024root* vlSelf);

void Vinst_fetch::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vinst_fetch::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vinst_fetch___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vinst_fetch___024root___eval_static(&(vlSymsp->TOP));
        Vinst_fetch___024root___eval_initial(&(vlSymsp->TOP));
        Vinst_fetch___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vinst_fetch___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vinst_fetch::eventsPending() { return false; }

uint64_t Vinst_fetch::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vinst_fetch::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vinst_fetch___024root___eval_final(Vinst_fetch___024root* vlSelf);

VL_ATTR_COLD void Vinst_fetch::final() {
    Vinst_fetch___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vinst_fetch::hierName() const { return vlSymsp->name(); }
const char* Vinst_fetch::modelName() const { return "Vinst_fetch"; }
unsigned Vinst_fetch::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vinst_fetch::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vinst_fetch___024root__trace_init_top(Vinst_fetch___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vinst_fetch___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vinst_fetch___024root*>(voidSelf);
    Vinst_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vinst_fetch___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vinst_fetch___024root__trace_register(Vinst_fetch___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vinst_fetch::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vinst_fetch::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vinst_fetch___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
