// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "Vjpeg_core_jpeg_idct_ram__U1.h"
#include "Vjpeg_core__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vjpeg_core_jpeg_idct_ram__U1::_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__2(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vjpeg_core_jpeg_idct_ram__U1::_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__2\n"); );
    Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__block_wr_q;
    CData/*1:0*/ __Vdly__block_rd_q;
    CData/*5:0*/ __Vdly__rd_idx_q;
    CData/*3:0*/ __Vdly__rd_addr_q;
    // Body
    __Vdly__rd_addr_q = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_addr_q;
    __Vdly__rd_idx_q = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q;
    __Vdly__block_rd_q = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_rd_q;
    __Vdly__block_wr_q = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_wr_q;
    if (vlTOPp->rst_i) {
        __Vdly__rd_addr_q = 0U;
    } else {
        if ((0U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__state_q))) {
            __Vdly__rd_addr_q = 0U;
        } else {
            if ((1U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__state_q))) {
                __Vdly__rd_addr_q = 1U;
            } else {
                if ((2U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__state_q))) {
                    if ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q))) {
                        if ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q))) {
                            __Vdly__rd_addr_q = (0xfU 
                                                 & ((1U 
                                                     & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_addr_q))
                                                     : 
                                                    ((IData)(2U) 
                                                     + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_addr_q))));
                        } else {
                            if ((1U & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q)))) {
                                __Vdly__rd_addr_q = 
                                    (0xfU & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_addr_q) 
                                             - (IData)(1U)));
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q))) {
                            __Vdly__rd_addr_q = (0xfU 
                                                 & ((1U 
                                                     & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_addr_q))
                                                     : 
                                                    ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_addr_q) 
                                                     - (IData)(1U))));
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val3_q 
        = (1U & ((~ (IData)(vlTOPp->rst_i)) & (IData)(
                                                      (vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid3_q 
                                                       >> 
                                                       (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_rd_q) 
                                                         << 4U) 
                                                        | (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_addr_q))))));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val2_q 
        = (1U & ((~ (IData)(vlTOPp->rst_i)) & (IData)(
                                                      (vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid2_q 
                                                       >> 
                                                       (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_rd_q) 
                                                         << 4U) 
                                                        | (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_addr_q))))));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val0_q 
        = (1U & ((~ (IData)(vlTOPp->rst_i)) & (IData)(
                                                      (vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid0_q 
                                                       >> 
                                                       (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_rd_q) 
                                                         << 4U) 
                                                        | (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_addr_q))))));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val1_q 
        = (1U & ((~ (IData)(vlTOPp->rst_i)) & (IData)(
                                                      (vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid1_q 
                                                       >> 
                                                       (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_rd_q) 
                                                         << 4U) 
                                                        | (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_addr_q))))));
    if (vlTOPp->rst_i) {
        __Vdly__rd_idx_q = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
            __Vdly__rd_idx_q = 0U;
        } else {
            if ((2U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__state_q))) {
                __Vdly__rd_idx_q = (0x3fU & ((IData)(1U) 
                                             + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q)));
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_ready_q = 0U;
        __Vdly__block_wr_q = 0U;
        __Vdly__block_rd_q = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
            vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_ready_q = 0U;
            __Vdly__block_wr_q = 0U;
            __Vdly__block_rd_q = 0U;
        } else {
            if (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_eob_q) 
                 & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__inport_accept_o))) {
                vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_ready_q 
                    = ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_ready_q) 
                       | (0xfU & ((IData)(1U) << (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_wr_q))));
                __Vdly__block_wr_q = (3U & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_wr_q)));
            }
            if (((2U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__state_q)) 
                 & (0x3fU == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q)))) {
                vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_ready_q 
                    = ((~ ((IData)(1U) << (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_rd_q))) 
                       & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_ready_q));
                __Vdly__block_rd_q = (3U & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_rd_q)));
            }
        }
    }
    vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_addr_q 
        = __Vdly__rd_addr_q;
    vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_rd_q 
        = __Vdly__block_rd_q;
    vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_wr_q 
        = __Vdly__block_wr_q;
    vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q 
        = __Vdly__rd_idx_q;
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid3_q = 0ULL;
        vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid2_q = 0ULL;
        vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid0_q = 0ULL;
        vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid1_q = 0ULL;
    } else {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid3_q 
            = ((IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q)
                ? 0ULL : vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid3_r);
        vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid2_q 
            = ((IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q)
                ? 0ULL : vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid2_r);
        vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid0_q 
            = ((IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q)
                ? 0ULL : vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid0_r);
        vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid1_q 
            = ((IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q)
                ? 0ULL : vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid1_r);
    }
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
    vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__state_q 
        = ((IData)(vlTOPp->rst_i) ? 0U : (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__next_state_r));
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

VL_INLINE_OPT void Vjpeg_core_jpeg_idct_ram__U1::_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__3(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vjpeg_core_jpeg_idct_ram__U1::_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__3\n"); );
    Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
}
