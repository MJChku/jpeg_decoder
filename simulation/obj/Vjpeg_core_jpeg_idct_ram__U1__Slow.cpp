// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "Vjpeg_core_jpeg_idct_ram__U1.h"
#include "Vjpeg_core__Syms.h"

#include "verilated_dpi.h"

//==========

Vjpeg_core_jpeg_idct_ram__U1::Vjpeg_core_jpeg_idct_ram__U1(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    VL_CELL(u_ram0, Vjpeg_core_jpeg_idct_ram_dp);
    VL_CELL(u_ram1, Vjpeg_core_jpeg_idct_ram_dp);
    VL_CELL(u_ram2, Vjpeg_core_jpeg_idct_ram_dp);
    VL_CELL(u_ram3, Vjpeg_core_jpeg_idct_ram_dp);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vjpeg_core_jpeg_idct_ram__U1::__Vconfigure(Vjpeg_core__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vjpeg_core_jpeg_idct_ram__U1::~Vjpeg_core_jpeg_idct_ram__U1() {
}

void Vjpeg_core_jpeg_idct_ram__U1::_settle__TOP__jpeg_core__u_jpeg_idct__u_input__1(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vjpeg_core_jpeg_idct_ram__U1::_settle__TOP__jpeg_core__u_jpeg_idct__u_input__1\n"); );
    Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__Vcellinp__u_ram0__addr1_i 
        = (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_rd_q) 
            << 4U) | (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_addr_q));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__Vcellinp__u_ram1__addr1_i 
        = (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_rd_q) 
            << 4U) | (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_addr_q));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__Vcellinp__u_ram2__addr1_i 
        = (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_rd_q) 
            << 4U) | (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_addr_q));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__Vcellinp__u_ram3__addr1_i 
        = (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_rd_q) 
            << 4U) | (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_addr_q));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr_ptr_w 
        = (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_wr_q) 
            << 4U) | ((0xeU & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_idx_q) 
                               >> 2U)) | (1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_idx_q))));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__inport_accept_o 
        = (1U & (~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_ready_q) 
                    >> (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_wr_q))));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__next_state_r 
        = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__state_q;
    if ((0U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__state_q))) {
        if ((((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_ready_q) 
              >> (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_rd_q)) 
             & (((0x180U >= vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__count_q) 
                 & (0x80U >= vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__count_q)) 
                | (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__idle_q)))) {
            vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__next_state_r = 1U;
        }
    } else {
        if ((1U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__state_q))) {
            vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__next_state_r = 2U;
        } else {
            if ((2U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__state_q))) {
                if (((2U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__state_q)) 
                     & (0x3fU == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q)))) {
                    vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__next_state_r = 0U;
                }
            }
        }
    }
    if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__next_state_r = 0U;
    }
    vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr0_w 
        = (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_valid_q) 
            & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__inport_accept_o)) 
           & ((0U == (7U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_idx_q))) 
              | (1U == (7U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_idx_q)))));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr1_w 
        = (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_valid_q) 
            & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__inport_accept_o)) 
           & ((2U == (7U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_idx_q))) 
              | (3U == (7U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_idx_q)))));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr2_w 
        = (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_valid_q) 
            & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__inport_accept_o)) 
           & ((4U == (7U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_idx_q))) 
              | (5U == (7U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_idx_q)))));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr3_w 
        = (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_valid_q) 
            & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__inport_accept_o)) 
           & ((6U == (7U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_idx_q))) 
              | (7U == (7U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_idx_q)))));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid0_r 
        = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid0_q;
    if (((2U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__state_q)) 
         & (0x3fU == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q)))) {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid0_r 
            = ((0U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_rd_q))
                ? (0xffffffffffff0000ULL & vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid0_r)
                : ((1U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_rd_q))
                    ? (0xffffffff0000ffffULL & vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid0_r)
                    : ((2U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_rd_q))
                        ? (0xffff0000ffffffffULL & vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid0_r)
                        : (0xffffffffffffULL & vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid0_r))));
    }
    if (vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr0_w) {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid0_r 
            = (vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid0_r 
               | ((QData)((IData)(1U)) << (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr_ptr_w)));
    }
    vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid1_r 
        = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid1_q;
    if (((2U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__state_q)) 
         & (0x3fU == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q)))) {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid1_r 
            = ((0U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_rd_q))
                ? (0xffffffffffff0000ULL & vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid1_r)
                : ((1U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_rd_q))
                    ? (0xffffffff0000ffffULL & vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid1_r)
                    : ((2U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_rd_q))
                        ? (0xffff0000ffffffffULL & vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid1_r)
                        : (0xffffffffffffULL & vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid1_r))));
    }
    if (vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr1_w) {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid1_r 
            = (vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid1_r 
               | ((QData)((IData)(1U)) << (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr_ptr_w)));
    }
    vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid2_r 
        = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid2_q;
    if (((2U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__state_q)) 
         & (0x3fU == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q)))) {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid2_r 
            = ((0U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_rd_q))
                ? (0xffffffffffff0000ULL & vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid2_r)
                : ((1U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_rd_q))
                    ? (0xffffffff0000ffffULL & vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid2_r)
                    : ((2U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_rd_q))
                        ? (0xffff0000ffffffffULL & vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid2_r)
                        : (0xffffffffffffULL & vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid2_r))));
    }
    if (vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr2_w) {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid2_r 
            = (vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid2_r 
               | ((QData)((IData)(1U)) << (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr_ptr_w)));
    }
    vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid3_r 
        = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid3_q;
    if (((2U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__state_q)) 
         & (0x3fU == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q)))) {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid3_r 
            = ((0U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_rd_q))
                ? (0xffffffffffff0000ULL & vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid3_r)
                : ((1U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_rd_q))
                    ? (0xffffffff0000ffffULL & vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid3_r)
                    : ((2U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_rd_q))
                        ? (0xffff0000ffffffffULL & vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid3_r)
                        : (0xffffffffffffULL & vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid3_r))));
    }
    if (vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr3_w) {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid3_r 
            = (vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid3_r 
               | ((QData)((IData)(1U)) << (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr_ptr_w)));
    }
}

