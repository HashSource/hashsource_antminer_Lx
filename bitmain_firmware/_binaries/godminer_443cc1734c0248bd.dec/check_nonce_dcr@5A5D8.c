int __fastcall check_nonce_dcr(int a1, int a2)
{
  int v2; // r5
  int v4; // r4
  unsigned int v5; // r3
  int v6; // r0
  int v7; // r1
  int v8; // r2
  unsigned int v9; // r0
  unsigned int v10; // r5
  unsigned int v11; // r3
  _BYTE *v12; // r5
  unsigned __int8 *v13; // r4
  int v14; // r12
  int v15; // t1
  int v16; // t1
  unsigned int v17; // r2
  unsigned int v18; // r3
  unsigned int v20; // [sp+14h] [bp-10E0h]
  _BYTE v21[32]; // [sp+1Ch] [bp-10D8h] BYREF
  _DWORD s[45]; // [sp+3Ch] [bp-10B8h] BYREF
  char v23[4100]; // [sp+F0h] [bp-1004h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 65);
  v4 = *(_DWORD *)(a1 + 624);
  v5 = *(_DWORD *)(v4 + 4 * (v2 + 7040));
  v2 *= 180;
  v20 = v5;
  memset(s, 0, sizeof(s));
  memcpy(s, (const void *)(v4 + v2 + 5120), 0x8Cu);
  v6 = *(_DWORD *)(a2 + 52);
  s[35] = *(_DWORD *)(a2 + 48);
  v7 = *(_DWORD *)(a2 + 56);
  v8 = *(_DWORD *)(a2 + 60);
  s[36] = v6;
  s[37] = v7;
  s[38] = v8;
  s[44] = *(_DWORD *)(v4 + v2 + 5291);
  decred_hash((int)v21, (char *)s);
  v9 = target_to_diff_dcr((int)v21);
  v10 = v9;
  if ( v9 <= 0x1F )
  {
    V_LOCK();
    logfmt_raw(
      v23,
      0x1000u,
      0,
      "hw error calculate diff %d ans diff %d TICKET_MASK_DCR %d",
      v10,
      *(unsigned __int8 *)(a2 + 64),
      32);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_dcr/backend_dcr.c",
      154,
      "check_nonce_dcr",
      15,
      357,
      20,
      v23);
    return 2;
  }
  else
  {
    v11 = *(unsigned __int8 *)(a2 + 64);
    if ( v11 == v9 )
    {
      if ( v20 > v11 )
      {
LABEL_9:
        V_LOCK();
        logfmt_raw(v23, 0x1000u, 0, "hw diff (%d<%d) not reach pool", *(unsigned __int8 *)(a2 + 64), v20);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_dcr/backend_dcr.c",
          154,
          "check_nonce_dcr",
          15,
          367,
          20,
          v23);
        return 1;
      }
      else
      {
        v12 = s;
        v13 = (unsigned __int8 *)(v4 + 32 * *(unsigned __int8 *)(a2 + 65) + 28704);
        do
        {
          V_LOCK();
          v15 = (unsigned __int8)*--v12;
          v14 = v15;
          v16 = *--v13;
          logfmt_raw(v23, 0x1000u, 0, "%02x Vs %02x", v14, v16);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_dcr/backend_dcr.c",
            154,
            "fulltest_dcr",
            12,
            306,
            60,
            v23);
          v17 = (unsigned __int8)*v12;
          v18 = *v13;
          if ( v17 < v18 )
            break;
          if ( v17 > v18 )
            goto LABEL_9;
        }
        while ( v21 != v12 );
        return 0;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v23, 0x1000u, 0, "diff not match (%d!=%d) expected diff %d", v10, *(unsigned __int8 *)(a2 + 64), v20);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_dcr/backend_dcr.c",
        154,
        "check_nonce_dcr",
        15,
        362,
        20,
        v23);
      return 3;
    }
  }
}
