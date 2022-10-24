// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "Vjpeg_core_jpeg_dqt.h"
#include "Vjpeg_core__Syms.h"

#include "verilated_dpi.h"

//==========

bool Vjpeg_core_jpeg_dqt::get_valid() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_dqt::get_valid\n"); );
    // Variables
    VL_OUT8(get_valid__Vfuncrtn,0,0);
    Vjpeg_core__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    get_valid__Vfuncrtn = vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_valid_q;
    // Final
    return (get_valid__Vfuncrtn);
}

uint32_t Vjpeg_core_jpeg_dqt::get_sample() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_dqt::get_sample\n"); );
    // Variables
    VL_OUT16(get_sample__Vfuncrtn,15,0);
    Vjpeg_core__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    get_sample__Vfuncrtn = vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_data_q;
    // Final
    return (get_sample__Vfuncrtn);
}

uint32_t Vjpeg_core_jpeg_dqt::get_sample_idx() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_dqt::get_sample_idx\n"); );
    // Variables
    VL_OUT8(get_sample_idx__Vfuncrtn,5,0);
    Vjpeg_core__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    get_sample_idx__Vfuncrtn = vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_idx_q;
    // Final
    return (get_sample_idx__Vfuncrtn);
}

VL_INLINE_OPT void Vjpeg_core_jpeg_dqt::_settle__TOP__jpeg_core__u_jpeg_dqt__2(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_dqt::_settle__TOP__jpeg_core__u_jpeg_dqt__2\n"); );
    Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__dqt_write_w 
        = ((IData)(vlSymsp->TOP__jpeg_core.__PVT__dqt_cfg_valid_w) 
           & (0xffU != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__idx_q)));
    vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__dqt_table_addr_w 
        = ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__dqt_write_w)
            ? (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__cfg_table_q) 
                << 6U) | (0x3fU & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__idx_q)))
            : ((vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__table_src_w
                [(3U & (vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__outport_id_o 
                        >> 0x1eU))] << 6U) | (0x3fU 
                                              & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_idx_q))));
}