void Vjpeg_core_jpeg_idct_ram__U1::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vjpeg_core_jpeg_idct_ram__U1::_ctor_var_reset\n"); );
    // Body
    __PVT__clk_i = VL_RAND_RESET_I(1);
    __PVT__rst_i = VL_RAND_RESET_I(1);
    __PVT__img_start_i = VL_RAND_RESET_I(1);
    __PVT__img_end_i = VL_RAND_RESET_I(1);
    __PVT__inport_valid_i = VL_RAND_RESET_I(1);
    __PVT__inport_data_i = VL_RAND_RESET_I(16);
    __PVT__inport_idx_i = VL_RAND_RESET_I(6);
    __PVT__inport_eob_i = VL_RAND_RESET_I(1);
    __PVT__outport_ready_i = VL_RAND_RESET_I(1);
    __PVT__inport_accept_o = VL_RAND_RESET_I(1);
    __PVT__outport_valid_o = VL_RAND_RESET_I(1);
    __PVT__outport_data0_o = VL_RAND_RESET_I(16);
    __PVT__outport_data1_o = VL_RAND_RESET_I(16);
    __PVT__outport_data2_o = VL_RAND_RESET_I(16);
    __PVT__outport_data3_o = VL_RAND_RESET_I(16);
    __PVT__outport_idx_o = VL_RAND_RESET_I(3);
    __PVT__block_wr_q = VL_RAND_RESET_I(2);
    __PVT__block_rd_q = VL_RAND_RESET_I(2);
    __PVT__rd_idx_q = VL_RAND_RESET_I(6);
    __PVT__rd_addr_q = VL_RAND_RESET_I(4);
    __PVT__wr_ptr_w = VL_RAND_RESET_I(6);
    __PVT__wr0_w = VL_RAND_RESET_I(1);
    __PVT__wr1_w = VL_RAND_RESET_I(1);
    __PVT__wr2_w = VL_RAND_RESET_I(1);
    __PVT__wr3_w = VL_RAND_RESET_I(1);
    __Vcellinp__u_ram0__addr1_i = VL_RAND_RESET_I(6);
    __Vcellinp__u_ram1__addr1_i = VL_RAND_RESET_I(6);
    __Vcellinp__u_ram2__addr1_i = VL_RAND_RESET_I(6);
    __Vcellinp__u_ram3__addr1_i = VL_RAND_RESET_I(6);
    __PVT__data_valid0_r = VL_RAND_RESET_Q(64);
    __PVT__data_valid0_q = VL_RAND_RESET_Q(64);
    __PVT__data_valid1_r = VL_RAND_RESET_Q(64);
    __PVT__data_valid1_q = VL_RAND_RESET_Q(64);
    __PVT__data_valid2_r = VL_RAND_RESET_Q(64);
    __PVT__data_valid2_q = VL_RAND_RESET_Q(64);
    __PVT__data_valid3_r = VL_RAND_RESET_Q(64);
    __PVT__data_valid3_q = VL_RAND_RESET_Q(64);
    __PVT__block_ready_q = VL_RAND_RESET_I(4);
    __PVT__state_q = VL_RAND_RESET_I(2);
    __PVT__next_state_r = VL_RAND_RESET_I(2);
    __PVT__data_val0_q = VL_RAND_RESET_I(1);
    __PVT__data_val1_q = VL_RAND_RESET_I(1);
    __PVT__data_val2_q = VL_RAND_RESET_I(1);
    __PVT__data_val3_q = VL_RAND_RESET_I(1);
}
