unsigned int *__fastcall sub_E6798(unsigned int *result)
{
  unsigned int *v1; // [sp+14h] [bp+4h]
  char v2[2048]; // [sp+18h] [bp+8h] BYREF
  _BYTE v3[8]; // [sp+818h] [bp+808h] BYREF
  unsigned int j; // [sp+1818h] [bp+1808h]
  unsigned int i; // [sp+181Ch] [bp+180Ch]

  v1 = result;
  if ( result )
  {
    strcpy(v2, "==================capability start==================\n");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_common.c",
      96,
      "platform_dump_capability",
      24,
      43,
      20,
      v3);
    snprintf(v2, 0x800u, "board num = %d\n", *v1);
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_common.c",
      96,
      "platform_dump_capability",
      24,
      44,
      20,
      v3);
    for ( i = 0; *v1 > i; ++i )
    {
      snprintf(v2, 0x800u, "board id = %d, chain num = %d\n", v1[18 * i + 1], v1[18 * i + 2]);
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, v2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_common.c",
        96,
        "platform_dump_capability",
        24,
        48,
        20,
        v3);
      for ( j = 0; v1[18 * i + 2] > j; ++j )
      {
        snprintf(v2, 0x800u, "\tchain id = %d\n", v1[18 * i + 3 + j]);
        V_LOCK();
        logfmt_raw(v3, 0x1000u, 0, v2);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_common.c",
          96,
          "platform_dump_capability",
          24,
          50,
          20,
          v3);
      }
    }
    strcpy(v2, "==================capability end==================\n");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    return (unsigned int *)zlog(
                             g_zc,
                             "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_common.c",
                             96,
                             "platform_dump_capability",
                             24,
                             54,
                             20,
                             v3);
  }
  return result;
}
