int __fastcall open_cores_by_work_num(int a1)
{
  _DWORD *v1; // r0
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r1
  int v6; // r2
  int v7; // r3
  _BYTE *v8; // r3
  _BYTE *v9; // r3
  _BYTE v12[8]; // [sp+18h] [bp+8h] BYREF
  _DWORD v13[8]; // [sp+1018h] [bp+1008h] BYREF
  _BYTE *v14; // [sp+1038h] [bp+1028h]
  unsigned int i; // [sp+103Ch] [bp+102Ch]

  sub_788A8(a1, 21, 0);
  str2hex((int)v13, (int)"ab77b2cb3d32b0b61304401cbe540448a4cacd7e98421a850503e2f0d102f1d3", 64);
  v1 = calloc(1u, 0x59u);
  v14 = v1;
  v2 = v13[1];
  v3 = v13[2];
  v4 = v13[3];
  v1[4] = v13[0];
  v1[5] = v2;
  v1[6] = v3;
  v1[7] = v4;
  v5 = v13[5];
  v6 = v13[6];
  v7 = v13[7];
  v1[8] = v13[4];
  v1[9] = v5;
  v1[10] = v6;
  v1[11] = v7;
  v8 = v14;
  v14[8] = 86;
  v8[9] = 52;
  v8[10] = 18;
  v8[11] = 0;
  v8[12] = 0;
  v8[13] = 0;
  v8[14] = 0;
  v8[15] = 0;
  v9 = v14;
  v14[8] = 86;
  v9[9] = 52;
  v9[10] = 18;
  v9[11] = 0;
  v9[12] = 0;
  v9[13] = 0;
  v9[14] = 0;
  v9[15] = 0;
  for ( i = 1; i <= 0x40; ++i )
  {
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "%s %u", "open_cores_by_work_num", i);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
      83,
      "open_cores_by_work_num",
      22,
      11674,
      60,
      v12);
    sub_788A8(a1, 21, i);
    push_work_base(a1, (int)v14);
    usleep((__useconds_t)&stru_1869C.st_value);
  }
  return 0;
}
