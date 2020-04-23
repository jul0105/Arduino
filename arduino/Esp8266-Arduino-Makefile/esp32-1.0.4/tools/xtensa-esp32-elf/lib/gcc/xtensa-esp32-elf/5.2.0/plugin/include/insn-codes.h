/* Generated automatically by the program `gencodes'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CODES_H
#define GCC_INSN_CODES_H

enum insn_code {
  CODE_FOR_nothing = 0,

  CODE_FOR_addsi3 = 1,
  CODE_FOR_addsf3 = 3,
  CODE_FOR_subsi3 = 4,
  CODE_FOR_subsf3 = 6,
  CODE_FOR_mulsi3_highpart = 7,
  CODE_FOR_umulsi3_highpart = 8,
  CODE_FOR_mulsi3 = 9,
  CODE_FOR_mulhisi3 = 10,
  CODE_FOR_umulhisi3 = 11,
  CODE_FOR_muladdhisi = 12,
  CODE_FOR_mulsubhisi = 13,
  CODE_FOR_mulsf3 = 14,
  CODE_FOR_fmasf4 = 15,
  CODE_FOR_fnmasf4 = 16,
  CODE_FOR_divsi3 = 17,
  CODE_FOR_udivsi3 = 18,
  CODE_FOR_modsi3 = 19,
  CODE_FOR_umodsi3 = 20,
  CODE_FOR_abssi2 = 21,
  CODE_FOR_abssf2 = 22,
  CODE_FOR_sminsi3 = 23,
  CODE_FOR_uminsi3 = 24,
  CODE_FOR_smaxsi3 = 25,
  CODE_FOR_umaxsi3 = 26,
  CODE_FOR_clzsi2 = 27,
  CODE_FOR_negsi2 = 28,
  CODE_FOR_negsf2 = 29,
  CODE_FOR_andsi3 = 30,
  CODE_FOR_iorsi3 = 31,
  CODE_FOR_xorsi3 = 32,
  CODE_FOR_zero_extendhisi2 = 33,
  CODE_FOR_zero_extendqisi2 = 34,
  CODE_FOR_extendhisi2_internal = 35,
  CODE_FOR_extendqisi2_internal = 36,
  CODE_FOR_extv_internal = 37,
  CODE_FOR_extzv_internal = 38,
  CODE_FOR_fix_truncsfsi2 = 39,
  CODE_FOR_fixuns_truncsfsi2 = 40,
  CODE_FOR_floatsisf2 = 41,
  CODE_FOR_floatunssisf2 = 42,
  CODE_FOR_movdi_internal = 43,
  CODE_FOR_movsi_internal = 44,
  CODE_FOR_movhi_internal = 45,
  CODE_FOR_movqi_internal = 46,
  CODE_FOR_movsf_internal = 47,
  CODE_FOR_movdf_internal = 50,
  CODE_FOR_ashlsi3_internal = 51,
  CODE_FOR_ashrsi3 = 52,
  CODE_FOR_lshrsi3 = 53,
  CODE_FOR_rotlsi3 = 54,
  CODE_FOR_rotrsi3 = 55,
  CODE_FOR_zero_cost_loop_start = 64,
  CODE_FOR_zero_cost_loop_end = 65,
  CODE_FOR_loop_end = 66,
  CODE_FOR_movsicc_internal0 = 67,
  CODE_FOR_movsicc_internal1 = 68,
  CODE_FOR_movsfcc_internal0 = 69,
  CODE_FOR_movsfcc_internal1 = 70,
  CODE_FOR_seq_sf = 71,
  CODE_FOR_slt_sf = 72,
  CODE_FOR_sle_sf = 73,
  CODE_FOR_suneq_sf = 74,
  CODE_FOR_sunlt_sf = 75,
  CODE_FOR_sunle_sf = 76,
  CODE_FOR_sunordered_sf = 77,
  CODE_FOR_jump = 78,
  CODE_FOR_indirect_jump_internal = 79,
  CODE_FOR_tablejump_internal = 80,
  CODE_FOR_call_internal = 81,
  CODE_FOR_call_value_internal = 82,
  CODE_FOR_entry = 83,
  CODE_FOR_return = 84,
  CODE_FOR_nop = 85,
  CODE_FOR_eh_set_a0_windowed = 86,
  CODE_FOR_eh_set_a0_call0 = 87,
  CODE_FOR_blockage = 88,
  CODE_FOR_trap = 89,
  CODE_FOR_set_frame_ptr = 90,
  CODE_FOR_get_thread_pointersi = 92,
  CODE_FOR_set_thread_pointersi = 93,
  CODE_FOR_tls_func = 94,
  CODE_FOR_tls_arg = 95,
  CODE_FOR_tls_call = 96,
  CODE_FOR_sync_lock_releasesi = 100,
  CODE_FOR_sync_compare_and_swapsi = 101,
  CODE_FOR_mulsidi3 = 102,
  CODE_FOR_umulsidi3 = 103,
  CODE_FOR_ctzsi2 = 104,
  CODE_FOR_ffssi2 = 105,
  CODE_FOR_one_cmplsi2 = 106,
  CODE_FOR_extendhisi2 = 107,
  CODE_FOR_extendqisi2 = 108,
  CODE_FOR_extv = 109,
  CODE_FOR_extzv = 110,
  CODE_FOR_movdi = 111,
  CODE_FOR_movsi = 113,
  CODE_FOR_movhi = 114,
  CODE_FOR_movqi = 115,
  CODE_FOR_reloadhi_literal = 116,
  CODE_FOR_reloadqi_literal = 117,
  CODE_FOR_movsf = 118,
  CODE_FOR_movdf = 119,
  CODE_FOR_movmemsi = 121,
  CODE_FOR_ashlsi3 = 122,
  CODE_FOR_cbranchsi4 = 123,
  CODE_FOR_cbranchsf4 = 124,
  CODE_FOR_doloop_end = 126,
  CODE_FOR_cstoresi4 = 127,
  CODE_FOR_cstoresf4 = 128,
  CODE_FOR_movsicc = 129,
  CODE_FOR_movsfcc = 130,
  CODE_FOR_indirect_jump = 131,
  CODE_FOR_tablejump = 132,
  CODE_FOR_sym_PLT = 133,
  CODE_FOR_call = 134,
  CODE_FOR_call_value = 135,
  CODE_FOR_prologue = 136,
  CODE_FOR_epilogue = 137,
  CODE_FOR_nonlocal_goto = 138,
  CODE_FOR_eh_return = 139,
  CODE_FOR_sym_TPOFF = 143,
  CODE_FOR_sym_DTPOFF = 144,
  CODE_FOR_memory_barrier = 145,
  CODE_FOR_sync_compare_and_swaphi = 146,
  CODE_FOR_sync_compare_and_swapqi = 147,
  CODE_FOR_sync_lock_test_and_sethi = 148,
  CODE_FOR_sync_lock_test_and_setqi = 149,
  CODE_FOR_sync_andhi = 150,
  CODE_FOR_sync_iorhi = 151,
  CODE_FOR_sync_xorhi = 152,
  CODE_FOR_sync_addhi = 153,
  CODE_FOR_sync_subhi = 154,
  CODE_FOR_sync_nandhi = 155,
  CODE_FOR_sync_andqi = 156,
  CODE_FOR_sync_iorqi = 157,
  CODE_FOR_sync_xorqi = 158,
  CODE_FOR_sync_addqi = 159,
  CODE_FOR_sync_subqi = 160,
  CODE_FOR_sync_nandqi = 161,
  CODE_FOR_sync_old_andhi = 162,
  CODE_FOR_sync_old_iorhi = 163,
  CODE_FOR_sync_old_xorhi = 164,
  CODE_FOR_sync_old_addhi = 165,
  CODE_FOR_sync_old_subhi = 166,
  CODE_FOR_sync_old_nandhi = 167,
  CODE_FOR_sync_old_andqi = 168,
  CODE_FOR_sync_old_iorqi = 169,
  CODE_FOR_sync_old_xorqi = 170,
  CODE_FOR_sync_old_addqi = 171,
  CODE_FOR_sync_old_subqi = 172,
  CODE_FOR_sync_old_nandqi = 173,
  CODE_FOR_sync_new_andhi = 174,
  CODE_FOR_sync_new_iorhi = 175,
  CODE_FOR_sync_new_xorhi = 176,
  CODE_FOR_sync_new_addhi = 177,
  CODE_FOR_sync_new_subhi = 178,
  CODE_FOR_sync_new_nandhi = 179,
  CODE_FOR_sync_new_andqi = 180,
  CODE_FOR_sync_new_iorqi = 181,
  CODE_FOR_sync_new_xorqi = 182,
  CODE_FOR_sync_new_addqi = 183,
  CODE_FOR_sync_new_subqi = 184,
  CODE_FOR_sync_new_nandqi = 185,
  LAST_INSN_CODE = 186
};

#endif /* GCC_INSN_CODES_H */
