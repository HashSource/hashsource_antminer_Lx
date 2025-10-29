int __fastcall setup_all_chip_hns(int a1)
{
  float v1; // s15
  int v3; // r6
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r1
  char v8; // r3
  int v9; // r6
  void (__fastcall *v10)(int, int *); // r3
  char *v11; // r7
  void (__fastcall *v12)(int, int *); // r2
  char v13; // r10
  char v14; // r0
  int result; // r0
  bool v16; // zf
  int v17; // [sp+18h] [bp-1004h] BYREF
  int v18; // [sp+1Ch] [bp-1000h]
  int v19; // [sp+20h] [bp-FFCh]
  int v20; // [sp+24h] [bp-FF8h]

  v3 = *(_DWORD *)(a1 + 196);
  V_LOCK();
  logfmt_raw((char *)&v17, 0x1000u, 0, "%s", "setup_all_chip_hns");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_hns/backend_hns.c",
    169,
    "setup_all_chip_hns",
    18,
    248,
    60,
    &v17);
  v4 = sub_12CE18(256, (unsigned __int8)v3);
  v5 = *(_DWORD *)(a1 + 296);
  if ( (_BYTE)v3 )
  {
    v6 = v5 - 1;
    v7 = v5 - 1 + (unsigned __int8)v3;
    v8 = 0;
    do
    {
      *(_BYTE *)++v6 = v8;
      v8 += v4;
    }
    while ( v6 != v7 );
    v5 = *(_DWORD *)(a1 + 296);
  }
  *(_DWORD *)(a1 + 240) = v4;
  (*(void (__fastcall **)(int, int, int))(a1 + 148))(a1, v5, v3);
  if ( !sub_A573C(a1) )
    return 3;
  v9 = 0;
  v10 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v19 = 6291457;
  v18 = 0;
  v17 = 6656;
  v20 = 0;
  v10(a1, &v17);
  sub_A5E64(a1, 8);
  sub_A5E64(a1, 16);
  chip_setting_ticket_value_hns(a1, 255);
  chip_setting_misc_hns(a1);
  v11 = (char *)calloc(1u, 0x170u);
  do
  {
    v19 = 131073;
    v17 = 23130;
    v20 = (unsigned __int8)v9++;
    v12 = *(void (__fastcall **)(int, int *))(a1 + 160);
    v18 = 0;
    v12(a1, &v17);
    usleep((__useconds_t)&stru_1387C.st_value);
    usleep(0x4E20u);
    v13 = *(_BYTE *)(a1 + 136);
    v14 = rand();
    memset(v11 + 40, (unsigned __int8)(v13 + v14), 0x100u);
    push_work_base(a1, (int)v11);
    usleep((__useconds_t)&loc_30D40);
  }
  while ( v9 != 64 );
  free(v11);
  V_LOCK();
  logfmt_raw((char *)&v17, 0x1000u, 0, "get addr after open cores and set frequency.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_hns/backend_hns.c",
    169,
    "setup_all_chip_hns",
    18,
    298,
    60,
    &v17);
  if ( !sub_A573C(a1) )
    return 3;
  result = *(unsigned __int8 *)(a1 + 268);
  v16 = result == 0;
  if ( *(_BYTE *)(a1 + 268) )
    result = 0;
  else
    v1 = *(float *)(a1 + 760);
  if ( v16 )
    *(_DWORD *)(a1 + 272) = (int)v1;
  return result;
}
