// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "Vjpeg_core_jpeg_output_cx_ram.h"
#include "Vjpeg_core__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vjpeg_core_jpeg_output_cx_ram::_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cb__3(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vjpeg_core_jpeg_output_cx_ram::_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cb__3\n"); );
    Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdly__cx_idx_q = this->__PVT__cx_idx_q;
    this->__Vdly__cx_half_q = this->__PVT__cx_half_q;
    if (vlTOPp->rst_i) {
        this->__PVT__wr_ptr_q = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
            this->__PVT__wr_ptr_q = 0U;
        } else {
            if (vlSymsp->TOP__jpeg_core__u_jpeg_output.__Vcellinp__u_ram_cb__push_i) {
                this->__PVT__wr_ptr_q = this->__PVT__write_next_w;
            }
        }
    }
    this->__PVT__rd_skid_data_q = ((IData)(vlTOPp->rst_i)
                                    ? 0U : ((IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q)
                                             ? 0U : 
                                            (((IData)(this->__PVT__valid_o) 
                                              & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__y_pop_w)))
                                              ? this->__PVT__data_out_o
                                              : 0U)));
    this->__PVT__rd_skid_q = ((~ (IData)(vlTOPp->rst_i)) 
                              & ((~ (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q)) 
                                 & ((IData)(this->__PVT__valid_o) 
                                    & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__y_pop_w)))));
    if (vlTOPp->rst_i) {
        this->__PVT__cx_rd_ptr_q = 0U;
    } else {
        if (((1U < this->__PVT__count_q) & ((~ (IData)(this->__PVT__valid_o)) 
                                            | ((IData)(this->__PVT__valid_o) 
                                               & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__y_pop_w))))) {
            this->__PVT__cx_rd_ptr_q = this->__PVT__cx_rd_ptr_r;
        }
    }
    this->__PVT__rd_q = ((~ (IData)(vlTOPp->rst_i)) 
                         & ((~ (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q)) 
                            & (1U < this->__PVT__count_q)));
    if (vlTOPp->rst_i) {
        this->__Vdly__cx_idx_q = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
            this->__Vdly__cx_idx_q = 0U;
        } else {
            if (((1U < this->__PVT__count_q) & ((~ (IData)(this->__PVT__valid_o)) 
                                                | ((IData)(this->__PVT__valid_o) 
                                                   & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__y_pop_w))))) {
                this->__Vdly__cx_idx_q = (0xffU & ((IData)(1U) 
                                                   + (IData)(this->__PVT__cx_idx_q)));
            }
        }
    }
    if (vlTOPp->rst_i) {
        this->__PVT__rd_ptr_q = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
            this->__PVT__rd_ptr_q = 0U;
        } else {
            if (((1U < this->__PVT__count_q) & ((~ (IData)(this->__PVT__valid_o)) 
                                                | ((IData)(this->__PVT__valid_o) 
                                                   & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__y_pop_w))))) {
                this->__PVT__rd_ptr_q = this->__PVT__rd_ptr_next_w;
            }
        }
    }
    if (vlTOPp->rst_i) {
        this->__Vdly__cx_half_q = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
            this->__Vdly__cx_half_q = 0U;
        } else {
            if ((((1U < this->__PVT__count_q) & ((~ (IData)(this->__PVT__valid_o)) 
                                                 | ((IData)(this->__PVT__valid_o) 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__y_pop_w)))) 
                 & (0xffU == (IData)(this->__PVT__cx_idx_q)))) {
                this->__Vdly__cx_half_q = (3U & ((IData)(1U) 
                                                 + (IData)(this->__PVT__cx_half_q)));
            }
        }
    }
    this->__PVT__cx_half_q = this->__Vdly__cx_half_q;
    this->__PVT__cx_idx_q = this->__Vdly__cx_idx_q;
    this->__PVT__write_next_w = (0xffU & ((IData)(1U) 
                                          + (IData)(this->__PVT__wr_ptr_q)));
    this->__Vcellinp__u_ram__addr0_i = ((0xc0U & (IData)(this->__PVT__wr_ptr_q)) 
                                        | (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_idx_o));
    this->__PVT__data_out_o = ((IData)(this->__PVT__rd_skid_q)
                                ? this->__PVT__rd_skid_data_q
                                : u_ram->__PVT__ram_read1_q);
    this->__PVT__valid_o = ((IData)(this->__PVT__rd_skid_q) 
                            | (IData)(this->__PVT__rd_q));
    this->__PVT__rd_ptr_next_w = (0xffU & ((IData)(1U) 
                                           + (IData)(this->__PVT__rd_ptr_q)));
    this->__Vtableidx1 = this->__PVT__cx_idx_q;
    this->__PVT__cx_rd_ptr_r = this->__Vtable1___PVT__cx_rd_ptr_r
        [this->__Vtableidx1];
    this->__PVT__count_q = ((IData)(vlTOPp->rst_i) ? 0U
                             : ((IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q)
                                 ? 0U : this->__PVT__count_r));
}

