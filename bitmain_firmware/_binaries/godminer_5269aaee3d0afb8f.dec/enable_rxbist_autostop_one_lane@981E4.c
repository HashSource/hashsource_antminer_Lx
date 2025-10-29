int __fastcall enable_rxbist_autostop_one_lane(
        int a1,
        int a2,
        unsigned __int8 a3,
        unsigned __int16 a4,
        unsigned __int8 a5)
{
  char *v8; // r1
  int v9; // r8
  int v10; // r4
  _DWORD *v11; // r2
  int v12; // r1
  _DWORD v14[7]; // [sp+28h] [bp-1020h] BYREF
  int v15; // [sp+44h] [bp-1004h]
  char v16[4088]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK();
  LOWORD(v8) = -6092;
  HIWORD(v8) = ((unsigned int)&loc_12D592 + 2) >> 16;
  LOWORD(v9) = -22448;
  HIWORD(v9) = (unsigned int)"11" >> 16;
  a4 <<= 12;
  V_INT((int)v14, v8, *(int *)(a1 + 140));
  LOWORD(v10) = -20196;
  HIWORD(v10) = (unsigned int)"_one_lane" >> 16;
  logfmt_raw(v16, 0x1000u, 0, v15, v14[0], v14[1], v14[2], v14[3], v14[4], v14[5], v14[6], v15, v10, v9 - 3796);
  V_UNLOCK();
  LOWORD(v11) = -14756;
  HIWORD(v11) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v12) = -23296;
  HIWORD(v12) = (unsigned int)"zer_tuning_one_lane" >> 16;
  zlog(*v11, v12, 154, v9 - 3764, 31, 9169, 60, v16);
  sub_5E2CC(a1, a3, a4 | 1, -5);
  sub_5E2CC(a1, a3, a4 & 0xF000 | 0x11, 4);
  sub_5E2CC(a1, a3, a4 | 1, -66060289);
  sub_5E2CC(a1, a3, a4 & 0xF000 | 0x13, (a5 << 20) & 0x3F00000);
  sub_5E2CC(a1, a3, a4 | 1, 0);
  return 0;
}
