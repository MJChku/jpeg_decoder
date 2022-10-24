// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "Vjpeg_core_jpeg_dqt.h"
#include "Vjpeg_core__Syms.h"

#include "verilated_dpi.h"

//==========

Vjpeg_core_jpeg_dqt::Vjpeg_core_jpeg_dqt(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vjpeg_core_jpeg_dqt::__Vconfigure(Vjpeg_core__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vjpeg_core_jpeg_dqt::~Vjpeg_core_jpeg_dqt() {
}

void Vjpeg_core_jpeg_dqt::_settle__TOP__jpeg_core__u_jpeg_dqt__1(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_dqt::_settle__TOP__jpeg_core__u_jpeg_dqt__1\n"); );
    Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__table_src_w[3U] = 0U;
    vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__table_src_w[0U] 
        = vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_y_dqt_table_q;
    vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__table_src_w[1U] 
        = vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_cb_dqt_table_q;
    vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__table_src_w[2U] 
        = vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_cr_dqt_table_q;
}

void Vjpeg_core_jpeg_dqt::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_dqt::_ctor_var_reset\n"); );
    // Body
    __PVT__clk_i = VL_RAND_RESET_I(1);
    __PVT__rst_i = VL_RAND_RESET_I(1);
    __PVT__img_start_i = VL_RAND_RESET_I(1);
    __PVT__img_end_i = VL_RAND_RESET_I(1);
    __PVT__img_dqt_table_y_i = VL_RAND_RESET_I(2);
    __PVT__img_dqt_table_cb_i = VL_RAND_RESET_I(2);
    __PVT__img_dqt_table_cr_i = VL_RAND_RESET_I(2);
    __PVT__cfg_valid_i = VL_RAND_RESET_I(1);
    __PVT__cfg_data_i = VL_RAND_RESET_I(8);
    __PVT__cfg_last_i = VL_RAND_RESET_I(1);
    __PVT__inport_valid_i = VL_RAND_RESET_I(1);
    __PVT__inport_data_i = VL_RAND_RESET_I(16);
    __PVT__inport_idx_i = VL_RAND_RESET_I(6);
    __PVT__inport_id_i = VL_RAND_RESET_I(32);
    __PVT__inport_eob_i = VL_RAND_RESET_I(1);
    __PVT__outport_accept_i = VL_RAND_RESET_I(1);
    __PVT__cfg_accept_o = VL_RAND_RESET_I(1);
    __PVT__inport_blk_space_o = VL_RAND_RESET_I(1);
    __PVT__outport_valid_o = VL_RAND_RESET_I(1);
    __PVT__outport_data_o = VL_RAND_RESET_I(16);
    __PVT__outport_idx_o = VL_RAND_RESET_I(6);
    __PVT__outport_id_o = VL_RAND_RESET_I(32);
    __PVT__outport_eob_o = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        __PVT__table_dqt_q[__Vi0] = VL_RAND_RESET_I(8);
    }
    __PVT__idx_q = VL_RAND_RESET_I(8);
    __PVT__cfg_table_q = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        __PVT__table_src_w[__Vi0] = VL_RAND_RESET_I(2);
    }
    __PVT__dqt_write_w = VL_RAND_RESET_I(1);
    __PVT__dqt_table_addr_w = VL_RAND_RESET_I(8);
    __PVT__dqt_entry_q = VL_RAND_RESET_I(8);
    __PVT__inport_valid_q = VL_RAND_RESET_I(1);
    __PVT__inport_data_q = VL_RAND_RESET_I(16);
    __PVT__inport_idx_q = VL_RAND_RESET_I(6);
    __PVT__inport_id_q = VL_RAND_RESET_I(32);
    __PVT__inport_eob_q = VL_RAND_RESET_I(1);
    __PVT__outport_valid_q = VL_RAND_RESET_I(1);
    __PVT__outport_data_q = VL_RAND_RESET_I(16);
    __PVT__outport_idx_q = VL_RAND_RESET_I(6);
    __PVT__outport_id_q = VL_RAND_RESET_I(32);
    __PVT__outport_eob_q = VL_RAND_RESET_I(1);
}
