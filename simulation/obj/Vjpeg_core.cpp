// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "Vjpeg_core.h"
#include "Vjpeg_core__Syms.h"

#include "verilated_dpi.h"

//==========

VerilatedContext* Vjpeg_core::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void Vjpeg_core::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vjpeg_core::eval\n"); );
    Vjpeg_core__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("../src_v/../src_v/jpeg_core.v", 32, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
            } else {
                __Vchange = _change_request(vlSymsp);
            }
        } while (VL_UNLIKELY(__Vchange));
    }
    
    void Vjpeg_core::_eval_initial_loop(Vjpeg_core__Syms* __restrict vlSymsp) {
        vlSymsp->__Vm_didInit = true;
        _eval_initial(vlSymsp);
        vlSymsp->__Vm_activity = true;
        // Evaluate till stable
        int __VclockLoop = 0;
        QData __Vchange = 1;
        do {
            _eval_settle(vlSymsp);
            _eval(vlSymsp);
            if (VL_UNLIKELY(++__VclockLoop > 100)) {
                // About to fail, so enable debug to see what's not settling.
                // Note you must run make with OPT=-DVL_DEBUG for debug prints.
                int __Vsaved_debug = Verilated::debug();
                Verilated::debug(1);
                __Vchange = _change_request(vlSymsp);
                Verilated::debug(__Vsaved_debug);
                VL_FATAL_MT("../src_v/../src_v/jpeg_core.v", 32, "",
                    "Verilated model didn't DC converge\n"
                    "- See https://verilator.org/warn/DIDNOTCONVERGE");
                } else {
                    __Vchange = _change_request(vlSymsp);
                }
            } while (VL_UNLIKELY(__Vchange));
        }
        
        VL_INLINE_OPT void Vjpeg_core::_settle__TOP__2(Vjpeg_core__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vjpeg_core::_settle__TOP__2\n"); );
            Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
            // Body
            vlTOPp->inport_accept_o = (((3U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__byte_idx_q)) 
                                        | (IData)(vlTOPp->inport_last_i)) 
                                       & (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__inport_accept_w));
        }
        
        VL_INLINE_OPT void Vjpeg_core::_sequent__TOP__3(Vjpeg_core__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vjpeg_core::_sequent__TOP__3\n"); );
            Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
            // Body
            vlTOPp->outport_height_o = vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_height_q;
            vlTOPp->outport_pixel_b_o = vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__pixel_b_q;
            vlTOPp->outport_pixel_r_o = vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__pixel_r_q;
            vlTOPp->outport_pixel_g_o = vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__pixel_g_q;
            vlTOPp->outport_pixel_x_o = vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__pixel_x_q;
            vlTOPp->outport_pixel_y_o = vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__pixel_y_q;
            vlTOPp->outport_valid_o = vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__valid_q;
            vlTOPp->idle_o = vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__idle_q;
        }
        
        VL_INLINE_OPT void Vjpeg_core::_sequent__TOP__4(Vjpeg_core__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vjpeg_core::_sequent__TOP__4\n"); );
            Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
            // Body
            vlTOPp->outport_width_o = vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_width_q;
        }
        
        void Vjpeg_core::_eval(Vjpeg_core__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vjpeg_core::_eval\n"); );
            Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
            // Body
            if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
                vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0._sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0__1(vlSymsp);
                vlTOPp->__Vm_traceActivity[1U] = 1U;
                vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1._sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1__2(vlSymsp);
                vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2._sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2__3(vlSymsp);
                vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3._sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3__4(vlSymsp);
                vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram0._sequent__TOP__jpeg_core__u_jpeg_idct__u_input__u_ram0__1(vlSymsp);
                vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram1._sequent__TOP__jpeg_core__u_jpeg_idct__u_input__u_ram1__2(vlSymsp);
                vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram2._sequent__TOP__jpeg_core__u_jpeg_idct__u_input__u_ram2__3(vlSymsp);
                vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram3._sequent__TOP__jpeg_core__u_jpeg_idct__u_input__u_ram3__4(vlSymsp);
                vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y__u_ram._sequent__TOP__jpeg_core__u_jpeg_output__u_ram_y__u_ram__1(vlSymsp);
                vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb__u_ram._sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cb__u_ram__1(vlSymsp);
                vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr__u_ram._sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cr__u_ram__2(vlSymsp);
                vlSymsp->TOP__jpeg_core__u_jpeg_dqt._sequent__TOP__jpeg_core__u_jpeg_dqt__3(vlSymsp);
                vlSymsp->TOP__jpeg_core__u_jpeg_idct._sequent__TOP__jpeg_core__u_jpeg_idct__2(vlSymsp);
                vlSymsp->TOP__jpeg_core._sequent__TOP__jpeg_core__2(vlSymsp);
                vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose._sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__2(vlSymsp);
                vlSymsp->TOP__jpeg_core__u_jpeg_output._sequent__TOP__jpeg_core__u_jpeg_output__3(vlSymsp);
                vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input._sequent__TOP__jpeg_core__u_jpeg_idct__u_input__2(vlSymsp);
                vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc._sequent__TOP__jpeg_core__u_jpeg_mcu_proc__3(vlSymsp);
                vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb._sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cb__3(vlSymsp);
                vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr._sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cr__4(vlSymsp);
                vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y._sequent__TOP__jpeg_core__u_jpeg_output__u_ram_y__2(vlSymsp);
                vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer._sequent__TOP__jpeg_core__u_jpeg_bitbuffer__3(vlSymsp);
                vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3._sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3__5(vlSymsp);
                vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1._sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1__6(vlSymsp);
                vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2._sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2__7(vlSymsp);
                vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0._sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0__8(vlSymsp);
                vlTOPp->_sequent__TOP__3(vlSymsp);
                vlSymsp->TOP__jpeg_core__u_jpeg_dqt._sequent__TOP__jpeg_core__u_jpeg_dqt__4(vlSymsp);
                vlSymsp->TOP__jpeg_core__u_jpeg_idct._sequent__TOP__jpeg_core__u_jpeg_idct__3(vlSymsp);
                vlSymsp->TOP__jpeg_core._sequent__TOP__jpeg_core__3(vlSymsp);
                vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose._sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__3(vlSymsp);
                vlTOPp->_sequent__TOP__4(vlSymsp);
                vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc._sequent__TOP__jpeg_core__u_jpeg_mcu_proc__4(vlSymsp);
                vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer._sequent__TOP__jpeg_core__u_jpeg_bitbuffer__4(vlSymsp);
                vlSymsp->TOP__jpeg_core__u_jpeg_output._sequent__TOP__jpeg_core__u_jpeg_output__4(vlSymsp);
                vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb._sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cb__5(vlSymsp);
                vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr._sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cb__5(vlSymsp);
            }
            if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
                 | ((IData)(vlTOPp->rst_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__rst_i))))) {
                vlSymsp->TOP__jpeg_core__u_jpeg_output._sequent__TOP__jpeg_core__u_jpeg_output__5(vlSymsp);
                vlTOPp->__Vm_traceActivity[2U] = 1U;
                vlSymsp->TOP__jpeg_core__u_jpeg_idct._sequent__TOP__jpeg_core__u_jpeg_idct__4(vlSymsp);
                vlSymsp->TOP__jpeg_core__u_jpeg_output._sequent__TOP__jpeg_core__u_jpeg_output__6(vlSymsp);
            }
            vlSymsp->TOP__jpeg_core__u_jpeg_output._combo__TOP__jpeg_core__u_jpeg_output__7(vlSymsp);
            vlTOPp->__Vm_traceActivity[3U] = 1U;
            vlSymsp->TOP__jpeg_core._combo__TOP__jpeg_core__4(vlSymsp);
            vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y._combo__TOP__jpeg_core__u_jpeg_output__u_ram_y__3(vlSymsp);
            vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb._combo__TOP__jpeg_core__u_jpeg_output__u_ram_cb__7(vlSymsp);
            vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr._combo__TOP__jpeg_core__u_jpeg_output__u_ram_cr__8(vlSymsp);
            if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
                vlSymsp->TOP__jpeg_core__u_jpeg_idct._sequent__TOP__jpeg_core__u_jpeg_idct__5(vlSymsp);
                vlTOPp->__Vm_traceActivity[4U] = 1U;
                vlSymsp->TOP__jpeg_core__u_jpeg_dqt._sequent__TOP__jpeg_core__u_jpeg_dqt__5(vlSymsp);
                vlSymsp->TOP__jpeg_core._sequent__TOP__jpeg_core__5(vlSymsp);
                vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc._sequent__TOP__jpeg_core__u_jpeg_mcu_proc__5(vlSymsp);
                vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose._sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__4(vlSymsp);
                vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input._sequent__TOP__jpeg_core__u_jpeg_idct__u_input__3(vlSymsp);
            }
            vlSymsp->TOP__jpeg_core._combo__TOP__jpeg_core__6(vlSymsp);
            vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc._settle__TOP__jpeg_core__u_jpeg_mcu_proc__2(vlSymsp);
            vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer._settle__TOP__jpeg_core__u_jpeg_bitbuffer__2(vlSymsp);
            vlTOPp->_settle__TOP__2(vlSymsp);
            vlSymsp->TOP__jpeg_core__u_jpeg_dqt._settle__TOP__jpeg_core__u_jpeg_dqt__2(vlSymsp);
            // Final
            vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
            vlTOPp->__Vclklast__TOP__rst_i = vlTOPp->rst_i;
        }
        
        VL_INLINE_OPT QData Vjpeg_core::_change_request(Vjpeg_core__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vjpeg_core::_change_request\n"); );
            Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
            // Body
            return (vlTOPp->_change_request_1(vlSymsp));
        }
        
        VL_INLINE_OPT QData Vjpeg_core::_change_request_1(Vjpeg_core__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vjpeg_core::_change_request_1\n"); );
            Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
            // Body
            // Change detection
            QData __req = false;  // Logically a bool
            return __req;
        }
        
#ifdef VL_DEBUG
        void Vjpeg_core::_eval_debug_assertions() {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vjpeg_core::_eval_debug_assertions\n"); );
            // Body
            if (VL_UNLIKELY((clk_i & 0xfeU))) {
                Verilated::overWidthError("clk_i");}
            if (VL_UNLIKELY((rst_i & 0xfeU))) {
                Verilated::overWidthError("rst_i");}
            if (VL_UNLIKELY((inport_valid_i & 0xfeU))) {
                Verilated::overWidthError("inport_valid_i");}
            if (VL_UNLIKELY((inport_strb_i & 0xf0U))) {
                Verilated::overWidthError("inport_strb_i");}
            if (VL_UNLIKELY((inport_last_i & 0xfeU))) {
                Verilated::overWidthError("inport_last_i");}
            if (VL_UNLIKELY((outport_accept_i & 0xfeU))) {
                Verilated::overWidthError("outport_accept_i");}
        }
#endif  // VL_DEBUG
