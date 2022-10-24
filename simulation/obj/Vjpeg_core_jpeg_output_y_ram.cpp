// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "Vjpeg_core_jpeg_output_y_ram.h"
#include "Vjpeg_core__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vjpeg_core_jpeg_output_y_ram::_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_y__2(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vjpeg_core_jpeg_output_y_ram::_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_y__2\n"); );
    Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__count_q 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q)
                                           ? 0U : vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__count_r));
    vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__rd_q 
        = ((~ (IData)(vlTOPp->rst_i)) & ((~ (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q)) 
                                         & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__read_ok_w)));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__wr_ptr_q = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
            vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__wr_ptr_q = 0U;
        } else {
            if (vlSymsp->TOP__jpeg_core__u_jpeg_output.__Vcellinp__u_ram_y__push_i) {
                vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__wr_ptr_q 
                    = vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__write_next_w;
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__rd_ptr_q = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
            vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__rd_ptr_q = 0U;
        } else {
            if (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__read_ok_w) 
                 & ((~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__valid_o)) 
                    | ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__valid_o) 
                       & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__y_pop_w))))) {
                vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__rd_ptr_q 
                    = vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__rd_ptr_next_w;
            }
        }
    }
    vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__rd_skid_data_q 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q)
                                           ? 0U : (
                                                   ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__valid_o) 
                                                    & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__y_pop_w)))
                                                    ? vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__data_out_o
                                                    : 0U)));
    vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__rd_skid_q 
        = ((~ (IData)(vlTOPp->rst_i)) & ((~ (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q)) 
                                         & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__valid_o) 
                                            & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__y_pop_w)))));
    vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__write_next_w 
        = (0x1ffU & ((IData)(1U) + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__wr_ptr_q)));
    vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__Vcellinp__u_ram__addr0_i 
        = ((0x1c0U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__wr_ptr_q)) 
           | (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_idx_o));
    vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__rd_ptr_next_w 
        = (0x1ffU & ((IData)(1U) + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__rd_ptr_q)));
    vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__read_ok_w 
        = ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__wr_ptr_q) 
           != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__rd_ptr_q));
    vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__data_out_o 
        = ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__rd_skid_q)
            ? vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__rd_skid_data_q
            : vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y__u_ram.__PVT__ram_read1_q);
    vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__valid_o 
        = ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__rd_skid_q) 
           | (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__rd_q));
}

VL_INLINE_OPT void Vjpeg_core_jpeg_output_y_ram::_combo__TOP__jpeg_core__u_jpeg_output__u_ram_y__3(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vjpeg_core_jpeg_output_y_ram::_combo__TOP__jpeg_core__u_jpeg_output__u_ram_y__3\n"); );
    Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__count_r 
        = vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__count_q;
    if (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__y_pop_w) 
         & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__valid_o))) {
        vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__count_r 
            = (vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__count_r 
               - (IData)(1U));
    }
    if (vlSymsp->TOP__jpeg_core__u_jpeg_output.__Vcellinp__u_ram_y__push_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__count_r 
            = ((IData)(1U) + vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__count_r);
    }
}
