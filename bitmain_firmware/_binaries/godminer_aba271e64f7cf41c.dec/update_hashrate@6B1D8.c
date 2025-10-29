_QWORD *__fastcall update_hashrate(int a1, int a2, _QWORD *a3)
{
  unsigned __int64 v3; // d17
  float v4; // s16
  float v5; // s16
  float v6; // r0
  float v7; // r0
  double v8; // d17
  float v13[57]; // [sp+38h] [bp-11ECh] BYREF
  char v14[72]; // [sp+11Ch] [bp-1108h] BYREF
  int v15; // [sp+111Ch] [bp-108h] BYREF
  char v16; // [sp+1122h] [bp-102h]
  char v17; // [sp+1124h] [bp-100h]
  int v18; // [sp+1130h] [bp-F4h] BYREF
  char v19; // [sp+1136h] [bp-EEh]
  _BYTE v20[4]; // [sp+1144h] [bp-E0h] BYREF
  double v21; // [sp+1148h] [bp-DCh] BYREF
  __int64 v22; // [sp+1150h] [bp-D4h] BYREF
  __int64 v23; // [sp+1158h] [bp-CCh] BYREF
  _QWORD v24[3]; // [sp+1160h] [bp-C4h] BYREF
  __int64 v25; // [sp+1178h] [bp-ACh]
  struct timespec *v26; // [sp+1180h] [bp-A4h]
  int v27; // [sp+1184h] [bp-A0h]
  _QWORD *v28; // [sp+1188h] [bp-9Ch]
  int v29; // [sp+118Ch] [bp-98h]
  _QWORD *v30; // [sp+1190h] [bp-94h]
  struct timespec *v31; // [sp+1194h] [bp-90h]
  struct timespec *v32; // [sp+1198h] [bp-8Ch]
  struct timespec *v33; // [sp+119Ch] [bp-88h]
  struct timespec *v34; // [sp+11A0h] [bp-84h]
  struct timespec *v35; // [sp+11A4h] [bp-80h]
  struct timespec *v36; // [sp+11A8h] [bp-7Ch]
  struct timespec *tp; // [sp+11ACh] [bp-78h]
  struct timespec *v38; // [sp+11B0h] [bp-74h]
  struct timespec *v39; // [sp+11B4h] [bp-70h]
  double v40; // [sp+11B8h] [bp-6Ch]
  float v41; // [sp+11C4h] [bp-60h]
  float v42; // [sp+11C8h] [bp-5Ch]
  float v43; // [sp+11CCh] [bp-58h]
  __int64 v44; // [sp+11D0h] [bp-54h]
  __int64 v45; // [sp+11D8h] [bp-4Ch]
  int v46; // [sp+11E4h] [bp-40h]
  float v47; // [sp+11E8h] [bp-3Ch]
  float v48; // [sp+11ECh] [bp-38h]
  double v49; // [sp+11F0h] [bp-34h]
  int i; // [sp+11F8h] [bp-2Ch]
  int j; // [sp+11FCh] [bp-28h]
  struct timespec *v52; // [sp+1200h] [bp-24h]
  struct timespec *v53; // [sp+1204h] [bp-20h]
  struct timespec *v54; // [sp+1208h] [bp-1Ch]
  int v55; // [sp+120Ch] [bp-18h]

  (*(void (__fastcall **)(int, __int64 *))(a1 + 136))(a1, &v23);
  (*(void (__fastcall **)(int, __int64 *))(a1 + 144))(a1, &v22);
  (*(void (__fastcall **)(int, double *, _BYTE *))(a1 + 140))(a1, &v21, v20);
  *(_QWORD *)(a2 + 56) = v23;
  *(_QWORD *)(a2 + 64) = v22;
  v55 = *(_DWORD *)(a1 + 248);
  if ( v55 <= 16 )
  {
    v54 = (struct timespec *)((char *)&unk_153C38 + 16 * v55);
    v53 = (struct timespec *)((char *)&unk_153D38 + 16 * v55);
    v52 = (struct timespec *)((char *)&unk_153E38 + 16 * v55);
    if ( byte_153F38[v55] != 1 )
    {
      tp = v54;
      clock_gettime(1, v54);
      v38 = v53;
      clock_gettime(1, v53);
      v39 = v52;
      clock_gettime(1, v52);
      qword_153F48[v55] = 0;
      byte_153F38[v55] = 1;
    }
    if ( *(_QWORD *)(a1 + 448) || byte_15F4C8 == 1 )
    {
      if ( byte_15F4C8 != 1 )
        byte_15F4C8 = 1;
      v33 = v54;
      clock_gettime(1, v54 + 1);
      v3 = v33[1].tv_sec - v33->tv_sec;
      v47 = (float)((v33[1].tv_nsec - v33->tv_nsec) / 1000000 + vshld_n_s64(4 * (vshld_n_s64(v3, 5u) - v3) + v3, 3u))
          / 1000.0;
      v46 = (int)&unk_153FC8 + 2896 * v55;
      if ( v47 >= 5.0 )
      {
        v45 = *(_QWORD *)(a1 + 448);
        v44 = v45 - qword_153F48[v55];
        v48 = 0.0;
        get_miner_working_status(&v18);
        if ( v19 != 1 && (unsigned __int8)v18 != 1 )
        {
          v4 = COERCE_FLOAT(sub_CCCD0(v44)) / v47;
          LODWORD(v3) = *(_DWORD *)(a1 + 432);
          v48 = v4 * COERCE_FLOAT(sub_CCCD0(vshld_u64(1u, v3)));
        }
        V_LOCK();
        logfmt_raw(v14, 0x1000u, 0, "[HashRate] time_passed_sec: %.2f, nc %llu, new %llu, %.2f H/s", v47, v45, v44, v48);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_hashrate.c",
          200,
          "update_hashrate",
          15,
          126,
          20,
          v14);
        v32 = v54;
        clock_gettime(1, v54);
        *(float *)(v46 + 4 * (*(_DWORD *)(v46 + 2880))++) = v48;
        *(int *)(v46 + 2880) %= 720;
        qword_153F48[v55] = v45;
        v5 = *(float *)(a2 + 48);
        v6 = COERCE_FLOAT(sub_CCCD0(*(_QWORD *)(v46 + 2888)));
        v43 = v48 + (float)(v5 * v6);
        v7 = COERCE_FLOAT(sub_CCCD0(*(_QWORD *)(v46 + 2888) + 1LL));
        *(float *)(a2 + 48) = v43 / v7;
        ++*(_QWORD *)(v46 + 2888);
      }
      sub_6B0AC(v46);
      *(float *)(a2 + 36) = 5.0;
      sub_6B0AC(v46);
      *(_DWORD *)(a2 + 40) = 1114636288;
      sub_6B0AC(v46);
      *(_DWORD *)(a2 + 44) = 1155596288;
      v49 = 0.0;
      for ( i = 0; i < *(_DWORD *)(a1 + 336); ++i )
      {
        for ( j = 2; j <= 5; ++j )
          *(_QWORD *)&v49 += *(_QWORD *)(*(_DWORD *)(a1 + 456) + 48 * i + 8 * j);
      }
      *(double *)(a2 + 88) = v49;
      v31 = v53;
      clock_gettime(1, v53 + 1);
      v42 = (float)((v31[1].tv_nsec - v31->tv_nsec) / 1000000
                  + vshld_n_s64(
                      4 * (vshld_n_s64(v31[1].tv_sec - v31->tv_sec, 5u) - (v31[1].tv_sec - v31->tv_sec))
                    + v31[1].tv_sec
                    - v31->tv_sec,
                      3u))
          / 1000.0;
      if ( v42 >= 900.0 )
      {
        sub_6B0AC(v46);
        v41 = 900.0;
        if ( *(int *)(a2 + 208) <= 23 )
        {
          *(float *)(a2 + 4 * (*(_DWORD *)(a2 + 208) + 28)) = v41;
        }
        else
        {
          memcpy((void *)(a2 + 112), (const void *)(a2 + 116), 0x5Cu);
          *(float *)(a2 + 204) = v41;
        }
        ++*(_DWORD *)(a2 + 208);
        ++*(_QWORD *)(a2 + 216);
        v8 = v41;
        if ( v41 > v21 * 0.97 )
        {
          v28 = a3;
          v27 = 0;
          LODWORD(v8) = 0;
          a3[1] |= vshld_u64(1u, *(unsigned __int64 *)&v8);
          set_miner_6060info_low_hashrate_err(*(_DWORD *)(a1 + 252), 0);
        }
        else
        {
          v30 = a3;
          v29 = 0;
          LODWORD(v8) = 0;
          *a3 |= vshld_u64(1u, *(unsigned __int64 *)&v8);
          get_miner_working_status(&v15);
          if ( v17 != 1 && v16 != 1 )
          {
            V_LOCK();
            sub_6B078((int)v24, *(int *)(a1 + 252));
            logfmt_raw(
              v14,
              0x1000u,
              0,
              HIDWORD(v25),
              v24[0],
              v24[1],
              v24[2],
              v25,
              "%s low hashrate happened!",
              "update_hashrate");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/g"
              "odminer-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_hashrate.c",
              200,
              "update_hashrate",
              15,
              173,
              80,
              v14);
            read_status_from_monitor(v13, a1);
            v40 = 1000000000.0;
            V_LOCK();
            logfmt_raw(v14, 0x1000u, 0, "no ratio hashrate last_5s: %f", v13[9] / v40);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/g"
              "odminer-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_hashrate.c",
              200,
              "update_hashrate",
              15,
              176,
              80,
              v14);
            V_LOCK();
            logfmt_raw(v14, 0x1000u, 0, "no ratio hashrate last_30min: %f", v13[11] / v40);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/g"
              "odminer-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_hashrate.c",
              200,
              "update_hashrate",
              15,
              177,
              80,
              v14);
            V_LOCK();
            logfmt_raw(v14, 0x1000u, 0, "no ratio hashrate lifetime: %f", v13[12] / v40);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/g"
              "odminer-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_hashrate.c",
              200,
              "update_hashrate",
              15,
              178,
              80,
              v14);
            set_miner_6060info_low_hashrate_err(*(_DWORD *)(a1 + 252), 1);
          }
        }
        v26 = v53;
        clock_gettime(1, v53);
      }
    }
    else
    {
      v34 = v54;
      clock_gettime(1, v54);
      v35 = v53;
      clock_gettime(1, v53);
      v36 = v52;
      clock_gettime(1, v52);
      qword_153F48[v55] = 0;
    }
  }
  return a3;
}
