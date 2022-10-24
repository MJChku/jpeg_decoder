// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "Vjpeg_core_jpeg_idct_ram_dp.h"
#include "Vjpeg_core__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vjpeg_core_jpeg_idct_ram_dp::_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__u_ram0__1(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vjpeg_core_jpeg_idct_ram_dp::_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__u_ram0__1\n"); );
    Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__ram__v0 = 0U;
    this->__PVT__ram_read1_q = this->ram[vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__Vcellinp__u_ram0__addr1_i];
    this->__PVT__ram_read0_q = this->ram[vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr_ptr_w];
    if (vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr0_w) {
        this->__Vdlyvval__ram__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_data_q;
        this->__Vdlyvset__ram__v0 = 1U;
        this->__Vdlyvdim0__ram__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr_ptr_w;
    }
    if (this->__Vdlyvset__ram__v0) {
        this->ram[this->__Vdlyvdim0__ram__v0] = this->__Vdlyvval__ram__v0;
    }
}

VL_INLINE_OPT void Vjpeg_core_jpeg_idct_ram_dp::_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__u_ram1__2(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vjpeg_core_jpeg_idct_ram_dp::_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__u_ram1__2\n"); );
    Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__ram__v0 = 0U;
    this->__PVT__ram_read1_q = this->ram[vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__Vcellinp__u_ram1__addr1_i];
    this->__PVT__ram_read0_q = this->ram[vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr_ptr_w];
    if (vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr1_w) {
        this->__Vdlyvval__ram__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_data_q;
        this->__Vdlyvset__ram__v0 = 1U;
        this->__Vdlyvdim0__ram__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr_ptr_w;
    }
    if (this->__Vdlyvset__ram__v0) {
        this->ram[this->__Vdlyvdim0__ram__v0] = this->__Vdlyvval__ram__v0;
    }
}

VL_INLINE_OPT void Vjpeg_core_jpeg_idct_ram_dp::_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__u_ram2__3(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vjpeg_core_jpeg_idct_ram_dp::_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__u_ram2__3\n"); );
    Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__ram__v0 = 0U;
    this->__PVT__ram_read1_q = this->ram[vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__Vcellinp__u_ram2__addr1_i];
    this->__PVT__ram_read0_q = this->ram[vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr_ptr_w];
    if (vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr2_w) {
        this->__Vdlyvval__ram__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_data_q;
        this->__Vdlyvset__ram__v0 = 1U;
        this->__Vdlyvdim0__ram__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr_ptr_w;
    }
    if (this->__Vdlyvset__ram__v0) {
        this->ram[this->__Vdlyvdim0__ram__v0] = this->__Vdlyvval__ram__v0;
    }
}

VL_INLINE_OPT void Vjpeg_core_jpeg_idct_ram_dp::_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__u_ram3__4(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vjpeg_core_jpeg_idct_ram_dp::_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__u_ram3__4\n"); );
    Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__ram__v0 = 0U;
    this->__PVT__ram_read1_q = this->ram[vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__Vcellinp__u_ram3__addr1_i];
    this->__PVT__ram_read0_q = this->ram[vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr_ptr_w];
    if (vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr3_w) {
        this->__Vdlyvval__ram__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_data_q;
        this->__Vdlyvset__ram__v0 = 1U;
        this->__Vdlyvdim0__ram__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr_ptr_w;
    }
    if (this->__Vdlyvset__ram__v0) {
        this->ram[this->__Vdlyvdim0__ram__v0] = this->__Vdlyvval__ram__v0;
    }
}
