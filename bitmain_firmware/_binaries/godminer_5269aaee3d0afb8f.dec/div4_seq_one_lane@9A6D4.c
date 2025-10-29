int __fastcall div4_seq_one_lane(int a1, int a2, int a3, int a4)
{
  int v4; // r7
  int v9; // r3
  _DWORD *v10; // r2
  int v11; // r1
  int v13; // [sp+Ch] [bp-1008h]
  char v14[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v4) = -22448;
  HIWORD(v4) = (unsigned int)"11" >> 16;
  V_LOCK();
  v13 = a4;
  LOWORD(v9) = -22168;
  LOWORD(a4) = (_WORD)a4 << 12;
  HIWORD(v9) = (unsigned int)"g_20210912" >> 16;
  logfmt_raw(v14, 0x1000u, 0, v9, v4 - 3292, a2, a3, v13);
  V_UNLOCK();
  LOWORD(v10) = -14756;
  HIWORD(v10) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v11) = -23296;
  HIWORD(v11) = (unsigned int)"zer_tuning_one_lane" >> 16;
  zlog(*v10, v11, 154, v4 - 3272, 17, 9880, 60, v14);
  sub_5E2CC(a1, a3, (unsigned __int16)a4 | 1, 0xFFFF);
  sub_5E2CC(a1, a3, (unsigned __int16)a4 | 0x8B, -252706816);
  sub_5E2CC(a1, a3, (unsigned __int16)a4 | 1, -65536);
  sub_5E2CC(a1, a3, (unsigned __int16)a4 | 0x8C, 61680);
  sub_5E2CC(a1, a3, (unsigned __int16)a4 | 1, (int)&loc_FFFFC + 3);
  sub_5E2CC(a1, a3, (unsigned __int16)a4 | 0x8C, 251658240);
  sub_5E2CC(a1, a3, (unsigned __int16)a4 | 1, -1048576);
  sub_5E2CC(a1, a3, (unsigned __int16)a4 | 0x8D, (int)&loc_F0F0C + 3);
  sub_5E2CC(a1, a3, (unsigned __int16)a4 | 1, 0xFFFFFF);
  sub_5E2CC(a1, a3, (unsigned __int16)a4 | 0x8D, -268435456);
  sub_5E2CC(a1, a3, (unsigned __int16)a4 | 1, -16777216);
  sub_5E2CC(a1, a3, a4 & 0xF000 | 0x8E, 15790320);
  sub_5E2CC(a1, a3, (unsigned __int16)a4 | 1, 4095);
  sub_5E2CC(a1, a3, a4 & 0xF000 | 0x8A, 252641280);
  sub_5E2CC(a1, a3, (unsigned __int16)a4 | 1, -4096);
  sub_5E2CC(a1, a3, (unsigned __int16)a4 | 0x8B, 3855);
  sub_5E2CC(a1, a3, (unsigned __int16)a4 | 1, 0);
  sub_5CB80(a1, a3, 144, 0);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 0);
  sub_5CB80(a1, a3, 145, -2147442687);
  return 0;
}
