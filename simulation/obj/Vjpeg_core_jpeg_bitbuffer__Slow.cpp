// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "Vjpeg_core_jpeg_bitbuffer.h"
#include "Vjpeg_core__Syms.h"

#include "verilated_dpi.h"

//==========

Vjpeg_core_jpeg_bitbuffer::Vjpeg_core_jpeg_bitbuffer(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vjpeg_core_jpeg_bitbuffer::__Vconfigure(Vjpeg_core__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vjpeg_core_jpeg_bitbuffer::~Vjpeg_core_jpeg_bitbuffer() {
}

void Vjpeg_core_jpeg_bitbuffer::_settle__TOP__jpeg_core__u_jpeg_bitbuffer__1(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_bitbuffer::_settle__TOP__jpeg_core__u_jpeg_bitbuffer__1\n"); );
    Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__fifo_data_r 
        = ((0x20U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__rd_ptr_q))
            ? ((0x10U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__rd_ptr_q))
                ? ((8U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__rd_ptr_q))
                    ? (((QData)((IData)(((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                          [7U] << 0x18U) 
                                         | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                             [0U] << 0x10U) 
                                            | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                [1U] 
                                                << 8U) 
                                               | vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                               [2U]))))) 
                        << 8U) | (QData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                 [3U])))
                    : (((QData)((IData)(((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                          [6U] << 0x18U) 
                                         | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                             [7U] << 0x10U) 
                                            | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                [0U] 
                                                << 8U) 
                                               | vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                               [1U]))))) 
                        << 8U) | (QData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                 [2U]))))
                : ((8U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__rd_ptr_q))
                    ? (((QData)((IData)(((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                          [5U] << 0x18U) 
                                         | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                             [6U] << 0x10U) 
                                            | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                [7U] 
                                                << 8U) 
                                               | vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                               [0U]))))) 
                        << 8U) | (QData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                 [1U])))
                    : (((QData)((IData)(((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                          [4U] << 0x18U) 
                                         | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                             [5U] << 0x10U) 
                                            | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                [6U] 
                                                << 8U) 
                                               | vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                               [7U]))))) 
                        << 8U) | (QData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                 [0U])))))
            : ((0x10U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__rd_ptr_q))
                ? ((8U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__rd_ptr_q))
                    ? (((QData)((IData)(((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                          [3U] << 0x18U) 
                                         | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                             [4U] << 0x10U) 
                                            | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                [5U] 
                                                << 8U) 
                                               | vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                               [6U]))))) 
                        << 8U) | (QData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                 [7U])))
                    : (((QData)((IData)(((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                          [2U] << 0x18U) 
                                         | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                             [3U] << 0x10U) 
                                            | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                [4U] 
                                                << 8U) 
                                               | vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                               [5U]))))) 
                        << 8U) | (QData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                 [6U]))))
                : ((8U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__rd_ptr_q))
                    ? (((QData)((IData)(((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                          [1U] << 0x18U) 
                                         | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                             [2U] << 0x10U) 
                                            | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                [3U] 
                                                << 8U) 
                                               | vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                               [4U]))))) 
                        << 8U) | (QData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                 [5U])))
                    : (((QData)((IData)(((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                          [0U] << 0x18U) 
                                         | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                             [1U] << 0x10U) 
                                            | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                [2U] 
                                                << 8U) 
                                               | vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                               [3U]))))) 
                        << 8U) | (QData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                 [4U]))))));
    vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_valid_o 
        = ((0x20U <= (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__count_q)) 
           | ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__drain_q) 
              & (0U != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__count_q))));
    vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__data_shifted_w 
        = (0xffffffffffULL & (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__fifo_data_r 
                              << (7U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__rd_ptr_q))));
}

void Vjpeg_core_jpeg_bitbuffer::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_bitbuffer::_ctor_var_reset\n"); );
    // Body
    __PVT__clk_i = VL_RAND_RESET_I(1);
    __PVT__rst_i = VL_RAND_RESET_I(1);
    __PVT__img_start_i = VL_RAND_RESET_I(1);
    __PVT__img_end_i = VL_RAND_RESET_I(1);
    __PVT__inport_valid_i = VL_RAND_RESET_I(1);
    __PVT__inport_data_i = VL_RAND_RESET_I(8);
    __PVT__inport_last_i = VL_RAND_RESET_I(1);
    __PVT__outport_pop_i = VL_RAND_RESET_I(6);
    __PVT__inport_accept_o = VL_RAND_RESET_I(1);
    __PVT__outport_valid_o = VL_RAND_RESET_I(1);
    __PVT__outport_data_o = VL_RAND_RESET_I(32);
    __PVT__outport_last_o = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        __PVT__ram_q[__Vi0] = VL_RAND_RESET_I(8);
    }
    __PVT__rd_ptr_q = VL_RAND_RESET_I(6);
    __PVT__wr_ptr_q = VL_RAND_RESET_I(6);
    __PVT__count_q = VL_RAND_RESET_I(7);
    __PVT__drain_q = VL_RAND_RESET_I(1);
    __PVT__count_r = VL_RAND_RESET_I(7);
    __PVT__fifo_data_r = VL_RAND_RESET_Q(40);
    __PVT__data_shifted_w = VL_RAND_RESET_Q(40);
}
