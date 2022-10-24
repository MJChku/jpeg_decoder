// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "Vjpeg_core_jpeg_idct__U1.h"
#include "Vjpeg_core__Syms.h"

#include "verilated_dpi.h"

//==========

Vjpeg_core_jpeg_idct__U1::Vjpeg_core_jpeg_idct__U1(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    VL_CELL(u_input, Vjpeg_core_jpeg_idct_ram__U1);
    VL_CELL(u_transpose, Vjpeg_core_jpeg_idct_transpose__U1);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vjpeg_core_jpeg_idct__U1::__Vconfigure(Vjpeg_core__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vjpeg_core_jpeg_idct__U1::~Vjpeg_core_jpeg_idct__U1() {
}

void Vjpeg_core_jpeg_idct__U1::_settle__TOP__jpeg_core__u_jpeg_idct__1(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_idct__U1::_settle__TOP__jpeg_core__u_jpeg_idct__1\n"); );
    Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__valid_o 
        = (0U != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__count_q));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__accept_o 
        = (8U != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__count_q));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__idct_x_data_w 
        = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out
        [(7U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__ptr_q))];
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_data_o 
        = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__block_out
        [(7U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__ptr_q))];
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx 
        = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__ptr_q;
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__out_idx 
        = ((0x20U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
            ? ((0x10U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                ? ((8U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                    ? ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                        ? ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                            ? ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                ? 0x3fU : 0x37U) : 
                           ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                             ? 0x2fU : 0x27U)) : ((2U 
                                                   & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0x1fU
                                                    : 0x17U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0xfU
                                                    : 7U)))
                    : ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                        ? ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                            ? ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                ? 0x3eU : 0x36U) : 
                           ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                             ? 0x2eU : 0x26U)) : ((2U 
                                                   & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0x1eU
                                                    : 0x16U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0xeU
                                                    : 6U))))
                : ((8U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                    ? ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                        ? ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                            ? ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                ? 0x3dU : 0x35U) : 
                           ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                             ? 0x2dU : 0x25U)) : ((2U 
                                                   & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0x1dU
                                                    : 0x15U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0xdU
                                                    : 5U)))
                    : ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                        ? ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                            ? ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                ? 0x3cU : 0x34U) : 
                           ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                             ? 0x2cU : 0x24U)) : ((2U 
                                                   & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0x1cU
                                                    : 0x14U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0xcU
                                                    : 4U)))))
            : ((0x10U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                ? ((8U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                    ? ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                        ? ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                            ? ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                ? 0x3bU : 0x33U) : 
                           ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                             ? 0x2bU : 0x23U)) : ((2U 
                                                   & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0x1bU
                                                    : 0x13U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0xbU
                                                    : 3U)))
                    : ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                        ? ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                            ? ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                ? 0x3aU : 0x32U) : 
                           ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                             ? 0x2aU : 0x22U)) : ((2U 
                                                   & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0x1aU
                                                    : 0x12U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0xaU
                                                    : 2U))))
                : ((8U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                    ? ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                        ? ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                            ? ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                ? 0x39U : 0x31U) : 
                           ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                             ? 0x29U : 0x21U)) : ((2U 
                                                   & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0x19U
                                                    : 0x11U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 9U
                                                    : 1U)))
                    : ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                        ? ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                            ? ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                ? 0x38U : 0x30U) : 
                           ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                             ? 0x28U : 0x20U)) : ((2U 
                                                   & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0x18U
                                                    : 0x10U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 8U
                                                    : 0U))))));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__Vfuncout 
        = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__out_idx;
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_idx_o 
        = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__Vfuncout;
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_id_o 
        = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__ram_q
        [vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__rd_ptr_q];
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_0_1 
        = ((0xffff0000U & ((- (IData)((1U & (((- (IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val0_q))) 
                                              & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram0.__PVT__ram_read1_q)) 
                                             >> 0xfU)))) 
                           << 0x10U)) | ((- (IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val0_q))) 
                                         & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram0.__PVT__ram_read1_q)));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_2_3 
        = ((0xffff0000U & ((- (IData)((1U & (((- (IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val1_q))) 
                                              & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram1.__PVT__ram_read1_q)) 
                                             >> 0xfU)))) 
                           << 0x10U)) | ((- (IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val1_q))) 
                                         & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram1.__PVT__ram_read1_q)));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_4_5 
        = ((0xffff0000U & ((- (IData)((1U & (((- (IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val2_q))) 
                                              & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram2.__PVT__ram_read1_q)) 
                                             >> 0xfU)))) 
                           << 0x10U)) | ((- (IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val2_q))) 
                                         & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram2.__PVT__ram_read1_q)));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_6_7 
        = ((0xffff0000U & ((- (IData)((1U & (((- (IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val3_q))) 
                                              & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram3.__PVT__ram_read1_q)) 
                                             >> 0xfU)))) 
                           << 0x10U)) | ((- (IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val3_q))) 
                                         & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram3.__PVT__ram_read1_q)));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vcellinp__u_id_fifo__pop_i 
        = (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__valid_q) 
            >> 5U) & (0x3fU == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_idx_o)));
}

