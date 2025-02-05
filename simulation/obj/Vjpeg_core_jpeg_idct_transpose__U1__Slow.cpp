// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "Vjpeg_core_jpeg_idct_transpose__U1.h"
#include "Vjpeg_core__Syms.h"

#include "verilated_dpi.h"

//==========

Vjpeg_core_jpeg_idct_transpose__U1::Vjpeg_core_jpeg_idct_transpose__U1(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    VL_CELL(u_ram0, Vjpeg_core_jpeg_idct_transpose_ram);
    VL_CELL(u_ram1, Vjpeg_core_jpeg_idct_transpose_ram);
    VL_CELL(u_ram2, Vjpeg_core_jpeg_idct_transpose_ram);
    VL_CELL(u_ram3, Vjpeg_core_jpeg_idct_transpose_ram);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vjpeg_core_jpeg_idct_transpose__U1::__Vconfigure(Vjpeg_core__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vjpeg_core_jpeg_idct_transpose__U1::~Vjpeg_core_jpeg_idct_transpose__U1() {
}

void Vjpeg_core_jpeg_idct_transpose__U1::_settle__TOP__jpeg_core__u_jpeg_idct__u_transpose__1(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vjpeg_core_jpeg_idct_transpose__U1::_settle__TOP__jpeg_core__u_jpeg_idct__u_transpose__1\n"); );
    Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__wr_ptr_w 
        = (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__block_wr_q) 
            << 4U) | (0xfU & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__ptr_q)));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__inport_accept_o 
        = (1U & (~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__block_ready_q) 
                    >> (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__block_wr_q))));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__next_state_r 
        = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__state_q;
    if ((0U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__state_q))) {
        if ((1U & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__block_ready_q) 
                   >> (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__block_rd_q)))) {
            vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__next_state_r = 1U;
        }
    } else {
        if ((1U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__state_q))) {
            vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__next_state_r = 2U;
        } else {
            if ((2U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__state_q))) {
                if (((2U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__state_q)) 
                     & (0x3fU == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q)))) {
                    vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__next_state_r = 0U;
                }
            }
        }
    }
    if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__next_state_r = 0U;
    }
    vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__Vcellinp__u_ram0__addr1_i 
        = (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__block_rd_q) 
            << 4U) | (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_addr_q));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__Vcellinp__u_ram1__addr1_i 
        = (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__block_rd_q) 
            << 4U) | (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_addr_q));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__Vcellinp__u_ram2__addr1_i 
        = (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__block_rd_q) 
            << 4U) | (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_addr_q));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__Vcellinp__u_ram3__addr1_i 
        = (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__block_rd_q) 
            << 4U) | (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_addr_q));
}

void Vjpeg_core_jpeg_idct_transpose__U1::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vjpeg_core_jpeg_idct_transpose__U1::_ctor_var_reset\n"); );
    // Body
    __PVT__clk_i = VL_RAND_RESET_I(1);
    __PVT__rst_i = VL_RAND_RESET_I(1);
    __PVT__img_start_i = VL_RAND_RESET_I(1);
    __PVT__img_end_i = VL_RAND_RESET_I(1);
    __PVT__inport_valid_i = VL_RAND_RESET_I(1);
    __PVT__inport_data_i = VL_RAND_RESET_I(32);
    __PVT__inport_idx_i = VL_RAND_RESET_I(6);
    __PVT__outport_ready_i = VL_RAND_RESET_I(1);
    __PVT__inport_accept_o = VL_RAND_RESET_I(1);
    __PVT__outport_valid_o = VL_RAND_RESET_I(1);
    __PVT__outport_data0_o = VL_RAND_RESET_I(32);
    __PVT__outport_data1_o = VL_RAND_RESET_I(32);
    __PVT__outport_data2_o = VL_RAND_RESET_I(32);
    __PVT__outport_data3_o = VL_RAND_RESET_I(32);
    __PVT__outport_idx_o = VL_RAND_RESET_I(3);
    __PVT__block_wr_q = VL_RAND_RESET_I(1);
    __PVT__block_rd_q = VL_RAND_RESET_I(1);
    __PVT__rd_idx_q = VL_RAND_RESET_I(6);
    __PVT__rd_addr_q = VL_RAND_RESET_I(4);
    __PVT__wr_ptr_w = VL_RAND_RESET_I(5);
    __Vcellinp__u_ram0__addr1_i = VL_RAND_RESET_I(5);
    __Vcellinp__u_ram1__addr1_i = VL_RAND_RESET_I(5);
    __Vcellinp__u_ram2__addr1_i = VL_RAND_RESET_I(5);
    __Vcellinp__u_ram3__addr1_i = VL_RAND_RESET_I(5);
    __PVT__block_ready_q = VL_RAND_RESET_I(2);
    __PVT__state_q = VL_RAND_RESET_I(2);
    __PVT__next_state_r = VL_RAND_RESET_I(2);
}