VL_INLINE_OPT void Vjpeg_core_jpeg_dqt::_sequent__TOP__jpeg_core__u_jpeg_dqt__3(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_dqt::_sequent__TOP__jpeg_core__u_jpeg_dqt__3\n"); );
    Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*5:0*/ __Vfunc_dezigzag__0__Vfuncout;
    CData/*5:0*/ __Vfunc_dezigzag__0__idx;
    CData/*5:0*/ __Vfunc_dezigzag__0__out_idx;
    CData/*7:0*/ __Vdly__idx_q;
    CData/*7:0*/ __Vdlyvdim0__table_dqt_q__v0;
    CData/*7:0*/ __Vdlyvval__table_dqt_q__v0;
    CData/*0:0*/ __Vdlyvset__table_dqt_q__v0;
    // Body
    __Vdly__idx_q = vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__idx_q;
    __Vdlyvset__table_dqt_q__v0 = 0U;
    if (vlTOPp->rst_i) {
        __Vdly__idx_q = 0xffU;
    } else {
        if (((IData)(vlSymsp->TOP__jpeg_core.__PVT__dqt_cfg_valid_w) 
             & ((IData)(vlTOPp->inport_last_i) | (1U 
                                                  == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__length_q))))) {
            __Vdly__idx_q = 0xffU;
        } else {
            if (vlSymsp->TOP__jpeg_core.__PVT__dqt_cfg_valid_w) {
                __Vdly__idx_q = (0xffU & ((IData)(1U) 
                                          + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__idx_q)));
            }
        }
    }
    if (vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__dqt_write_w) {
        __Vdlyvval__table_dqt_q__v0 = vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__data_r;
        __Vdlyvset__table_dqt_q__v0 = 1U;
        __Vdlyvdim0__table_dqt_q__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__dqt_table_addr_w;
    }
    vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_data_q 
        = ((IData)(vlTOPp->rst_i) ? 0U : (0xffffU & 
                                          ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__inport_data_q) 
                                           * (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__dqt_entry_q))));
    __Vfunc_dezigzag__0__idx = vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__inport_idx_q;
    __Vfunc_dezigzag__0__out_idx = ((0x20U & (IData)(__Vfunc_dezigzag__0__idx))
                                     ? ((0x10U & (IData)(__Vfunc_dezigzag__0__idx))
                                         ? ((8U & (IData)(__Vfunc_dezigzag__0__idx))
                                             ? ((4U 
                                                 & (IData)(__Vfunc_dezigzag__0__idx))
                                                 ? 
                                                ((2U 
                                                  & (IData)(__Vfunc_dezigzag__0__idx))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_dezigzag__0__idx))
                                                   ? 0x3fU
                                                   : 0x3eU)
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_dezigzag__0__idx))
                                                   ? 0x37U
                                                   : 0x2fU))
                                                 : 
                                                ((2U 
                                                  & (IData)(__Vfunc_dezigzag__0__idx))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_dezigzag__0__idx))
                                                   ? 0x36U
                                                   : 0x3dU)
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_dezigzag__0__idx))
                                                   ? 0x3cU
                                                   : 0x35U)))
                                             : ((4U 
                                                 & (IData)(__Vfunc_dezigzag__0__idx))
                                                 ? 
                                                ((2U 
                                                  & (IData)(__Vfunc_dezigzag__0__idx))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_dezigzag__0__idx))
                                                   ? 0x2eU
                                                   : 0x27U)
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_dezigzag__0__idx))
                                                   ? 0x1fU
                                                   : 0x26U))
                                                 : 
                                                ((2U 
                                                  & (IData)(__Vfunc_dezigzag__0__idx))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_dezigzag__0__idx))
                                                   ? 0x2dU
                                                   : 0x34U)
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_dezigzag__0__idx))
                                                   ? 0x3bU
                                                   : 0x3aU))))
                                         : ((8U & (IData)(__Vfunc_dezigzag__0__idx))
                                             ? ((4U 
                                                 & (IData)(__Vfunc_dezigzag__0__idx))
                                                 ? 
                                                ((2U 
                                                  & (IData)(__Vfunc_dezigzag__0__idx))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_dezigzag__0__idx))
                                                   ? 0x33U
                                                   : 0x2cU)
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_dezigzag__0__idx))
                                                   ? 0x25U
                                                   : 0x1eU))
                                                 : 
                                                ((2U 
                                                  & (IData)(__Vfunc_dezigzag__0__idx))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_dezigzag__0__idx))
                                                   ? 0x17U
                                                   : 0xfU)
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_dezigzag__0__idx))
                                                   ? 0x16U
                                                   : 0x1dU)))
                                             : ((4U 
                                                 & (IData)(__Vfunc_dezigzag__0__idx))
                                                 ? 
                                                ((2U 
                                                  & (IData)(__Vfunc_dezigzag__0__idx))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_dezigzag__0__idx))
                                                   ? 0x24U
                                                   : 0x2bU)
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_dezigzag__0__idx))
                                                   ? 0x32U
                                                   : 0x39U))
                                                 : 
                                                ((2U 
                                                  & (IData)(__Vfunc_dezigzag__0__idx))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_dezigzag__0__idx))
                                                   ? 0x38U
                                                   : 0x31U)
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_dezigzag__0__idx))
                                                   ? 0x2aU
                                                   : 0x23U)))))
                                     : ((0x10U & (IData)(__Vfunc_dezigzag__0__idx))
                                         ? ((8U & (IData)(__Vfunc_dezigzag__0__idx))
                                             ? ((4U 
                                                 & (IData)(__Vfunc_dezigzag__0__idx))
                                                 ? 
                                                ((2U 
                                                  & (IData)(__Vfunc_dezigzag__0__idx))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_dezigzag__0__idx))
                                                   ? 0x1cU
                                                   : 0x15U)
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_dezigzag__0__idx))
                                                   ? 0xeU
                                                   : 7U))
                                                 : 
                                                ((2U 
                                                  & (IData)(__Vfunc_dezigzag__0__idx))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_dezigzag__0__idx))
                                                   ? 6U
                                                   : 0xdU)
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_dezigzag__0__idx))
                                                   ? 0x14U
                                                   : 0x1bU)))
                                             : ((4U 
                                                 & (IData)(__Vfunc_dezigzag__0__idx))
                                                 ? 
                                                ((2U 
                                                  & (IData)(__Vfunc_dezigzag__0__idx))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_dezigzag__0__idx))
                                                   ? 0x22U
                                                   : 0x29U)
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_dezigzag__0__idx))
                                                   ? 0x30U
                                                   : 0x28U))
                                                 : 
                                                ((2U 
                                                  & (IData)(__Vfunc_dezigzag__0__idx))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_dezigzag__0__idx))
                                                   ? 0x21U
                                                   : 0x1aU)
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_dezigzag__0__idx))
                                                   ? 0x13U
                                                   : 0xcU))))
                                         : ((8U & (IData)(__Vfunc_dezigzag__0__idx))
                                             ? ((4U 
                                                 & (IData)(__Vfunc_dezigzag__0__idx))
                                                 ? 
                                                ((2U 
                                                  & (IData)(__Vfunc_dezigzag__0__idx))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_dezigzag__0__idx))
                                                   ? 5U
                                                   : 4U)
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_dezigzag__0__idx))
                                                   ? 0xbU
                                                   : 0x12U))
                                                 : 
                                                ((2U 
                                                  & (IData)(__Vfunc_dezigzag__0__idx))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_dezigzag__0__idx))
                                                   ? 0x19U
                                                   : 0x20U)
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_dezigzag__0__idx))
                                                   ? 0x18U
                                                   : 0x11U)))
                                             : ((4U 
                                                 & (IData)(__Vfunc_dezigzag__0__idx))
                                                 ? 
                                                ((2U 
                                                  & (IData)(__Vfunc_dezigzag__0__idx))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_dezigzag__0__idx))
                                                   ? 0xaU
                                                   : 3U)
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_dezigzag__0__idx))
                                                   ? 2U
                                                   : 9U))
                                                 : 
                                                ((2U 
                                                  & (IData)(__Vfunc_dezigzag__0__idx))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_dezigzag__0__idx))
                                                   ? 0x10U
                                                   : 8U)
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_dezigzag__0__idx))
                                                   ? 1U
                                                   : 0U))))));
    __Vfunc_dezigzag__0__Vfuncout = __Vfunc_dezigzag__0__out_idx;
    vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_idx_q 
        = ((IData)(vlTOPp->rst_i) ? 0U : (IData)(__Vfunc_dezigzag__0__Vfuncout));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__cfg_table_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__jpeg_core.__PVT__dqt_cfg_valid_w) 
             & (0xffU == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__idx_q)))) {
            vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__cfg_table_q 
                = (3U & (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__data_r));
        }
    }
    vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_valid_q 
        = ((~ (IData)(vlTOPp->rst_i)) & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__inport_valid_q) 
                                         & (~ (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q))));
    vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__idx_q 
        = __Vdly__idx_q;
    vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__dqt_entry_q 
        = vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__table_dqt_q
        [vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__dqt_table_addr_w];
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__inport_data_q = 0U;
        vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__inport_idx_q = 0U;
    } else {
        vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__inport_data_q 
            = vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_q;
        vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__inport_idx_q 
            = (0x3fU & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_idx_q));
    }
    vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__inport_valid_q 
        = ((~ (IData)(vlTOPp->rst_i)) & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__outport_valid_o) 
                                         & (~ (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q))));
    if (__Vdlyvset__table_dqt_q__v0) {
        vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__table_dqt_q[__Vdlyvdim0__table_dqt_q__v0] 
            = __Vdlyvval__table_dqt_q__v0;
    }
}

VL_INLINE_OPT void Vjpeg_core_jpeg_dqt::_sequent__TOP__jpeg_core__u_jpeg_dqt__4(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_dqt::_sequent__TOP__jpeg_core__u_jpeg_dqt__4\n"); );
    Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__table_src_w[2U] 
        = vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_cr_dqt_table_q;
    vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__table_src_w[1U] 
        = vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_cb_dqt_table_q;
    vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__table_src_w[0U] 
        = vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_y_dqt_table_q;
}

VL_INLINE_OPT void Vjpeg_core_jpeg_dqt::_sequent__TOP__jpeg_core__u_jpeg_dqt__5(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_dqt::_sequent__TOP__jpeg_core__u_jpeg_dqt__5\n"); );
    Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_id_q 
        = ((IData)(vlTOPp->rst_i) ? 0U : vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__inport_id_q);
    vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_eob_q 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__inport_eob_q));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__inport_id_q = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__outport_valid_o) {
            vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__inport_id_q 
                = vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__outport_id_o;
        }
    }
    vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__inport_eob_q 
        = ((~ (IData)(vlTOPp->rst_i)) & ((4U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q)) 
                                         | ((5U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q)) 
                                            & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__push_q))));
}