void Vjpeg_core_jpeg_idct__U1::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_idct__U1::_ctor_var_reset\n"); );
    // Body
    __PVT__clk_i = VL_RAND_RESET_I(1);
    __PVT__rst_i = VL_RAND_RESET_I(1);
    __PVT__img_start_i = VL_RAND_RESET_I(1);
    __PVT__img_end_i = VL_RAND_RESET_I(1);
    __PVT__inport_valid_i = VL_RAND_RESET_I(1);
    __PVT__inport_data_i = VL_RAND_RESET_I(16);
    __PVT__inport_idx_i = VL_RAND_RESET_I(6);
    __PVT__inport_eob_i = VL_RAND_RESET_I(1);
    __PVT__inport_id_i = VL_RAND_RESET_I(32);
    __PVT__outport_accept_i = VL_RAND_RESET_I(1);
    __PVT__inport_accept_o = VL_RAND_RESET_I(1);
    __PVT__outport_valid_o = VL_RAND_RESET_I(1);
    __PVT__outport_data_o = VL_RAND_RESET_I(32);
    __PVT__outport_idx_o = VL_RAND_RESET_I(6);
    __PVT__outport_id_o = VL_RAND_RESET_I(32);
    __PVT__input_ready_w = VL_RAND_RESET_I(1);
    __PVT__idct_x_data_w = VL_RAND_RESET_I(32);
    __Vcellinp__u_id_fifo__pop_i = VL_RAND_RESET_I(1);
    __PVT__u_id_fifo__DOT__accept_o = VL_RAND_RESET_I(1);
    __PVT__u_id_fifo__DOT__valid_o = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        __PVT__u_id_fifo__DOT__ram_q[__Vi0] = VL_RAND_RESET_I(32);
    }
    __PVT__u_id_fifo__DOT__rd_ptr_q = VL_RAND_RESET_I(3);
    __PVT__u_id_fifo__DOT__wr_ptr_q = VL_RAND_RESET_I(3);
    __PVT__u_id_fifo__DOT__count_q = VL_RAND_RESET_I(4);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_0_1 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_2_3 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_4_5 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_6_7 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__s0 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__s1 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__s2 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__s3 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__s4 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__s5 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__s6 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__s7 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul0_a = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul0_b = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul1_a = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul1_b = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul0 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul1 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg0_valid_q = VL_RAND_RESET_I(1);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg0_idx_q = VL_RAND_RESET_I(3);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_valid_q = VL_RAND_RESET_I(1);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_idx_q = VL_RAND_RESET_I(3);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t0 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t1 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t2 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t3 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t4 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t5 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t6 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t7 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg2_valid_q = VL_RAND_RESET_I(1);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg2_idx_q = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        __PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out_tmp = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__valid_q = VL_RAND_RESET_I(6);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__ptr_q = VL_RAND_RESET_I(6);
    __PVT__genblk2__DOT__u_idct_ifast_y__DOT__s0 = VL_RAND_RESET_I(32);
    __PVT__genblk2__DOT__u_idct_ifast_y__DOT__s1 = VL_RAND_RESET_I(32);
    __PVT__genblk2__DOT__u_idct_ifast_y__DOT__s2 = VL_RAND_RESET_I(32);
    __PVT__genblk2__DOT__u_idct_ifast_y__DOT__s3 = VL_RAND_RESET_I(32);
    __PVT__genblk2__DOT__u_idct_ifast_y__DOT__s4 = VL_RAND_RESET_I(32);
    __PVT__genblk2__DOT__u_idct_ifast_y__DOT__s5 = VL_RAND_RESET_I(32);
    __PVT__genblk2__DOT__u_idct_ifast_y__DOT__s6 = VL_RAND_RESET_I(32);
    __PVT__genblk2__DOT__u_idct_ifast_y__DOT__s7 = VL_RAND_RESET_I(32);
    __PVT__genblk2__DOT__u_idct_ifast_y__DOT__mul0_a = VL_RAND_RESET_I(32);
    __PVT__genblk2__DOT__u_idct_ifast_y__DOT__mul0_b = VL_RAND_RESET_I(32);
    __PVT__genblk2__DOT__u_idct_ifast_y__DOT__mul1_a = VL_RAND_RESET_I(32);
    __PVT__genblk2__DOT__u_idct_ifast_y__DOT__mul1_b = VL_RAND_RESET_I(32);
    __PVT__genblk2__DOT__u_idct_ifast_y__DOT__mul0 = VL_RAND_RESET_I(32);
    __PVT__genblk2__DOT__u_idct_ifast_y__DOT__mul1 = VL_RAND_RESET_I(32);
    __PVT__genblk2__DOT__u_idct_ifast_y__DOT__out_stg0_valid_q = VL_RAND_RESET_I(1);
    __PVT__genblk2__DOT__u_idct_ifast_y__DOT__out_stg0_idx_q = VL_RAND_RESET_I(3);
    __PVT__genblk2__DOT__u_idct_ifast_y__DOT__out_stg1_valid_q = VL_RAND_RESET_I(1);
    __PVT__genblk2__DOT__u_idct_ifast_y__DOT__out_stg1_idx_q = VL_RAND_RESET_I(3);
    __PVT__genblk2__DOT__u_idct_ifast_y__DOT__o_t0 = VL_RAND_RESET_I(32);
    __PVT__genblk2__DOT__u_idct_ifast_y__DOT__o_t1 = VL_RAND_RESET_I(32);
    __PVT__genblk2__DOT__u_idct_ifast_y__DOT__o_t2 = VL_RAND_RESET_I(32);
    __PVT__genblk2__DOT__u_idct_ifast_y__DOT__o_t3 = VL_RAND_RESET_I(32);
    __PVT__genblk2__DOT__u_idct_ifast_y__DOT__o_t4 = VL_RAND_RESET_I(32);
    __PVT__genblk2__DOT__u_idct_ifast_y__DOT__o_t5 = VL_RAND_RESET_I(32);
    __PVT__genblk2__DOT__u_idct_ifast_y__DOT__o_t6 = VL_RAND_RESET_I(32);
    __PVT__genblk2__DOT__u_idct_ifast_y__DOT__o_t7 = VL_RAND_RESET_I(32);
    __PVT__genblk2__DOT__u_idct_ifast_y__DOT__out_stg2_valid_q = VL_RAND_RESET_I(1);
    __PVT__genblk2__DOT__u_idct_ifast_y__DOT__out_stg2_idx_q = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        __PVT__genblk2__DOT__u_idct_ifast_y__DOT__block_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    __PVT__genblk2__DOT__u_idct_ifast_y__DOT__block_out_tmp = VL_RAND_RESET_I(32);
    __PVT__genblk2__DOT__u_idct_ifast_y__DOT__valid_q = VL_RAND_RESET_I(6);
    __PVT__genblk2__DOT__u_idct_ifast_y__DOT__ptr_q = VL_RAND_RESET_I(6);
    __Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__Vfuncout = VL_RAND_RESET_I(6);
    __Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx = VL_RAND_RESET_I(6);
    __Vfunc_genblk2__DOT__u_idct_ifast_y__DOT__ptr_conv__0__out_idx = VL_RAND_RESET_I(6);
    __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__valid_q = VL_RAND_RESET_I(6);
    __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__ptr_q = VL_RAND_RESET_I(6);
}
