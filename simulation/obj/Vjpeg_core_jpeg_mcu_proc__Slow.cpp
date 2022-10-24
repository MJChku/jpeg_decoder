// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "Vjpeg_core_jpeg_mcu_proc.h"
#include "Vjpeg_core__Syms.h"

#include "verilated_dpi.h"

//==========

Vjpeg_core_jpeg_mcu_proc::Vjpeg_core_jpeg_mcu_proc(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vjpeg_core_jpeg_mcu_proc::__Vconfigure(Vjpeg_core__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vjpeg_core_jpeg_mcu_proc::~Vjpeg_core_jpeg_mcu_proc() {
}

void Vjpeg_core_jpeg_mcu_proc::_settle__TOP__jpeg_core__u_jpeg_mcu_proc__1(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_mcu_proc::_settle__TOP__jpeg_core__u_jpeg_mcu_proc__1\n"); );
    Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_x_next_w 
        = (0xffffU & ((IData)(1U) + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_x_q)));
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__lookup_table_r 
        = ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__first_q)
            ? ((0U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_type_q))
                ? 0U : 2U) : ((0U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_type_q))
                               ? 1U : 3U));
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__outport_id_o 
        = (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_type_q) 
            << 0x1eU) | ((0x3fff0000U & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_y_q) 
                                         << 0x10U)) 
                         | (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_x_q)));
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__1__bits 
        = (0xfU & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_q));
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__1__w 
        = ((0xfU >= ((IData)(0x10U) - (0xfU & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_q))))
            ? (0xffffU & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__input_data_q) 
                          >> ((IData)(0x10U) - (0xfU 
                                                & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_q)))))
            : 0U);
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__1__code 
        = vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__1__w;
    if (((0U == ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__1__code) 
                 & ((IData)(1U) << (0x1fU & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__1__bits) 
                                             - (IData)(1U)))))) 
         & (0U != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__1__bits)))) {
        vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__1__code 
            = (0xffffU & ((IData)(1U) + (VL_EXTENDS_II(16,16, (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__1__code)) 
                                         | ((IData)(0xffffffffU) 
                                            << (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__1__bits)))));
    }
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__1__Vfuncout 
        = vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__1__code;
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__0__bits 
        = (0xfU & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_q));
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__0__w 
        = ((0xfU >= ((IData)(0x10U) - (0xfU & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_q))))
            ? (0xffffU & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__input_data_q) 
                          >> ((IData)(0x10U) - (0xfU 
                                                & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_q)))))
            : 0U);
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__0__code 
        = vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__0__w;
    if (((0U == ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__0__code) 
                 & ((IData)(1U) << (0x1fU & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__0__bits) 
                                             - (IData)(1U)))))) 
         & (0U != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__0__bits)))) {
        vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__0__code 
            = (0xffffU & ((IData)(1U) + (VL_EXTENDS_II(16,16, (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__0__code)) 
                                         | ((IData)(0xffffffffU) 
                                            << (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__0__bits)))));
    }
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__0__Vfuncout 
        = vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__0__code;
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_r 
        = (0xffffU & ((0U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_idx_q))
                       ? ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__0__Vfuncout) 
                          + vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__prev_dc_coeff_q
                          [vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_type_q])
                       : (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__1__Vfuncout)));
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__outport_valid_o 
        = ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__push_q) 
           & (0x40U > (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_idx_q)));
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__pop_bits_r = 0U;
    if ((3U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q))) {
        vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__pop_bits_r 
            = (0x3fU & ((0U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_idx_q))
                         ? ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__lookup_width_q) 
                            + (0xfU & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_q)))
                         : (((0U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_q)) 
                             | (0xf0U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_q)))
                             ? (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__lookup_width_q)
                             : ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__lookup_width_q) 
                                + (0xfU & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_q))))));
    }
}

