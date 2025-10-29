int __fastcall read_dag(int a1)
{
  int v2; // r4
  unsigned int i; // r4
  unsigned __int8 v4; // r1
  int v5; // r3
  int v6; // r0
  int v7; // r8
  int v8; // r9
  int v9; // r2
  _DWORD *v10; // r4
  int *v11; // r12
  int *v12; // r5
  int v13; // r0
  int v14; // r1
  int *v15; // lr
  int v16; // r2
  int v17; // r3
  char *v19; // r11
  char *v20; // r4
  int v21; // t1
  char *v22; // r0
  int v23; // [sp+4h] [bp-1160h]
  int v24; // [sp+2Ch] [bp-1138h]
  int v25; // [sp+30h] [bp-1134h]
  int v26; // [sp+34h] [bp-1130h]
  int j; // [sp+38h] [bp-112Ch]
  int k; // [sp+3Ch] [bp-1128h]
  int *v29; // [sp+40h] [bp-1124h]
  int v30; // [sp+5Ch] [bp-1108h] BYREF
  _DWORD v31[6]; // [sp+60h] [bp-1104h] BYREF
  _DWORD v32[7]; // [sp+78h] [bp-10ECh] BYREF
  int v33; // [sp+94h] [bp-10D0h]
  char v34; // [sp+9Bh] [bp-10C9h] BYREF
  int v35; // [sp+9Ch] [bp-10C8h] BYREF
  char v36; // [sp+DBh] [bp-1089h] BYREF
  char s[132]; // [sp+DCh] [bp-1088h] BYREF
  _DWORD v38[2]; // [sp+160h] [bp-1004h] BYREF
  int v39; // [sp+168h] [bp-FFCh]
  int v40; // [sp+16Ch] [bp-FF8h]

  V_LOCK();
  V_INT((int)v32, "chain", *(int *)(a1 + 140));
  v2 = 0;
  logfmt_raw(
    (char *)v38,
    0x1000u,
    0,
    v33,
    v32[0],
    v32[1],
    v32[2],
    v32[3],
    v32[4],
    v32[5],
    v32[6],
    v33,
    "%s...",
    "read_dag");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "read_dag",
    8,
    8302,
    60,
    v38);
  do
  {
    sub_5BD68(a1, v2, 19, v2);
    ++v2;
    usleep(0x2710u);
  }
  while ( v2 != 16 );
  for ( i = 0; i != 16; ++i )
  {
    v4 = i;
    v5 = 3;
    if ( i > 7 )
      v4 = i;
    v6 = a1;
    if ( i > 7 )
    {
      v5 = 0;
      v6 = a1;
    }
    sub_5BD68(v6, v4, 12, v5);
  }
  v7 = a1;
  memset(s, 0, 0x81u);
  v26 = 0;
  v31[0] = 0;
  v31[1] = 1;
  v31[2] = 4096;
  v31[3] = 4096;
  v31[4] = 16382;
  v31[5] = 0x3FFF;
  do
  {
    for ( j = 0; j != 8; ++j )
    {
      for ( k = 0; k != 8; ++k )
      {
        v29 = v31;
        do
        {
          v8 = 0;
          v9 = *v29++;
          v25 = v9;
          v24 = (v26 << 22) | (32 * j) | (4 * k) | (v9 << 8);
          do
          {
            v39 = 0;
            v30 = 0;
            v38[1] = v24;
            v38[0] = 0;
            v40 = 0;
            BYTE1(v39) = v8;
            v10 = malloc(0x4Cu);
            *v10 = 0;
            v10[1] = 0;
            v10[2] = 0;
            (*(void (__fastcall **)(int, _DWORD *, int, _DWORD *, int *, int, int, _DWORD))(v7 + 180))(
              v7,
              v38,
              1,
              v10,
              &v30,
              v23,
              2000,
              0);
            v11 = (_DWORD *)((char *)v10 + 10);
            v12 = &v35;
            do
            {
              v13 = *v11;
              v11 += 4;
              v14 = *(v11 - 3);
              v15 = v12;
              v16 = *(v11 - 2);
              v12 += 4;
              v17 = *(v11 - 1);
              *v15 = v13;
              v15[1] = v14;
              v15[2] = v16;
              v15[3] = v17;
            }
            while ( v11 != (_DWORD *)((char *)v10 + 74) );
            free(v10);
            if ( v30 )
            {
              v19 = &v34;
              v20 = s;
              do
              {
                v21 = (unsigned __int8)*++v19;
                v22 = v20;
                v20 += 2;
                sprintf(v22, "%02x", v21);
              }
              while ( &v36 != v19 );
              V_LOCK();
              logfmt_raw(
                (char *)v38,
                0x1000u,
                0,
                "[DAG] node_index %08x(chip %1d row %02d col %d ch %d s_addr %04x %s",
                v24,
                v8,
                v26,
                j,
                k,
                v25,
                s);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/backend/backend_eth/backend_eth.c",
                154,
                "read_dag",
                8,
                8334,
                60,
                v38);
            }
            ++v8;
          }
          while ( v8 != 8 );
        }
        while ( v32 != v29 );
      }
    }
    ++v26;
  }
  while ( v26 != 12 );
  sub_5BD10(v7, 12, 2);
  return 0;
}
