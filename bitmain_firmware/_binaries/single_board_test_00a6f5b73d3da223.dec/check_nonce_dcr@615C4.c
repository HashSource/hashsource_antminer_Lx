int __fastcall check_nonce_dcr(int a1, unsigned __int8 *a2)
{
  int v4; // [sp+Ch] [bp-4h]
  int v7; // [sp+1Ch] [bp+Ch] BYREF
  _BYTE v8[20]; // [sp+101Ch] [bp+100Ch] BYREF
  char v9[180]; // [sp+103Ch] [bp+102Ch] BYREF
  unsigned __int8 v10; // [sp+10F3h] [bp+10E3h]
  unsigned int v11; // [sp+10F4h] [bp+10E4h]
  int v12; // [sp+10F8h] [bp+10E8h]
  unsigned __int8 *v13; // [sp+10FCh] [bp+10ECh]

  v13 = a2;
  v12 = *(_DWORD *)(a1 + 624);
  v11 = *(_DWORD *)(v12 + 4 * (a2[65] + 7040));
  memset(v9, 0, sizeof(v9));
  memcpy(v9, (const void *)(v12 + 180 * v13[65] + 5120), 0x8Cu);
  memcpy(&v9[140], v13 + 48, 4u);
  memcpy(&v9[144], v13 + 52, 0xCu);
  memcpy(&v9[176], (const void *)(v12 + 180 * v13[65] + 5291), 4u);
  decred_hash((int)v8, v9);
  v10 = target_to_diff_dcr((int)v8);
  if ( v10 > 0x1Fu )
  {
    if ( v10 == v13[64] )
    {
      if ( v10 < v11 || (unsigned __int8)sub_61424((int)v8, v12 + 32 * (v13[65] + 896)) != 1 )
      {
        V_LOCK();
        logfmt_raw(&v7, 0x1000u, 0, "hw diff (%d<%d) not reach pool", v13[64], v11);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_dcr/backend_dcr.c",
          83,
          "check_nonce_dcr",
          15,
          367,
          20,
          &v7);
        return 1;
      }
      else
      {
        return 0;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(&v7, 0x1000u, 0, "diff not match (%d!=%d) expected diff %d", v10, v13[64], v11, v4, a2, a1);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_dcr/backend_dcr.c",
        83,
        "check_nonce_dcr",
        15,
        362,
        20,
        &v7);
      return 3;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(
      &v7,
      0x1000u,
      0,
      "hw error calculate diff %d ans diff %d TICKET_MASK_DCR %d",
      v10,
      v13[64],
      32,
      v4,
      a2,
      a1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_dcr/backend_dcr.c",
      83,
      "check_nonce_dcr",
      15,
      357,
      20,
      &v7);
    return 2;
  }
}
