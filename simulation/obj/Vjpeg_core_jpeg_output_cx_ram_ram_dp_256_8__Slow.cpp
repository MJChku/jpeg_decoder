// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8.h"
#include "Vjpeg_core__Syms.h"

#include "verilated_dpi.h"

//==========

Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8::Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8::__Vconfigure(Vjpeg_core__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8::~Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8() {
}

void Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8::_ctor_var_reset\n"); );
    // Body
    __PVT__clk0_i = VL_RAND_RESET_I(1);
    __PVT__rst0_i = VL_RAND_RESET_I(1);
    __PVT__addr0_i = VL_RAND_RESET_I(8);
    __PVT__data0_i = VL_RAND_RESET_I(32);
    __PVT__wr0_i = VL_RAND_RESET_I(1);
    __PVT__clk1_i = VL_RAND_RESET_I(1);
    __PVT__rst1_i = VL_RAND_RESET_I(1);
    __PVT__addr1_i = VL_RAND_RESET_I(8);
    __PVT__data1_i = VL_RAND_RESET_I(32);
    __PVT__wr1_i = VL_RAND_RESET_I(1);
    __PVT__data0_o = VL_RAND_RESET_I(32);
    __PVT__data1_o = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    __PVT__ram_read0_q = VL_RAND_RESET_I(32);
    __PVT__ram_read1_q = VL_RAND_RESET_I(32);
    __Vdlyvdim0__ram__v0 = 0;
    __Vdlyvval__ram__v0 = VL_RAND_RESET_I(32);
    __Vdlyvset__ram__v0 = 0;
}
