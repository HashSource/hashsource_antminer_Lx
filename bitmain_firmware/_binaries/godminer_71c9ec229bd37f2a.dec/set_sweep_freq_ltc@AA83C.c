int __fastcall set_sweep_freq_ltc(int a1, float *a2)
{
  float v2; // s0
  int v4; // r0
  float v5; // s17
  float v6; // s15
  float *v7; // r0
  float *v8; // r3
  float *v9; // r2
  float v10; // s14
  int v11; // r3
  int v12; // r9
  int v13; // r10
  int v14; // r8
  float *v15; // r11
  float v16; // s18
  float *v17; // r4
  float *v18; // r5
  int v19; // r6
  float v20; // s15
  int v21; // r2
  float v22; // s16
  _DWORD v24[2]; // [sp+0h] [bp-123Ch] BYREF
  int v25; // [sp+20h] [bp-121Ch]
  int v26; // [sp+28h] [bp-1214h]
  float *v27; // [sp+2Ch] [bp-1210h]
  int *v28; // [sp+30h] [bp-120Ch]
  const char *v29; // [sp+34h] [bp-1208h]
  char v30; // [sp+38h] [bp-1204h] BYREF
  char v31[4100]; // [sp+238h] [bp-1004h] BYREF

  v4 = *(_DWORD *)(a1 + 204);
  v5 = *(float *)(a1 + 768);
  v6 = 0.0;
  if ( v4 )
  {
    v7 = &a2[v4];
    v8 = a2;
    v9 = (float *)&v30;
    do
    {
      v10 = *v8++;
      *v9++ = v5;
      if ( v10 > v6 )
        v6 = v10;
    }
    while ( v8 != v7 );
  }
  v11 = (int)(((float)((float)(v6 - v5) + v2) - 0.001) / v2);
  if ( v11 > 0 )
  {
    v12 = (char *)&v24[-106] - (char *)a2;
    v13 = 1;
    v26 = v11 + 1;
    v28 = &g_zc;
    v27 = a2 + 120;
    v29 = "Chain [%d] set sweep %f, start_freq = %f, sweep_step %f, step_id %d ";
    do
    {
      v14 = 0;
      v15 = v27;
      v16 = (float)v13;
      do
      {
        v17 = v15 - 120;
        v18 = (float *)((char *)v15 + v12);
        v19 = v14;
        do
        {
          v20 = *v17;
          v21 = v19;
          v17 += 5;
          v19 += 5;
          if ( v20 > *v18 )
          {
            v22 = v5 + (float)(v16 * v2);
            if ( v20 < v22 )
              v22 = v20;
            sweep_chip_setting_freq_ltc(a1, 0, v21);
            *v18 = v22;
          }
          v18 += 5;
        }
        while ( v15 != v17 );
        ++v14;
        ++v15;
      }
      while ( v14 != 5 );
      V_LOCK();
      v24[0] = *(_DWORD *)(a1 + 144);
      v25 = v13++;
      logfmt_raw(v31, 0x1000u, 0, v29, v24[0], v24[1], (float)(v5 + (float)(v16 * v2)), v5, v2, v25);
      V_UNLOCK();
      zlog(
        *v28,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_ltc/backend_ltc.c",
        154,
        "set_sweep_freq_ltc",
        18,
        721,
        20,
        v31);
    }
    while ( v13 != v26 );
  }
  usleep(0x7A120u);
  return 0;
}
