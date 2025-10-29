int __fastcall read_rx_debug_reg2(int a1, int a2, _BYTE *a3, unsigned __int16 a4)
{
  int v7; // r9
  unsigned __int16 v8; // r7
  int v9; // r6
  int v10; // r8
  int v11; // r2
  unsigned int v12; // r7
  _DWORD v14[7]; // [sp+28h] [bp-1020h] BYREF
  int v15; // [sp+44h] [bp-1004h]
  char v16[4096]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK();
  V_INT((int)v14, "chain", *(int *)(a1 + 148));
  logfmt_raw(
    v16,
    0x1000u,
    0,
    v15,
    v14[0],
    v14[1],
    v14[2],
    v14[3],
    v14[4],
    v14[5],
    v14[6],
    v15,
    "%s...",
    "read_rx_debug_reg2");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "read_rx_debug_reg2",
    18,
    9184,
    60,
    v16);
  if ( a4 )
  {
    LOWORD(v7) = 0;
    do
    {
      v8 = (_WORD)v7 << 12;
      v9 = (unsigned __int16)((_WORD)v7 << 12) | 1;
      v10 = (unsigned __int16)((_WORD)v7 << 12) | 0x16;
      v7 = (unsigned __int16)(v7 + 1);
      sub_5F554(a1, (unsigned __int8)a3, v8 | 1, -9);
      sub_5F554(a1, (unsigned __int8)a3, v8 | 0x16, 0);
      sub_5F554(a1, (unsigned __int8)a3, v8 | 1, -9);
      v11 = v8 | 0x16;
      v12 = v8 | 0x1A;
      sub_5F554(a1, (unsigned __int8)a3, v11, 8);
      sub_5F554(a1, (unsigned __int8)a3, v9, -9);
      sub_5F554(a1, (unsigned __int8)a3, v10, 0);
      sub_5F3AC(a1, a3, v12);
      sub_5F554(a1, (unsigned __int8)a3, v9, -9);
      sub_5F554(a1, (unsigned __int8)a3, v10, 0);
      sub_5F554(a1, (unsigned __int8)a3, v9, -9);
      sub_5F554(a1, (unsigned __int8)a3, v10, 8);
      sub_5F554(a1, (unsigned __int8)a3, v9, -9);
      sub_5F554(a1, (unsigned __int8)a3, v10, 0);
      sub_5F3AC(a1, a3, v12);
      sub_5F554(a1, (unsigned __int8)a3, v9, -9);
      sub_5F554(a1, (unsigned __int8)a3, v10, 0);
      sub_5F554(a1, (unsigned __int8)a3, v9, -9);
      sub_5F554(a1, (unsigned __int8)a3, v10, 8);
      sub_5F554(a1, (unsigned __int8)a3, v9, -9);
      sub_5F554(a1, (unsigned __int8)a3, v10, 0);
      sub_5F3AC(a1, a3, v12);
      sub_5F554(a1, (unsigned __int8)a3, v9, 0);
    }
    while ( v7 != a4 );
  }
  return 0;
}