void Vjpeg_core_jpeg_mcu_proc::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_mcu_proc::_ctor_var_reset\n"); );
    // Body
    __PVT__clk_i = VL_RAND_RESET_I(1);
    __PVT__rst_i = VL_RAND_RESET_I(1);
    __PVT__img_start_i = VL_RAND_RESET_I(1);
    __PVT__img_end_i = VL_RAND_RESET_I(1);
    __PVT__img_width_i = VL_RAND_RESET_I(16);
    __PVT__img_height_i = VL_RAND_RESET_I(16);
    __PVT__img_mode_i = VL_RAND_RESET_I(2);
    __PVT__inport_valid_i = VL_RAND_RESET_I(1);
    __PVT__inport_data_i = VL_RAND_RESET_I(32);
    __PVT__inport_last_i = VL_RAND_RESET_I(1);
    __PVT__lookup_valid_i = VL_RAND_RESET_I(1);
    __PVT__lookup_width_i = VL_RAND_RESET_I(5);
    __PVT__lookup_value_i = VL_RAND_RESET_I(8);
    __PVT__outport_blk_space_i = VL_RAND_RESET_I(1);
    __PVT__inport_pop_o = VL_RAND_RESET_I(6);
    __PVT__lookup_req_o = VL_RAND_RESET_I(1);
    __PVT__lookup_table_o = VL_RAND_RESET_I(2);
    __PVT__lookup_input_o = VL_RAND_RESET_I(16);
    __PVT__outport_valid_o = VL_RAND_RESET_I(1);
    __PVT__outport_data_o = VL_RAND_RESET_I(16);
    __PVT__outport_idx_o = VL_RAND_RESET_I(6);
    __PVT__outport_id_o = VL_RAND_RESET_I(32);
    __PVT__outport_eob_o = VL_RAND_RESET_I(1);
    __PVT__start_block_w = VL_RAND_RESET_I(1);
    __PVT__state_q = VL_RAND_RESET_I(5);
    __PVT__next_state_r = VL_RAND_RESET_I(5);
    __PVT__code_bits_q = VL_RAND_RESET_I(8);
    __PVT__coeff_idx_q = VL_RAND_RESET_I(8);
    __PVT__first_q = VL_RAND_RESET_I(1);
    __PVT__code_q = VL_RAND_RESET_I(8);
    __PVT__lookup_width_q = VL_RAND_RESET_I(5);
    __PVT__input_data_q = VL_RAND_RESET_I(16);
    __PVT__pop_bits_r = VL_RAND_RESET_I(6);
    __PVT__lookup_table_r = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        __PVT__prev_dc_coeff_q[__Vi0] = VL_RAND_RESET_I(16);
    }
    __PVT__dc_coeff_q = VL_RAND_RESET_I(16);
    __PVT__coeff_r = VL_RAND_RESET_I(16);
    __PVT__coeff_q = VL_RAND_RESET_I(16);
    __PVT__push_q = VL_RAND_RESET_I(1);
    __PVT__u_id__DOT__block_type_q = VL_RAND_RESET_I(2);
    __PVT__u_id__DOT__type_idx_q = VL_RAND_RESET_I(3);
    __PVT__u_id__DOT__block_x_q = VL_RAND_RESET_I(16);
    __PVT__u_id__DOT__block_y_q = VL_RAND_RESET_I(16);
    __PVT__u_id__DOT__x_idx_q = VL_RAND_RESET_I(16);
    __PVT__u_id__DOT__y_idx_q = VL_RAND_RESET_I(16);
    __PVT__u_id__DOT__block_x_next_w = VL_RAND_RESET_I(16);
    __PVT__u_id__DOT__end_of_image_q = VL_RAND_RESET_I(1);
    __Vfunc_decode_number__0__Vfuncout = VL_RAND_RESET_I(16);
    __Vfunc_decode_number__0__w = VL_RAND_RESET_I(16);
    __Vfunc_decode_number__0__bits = VL_RAND_RESET_I(5);
    __Vfunc_decode_number__0__code = VL_RAND_RESET_I(16);
    __Vfunc_decode_number__1__Vfuncout = VL_RAND_RESET_I(16);
    __Vfunc_decode_number__1__w = VL_RAND_RESET_I(16);
    __Vfunc_decode_number__1__bits = VL_RAND_RESET_I(5);
    __Vfunc_decode_number__1__code = VL_RAND_RESET_I(16);
}
