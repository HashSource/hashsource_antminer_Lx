int __fastcall sub_E6DC4(const char *a1, int a2)
{
  char v6[2048]; // [sp+18h] [bp+8h] BYREF
  _BYTE v7[8]; // [sp+818h] [bp+808h] BYREF
  char v8[24]; // [sp+1818h] [bp+1808h] BYREF
  int v9; // [sp+1838h] [bp+1828h]
  int i; // [sp+183Ch] [bp+182Ch]

  v9 = socket(2, 1, 0);
  if ( v9 >= 0 )
  {
    strcpy(v8, a1);
    if ( ioctl(v9, 0x8927u, v8) >= 0 )
    {
      for ( i = 0; i <= 5; ++i )
        *(_BYTE *)(a2 + i) = v8[i + 18];
      close(v9);
      return 0;
    }
    else
    {
      strcpy(v6, "error ioctl");
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, v6);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_common.c",
        96,
        "get_eth_mac",
        11,
        134,
        100,
        v7);
      close(v9);
      return -2;
    }
  }
  else
  {
    strcpy(v6, "error sock");
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_common.c",
      96,
      "get_eth_mac",
      11,
      128,
      100,
      v7);
    return -1;
  }
}
