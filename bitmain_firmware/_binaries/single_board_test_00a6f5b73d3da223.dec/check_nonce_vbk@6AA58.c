int __fastcall check_nonce_vbk(int a1, int a2)
{
  _BYTE v6[16]; // [sp+18h] [bp+8h] BYREF
  _BYTE v7[24]; // [sp+1018h] [bp+1008h] BYREF
  _BYTE v8[67]; // [sp+1038h] [bp+1028h] BYREF
  unsigned __int8 v9; // [sp+107Bh] [bp+106Bh]
  unsigned int v10; // [sp+107Ch] [bp+106Ch]
  int v11; // [sp+1080h] [bp+1070h]
  int v12; // [sp+1084h] [bp+1074h]

  v12 = a2;
  v11 = *(_DWORD *)(a1 + 624);
  v10 = *(_DWORD *)(v11 + 4 * (*(unsigned __int8 *)(a2 + 29) + 5376));
  memcpy(v8, (const void *)(v11 + ((*(unsigned __int8 *)(a2 + 29) + 64) << 6)), 0x3Cu);
  v8[60] = HIBYTE(*(_DWORD *)(v12 + 24));
  v8[61] = BYTE2(*(_DWORD *)(v12 + 24));
  v8[62] = BYTE1(*(_DWORD *)(v12 + 24));
  v8[63] = *(_DWORD *)(v12 + 24);
  vblake_hash((int)v7, (int)v8);
  v9 = target_to_diff_vbk((int)v7);
  if ( v9 > 0x1Fu )
  {
    if ( v9 == *(unsigned __int8 *)(v12 + 28) )
    {
      return *(unsigned __int8 *)(v12 + 28) < v10
          || (unsigned __int8)sub_6A98C((int)v7, v11 + 24 * *(unsigned __int8 *)(v12 + 29) + 22528) != 1;
    }
    else
    {
      V_LOCK();
      logfmt_raw(
        v6,
        0x1000u,
        0,
        "nonce %x DIFF not match (%d:%d) not reach pool %d",
        *(_DWORD *)(v12 + 24),
        *(unsigned __int8 *)(v12 + 28),
        v9,
        v10,
        a2,
        a1);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_vbk/backend_vbk.c",
        83,
        "check_nonce_vbk",
        15,
        278,
        20,
        v6);
      return 3;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(
      v6,
      0x1000u,
      0,
      "check_nonce_vbk hw error diff %d %d expected diff %d nonce %x",
      v9,
      *(unsigned __int8 *)(v12 + 28),
      v10,
      *(_DWORD *)(v12 + 24),
      a2,
      a1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_vbk/backend_vbk.c",
      83,
      "check_nonce_vbk",
      15,
      273,
      20,
      v6);
    return 2;
  }
}
