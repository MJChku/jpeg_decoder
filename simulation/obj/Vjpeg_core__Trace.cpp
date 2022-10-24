// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vjpeg_core__Syms.h"


void Vjpeg_core::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vjpeg_core__Syms* __restrict vlSymsp = static_cast<Vjpeg_core__Syms*>(userp);
    Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vjpeg_core::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vjpeg_core__Syms* __restrict vlSymsp = static_cast<Vjpeg_core__Syms*>(userp);
    Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__valid_q));
            tracep->chgSData(oldp+1,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_width_q),16);
            tracep->chgSData(oldp+2,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_height_q),16);
            tracep->chgSData(oldp+3,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__pixel_x_q),16);
            tracep->chgSData(oldp+4,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__pixel_y_q),16);
            tracep->chgCData(oldp+5,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__pixel_r_q),8);
            tracep->chgCData(oldp+6,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__pixel_g_q),8);
            tracep->chgCData(oldp+7,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__pixel_b_q),8);
            tracep->chgBit(oldp+8,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__idle_q));
            tracep->chgSData(oldp+9,(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_data_q),16);
            tracep->chgIData(oldp+10,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_data_o),32);
            tracep->chgCData(oldp+11,(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_idx_q),6);
            tracep->chgBit(oldp+12,((((0x180U >= vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__count_q) 
                                      & (0x80U >= vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__count_q)) 
                                     | (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__idle_q))));
            tracep->chgBit(oldp+13,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk1__DOT__lookup_valid_q));
            tracep->chgCData(oldp+14,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_cb_dqt_table_q),2);
            tracep->chgCData(oldp+15,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk1__DOT__lookup_width_q),5);
            tracep->chgBit(oldp+16,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__inport_accept_o));
            tracep->chgCData(oldp+17,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_idx_o),6);
            tracep->chgSData(oldp+18,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_q),16);
            tracep->chgBit(oldp+19,(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_valid_q));
            tracep->chgCData(oldp+20,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_y_dqt_table_q),2);
            tracep->chgBit(oldp+21,((1U & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__valid_q) 
                                           >> 5U))));
            tracep->chgSData(oldp+22,((0xffffU & (IData)(
                                                         (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__data_shifted_w 
                                                          >> 0x18U)))),16);
            tracep->chgCData(oldp+23,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk1__DOT__lookup_value_q),8);
            tracep->chgCData(oldp+24,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__lookup_table_r),2);
            tracep->chgCData(oldp+25,((0x3fU & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_idx_q))),6);
            tracep->chgCData(oldp+26,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q),2);
            tracep->chgCData(oldp+27,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_cr_dqt_table_q),2);
            tracep->chgCData(oldp+28,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__data_data_q),8);
            tracep->chgBit(oldp+29,(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_valid_o));
            tracep->chgBit(oldp+30,((0x38U >= (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__count_q))));
            tracep->chgIData(oldp+31,((IData)((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__data_shifted_w 
                                               >> 8U))),32);
            tracep->chgCData(oldp+32,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__byte_idx_q),2);
            tracep->chgCData(oldp+33,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__last_b_q),8);
            tracep->chgSData(oldp+34,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__length_q),16);
            tracep->chgBit(oldp+35,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__data_valid_q));
            tracep->chgCData(oldp+36,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__idx_q),6);
            tracep->chgCData(oldp+37,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_precision_q),8);
            tracep->chgCData(oldp+38,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_num_comp_q),8);
            tracep->chgCData(oldp+39,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_y_factor_q),8);
            tracep->chgCData(oldp+40,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_cb_factor_q),8);
            tracep->chgCData(oldp+41,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_cr_factor_q),8);
            tracep->chgCData(oldp+42,((0xfU & ((IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_y_factor_q) 
                                               >> 4U))),4);
            tracep->chgCData(oldp+43,((0xfU & (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_y_factor_q))),4);
            tracep->chgCData(oldp+44,((0xfU & ((IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_cb_factor_q) 
                                               >> 4U))),4);
            tracep->chgCData(oldp+45,((0xfU & (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_cb_factor_q))),4);
            tracep->chgCData(oldp+46,((0xfU & ((IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_cr_factor_q) 
                                               >> 4U))),4);
            tracep->chgCData(oldp+47,((0xfU & (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_cr_factor_q))),4);
            tracep->chgBit(oldp+48,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__eof_q));
            tracep->chgCData(oldp+49,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_value_r),8);
            tracep->chgCData(oldp+50,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_width_r),5);
            tracep->chgCData(oldp+51,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r),8);
            tracep->chgCData(oldp+52,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r),5);
            tracep->chgCData(oldp+53,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_value_r),8);
            tracep->chgCData(oldp+54,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_width_r),5);
            tracep->chgCData(oldp+55,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r),8);
            tracep->chgCData(oldp+56,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r),5);
            tracep->chgBit(oldp+57,((2U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__state_q))));
            tracep->chgSData(oldp+58,(((- (IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val0_q))) 
                                       & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram0.__PVT__ram_read1_q))),16);
            tracep->chgSData(oldp+59,(((- (IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val1_q))) 
                                       & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram1.__PVT__ram_read1_q))),16);
            tracep->chgSData(oldp+60,(((- (IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val2_q))) 
                                       & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram2.__PVT__ram_read1_q))),16);
            tracep->chgSData(oldp+61,(((- (IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val3_q))) 
                                       & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram3.__PVT__ram_read1_q))),16);
            tracep->chgCData(oldp+62,((7U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q))),3);
            tracep->chgBit(oldp+63,((1U & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__valid_q) 
                                           >> 5U))));
            tracep->chgIData(oldp+64,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__idct_x_data_w),32);
            tracep->chgCData(oldp+65,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__ptr_q),6);
            tracep->chgBit(oldp+66,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__inport_accept_o));
            tracep->chgBit(oldp+67,((2U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__state_q))));
            tracep->chgIData(oldp+68,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.__PVT__ram_read1_q),32);
            tracep->chgIData(oldp+69,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.__PVT__ram_read1_q),32);
            tracep->chgIData(oldp+70,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.__PVT__ram_read1_q),32);
            tracep->chgIData(oldp+71,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.__PVT__ram_read1_q),32);
            tracep->chgCData(oldp+72,((7U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q))),3);
            tracep->chgIData(oldp+73,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_0_1),32);
            tracep->chgIData(oldp+74,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_2_3),32);
            tracep->chgIData(oldp+75,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_4_5),32);
            tracep->chgIData(oldp+76,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_6_7),32);
            tracep->chgIData(oldp+77,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s0),32);
            tracep->chgIData(oldp+78,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s1),32);
            tracep->chgIData(oldp+79,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s2),32);
            tracep->chgIData(oldp+80,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s3),32);
            tracep->chgIData(oldp+81,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s4),32);
            tracep->chgIData(oldp+82,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s5),32);
            tracep->chgIData(oldp+83,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s6),32);
            tracep->chgIData(oldp+84,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s7),32);
            tracep->chgIData(oldp+85,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul0_a),32);
            tracep->chgIData(oldp+86,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul0_b),32);
            tracep->chgIData(oldp+87,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul1_a),32);
            tracep->chgIData(oldp+88,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul1_b),32);
            tracep->chgIData(oldp+89,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul0),32);
            tracep->chgIData(oldp+90,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul1),32);
            tracep->chgBit(oldp+91,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg0_valid_q));
            tracep->chgCData(oldp+92,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg0_idx_q),3);
            tracep->chgBit(oldp+93,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_valid_q));
            tracep->chgCData(oldp+94,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_idx_q),3);
            tracep->chgIData(oldp+95,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t0),32);
            tracep->chgIData(oldp+96,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t1),32);
            tracep->chgIData(oldp+97,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t2),32);
            tracep->chgIData(oldp+98,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t3),32);
            tracep->chgIData(oldp+99,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t4),32);
            tracep->chgIData(oldp+100,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t5),32);
            tracep->chgIData(oldp+101,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t6),32);
            tracep->chgIData(oldp+102,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t7),32);
            tracep->chgBit(oldp+103,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg2_valid_q));
            tracep->chgCData(oldp+104,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg2_idx_q),3);
            tracep->chgIData(oldp+105,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out[0]),32);
            tracep->chgIData(oldp+106,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out[1]),32);
            tracep->chgIData(oldp+107,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out[2]),32);
            tracep->chgIData(oldp+108,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out[3]),32);
            tracep->chgIData(oldp+109,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out[4]),32);
            tracep->chgIData(oldp+110,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out[5]),32);
            tracep->chgIData(oldp+111,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out[6]),32);
            tracep->chgIData(oldp+112,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out[7]),32);
            tracep->chgIData(oldp+113,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out_tmp),32);
            tracep->chgCData(oldp+114,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__valid_q),6);
            tracep->chgIData(oldp+115,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__s0),32);
            tracep->chgIData(oldp+116,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__s1),32);
            tracep->chgIData(oldp+117,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__s2),32);
            tracep->chgIData(oldp+118,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__s3),32);
            tracep->chgIData(oldp+119,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__s4),32);
            tracep->chgIData(oldp+120,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__s5),32);
            tracep->chgIData(oldp+121,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__s6),32);
            tracep->chgIData(oldp+122,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__s7),32);
            tracep->chgIData(oldp+123,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__mul0_a),32);
            tracep->chgIData(oldp+124,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__mul0_b),32);
            tracep->chgIData(oldp+125,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__mul1_a),32);
            tracep->chgIData(oldp+126,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__mul1_b),32);
            tracep->chgIData(oldp+127,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__mul0),32);
            tracep->chgIData(oldp+128,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__mul1),32);
            tracep->chgBit(oldp+129,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__out_stg0_valid_q));
            tracep->chgCData(oldp+130,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__out_stg0_idx_q),3);
            tracep->chgBit(oldp+131,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__out_stg1_valid_q));
            tracep->chgCData(oldp+132,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__out_stg1_idx_q),3);
            tracep->chgIData(oldp+133,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__o_t0),32);
            tracep->chgIData(oldp+134,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__o_t1),32);
            tracep->chgIData(oldp+135,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__o_t2),32);
            tracep->chgIData(oldp+136,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__o_t3),32);
            tracep->chgIData(oldp+137,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__o_t4),32);
            tracep->chgIData(oldp+138,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__o_t5),32);
            tracep->chgIData(oldp+139,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__o_t6),32);
            tracep->chgIData(oldp+140,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__o_t7),32);
            tracep->chgBit(oldp+141,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__out_stg2_valid_q));
            tracep->chgCData(oldp+142,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__out_stg2_idx_q),3);
            tracep->chgIData(oldp+143,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__block_out[0]),32);
            tracep->chgIData(oldp+144,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__block_out[1]),32);
            tracep->chgIData(oldp+145,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__block_out[2]),32);
            tracep->chgIData(oldp+146,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__block_out[3]),32);
            tracep->chgIData(oldp+147,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__block_out[4]),32);
            tracep->chgIData(oldp+148,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__block_out[5]),32);
            tracep->chgIData(oldp+149,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__block_out[6]),32);
            tracep->chgIData(oldp+150,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__block_out[7]),32);
            tracep->chgIData(oldp+151,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__block_out_tmp),32);
            tracep->chgCData(oldp+152,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__valid_q),6);
            tracep->chgCData(oldp+153,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_ifast_y__DOT__ptr_q),6);
            tracep->chgCData(oldp+154,(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__idx_q),8);
            tracep->chgCData(oldp+155,(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__cfg_table_q),2);
            tracep->chgCData(oldp+156,((((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__cfg_table_q) 
                                         << 6U) | (0x3fU 
                                                   & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__idx_q)))),8);
            tracep->chgCData(oldp+157,(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__table_src_w[0]),2);
            tracep->chgCData(oldp+158,(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__table_src_w[1]),2);
            tracep->chgCData(oldp+159,(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__table_src_w[2]),2);
            tracep->chgCData(oldp+160,(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__table_src_w[3]),2);
            tracep->chgCData(oldp+161,(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__dqt_entry_q),8);
            tracep->chgBit(oldp+162,(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__inport_valid_q));
            tracep->chgSData(oldp+163,(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__inport_data_q),16);
            tracep->chgCData(oldp+164,(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__inport_idx_q),6);
            tracep->chgBit(oldp+165,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__active_q));
            tracep->chgBit(oldp+166,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__valid_o));
            tracep->chgIData(oldp+167,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__data_out_o),32);
            tracep->chgIData(oldp+168,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__count_q),32);
            tracep->chgBit(oldp+169,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__valid_o));
            tracep->chgIData(oldp+170,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__data_out_o),32);
            tracep->chgIData(oldp+171,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__count_q),32);
            tracep->chgBit(oldp+172,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__valid_o));
            tracep->chgIData(oldp+173,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__data_out_o),32);
            tracep->chgIData(oldp+174,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__count_q),32);
            tracep->chgCData(oldp+175,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__idx_q),6);
            tracep->chgCData(oldp+176,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__subsmpl_q),2);
            tracep->chgIData(oldp+177,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__r_conv_r),32);
            tracep->chgIData(oldp+178,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__g_conv_r),32);
            tracep->chgIData(oldp+179,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__b_conv_r),32);
            tracep->chgIData(oldp+180,(VL_SHIFTRS_III(32,32,32, 
                                                      VL_MULS_III(32,32,32, (IData)(0x166fU), vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__data_out_o), 0xcU)),32);
            tracep->chgIData(oldp+181,(VL_SHIFTRS_III(32,32,32, 
                                                      VL_MULS_III(32,32,32, (IData)(0xb6dU), vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__data_out_o), 0xcU)),32);
            tracep->chgIData(oldp+182,(VL_SHIFTRS_III(32,32,32, 
                                                      VL_MULS_III(32,32,32, (IData)(0x582U), vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__data_out_o), 0xcU)),32);
            tracep->chgIData(oldp+183,(VL_SHIFTRS_III(32,32,32, 
                                                      VL_MULS_III(32,32,32, (IData)(0x1c5aU), vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__data_out_o), 0xcU)),32);
            tracep->chgCData(oldp+184,(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q[0]),8);
            tracep->chgCData(oldp+185,(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q[1]),8);
            tracep->chgCData(oldp+186,(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q[2]),8);
            tracep->chgCData(oldp+187,(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q[3]),8);
            tracep->chgCData(oldp+188,(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q[4]),8);
            tracep->chgCData(oldp+189,(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q[5]),8);
            tracep->chgCData(oldp+190,(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q[6]),8);
            tracep->chgCData(oldp+191,(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q[7]),8);
            tracep->chgCData(oldp+192,(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__rd_ptr_q),6);
            tracep->chgCData(oldp+193,(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__wr_ptr_q),6);
            tracep->chgCData(oldp+194,(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__count_q),7);
            tracep->chgBit(oldp+195,(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__drain_q));
            tracep->chgQData(oldp+196,(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__fifo_data_r),40);
            tracep->chgQData(oldp+198,(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__data_shifted_w),40);
            tracep->chgBit(oldp+200,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__end_of_image_q));
            tracep->chgCData(oldp+201,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_type_q),2);
            tracep->chgCData(oldp+202,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_bits_q),8);
            tracep->chgCData(oldp+203,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_idx_q),8);
            tracep->chgBit(oldp+204,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__first_q));
            tracep->chgCData(oldp+205,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_q),8);
            tracep->chgCData(oldp+206,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__lookup_width_q),5);
            tracep->chgSData(oldp+207,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__input_data_q),16);
            tracep->chgIData(oldp+208,(((IData)((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__data_shifted_w 
                                                 >> 8U)) 
                                        >> (0x1fU & 
                                            ((IData)(0x10U) 
                                             - (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk1__DOT__lookup_width_q))))),32);
            tracep->chgCData(oldp+209,((0xfU & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_q))),5);
            tracep->chgSData(oldp+210,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__prev_dc_coeff_q[0]),16);
            tracep->chgSData(oldp+211,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__prev_dc_coeff_q[1]),16);
            tracep->chgSData(oldp+212,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__prev_dc_coeff_q[2]),16);
            tracep->chgSData(oldp+213,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__prev_dc_coeff_q[3]),16);
            tracep->chgSData(oldp+214,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__dc_coeff_q),16);
            tracep->chgSData(oldp+215,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_r),16);
            tracep->chgCData(oldp+216,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__type_idx_q),3);
            tracep->chgSData(oldp+217,((0xfff8U & ((IData)(7U) 
                                                   + (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_width_q)))),16);
            tracep->chgSData(oldp+218,((0x1fffU & (
                                                   ((IData)(7U) 
                                                    + (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_width_q)) 
                                                   >> 3U))),16);
            tracep->chgSData(oldp+219,((0x3ffeU & (
                                                   ((IData)(7U) 
                                                    + (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_width_q)) 
                                                   >> 2U))),16);
            tracep->chgSData(oldp+220,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_x_q),16);
            tracep->chgSData(oldp+221,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_y_q),16);
            tracep->chgSData(oldp+222,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__x_idx_q),16);
            tracep->chgSData(oldp+223,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__y_idx_q),16);
            tracep->chgSData(oldp+224,((0xffffU & ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_x_q)))),16);
            tracep->chgCData(oldp+225,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_wr_q),2);
            tracep->chgCData(oldp+226,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_rd_q),2);
            tracep->chgCData(oldp+227,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q),6);
            tracep->chgCData(oldp+228,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_addr_q),4);
            tracep->chgCData(oldp+229,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr_ptr_w),6);
            tracep->chgSData(oldp+230,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram0.__PVT__ram_read1_q),16);
            tracep->chgSData(oldp+231,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram1.__PVT__ram_read1_q),16);
            tracep->chgSData(oldp+232,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram2.__PVT__ram_read1_q),16);
            tracep->chgSData(oldp+233,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram3.__PVT__ram_read1_q),16);
            tracep->chgBit(oldp+234,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr0_w));
            tracep->chgBit(oldp+235,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr1_w));
            tracep->chgBit(oldp+236,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr2_w));
            tracep->chgBit(oldp+237,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr3_w));
            tracep->chgQData(oldp+238,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid0_r),64);
            tracep->chgQData(oldp+240,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid0_q),64);
            tracep->chgQData(oldp+242,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid1_r),64);
            tracep->chgQData(oldp+244,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid1_q),64);
            tracep->chgQData(oldp+246,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid2_r),64);
            tracep->chgQData(oldp+248,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid2_q),64);
            tracep->chgQData(oldp+250,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid3_r),64);
            tracep->chgQData(oldp+252,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid3_q),64);
            tracep->chgCData(oldp+254,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_ready_q),4);
            tracep->chgCData(oldp+255,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__state_q),2);
            tracep->chgBit(oldp+256,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val0_q));
            tracep->chgBit(oldp+257,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val1_q));
            tracep->chgBit(oldp+258,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val2_q));
            tracep->chgBit(oldp+259,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val3_q));
            tracep->chgBit(oldp+260,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__block_wr_q));
            tracep->chgBit(oldp+261,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__block_rd_q));
            tracep->chgCData(oldp+262,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q),6);
            tracep->chgCData(oldp+263,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_addr_q),4);
            tracep->chgCData(oldp+264,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__wr_ptr_w),5);
            tracep->chgBit(oldp+265,(((((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__valid_q) 
                                        >> 5U) & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__inport_accept_o)) 
                                      & (0U == (3U 
                                                & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__ptr_q) 
                                                   >> 4U))))));
            tracep->chgBit(oldp+266,(((((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__valid_q) 
                                        >> 5U) & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__inport_accept_o)) 
                                      & (1U == (3U 
                                                & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__ptr_q) 
                                                   >> 4U))))));
            tracep->chgBit(oldp+267,(((((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__valid_q) 
                                        >> 5U) & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__inport_accept_o)) 
                                      & (2U == (3U 
                                                & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__ptr_q) 
                                                   >> 4U))))));
            tracep->chgBit(oldp+268,(((((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__valid_q) 
                                        >> 5U) & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__inport_accept_o)) 
                                      & (3U == (3U 
                                                & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__ptr_q) 
                                                   >> 4U))))));
            tracep->chgCData(oldp+269,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__block_ready_q),2);
            tracep->chgCData(oldp+270,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__state_q),2);
            tracep->chgSData(oldp+271,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__rd_ptr_q),9);
            tracep->chgSData(oldp+272,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__wr_ptr_q),9);
            tracep->chgSData(oldp+273,((0x1ffU & ((IData)(1U) 
                                                  + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__wr_ptr_q)))),9);
            tracep->chgBit(oldp+274,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__read_ok_w));
            tracep->chgBit(oldp+275,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__rd_q));
            tracep->chgSData(oldp+276,((0x1ffU & ((IData)(1U) 
                                                  + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__rd_ptr_q)))),9);
            tracep->chgBit(oldp+277,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__rd_skid_q));
            tracep->chgIData(oldp+278,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__rd_skid_data_q),32);
            tracep->chgIData(oldp+279,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y__u_ram.__PVT__ram_read1_q),32);
            tracep->chgBit(oldp+280,((2U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q))));
            tracep->chgCData(oldp+281,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__rd_ptr_q),8);
            tracep->chgCData(oldp+282,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__wr_ptr_q),8);
            tracep->chgCData(oldp+283,((0xffU & ((IData)(1U) 
                                                 + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__wr_ptr_q)))),8);
            tracep->chgBit(oldp+284,((1U < vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__count_q)));
            tracep->chgBit(oldp+285,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__rd_q));
            tracep->chgCData(oldp+286,((0xffU & ((IData)(1U) 
                                                 + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__rd_ptr_q)))),8);
            tracep->chgCData(oldp+287,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__cx_idx_q),8);
            tracep->chgCData(oldp+288,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__cx_rd_ptr_r),6);
            tracep->chgCData(oldp+289,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__cx_half_q),2);
            tracep->chgCData(oldp+290,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__cx_rd_ptr_q),6);
            tracep->chgCData(oldp+291,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__rd_addr_w),8);
            tracep->chgBit(oldp+292,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__rd_skid_q));
            tracep->chgIData(oldp+293,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__rd_skid_data_q),32);
            tracep->chgIData(oldp+294,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb__u_ram.__PVT__ram_read1_q),32);
            tracep->chgCData(oldp+295,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__rd_ptr_q),8);
            tracep->chgCData(oldp+296,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__wr_ptr_q),8);
            tracep->chgCData(oldp+297,((0xffU & ((IData)(1U) 
                                                 + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__wr_ptr_q)))),8);
            tracep->chgBit(oldp+298,((1U < vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__count_q)));
            tracep->chgBit(oldp+299,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__rd_q));
            tracep->chgCData(oldp+300,((0xffU & ((IData)(1U) 
                                                 + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__rd_ptr_q)))),8);
            tracep->chgCData(oldp+301,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__cx_idx_q),8);
            tracep->chgCData(oldp+302,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__cx_rd_ptr_r),6);
            tracep->chgCData(oldp+303,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__cx_half_q),2);
            tracep->chgCData(oldp+304,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__cx_rd_ptr_q),6);
            tracep->chgCData(oldp+305,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__rd_addr_w),8);
            tracep->chgBit(oldp+306,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__rd_skid_q));
            tracep->chgIData(oldp+307,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__rd_skid_data_q),32);
            tracep->chgIData(oldp+308,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr__u_ram.__PVT__ram_read1_q),32);
            tracep->chgSData(oldp+309,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__Vcellinp__u_ram__addr0_i),9);
            tracep->chgIData(oldp+310,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y__u_ram.__PVT__ram_read0_q),32);
            tracep->chgCData(oldp+311,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__Vcellinp__u_ram__addr0_i),8);
            tracep->chgIData(oldp+312,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb__u_ram.__PVT__ram_read0_q),32);
            tracep->chgCData(oldp+313,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__Vcellinp__u_ram__addr0_i),8);
            tracep->chgIData(oldp+314,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr__u_ram.__PVT__ram_read0_q),32);
            tracep->chgCData(oldp+315,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__Vcellinp__u_ram0__addr1_i),6);
            tracep->chgSData(oldp+316,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram0.__PVT__ram_read0_q),16);
            tracep->chgCData(oldp+317,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__Vcellinp__u_ram1__addr1_i),6);
            tracep->chgSData(oldp+318,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram1.__PVT__ram_read0_q),16);
            tracep->chgCData(oldp+319,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__Vcellinp__u_ram2__addr1_i),6);
            tracep->chgSData(oldp+320,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram2.__PVT__ram_read0_q),16);
            tracep->chgCData(oldp+321,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__Vcellinp__u_ram3__addr1_i),6);
            tracep->chgSData(oldp+322,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram3.__PVT__ram_read0_q),16);
            tracep->chgCData(oldp+323,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__Vcellinp__u_ram0__addr1_i),5);
            tracep->chgIData(oldp+324,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.__PVT__ram_read0_q),32);
            tracep->chgCData(oldp+325,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__Vcellinp__u_ram1__addr1_i),5);
            tracep->chgIData(oldp+326,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.__PVT__ram_read0_q),32);
            tracep->chgCData(oldp+327,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__Vcellinp__u_ram2__addr1_i),5);
            tracep->chgIData(oldp+328,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.__PVT__ram_read0_q),32);
            tracep->chgCData(oldp+329,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__Vcellinp__u_ram3__addr1_i),5);
            tracep->chgIData(oldp+330,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.__PVT__ram_read0_q),32);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [3U]))) {
            tracep->chgBit(oldp+331,(((0xffU == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__last_b_q)) 
                                      & (0xdbU == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__data_r)))));
            tracep->chgBit(oldp+332,(((0xffU == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__last_b_q)) 
                                      & (0xc4U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__data_r)))));
            tracep->chgBit(oldp+333,(((0xffU == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__last_b_q)) 
                                      & (0xc2U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__data_r)))));
            tracep->chgBit(oldp+334,(((0xffU == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__last_b_q)) 
                                      & (0xddU == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__data_r)))));
            tracep->chgBit(oldp+335,((((0xffU == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__last_b_q)) 
                                       & (0xd0U <= (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__data_r))) 
                                      & (0xd7U >= (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__data_r)))));
            tracep->chgBit(oldp+336,((((0xffU == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__last_b_q)) 
                                       & (0xe0U <= (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__data_r))) 
                                      & (0xefU >= (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__data_r)))));
            tracep->chgBit(oldp+337,(((0xffU == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__last_b_q)) 
                                      & (0xfeU == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__data_r)))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+338,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_id_o),32);
            tracep->chgBit(oldp+339,((8U != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__count_q))));
            tracep->chgBit(oldp+340,((0U != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__count_q))));
            tracep->chgIData(oldp+341,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__ram_q[0]),32);
            tracep->chgIData(oldp+342,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__ram_q[1]),32);
            tracep->chgIData(oldp+343,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__ram_q[2]),32);
            tracep->chgIData(oldp+344,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__ram_q[3]),32);
            tracep->chgIData(oldp+345,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__ram_q[4]),32);
            tracep->chgIData(oldp+346,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__ram_q[5]),32);
            tracep->chgIData(oldp+347,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__ram_q[6]),32);
            tracep->chgIData(oldp+348,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__ram_q[7]),32);
            tracep->chgCData(oldp+349,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__rd_ptr_q),3);
            tracep->chgCData(oldp+350,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__wr_ptr_q),3);
            tracep->chgCData(oldp+351,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__count_q),4);
            tracep->chgBit(oldp+352,((0U != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__count_q))));
            tracep->chgIData(oldp+353,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__id_value_w),32);
            tracep->chgIData(oldp+354,((0x7fff8U & 
                                        (vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__id_value_w 
                                         << 3U))),32);
            tracep->chgIData(oldp+355,((0x1fff8U & 
                                        (vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__id_value_w 
                                         >> 0xdU))),32);
            tracep->chgBit(oldp+356,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__Vcellinp__u_info__push_i));
            tracep->chgBit(oldp+357,((8U != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__count_q))));
            tracep->chgIData(oldp+358,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__ram_q[0]),32);
            tracep->chgIData(oldp+359,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__ram_q[1]),32);
            tracep->chgIData(oldp+360,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__ram_q[2]),32);
            tracep->chgIData(oldp+361,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__ram_q[3]),32);
            tracep->chgIData(oldp+362,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__ram_q[4]),32);
            tracep->chgIData(oldp+363,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__ram_q[5]),32);
            tracep->chgIData(oldp+364,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__ram_q[6]),32);
            tracep->chgIData(oldp+365,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__ram_q[7]),32);
            tracep->chgCData(oldp+366,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__rd_ptr_q),3);
            tracep->chgCData(oldp+367,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__wr_ptr_q),3);
            tracep->chgCData(oldp+368,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__count_q),4);
            tracep->chgBit(oldp+369,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__Vcellinp__u_ram_y__push_i));
            tracep->chgBit(oldp+370,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__Vcellinp__u_ram_cb__push_i));
            tracep->chgBit(oldp+371,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__Vcellinp__u_ram_cr__push_i));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgCData(oldp+372,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__data_r),8);
            tracep->chgBit(oldp+373,(vlSymsp->TOP__jpeg_core.__PVT__img_end_w));
            tracep->chgBit(oldp+374,(vlSymsp->TOP__jpeg_core.__PVT__bb_inport_valid_w));
            tracep->chgBit(oldp+375,(vlSymsp->TOP__jpeg_core.__PVT__dqt_cfg_valid_w));
            tracep->chgBit(oldp+376,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__inport_accept_w));
            tracep->chgBit(oldp+377,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__token_soi_w));
            tracep->chgBit(oldp+378,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__token_sof0_w));
            tracep->chgBit(oldp+379,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__token_eoi_w));
            tracep->chgBit(oldp+380,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__token_sos_w));
            tracep->chgBit(oldp+381,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__token_pad_w));
            tracep->chgCData(oldp+382,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__next_state_r),5);
            tracep->chgBit(oldp+383,(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__dqt_write_w));
            tracep->chgCData(oldp+384,(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__dqt_table_addr_w),8);
            tracep->chgBit(oldp+385,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__output_space_w));
            tracep->chgBit(oldp+386,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__y_pop_w));
            tracep->chgBit(oldp+387,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__id_pop_w));
            tracep->chgCData(oldp+388,(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__count_r),7);
            tracep->chgBit(oldp+389,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__start_block_w));
            tracep->chgCData(oldp+390,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__next_state_r),5);
            tracep->chgIData(oldp+391,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__count_r),32);
            tracep->chgIData(oldp+392,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__count_r),32);
            tracep->chgIData(oldp+393,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__count_r),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[4U])) {
            tracep->chgBit(oldp+394,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__outport_valid_o));
            tracep->chgIData(oldp+395,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__outport_id_o),32);
            tracep->chgBit(oldp+396,(((4U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q)) 
                                      | ((5U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q)) 
                                         & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__push_q)))));
            tracep->chgBit(oldp+397,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q));
            tracep->chgIData(oldp+398,(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_id_q),32);
            tracep->chgBit(oldp+399,(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_eob_q));
            tracep->chgCData(oldp+400,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__pop_bits_r),6);
            tracep->chgCData(oldp+401,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__state_q),5);
            tracep->chgBit(oldp+402,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vcellinp__u_id_fifo__pop_i));
            tracep->chgIData(oldp+403,(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__inport_id_q),32);
            tracep->chgBit(oldp+404,(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__inport_eob_q));
            tracep->chgBit(oldp+405,((4U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q))));
            tracep->chgCData(oldp+406,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q),5);
            tracep->chgBit(oldp+407,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__push_q));
            tracep->chgCData(oldp+408,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__next_state_r),2);
            tracep->chgCData(oldp+409,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__next_state_r),2);
        }
        tracep->chgBit(oldp+410,(vlTOPp->clk_i));
        tracep->chgBit(oldp+411,(vlTOPp->rst_i));
        tracep->chgBit(oldp+412,(vlTOPp->inport_valid_i));
        tracep->chgIData(oldp+413,(vlTOPp->inport_data_i),32);
        tracep->chgCData(oldp+414,(vlTOPp->inport_strb_i),4);
        tracep->chgBit(oldp+415,(vlTOPp->inport_last_i));
        tracep->chgBit(oldp+416,(vlTOPp->outport_accept_i));
        tracep->chgBit(oldp+417,(vlTOPp->inport_accept_o));
        tracep->chgBit(oldp+418,(vlTOPp->outport_valid_o));
        tracep->chgSData(oldp+419,(vlTOPp->outport_width_o),16);
        tracep->chgSData(oldp+420,(vlTOPp->outport_height_o),16);
        tracep->chgSData(oldp+421,(vlTOPp->outport_pixel_x_o),16);
        tracep->chgSData(oldp+422,(vlTOPp->outport_pixel_y_o),16);
        tracep->chgCData(oldp+423,(vlTOPp->outport_pixel_r_o),8);
        tracep->chgCData(oldp+424,(vlTOPp->outport_pixel_g_o),8);
        tracep->chgCData(oldp+425,(vlTOPp->outport_pixel_b_o),8);
        tracep->chgBit(oldp+426,(vlTOPp->idle_o));
        tracep->chgBit(oldp+427,((((3U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__byte_idx_q)) 
                                   | (IData)(vlTOPp->inport_last_i)) 
                                  & (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__inport_accept_w))));
        tracep->chgBit(oldp+428,(((0xaU == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__state_q)) 
                                  & (IData)(vlTOPp->inport_valid_i))));
        tracep->chgBit(oldp+429,(((1U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q)) 
                                  & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_valid_o))));
        tracep->chgBit(oldp+430,(((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__inport_accept_o) 
                                  & (~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_eob_q) 
                                        | (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__inport_eob_q))))));
        tracep->chgBit(oldp+431,(((IData)(vlTOPp->inport_last_i) 
                                  | (1U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__length_q)))));
        tracep->chgBit(oldp+432,((((IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__data_valid_q) 
                                   & (IData)(vlTOPp->inport_valid_i)) 
                                  & (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__token_eoi_w))));
        tracep->chgBit(oldp+433,(((3U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__byte_idx_q)) 
                                  | (IData)(vlTOPp->inport_last_i))));
        tracep->chgCData(oldp+434,(((vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__table_src_w
                                     [(3U & (vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__outport_id_o 
                                             >> 0x1eU))] 
                                     << 6U) | (0x3fU 
                                               & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_idx_q)))),8);
        tracep->chgIData(oldp+435,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[0]),32);
        tracep->chgIData(oldp+436,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[1]),32);
        tracep->chgIData(oldp+437,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[2]),32);
        tracep->chgIData(oldp+438,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[3]),32);
        tracep->chgIData(oldp+439,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[4]),32);
        tracep->chgIData(oldp+440,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[5]),32);
        tracep->chgIData(oldp+441,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[6]),32);
        tracep->chgIData(oldp+442,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[7]),32);
        tracep->chgIData(oldp+443,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[8]),32);
        tracep->chgIData(oldp+444,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[9]),32);
        tracep->chgIData(oldp+445,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[10]),32);
        tracep->chgIData(oldp+446,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[11]),32);
        tracep->chgIData(oldp+447,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[12]),32);
        tracep->chgIData(oldp+448,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[13]),32);
        tracep->chgIData(oldp+449,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[14]),32);
        tracep->chgIData(oldp+450,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[15]),32);
        tracep->chgIData(oldp+451,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[16]),32);
        tracep->chgIData(oldp+452,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[17]),32);
        tracep->chgIData(oldp+453,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[18]),32);
        tracep->chgIData(oldp+454,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[19]),32);
        tracep->chgIData(oldp+455,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[20]),32);
        tracep->chgIData(oldp+456,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[21]),32);
        tracep->chgIData(oldp+457,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[22]),32);
        tracep->chgIData(oldp+458,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[23]),32);
        tracep->chgIData(oldp+459,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[24]),32);
        tracep->chgIData(oldp+460,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[25]),32);
        tracep->chgIData(oldp+461,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[26]),32);
        tracep->chgIData(oldp+462,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[27]),32);
        tracep->chgIData(oldp+463,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[28]),32);
        tracep->chgIData(oldp+464,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[29]),32);
        tracep->chgIData(oldp+465,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[30]),32);
        tracep->chgIData(oldp+466,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[31]),32);
        tracep->chgIData(oldp+467,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[0]),32);
        tracep->chgIData(oldp+468,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[1]),32);
        tracep->chgIData(oldp+469,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[2]),32);
        tracep->chgIData(oldp+470,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[3]),32);
        tracep->chgIData(oldp+471,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[4]),32);
        tracep->chgIData(oldp+472,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[5]),32);
        tracep->chgIData(oldp+473,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[6]),32);
        tracep->chgIData(oldp+474,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[7]),32);
        tracep->chgIData(oldp+475,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[8]),32);
        tracep->chgIData(oldp+476,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[9]),32);
        tracep->chgIData(oldp+477,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[10]),32);
        tracep->chgIData(oldp+478,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[11]),32);
        tracep->chgIData(oldp+479,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[12]),32);
        tracep->chgIData(oldp+480,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[13]),32);
        tracep->chgIData(oldp+481,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[14]),32);
        tracep->chgIData(oldp+482,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[15]),32);
        tracep->chgIData(oldp+483,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[16]),32);
        tracep->chgIData(oldp+484,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[17]),32);
        tracep->chgIData(oldp+485,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[18]),32);
        tracep->chgIData(oldp+486,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[19]),32);
        tracep->chgIData(oldp+487,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[20]),32);
        tracep->chgIData(oldp+488,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[21]),32);
        tracep->chgIData(oldp+489,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[22]),32);
        tracep->chgIData(oldp+490,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[23]),32);
        tracep->chgIData(oldp+491,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[24]),32);
        tracep->chgIData(oldp+492,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[25]),32);
        tracep->chgIData(oldp+493,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[26]),32);
        tracep->chgIData(oldp+494,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[27]),32);
        tracep->chgIData(oldp+495,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[28]),32);
        tracep->chgIData(oldp+496,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[29]),32);
        tracep->chgIData(oldp+497,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[30]),32);
        tracep->chgIData(oldp+498,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[31]),32);
        tracep->chgIData(oldp+499,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[0]),32);
        tracep->chgIData(oldp+500,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[1]),32);
        tracep->chgIData(oldp+501,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[2]),32);
        tracep->chgIData(oldp+502,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[3]),32);
        tracep->chgIData(oldp+503,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[4]),32);
        tracep->chgIData(oldp+504,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[5]),32);
        tracep->chgIData(oldp+505,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[6]),32);
        tracep->chgIData(oldp+506,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[7]),32);
        tracep->chgIData(oldp+507,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[8]),32);
        tracep->chgIData(oldp+508,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[9]),32);
        tracep->chgIData(oldp+509,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[10]),32);
        tracep->chgIData(oldp+510,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[11]),32);
        tracep->chgIData(oldp+511,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[12]),32);
        tracep->chgIData(oldp+512,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[13]),32);
        tracep->chgIData(oldp+513,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[14]),32);
        tracep->chgIData(oldp+514,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[15]),32);
        tracep->chgIData(oldp+515,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[16]),32);
        tracep->chgIData(oldp+516,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[17]),32);
        tracep->chgIData(oldp+517,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[18]),32);
        tracep->chgIData(oldp+518,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[19]),32);
        tracep->chgIData(oldp+519,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[20]),32);
        tracep->chgIData(oldp+520,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[21]),32);
        tracep->chgIData(oldp+521,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[22]),32);
        tracep->chgIData(oldp+522,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[23]),32);
        tracep->chgIData(oldp+523,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[24]),32);
        tracep->chgIData(oldp+524,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[25]),32);
        tracep->chgIData(oldp+525,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[26]),32);
        tracep->chgIData(oldp+526,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[27]),32);
        tracep->chgIData(oldp+527,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[28]),32);
        tracep->chgIData(oldp+528,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[29]),32);
        tracep->chgIData(oldp+529,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[30]),32);
        tracep->chgIData(oldp+530,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[31]),32);
        tracep->chgIData(oldp+531,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[0]),32);
        tracep->chgIData(oldp+532,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[1]),32);
        tracep->chgIData(oldp+533,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[2]),32);
        tracep->chgIData(oldp+534,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[3]),32);
        tracep->chgIData(oldp+535,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[4]),32);
        tracep->chgIData(oldp+536,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[5]),32);
        tracep->chgIData(oldp+537,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[6]),32);
        tracep->chgIData(oldp+538,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[7]),32);
        tracep->chgIData(oldp+539,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[8]),32);
        tracep->chgIData(oldp+540,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[9]),32);
        tracep->chgIData(oldp+541,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[10]),32);
        tracep->chgIData(oldp+542,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[11]),32);
        tracep->chgIData(oldp+543,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[12]),32);
        tracep->chgIData(oldp+544,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[13]),32);
        tracep->chgIData(oldp+545,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[14]),32);
        tracep->chgIData(oldp+546,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[15]),32);
        tracep->chgIData(oldp+547,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[16]),32);
        tracep->chgIData(oldp+548,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[17]),32);
        tracep->chgIData(oldp+549,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[18]),32);
        tracep->chgIData(oldp+550,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[19]),32);
        tracep->chgIData(oldp+551,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[20]),32);
        tracep->chgIData(oldp+552,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[21]),32);
        tracep->chgIData(oldp+553,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[22]),32);
        tracep->chgIData(oldp+554,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[23]),32);
        tracep->chgIData(oldp+555,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[24]),32);
        tracep->chgIData(oldp+556,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[25]),32);
        tracep->chgIData(oldp+557,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[26]),32);
        tracep->chgIData(oldp+558,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[27]),32);
        tracep->chgIData(oldp+559,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[28]),32);
        tracep->chgIData(oldp+560,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[29]),32);
        tracep->chgIData(oldp+561,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[30]),32);
        tracep->chgIData(oldp+562,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[31]),32);
    }
}

void Vjpeg_core::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vjpeg_core__Syms* __restrict vlSymsp = static_cast<Vjpeg_core__Syms*>(userp);
    Vjpeg_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
        vlTOPp->__Vm_traceActivity[3U] = 0U;
        vlTOPp->__Vm_traceActivity[4U] = 0U;
    }
}