VL_INLINE_OPT void Vjpeg_core_jpeg_output_cx_ram::_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cb__5(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vjpeg_core_jpeg_output_cx_ram::_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cb__5\n"); );
    Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__rd_addr_w = ((2U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q))
                               ? (((IData)(this->__PVT__cx_half_q) 
                                   << 6U) | (IData)(this->__PVT__cx_rd_ptr_q))
                               : (IData)(this->__PVT__rd_ptr_q));
}

VL_INLINE_OPT void Vjpeg_core_jpeg_output_cx_ram::_combo__TOP__jpeg_core__u_jpeg_output__u_ram_cb__7(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vjpeg_core_jpeg_output_cx_ram::_combo__TOP__jpeg_core__u_jpeg_output__u_ram_cb__7\n"); );
    Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__count_r = this->__PVT__count_q;
    if (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__y_pop_w) 
         & (IData)(this->__PVT__valid_o))) {
        this->__PVT__count_r = (this->__PVT__count_r 
                                - (IData)(1U));
    }
    if (vlSymsp->TOP__jpeg_core__u_jpeg_output.__Vcellinp__u_ram_cb__push_i) {
        this->__PVT__count_r = (this->__PVT__count_r 
                                + ((2U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q))
                                    ? 4U : 1U));
    }
}

