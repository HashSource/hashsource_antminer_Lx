int __fastcall check_nonce_ltc(int a1, int a2)
{
  int v4; // [sp+Ch] [bp-4h]
  int v7; // [sp+1Ch] [bp+Ch] BYREF
  unsigned int v8; // [sp+101Ch] [bp+100Ch] BYREF
  _DWORD v9[4]; // [sp+1020h] [bp+1010h] BYREF
  _BYTE v10[80]; // [sp+1040h] [bp+1030h] BYREF
  unsigned __int8 v11; // [sp+1093h] [bp+1083h]
  unsigned int v12; // [sp+1094h] [bp+1084h]
  int v13; // [sp+1098h] [bp+1088h]
  int v14; // [sp+109Ch] [bp+108Ch]

  v14 = a2;
  v13 = *(_DWORD *)(a1 + 624);
  v12 = *(_DWORD *)(v13 + 4 * (*(unsigned __int8 *)(a2 + 85) + 4864));
  memcpy(v10, (const void *)(v13 + 80 * *(unsigned __int8 *)(a2 + 85) + 9216), sizeof(v10));
  v8 = _byteswap_ulong(*(_DWORD *)(v14 + 80));
  memcpy(&v10[76], &v8, 4u);
  scrypt_regenhash(v9, (int)v10);
  v11 = target_to_diff_ltc((int)v9);
  if ( v11 > 0x1Au )
  {
    if ( (*(_BYTE *)(v14 + 84) & 0x20) != 0 )
    {
      if ( v11 <= 0x2Fu )
      {
        V_LOCK();
        logfmt_raw(
          &v7,
          0x1000u,
          0,
          "calculate diff %02x, but ans diff %02x (bit5 is 1)",
          v11,
          *(unsigned __int8 *)(v14 + 84));
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ltc/backend_ltc.c",
          83,
          "check_nonce_ltc",
          15,
          467,
          20,
          &v7);
        return 3;
      }
    }
    else if ( v11 != *(unsigned __int8 *)(v14 + 84) + 16 )
    {
      V_LOCK();
      logfmt_raw(&v7, 0x1000u, 0, "diff not match, calculate %02x ans diff %02x", v11, *(unsigned __int8 *)(v14 + 84));
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ltc/backend_ltc.c",
        83,
        "check_nonce_ltc",
        15,
        472,
        20,
        &v7);
      return 3;
    }
    if ( v11 < v12 || (unsigned __int8)sub_DEE20((int)v9, v13 + 32 * (*(unsigned __int8 *)(v14 + 85) + 624)) != 1 )
    {
      V_LOCK();
      logfmt_raw(&v7, 0x1000u, 0, "hw diff (%d<%d) not reach pool", v11, v12);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ltc/backend_ltc.c",
        83,
        "check_nonce_ltc",
        15,
        478,
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
    logfmt_raw(
      &v7,
      0x1000u,
      0,
      "hw error calculate diff %02x ans diff %02x TICKET_MASK_ZERO_COUNT_LTC %02x",
      v11,
      *(unsigned __int8 *)(v14 + 84),
      27,
      v4,
      a2,
      a1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ltc/backend_ltc.c",
      83,
      "check_nonce_ltc",
      15,
      461,
      20,
      &v7);
    return 2;
  }
}
