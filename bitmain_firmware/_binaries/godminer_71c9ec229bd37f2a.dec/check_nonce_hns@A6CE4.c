int __fastcall check_nonce_hns(int a1, int a2)
{
  int v2; // r6
  int v4; // r3
  const void *v5; // r5
  unsigned int v6; // r7
  char v7; // r12
  int v8; // r3
  unsigned int v9; // r0
  unsigned int v10; // r5
  unsigned int v11; // r3
  _BYTE v13[32]; // [sp+10h] [bp-1124h] BYREF
  _DWORD dest[64]; // [sp+30h] [bp-1104h] BYREF
  char v15[4100]; // [sp+130h] [bp-1004h] BYREF

  v2 = *(_DWORD *)(a1 + 632);
  v4 = *(unsigned __int8 *)(a2 + 57);
  v5 = (const void *)(v2 + ((v4 + 20) << 8));
  v6 = *(_DWORD *)(v2 + 4 * (v4 + 9472));
  memcpy(dest, v5, sizeof(dest));
  v7 = *(_BYTE *)(a2 + 54);
  v8 = *(_DWORD *)(a2 + 48);
  BYTE2(dest[62]) = *(_BYTE *)(a2 + 55);
  HIBYTE(dest[62]) = v7;
  dest[63] = v8;
  sub_A6CA0("awork", (int)v5, 256);
  sub_A6CA0("pwork", (int)dest, 256);
  hns_hash((int)dest);
  sub_A6CA0("target", v2 + 32 * (*(unsigned __int8 *)(a2 + 57) + 1200), 32);
  sub_A6CA0("vvhash", (int)v13, 32);
  v9 = target_to_diff_byte_hns((int)v13);
  v10 = v9;
  if ( v9 <= 0x19 )
  {
    V_LOCK();
    logfmt_raw(
      v15,
      0x1000u,
      0,
      "hw error calculate diff %d ans diff %d TICKET_MASK_HNS %d",
      v10,
      *(unsigned __int8 *)(a2 + 56),
      26);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_hns/backend_hns.c",
      154,
      "check_nonce_hns",
      15,
      365,
      20,
      v15);
    return 2;
  }
  else
  {
    v11 = *(unsigned __int8 *)(a2 + 56);
    if ( v11 == v9 )
    {
      if ( v6 > v11 )
      {
        V_LOCK();
        logfmt_raw(v15, 0x1000u, 0, "hw diff (%d<%d) not reach pool", *(unsigned __int8 *)(a2 + 56), v6);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_hns/backend_hns.c",
          154,
          "check_nonce_hns",
          15,
          375,
          20,
          v15);
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
      logfmt_raw(v15, 0x1000u, 0, "diff not match (%d!=%d) expected diff %d", v10, *(unsigned __int8 *)(a2 + 56), v6);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_hns/backend_hns.c",
        154,
        "check_nonce_hns",
        15,
        370,
        20,
        v15);
      return 3;
    }
  }
}
