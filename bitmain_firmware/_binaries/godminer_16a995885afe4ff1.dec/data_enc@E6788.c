int __fastcall data_enc(unsigned int *a1, unsigned int a2, int a3, int a4)
{
  unsigned int v5; // r5
  char v7[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( a3 == 1 )
  {
    v5 = a2 & 7;
    if ( (a2 & 7) != 0 )
    {
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, " xxtea input data length %% 8 must be 0, but now is %d", v5);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/common/general/xxtea.c",
        158,
        "data_enc",
        8,
        93,
        100,
        v7);
      return 0;
    }
    else
    {
      xxtea_encode(a1, a2 >> 2, (int)&xxtea_key + 16 * a4);
      return 1;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, "algorithm_type is %d, but not support it", a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/common/general/xxtea.c",
      158,
      "data_enc",
      8,
      100,
      100,
      v7);
    return 0;
  }
}
