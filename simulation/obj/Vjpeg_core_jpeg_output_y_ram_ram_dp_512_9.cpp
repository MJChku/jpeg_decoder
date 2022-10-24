// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "Vjpeg_core_jpeg_output_y_ram_ram_dp_512_9.h"
#include "Vjpeg_core__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vjpeg_core_jpeg_output_y_ram_ram_dp_512_9::_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_y__u_ram__1(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vjpeg_core_jpeg_output_y_ram_ram_dp_512_9::_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_y__u_ram__1\n"); );
    Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvset__ram__v0;
    SData/*8:0*/ __Vdlyvdim0__ram__v0;
    IData/*31:0*/ __Vdlyvval__ram__v0;
    // Body
    __Vdlyvset__ram__v0 = 0U;
    vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y__u_ram.__PVT__ram_read0_q 
        = vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y__u_ram.ram
        [vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__Vcellinp__u_ram__addr0_i];
    if (vlSymsp->TOP__jpeg_core__u_jpeg_output.__Vcellinp__u_ram_y__push_i) {
        __Vdlyvval__ram__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_data_o;
        __Vdlyvset__ram__v0 = 1U;
        __Vdlyvdim0__ram__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__Vcellinp__u_ram__addr0_i;
    }
    vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y__u_ram.__PVT__ram_read1_q 
        = vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y__u_ram.ram
        [vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__rd_ptr_q];
    if (__Vdlyvset__ram__v0) {
        vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y__u_ram.ram[__Vdlyvdim0__ram__v0] 
            = __Vdlyvval__ram__v0;
    }
}