VL_INLINE_OPT void Vjpeg_core_jpeg_output_cx_ram::_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cr__4(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vjpeg_core_jpeg_output_cx_ram::_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cr__4\n"); );
    Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdly__cx_idx_q = this->__PVT__cx_idx_q;
    this->__Vdly__cx_half_q = this->__PVT__cx_half_q;
    if (vlTOPp->rst_i) {
        this->__PVT__wr_ptr_q = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
            this->__PVT__wr_ptr_q = 0U;
        } else {
            if (vlSymsp->TOP__jpeg_core__u_jpeg_output.__Vcellinp__u_ram_cr__push_i) {
                this->__PVT__wr_ptr_q = this->__PVT__write_next_w;
            }
        }
    }
    this->__PVT__rd_skid_data_q = ((IData)(vlTOPp->rst_i)
                                    ? 0U : ((IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q)
                                             ? 0U : 
                                            (((IData)(this->__PVT__valid_o) 
                                              & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__y_pop_w)))
                                              ? this->__PVT__data_out_o
                                              : 0U)));
    this->__PVT__rd_skid_q = ((~ (IData)(vlTOPp->rst_i)) 
                              & ((~ (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q)) 
                                 & ((IData)(this->__PVT__valid_o) 
                                    & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__y_pop_w)))));
    if (vlTOPp->rst_i) {
        this->__PVT__cx_rd_ptr_q = 0U;
    } else {
        if (((1U < this->__PVT__count_q) & ((~ (IData)(this->__PVT__valid_o)) 
                                            | ((IData)(this->__PVT__valid_o) 
                                               & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__y_pop_w))))) {
            this->__PVT__cx_rd_ptr_q = this->__PVT__cx_rd_ptr_r;
        }
    }
    this->__PVT__rd_q = ((~ (IData)(vlTOPp->rst_i)) 
                         & ((~ (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q)) 
                            & (1U < this->__PVT__count_q)));
    if (vlTOPp->rst_i) {
        this->__Vdly__cx_idx_q = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
            this->__Vdly__cx_idx_q = 0U;
        } else {
            if (((1U < this->__PVT__count_q) & ((~ (IData)(this->__PVT__valid_o)) 
                                                | ((IData)(this->__PVT__valid_o) 
                                                   & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__y_pop_w))))) {
                this->__Vdly__cx_idx_q = (0xffU & ((IData)(1U) 
                                                   + (IData)(this->__PVT__cx_idx_q)));
            }
        }
    }
    if (vlTOPp->rst_i) {
        this->__PVT__rd_ptr_q = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
            this->__PVT__rd_ptr_q = 0U;
        } else {
            if (((1U < this->__PVT__count_q) & ((~ (IData)(this->__PVT__valid_o)) 
                                                | ((IData)(this->__PVT__valid_o) 
                                                   & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__y_pop_w))))) {
                this->__PVT__rd_ptr_q = this->__PVT__rd_ptr_next_w;
            }
        }
    }
    if (vlTOPp->rst_i) {
        this->__Vdly__cx_half_q = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
            this->__Vdly__cx_half_q = 0U;
        } else {
            if ((((1U < this->__PVT__count_q) & ((~ (IData)(this->__PVT__valid_o)) 
                                                 | ((IData)(this->__PVT__valid_o) 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__y_pop_w)))) 
                 & (0xffU == (IData)(this->__PVT__cx_idx_q)))) {
                this->__Vdly__cx_half_q = (3U & ((IData)(1U) 
                                                 + (IData)(this->__PVT__cx_half_q)));
            }
        }
    }
    this->__PVT__cx_half_q = this->__Vdly__cx_half_q;
    this->__PVT__cx_idx_q = this->__Vdly__cx_idx_q;
    this->__PVT__write_next_w = (0xffU & ((IData)(1U) 
                                          + (IData)(this->__PVT__wr_ptr_q)));
    this->__Vcellinp__u_ram__addr0_i = ((0xc0U & (IData)(this->__PVT__wr_ptr_q)) 
                                        | (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_idx_o));
    this->__PVT__data_out_o = ((IData)(this->__PVT__rd_skid_q)
                                ? this->__PVT__rd_skid_data_q
                                : u_ram->__PVT__ram_read1_q);
    this->__PVT__valid_o = ((IData)(this->__PVT__rd_skid_q) 
                            | (IData)(this->__PVT__rd_q));
    this->__PVT__rd_ptr_next_w = (0xffU & ((IData)(1U) 
                                           + (IData)(this->__PVT__rd_ptr_q)));
    this->__Vtableidx2 = this->__PVT__cx_idx_q;
    this->__PVT__cx_rd_ptr_r = this->__Vtable2___PVT__cx_rd_ptr_r
        [this->__Vtableidx2];
    this->__PVT__count_q = ((IData)(vlTOPp->rst_i) ? 0U
                             : ((IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q)
                                 ? 0U : this->__PVT__count_r));
}

VL_INLINE_OPT void Vjpeg_core_jpeg_output_cx_ram::_combo__TOP__jpeg_core__u_jpeg_output__u_ram_cr__8(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vjpeg_core_jpeg_output_cx_ram::_combo__TOP__jpeg_core__u_jpeg_output__u_ram_cr__8\n"); );
    Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__count_r = this->__PVT__count_q;
    if (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__y_pop_w) 
         & (IData)(this->__PVT__valid_o))) {
        this->__PVT__count_r = (this->__PVT__count_r 
                                - (IData)(1U));
    }
    if (vlSymsp->TOP__jpeg_core__u_jpeg_output.__Vcellinp__u_ram_cr__push_i) {
        this->__PVT__count_r = (this->__PVT__count_r 
                                + ((2U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q))
                                    ? 4U : 1U));
    }
}
