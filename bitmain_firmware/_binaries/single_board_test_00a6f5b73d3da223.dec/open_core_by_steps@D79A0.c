int __fastcall open_core_by_steps(int a1)
{
  __int64 v1; // kr00_8
  __int64 v2; // kr08_8
  __int64 v3; // kr10_8
  __int64 v4; // kr18_8
  __int64 v5; // kr20_8
  __int64 v6; // kr28_8
  __int64 v7; // kr30_8
  __int64 v8; // kr38_8
  __int64 v9; // kr40_8
  __int64 v10; // kr48_8
  __int64 v11; // kr50_8
  __int64 v12; // kr58_8
  __int64 v13; // kr60_8
  __int64 v14; // kr68_8
  __int64 v15; // kr70_8
  __int64 v16; // kr78_8
  __int64 v17; // kr80_8
  __int64 v18; // kr88_8
  __int64 v19; // kr90_8
  __int64 v20; // kr98_8
  __int64 v21; // krA0_8
  __int64 v22; // krA8_8
  __int64 v23; // krB0_8
  __int64 v24; // krB8_8
  __int64 v25; // krC0_8
  __int64 v26; // krC8_8
  __int64 v27; // krD0_8
  __int64 v28; // krD8_8
  int v31; // [sp+1Ch] [bp+Ch] BYREF
  _QWORD *v32; // [sp+101Ch] [bp+100Ch]

  V_LOCK();
  logfmt_raw(&v31, 0x1000u, 0, "%s...", "open_core_by_steps");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "open_core_by_steps",
    18,
    11758,
    60,
    &v31);
  v32 = calloc(1u, 0x59u);
  memset(v32 + 2, 0, 0x20u);
  sub_788A8(a1, 201, 0);
  V_LOCK();
  logfmt_raw(&v31, 0x1000u, 0, "%s %d", "open_core_by_steps", 11767);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "open_core_by_steps",
    18,
    11767,
    60,
    &v31);
  sub_78960(a1, 0, 0, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 2, 0, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 4, 0, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 6, 0, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 1, 7, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 3, 7, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 5, 7, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 7, 7, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  v1 = (*(_QWORD *)&dword_1EEF90)++;
  *v32 = v1;
  v2 = (*(_QWORD *)&dword_1EEF98)++;
  v32[1] = v2;
  push_work_base(a1, (int)v32);
  V_LOCK();
  logfmt_raw(&v31, 0x1000u, 0, "%s %d", "open_core_by_steps", 11788);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "open_core_by_steps",
    18,
    11788,
    60,
    &v31);
  sub_78960(a1, 0, 1, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 2, 1, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 4, 1, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 6, 1, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 1, 6, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 3, 6, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 5, 6, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 7, 6, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  v3 = (*(_QWORD *)&dword_1EEF90)++;
  *v32 = v3;
  v4 = (*(_QWORD *)&dword_1EEF98)++;
  v32[1] = v4;
  push_work_base(a1, (int)v32);
  V_LOCK();
  logfmt_raw(&v31, 0x1000u, 0, "%s %d", "open_core_by_steps", 11809);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "open_core_by_steps",
    18,
    11809,
    60,
    &v31);
  sub_78960(a1, 0, 2, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 2, 2, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 4, 2, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 6, 2, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 1, 5, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 3, 5, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 5, 5, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 7, 5, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  v5 = (*(_QWORD *)&dword_1EEF90)++;
  *v32 = v5;
  v6 = (*(_QWORD *)&dword_1EEF98)++;
  v32[1] = v6;
  push_work_base(a1, (int)v32);
  V_LOCK();
  logfmt_raw(&v31, 0x1000u, 0, "%s %d", "open_core_by_steps", 11830);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "open_core_by_steps",
    18,
    11830,
    60,
    &v31);
  sub_78960(a1, 0, 3, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 2, 3, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 4, 3, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 6, 3, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 1, 3, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 3, 3, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 5, 3, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 7, 3, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  v7 = (*(_QWORD *)&dword_1EEF90)++;
  *v32 = v7;
  v8 = (*(_QWORD *)&dword_1EEF98)++;
  v32[1] = v8;
  push_work_base(a1, (int)v32);
  V_LOCK();
  logfmt_raw(&v31, 0x1000u, 0, "%s %d", "open_core_by_steps", 11851);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "open_core_by_steps",
    18,
    11851,
    60,
    &v31);
  sub_78960(a1, 0, 5, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 2, 5, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 4, 5, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 6, 5, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 1, 2, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 3, 2, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 5, 2, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 7, 2, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  v9 = (*(_QWORD *)&dword_1EEF90)++;
  *v32 = v9;
  v10 = (*(_QWORD *)&dword_1EEF98)++;
  v32[1] = v10;
  push_work_base(a1, (int)v32);
  V_LOCK();
  logfmt_raw(&v31, 0x1000u, 0, "%s %d", "open_core_by_steps", 11872);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "open_core_by_steps",
    18,
    11872,
    60,
    &v31);
  sub_78960(a1, 0, 6, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 2, 6, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 4, 6, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 6, 6, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 1, 1, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 3, 1, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 5, 1, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 7, 1, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  v11 = (*(_QWORD *)&dword_1EEF90)++;
  *v32 = v11;
  v12 = (*(_QWORD *)&dword_1EEF98)++;
  v32[1] = v12;
  push_work_base(a1, (int)v32);
  V_LOCK();
  logfmt_raw(&v31, 0x1000u, 0, "%s %d", "open_core_by_steps", 11893);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "open_core_by_steps",
    18,
    11893,
    60,
    &v31);
  sub_78960(a1, 0, 7, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 2, 7, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 4, 7, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 6, 7, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 1, 0, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 3, 0, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 5, 0, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 7, 0, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  v13 = (*(_QWORD *)&dword_1EEF90)++;
  *v32 = v13;
  v14 = (*(_QWORD *)&dword_1EEF98)++;
  v32[1] = v14;
  push_work_base(a1, (int)v32);
  V_LOCK();
  logfmt_raw(&v31, 0x1000u, 0, "%s %d", "open_core_by_steps", 11914);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "open_core_by_steps",
    18,
    11914,
    60,
    &v31);
  sub_78960(a1, 0, 8, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 2, 8, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 4, 8, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 6, 8, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 1, 15, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 3, 15, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 5, 15, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 7, 15, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  v15 = (*(_QWORD *)&dword_1EEF90)++;
  *v32 = v15;
  v16 = (*(_QWORD *)&dword_1EEF98)++;
  v32[1] = v16;
  push_work_base(a1, (int)v32);
  V_LOCK();
  logfmt_raw(&v31, 0x1000u, 0, "%s %d", "open_core_by_steps", 11935);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "open_core_by_steps",
    18,
    11935,
    60,
    &v31);
  sub_78960(a1, 0, 9, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 2, 9, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 4, 9, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 6, 9, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 1, 14, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 3, 14, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 5, 14, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 7, 14, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  v17 = (*(_QWORD *)&dword_1EEF90)++;
  *v32 = v17;
  v18 = (*(_QWORD *)&dword_1EEF98)++;
  v32[1] = v18;
  push_work_base(a1, (int)v32);
  V_LOCK();
  logfmt_raw(&v31, 0x1000u, 0, "%s %d", "open_core_by_steps", 11956);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "open_core_by_steps",
    18,
    11956,
    60,
    &v31);
  sub_78960(a1, 0, 10, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 2, 10, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 4, 10, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 6, 10, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 1, 13, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 3, 13, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 5, 13, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 7, 13, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  v19 = (*(_QWORD *)&dword_1EEF90)++;
  *v32 = v19;
  v20 = (*(_QWORD *)&dword_1EEF98)++;
  v32[1] = v20;
  push_work_base(a1, (int)v32);
  V_LOCK();
  logfmt_raw(&v31, 0x1000u, 0, "%s %d", "open_core_by_steps", 11977);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "open_core_by_steps",
    18,
    11977,
    60,
    &v31);
  sub_78960(a1, 0, 11, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 2, 11, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 4, 11, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 6, 11, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 1, 11, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 3, 11, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 5, 11, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 7, 11, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  v21 = (*(_QWORD *)&dword_1EEF90)++;
  *v32 = v21;
  v22 = (*(_QWORD *)&dword_1EEF98)++;
  v32[1] = v22;
  push_work_base(a1, (int)v32);
  V_LOCK();
  logfmt_raw(&v31, 0x1000u, 0, "%s %d", "open_core_by_steps", 11998);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "open_core_by_steps",
    18,
    11998,
    60,
    &v31);
  sub_78960(a1, 0, 13, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 2, 13, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 4, 13, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 6, 13, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 1, 10, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 3, 10, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 5, 10, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 7, 10, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  v23 = (*(_QWORD *)&dword_1EEF90)++;
  *v32 = v23;
  v24 = (*(_QWORD *)&dword_1EEF98)++;
  v32[1] = v24;
  push_work_base(a1, (int)v32);
  V_LOCK();
  logfmt_raw(&v31, 0x1000u, 0, "%s %d", "open_core_by_steps", 12019);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "open_core_by_steps",
    18,
    12019,
    60,
    &v31);
  sub_78960(a1, 0, 14, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 2, 14, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 4, 14, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 6, 14, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 1, 9, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 3, 9, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 5, 9, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 7, 9, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  v25 = (*(_QWORD *)&dword_1EEF90)++;
  *v32 = v25;
  v26 = (*(_QWORD *)&dword_1EEF98)++;
  v32[1] = v26;
  push_work_base(a1, (int)v32);
  V_LOCK();
  logfmt_raw(&v31, 0x1000u, 0, "%s %d", "open_core_by_steps", 12040);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "open_core_by_steps",
    18,
    12040,
    60,
    &v31);
  sub_78960(a1, 0, 15, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 2, 15, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 4, 15, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 6, 15, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 1, 8, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 3, 8, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 5, 8, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, 7, 8, 201, 1);
  usleep((__useconds_t)&stru_1869C.st_value);
  v27 = (*(_QWORD *)&dword_1EEF90)++;
  *v32 = v27;
  v28 = (*(_QWORD *)&dword_1EEF98)++;
  v32[1] = v28;
  push_work_base(a1, (int)v32);
  return 0;
}
