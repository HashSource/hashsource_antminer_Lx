int __fastcall div4_seq(int a1, int a2, int a3, int a4)
{
  int v8; // r3
  _DWORD *v9; // r3
  int v10; // r1
  int v11; // r7
  int v12; // r8
  int v13; // r10
  int v14; // r9
  int v15; // r11
  int v16; // r6
  char v18[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v8) = -22464;
  HIWORD(v8) = (unsigned int)"ic_config_20210911" >> 16;
  logfmt_raw(v18, 0x1000u, 0, v8, "div4_seq", a2, a3);
  V_UNLOCK();
  LOWORD(v9) = -14756;
  HIWORD(v9) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v10) = -23296;
  HIWORD(v10) = (unsigned int)"zer_tuning_one_lane" >> 16;
  zlog(*v9, v10, 154, "div4_seq", 8, 9756, 60, v18);
  if ( a4 == 8 )
  {
    v16 = 61578;
    v15 = 61582;
    v14 = 61581;
    v13 = 61580;
    v12 = 61579;
    v11 = 61441;
  }
  else
  {
    v11 = (unsigned __int16)((_WORD)a4 << 12) | 1;
    v12 = (unsigned __int16)((_WORD)a4 << 12) | 0x8B;
    v13 = (unsigned __int16)((_WORD)a4 << 12) | 0x8C;
    v14 = (unsigned __int16)((_WORD)a4 << 12) | 0x8D;
    v15 = (unsigned __int16)((_WORD)a4 << 12) | 0x8E;
    v16 = (unsigned __int16)((_WORD)a4 << 12) | 0x8A;
  }
  sub_5E2CC(a1, a3, v11, 0xFFFF);
  sub_5E2CC(a1, a3, v12, -252706816);
  sub_5E2CC(a1, a3, v11, -65536);
  sub_5E2CC(a1, a3, v13, 61680);
  sub_5E2CC(a1, a3, v11, (int)&loc_FFFFC + 3);
  sub_5E2CC(a1, a3, v13, 251658240);
  sub_5E2CC(a1, a3, v11, -1048576);
  sub_5E2CC(a1, a3, v14, (int)&loc_F0F0C + 3);
  sub_5E2CC(a1, a3, v11, 0xFFFFFF);
  sub_5E2CC(a1, a3, v14, -268435456);
  sub_5E2CC(a1, a3, v11, -16777216);
  sub_5E2CC(a1, a3, v15, 15790320);
  sub_5E2CC(a1, a3, v11, 4095);
  sub_5E2CC(a1, a3, v16, 252641280);
  sub_5E2CC(a1, a3, v11, -4096);
  sub_5E2CC(a1, a3, v12, 3855);
  sub_5E2CC(a1, a3, v11, 0);
  sub_5CB80(a1, a3, 144, 0);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 0);
  sub_5CB80(a1, a3, 145, -2147442687);
  return 0;
}
