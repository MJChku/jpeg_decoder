// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "Vjpeg_core.h"
#include "Vjpeg_core__Syms.h"

#include "verilated_dpi.h"

//==========

Vjpeg_core::Vjpeg_core(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    Vjpeg_core__Syms* __restrict vlSymsp = __VlSymsp = new Vjpeg_core__Syms(_vcontextp__, this, name());
    Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(jpeg_core, Vjpeg_core_jpeg_core);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vjpeg_core::__Vconfigure(Vjpeg_core__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

Vjpeg_core::~Vjpeg_core() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void Vjpeg_core::_settle__TOP__1(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjpeg_core::_settle__TOP__1\n"); );
    Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->idle_o = vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__idle_q;
    vlTOPp->outport_pixel_b_o = vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__pixel_b_q;
    vlTOPp->outport_pixel_g_o = vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__pixel_g_q;
    vlTOPp->outport_pixel_r_o = vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__pixel_r_q;
    vlTOPp->outport_pixel_y_o = vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__pixel_y_q;
    vlTOPp->outport_pixel_x_o = vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__pixel_x_q;
    vlTOPp->outport_height_o = vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_height_q;
    vlTOPp->outport_valid_o = vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__valid_q;
    vlTOPp->outport_width_o = vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_width_q;
}

void Vjpeg_core::_eval_initial(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjpeg_core::_eval_initial\n"); );
    Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
    vlTOPp->__Vclklast__TOP__rst_i = vlTOPp->rst_i;
}

void Vjpeg_core::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjpeg_core::final\n"); );
    // Variables
    Vjpeg_core__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vjpeg_core::_eval_settle(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjpeg_core::_eval_settle\n"); );
    Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__jpeg_core__u_jpeg_dqt._settle__TOP__jpeg_core__u_jpeg_dqt__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[4U] = 1U;
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlSymsp->TOP__jpeg_core__u_jpeg_idct._settle__TOP__jpeg_core__u_jpeg_idct__1(vlSymsp);
    vlSymsp->TOP__jpeg_core__u_jpeg_output._settle__TOP__jpeg_core__u_jpeg_output__1(vlSymsp);
    vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y._settle__TOP__jpeg_core__u_jpeg_output__u_ram_y__1(vlSymsp);
    vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb._settle__TOP__jpeg_core__u_jpeg_output__u_ram_cb__1(vlSymsp);
    vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr._settle__TOP__jpeg_core__u_jpeg_output__u_ram_cr__2(vlSymsp);
    vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input._settle__TOP__jpeg_core__u_jpeg_idct__u_input__1(vlSymsp);
    vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose._settle__TOP__jpeg_core__u_jpeg_idct__u_transpose__1(vlSymsp);
    vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer._settle__TOP__jpeg_core__u_jpeg_bitbuffer__1(vlSymsp);
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc._settle__TOP__jpeg_core__u_jpeg_mcu_proc__1(vlSymsp);
    vlSymsp->TOP__jpeg_core._settle__TOP__jpeg_core__1(vlSymsp);
    vlSymsp->TOP__jpeg_core__u_jpeg_output._settle__TOP__jpeg_core__u_jpeg_output__2(vlSymsp);
    vlSymsp->TOP__jpeg_core__u_jpeg_dqt._settle__TOP__jpeg_core__u_jpeg_dqt__2(vlSymsp);
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer._settle__TOP__jpeg_core__u_jpeg_bitbuffer__2(vlSymsp);
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc._settle__TOP__jpeg_core__u_jpeg_mcu_proc__2(vlSymsp);
}

void Vjpeg_core::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjpeg_core::_ctor_var_reset\n"); );
    // Body
    clk_i = VL_RAND_RESET_I(1);
    rst_i = VL_RAND_RESET_I(1);
    inport_valid_i = VL_RAND_RESET_I(1);
    inport_data_i = VL_RAND_RESET_I(32);
    inport_strb_i = VL_RAND_RESET_I(4);
    inport_last_i = VL_RAND_RESET_I(1);
    outport_accept_i = VL_RAND_RESET_I(1);
    inport_accept_o = VL_RAND_RESET_I(1);
    outport_valid_o = VL_RAND_RESET_I(1);
    outport_width_o = VL_RAND_RESET_I(16);
    outport_height_o = VL_RAND_RESET_I(16);
    outport_pixel_x_o = VL_RAND_RESET_I(16);
    outport_pixel_y_o = VL_RAND_RESET_I(16);
    outport_pixel_r_o = VL_RAND_RESET_I(8);
    outport_pixel_g_o = VL_RAND_RESET_I(8);
    outport_pixel_b_o = VL_RAND_RESET_I(8);
    idle_o = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
