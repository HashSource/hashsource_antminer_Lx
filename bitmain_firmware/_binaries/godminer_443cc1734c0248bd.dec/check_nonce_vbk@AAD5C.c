int __fastcall check_nonce_vbk(int a1, int a2)
{
  int v2; // r6
  int *v4; // r4
  int v5; // r3
  int *v6; // r12
  unsigned int v7; // r7
  int *v8; // r8
  int v9; // r0
  int v10; // r1
  int *v11; // lr
  int v12; // r2
  int v13; // r3
  int v14; // r3
  int v15; // r1
  int v16; // r2
  unsigned int v17; // r0
  unsigned int v18; // r4
  unsigned int v19; // r3
  unsigned int *v20; // r1
  int v21; // r6
  int v22; // r0
  int v23; // r6
  unsigned int v24; // r2
  unsigned int v25; // t1
  unsigned int v26; // t1
  unsigned int v27; // r2
  unsigned int v28; // r3
  _BYTE v30[32]; // [sp+10h] [bp-1060h] BYREF
  _BYTE v31[64]; // [sp+30h] [bp-1040h] BYREF
  char v32[4096]; // [sp+70h] [bp-1000h] BYREF

  v2 = *(_DWORD *)(a1 + 624);
  v4 = (int *)v31;
  v5 = *(unsigned __int8 *)(a2 + 29);
  v6 = (int *)(v2 + ((v5 + 64) << 6));
  v7 = *(_DWORD *)(v2 + 4 * (v5 + 5376));
  v8 = v6 + 12;
  do
  {
    v9 = *v6;
    v6 += 4;
    v10 = *(v6 - 3);
    v11 = v4;
    v12 = *(v6 - 2);
    v4 += 4;
    v13 = *(v6 - 1);
    *v11 = v9;
    v11[1] = v10;
    v11[2] = v12;
    v11[3] = v13;
  }
  while ( v6 != v8 );
  v14 = *(_DWORD *)(a2 + 24);
  v15 = v6[1];
  v16 = v6[2];
  *v4 = *v6;
  v4[1] = v15;
  v4[2] = v16;
  v31[60] = HIBYTE(v14);
  v31[63] = v14;
  v31[61] = BYTE2(v14);
  v31[62] = BYTE1(v14);
  vblake_hash(v30, (int)v31);
  v17 = target_to_diff_vbk((int)v30);
  v18 = v17;
  if ( v17 <= 0x1F )
  {
    V_LOCK();
    logfmt_raw(
      v32,
      0x1000u,
      0,
      "check_nonce_vbk hw error diff %d %d expected diff %d nonce %x",
      v18,
      *(unsigned __int8 *)(a2 + 28),
      v7,
      *(_DWORD *)(a2 + 24));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_vbk/backend_vbk.c",
      154,
      "check_nonce_vbk",
      15,
      273,
      20,
      v32);
    return 2;
  }
  else
  {
    v19 = *(unsigned __int8 *)(a2 + 28);
    if ( v19 == v17 )
    {
      if ( v7 <= v19 )
      {
        v20 = (unsigned int *)v30;
        v21 = v2 + 24 * *(unsigned __int8 *)(a2 + 29) + 22528;
        v22 = v21 - 4;
        v23 = v21 + 20;
        while ( 1 )
        {
          v25 = *v20++;
          v24 = v25;
          v26 = *(_DWORD *)(v22 + 4);
          v22 += 4;
          v27 = bswap32(v24);
          v28 = bswap32(v26);
          if ( v27 > v28 )
            break;
          if ( v27 < v28 || v23 == v22 )
            return 0;
        }
      }
      return 1;
    }
    else
    {
      V_LOCK();
      logfmt_raw(
        v32,
        0x1000u,
        0,
        "nonce %x DIFF not match (%d:%d) not reach pool %d",
        *(_DWORD *)(a2 + 24),
        *(unsigned __int8 *)(a2 + 28),
        v18,
        v7);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_vbk/backend_vbk.c",
        154,
        "check_nonce_vbk",
        15,
        278,
        20,
        v32);
      return 3;
    }
  }
}
