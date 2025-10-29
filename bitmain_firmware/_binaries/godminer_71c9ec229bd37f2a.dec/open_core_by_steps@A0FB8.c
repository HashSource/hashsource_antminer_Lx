int __fastcall open_core_by_steps(int a1)
{
  _DWORD *v2; // r8
  __int64 v3; // kr00_8
  __int64 v4; // kr08_8
  __int64 v5; // kr10_8
  __int64 v6; // kr18_8
  __int64 v7; // kr20_8
  __int64 v8; // kr28_8
  __int64 v9; // kr30_8
  __int64 v10; // kr38_8
  __int64 v11; // kr40_8
  __int64 v12; // kr48_8
  __int64 v13; // kr50_8
  __int64 v14; // kr58_8
  __int64 v15; // kr60_8
  __int64 v16; // kr68_8
  __int64 v17; // kr70_8
  __int64 v18; // kr78_8
  __int64 v19; // kr80_8
  __int64 v20; // kr88_8
  __int64 v21; // kr90_8
  __int64 v22; // kr98_8
  __int64 v23; // krA0_8
  __int64 v24; // krA8_8
  __int64 v25; // krB0_8
  __int64 v26; // krB8_8
  __int64 v27; // krC0_8
  __int64 v28; // krC8_8
  int v29; // lr
  __int64 v30; // krD8_8
  __int64 v31; // krE0_8
  _DWORD v33[7]; // [sp+28h] [bp-1024h] BYREF
  int v34; // [sp+44h] [bp-1008h]
  char v35[4100]; // [sp+48h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v33, "chain", *(int *)(a1 + 148));
  logfmt_raw(
    v35,
    0x1000u,
    0,
    v34,
    v33[0],
    v33[1],
    v33[2],
    v33[3],
    v33[4],
    v33[5],
    v33[6],
    v34,
    "%s...",
    "open_core_by_steps");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "open_core_by_steps",
    18,
    11707,
    60,
    v35);
  v2 = calloc(1u, 0x59u);
  memset(v2 + 4, 0, 0x20u);
  sub_5DDB0(a1, 201, 0);
  sub_5DE5C(a1, 0, 0, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 2, 0, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 4, 0, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 6, 0, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 1, 7u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 3, 7u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 5, 7u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 7, 7u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  v3 = qword_165788;
  v4 = qword_165790;
  *v2 = qword_165788;
  LODWORD(qword_165788) = v3 + 1;
  v2[1] = HIDWORD(v3);
  *((_QWORD *)v2 + 1) = v4;
  HIDWORD(qword_165788) = (unsigned __int64)(v3 + 1) >> 32;
  qword_165790 = v4 + 1;
  push_work_base(a1, (int)v2);
  sub_5DE5C(a1, 0, 1u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 2, 1u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 4, 1u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 6, 1u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 1, 6u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 3, 6u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 5, 6u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 7, 6u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  v5 = qword_165788;
  v6 = qword_165790;
  *v2 = qword_165788;
  LODWORD(qword_165788) = v5 + 1;
  v2[1] = HIDWORD(v5);
  *((_QWORD *)v2 + 1) = v6;
  HIDWORD(qword_165788) = (unsigned __int64)(v5 + 1) >> 32;
  qword_165790 = v6 + 1;
  push_work_base(a1, (int)v2);
  sub_5DE5C(a1, 0, 2u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 2, 2u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 4, 2u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 6, 2u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 1, 5u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 3, 5u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 5, 5u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 7, 5u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  v7 = qword_165788;
  v8 = qword_165790;
  *v2 = qword_165788;
  LODWORD(qword_165788) = v7 + 1;
  v2[1] = HIDWORD(v7);
  *((_QWORD *)v2 + 1) = v8;
  HIDWORD(qword_165788) = (unsigned __int64)(v7 + 1) >> 32;
  qword_165790 = v8 + 1;
  push_work_base(a1, (int)v2);
  sub_5DE5C(a1, 0, 3u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 2, 3u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 4, 3u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 6, 3u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 1, 3u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 3, 3u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 5, 3u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 7, 3u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  v9 = qword_165788;
  v10 = qword_165790;
  *v2 = qword_165788;
  LODWORD(qword_165788) = v9 + 1;
  v2[1] = HIDWORD(v9);
  *((_QWORD *)v2 + 1) = v10;
  HIDWORD(qword_165788) = (unsigned __int64)(v9 + 1) >> 32;
  qword_165790 = v10 + 1;
  push_work_base(a1, (int)v2);
  sub_5DE5C(a1, 0, 5u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 2, 5u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 4, 5u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 6, 5u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 1, 2u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 3, 2u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 5, 2u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 7, 2u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  v11 = qword_165788;
  v12 = qword_165790;
  *v2 = qword_165788;
  LODWORD(qword_165788) = v11 + 1;
  v2[1] = HIDWORD(v11);
  *((_QWORD *)v2 + 1) = v12;
  HIDWORD(qword_165788) = (unsigned __int64)(v11 + 1) >> 32;
  qword_165790 = v12 + 1;
  push_work_base(a1, (int)v2);
  sub_5DE5C(a1, 0, 6u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 2, 6u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 4, 6u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 6, 6u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 1, 1u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 3, 1u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 5, 1u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 7, 1u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  v13 = qword_165788;
  v14 = qword_165790;
  *v2 = qword_165788;
  LODWORD(qword_165788) = v13 + 1;
  v2[1] = HIDWORD(v13);
  *((_QWORD *)v2 + 1) = v14;
  HIDWORD(qword_165788) = (unsigned __int64)(v13 + 1) >> 32;
  qword_165790 = v14 + 1;
  push_work_base(a1, (int)v2);
  sub_5DE5C(a1, 0, 7u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 2, 7u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 4, 7u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 6, 7u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 1, 0, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 3, 0, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 5, 0, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 7, 0, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  v15 = qword_165788;
  v16 = qword_165790;
  *v2 = qword_165788;
  LODWORD(qword_165788) = v15 + 1;
  v2[1] = HIDWORD(v15);
  *((_QWORD *)v2 + 1) = v16;
  HIDWORD(qword_165788) = (unsigned __int64)(v15 + 1) >> 32;
  qword_165790 = v16 + 1;
  push_work_base(a1, (int)v2);
  sub_5DE5C(a1, 0, 8u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 2, 8u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 4, 8u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 6, 8u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 1, 0xFu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 3, 0xFu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 5, 0xFu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 7, 0xFu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  v17 = qword_165788;
  v18 = qword_165790;
  *v2 = qword_165788;
  LODWORD(qword_165788) = v17 + 1;
  v2[1] = HIDWORD(v17);
  *((_QWORD *)v2 + 1) = v18;
  HIDWORD(qword_165788) = (unsigned __int64)(v17 + 1) >> 32;
  qword_165790 = v18 + 1;
  push_work_base(a1, (int)v2);
  sub_5DE5C(a1, 0, 9u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 2, 9u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 4, 9u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 6, 9u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 1, 0xEu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 3, 0xEu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 5, 0xEu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 7, 0xEu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  v19 = qword_165788;
  v20 = qword_165790;
  *v2 = qword_165788;
  LODWORD(qword_165788) = v19 + 1;
  v2[1] = HIDWORD(v19);
  *((_QWORD *)v2 + 1) = v20;
  HIDWORD(qword_165788) = (unsigned __int64)(v19 + 1) >> 32;
  qword_165790 = v20 + 1;
  push_work_base(a1, (int)v2);
  sub_5DE5C(a1, 0, 0xAu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 2, 0xAu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 4, 0xAu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 6, 0xAu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 1, 0xDu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 3, 0xDu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 5, 0xDu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 7, 0xDu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  v21 = qword_165788;
  v22 = qword_165790;
  *v2 = qword_165788;
  LODWORD(qword_165788) = v21 + 1;
  v2[1] = HIDWORD(v21);
  *((_QWORD *)v2 + 1) = v22;
  HIDWORD(qword_165788) = (unsigned __int64)(v21 + 1) >> 32;
  qword_165790 = v22 + 1;
  push_work_base(a1, (int)v2);
  sub_5DE5C(a1, 0, 0xBu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 2, 0xBu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 4, 0xBu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 6, 0xBu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 1, 0xBu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 3, 0xBu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 5, 0xBu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 7, 0xBu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  v23 = qword_165788;
  v24 = qword_165790;
  *v2 = qword_165788;
  LODWORD(qword_165788) = v23 + 1;
  v2[1] = HIDWORD(v23);
  *((_QWORD *)v2 + 1) = v24;
  HIDWORD(qword_165788) = (unsigned __int64)(v23 + 1) >> 32;
  qword_165790 = v24 + 1;
  push_work_base(a1, (int)v2);
  sub_5DE5C(a1, 0, 0xDu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 2, 0xDu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 4, 0xDu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 6, 0xDu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 1, 0xAu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 3, 0xAu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 5, 0xAu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 7, 0xAu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  v25 = qword_165788;
  v26 = qword_165790;
  *v2 = qword_165788;
  LODWORD(qword_165788) = v25 + 1;
  v2[1] = HIDWORD(v25);
  *((_QWORD *)v2 + 1) = v26;
  HIDWORD(qword_165788) = (unsigned __int64)(v25 + 1) >> 32;
  qword_165790 = v26 + 1;
  push_work_base(a1, (int)v2);
  sub_5DE5C(a1, 0, 0xEu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 2, 0xEu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 4, 0xEu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 6, 0xEu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 1, 9u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 3, 9u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 5, 9u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 7, 9u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  v27 = qword_165788;
  v28 = qword_165790;
  *v2 = qword_165788;
  LODWORD(qword_165788) = v27 + 1;
  v2[1] = HIDWORD(v27);
  v2[3] = HIDWORD(v28);
  HIDWORD(qword_165788) = (unsigned __int64)(v27 + 1) >> 32;
  v2[2] = v28;
  qword_165790 = v28 + 1;
  push_work_base(a1, (int)v2);
  sub_5DE5C(a1, 0, 0xFu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 2, 0xFu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 4, 0xFu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 6, 0xFu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 1, 8u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 3, 8u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 5, 8u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5DE5C(a1, 7, 8u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  v29 = HIDWORD(qword_165788);
  v30 = qword_165790;
  v31 = qword_165788 + 1;
  *v2 = qword_165788;
  v2[1] = v29;
  *((_QWORD *)v2 + 1) = v30;
  qword_165788 = v31;
  qword_165790 = v30 + 1;
  push_work_base(a1, (int)v2);
  return 0;
}
