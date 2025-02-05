// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vjpeg_core.h for the primary calling header

#ifndef VERILATED_VJPEG_CORE_JPEG_OUTPUT_CX_RAM_RAM_DP_256_8_H_
#define VERILATED_VJPEG_CORE_JPEG_OUTPUT_CX_RAM_RAM_DP_256_8_H_  // guard

#include "verilated_heavy.h"
#include "Vjpeg_core__Dpi.h"

//==========

class Vjpeg_core__Syms;
class Vjpeg_core_VerilatedVcd;


//----------

VL_MODULE(Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8) {
  public:
    
    // PORTS
    VL_IN8(__PVT__clk0_i,0,0);
    VL_IN8(__PVT__clk1_i,0,0);
    VL_IN8(__PVT__rst0_i,0,0);
    VL_IN8(__PVT__addr0_i,7,0);
    VL_IN8(__PVT__wr0_i,0,0);
    VL_IN8(__PVT__rst1_i,0,0);
    VL_IN8(__PVT__addr1_i,7,0);
    VL_IN8(__PVT__wr1_i,0,0);
    VL_IN(__PVT__data0_i,31,0);
    VL_IN(__PVT__data1_i,31,0);
    VL_OUT(__PVT__data0_o,31,0);
    VL_OUT(__PVT__data1_o,31,0);
    
    // LOCAL SIGNALS
    IData/*31:0*/ __PVT__ram_read0_q;
    IData/*31:0*/ __PVT__ram_read1_q;
    VlUnpacked<IData/*31:0*/, 256> ram;
    
    // LOCAL VARIABLES
    CData/*7:0*/ __Vdlyvdim0__ram__v0;
    CData/*0:0*/ __Vdlyvset__ram__v0;
    IData/*31:0*/ __Vdlyvval__ram__v0;
    
    // INTERNAL VARIABLES
  private:
    Vjpeg_core__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8);  ///< Copying not allowed
  public:
    Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8(const char* name = "TOP");
    ~Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8();
    
    // INTERNAL METHODS
    void __Vconfigure(Vjpeg_core__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cb__u_ram__1(Vjpeg_core__Syms* __restrict vlSymsp);
    void _sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cr__u_ram__2(Vjpeg_core__Syms* __restrict vlSymsp);
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
