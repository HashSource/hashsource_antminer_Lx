int __fastcall get_work_mode(int a1)
{
  int v2; // r3
  _DWORD *v3; // r8
  int v4; // r1
  char *v5; // r11
  int v6; // r0
  int v7; // r10
  int v8; // r9
  char *v9; // r6
  char *v10; // r4
  int v11; // lr
  int v12; // r12
  int v13; // r1
  char v15[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v2) = -20196;
  HIWORD(v2) = (unsigned int)"_one_lane" >> 16;
  logfmt_raw(v15, 0x1000u, 0, v2, "get_work_mode");
  LOWORD(v3) = -14756;
  V_UNLOCK();
  HIWORD(v3) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v4) = -23296;
  HIWORD(v4) = (unsigned int)"zer_tuning_one_lane" >> 16;
  zlog(*v3, v4, 154, "get_work_mode", 13, 306, 20, v15);
  v5 = (char *)malloc(0x600u);
  v6 = sub_5CDEC(a1, 255, 12, v5);
  if ( v6 > 0 )
  {
    LOWORD(v7) = -22952;
    LOWORD(v8) = -23296;
    v9 = &v5[12 * v6];
    v10 = v5;
    do
    {
      V_LOCK();
      v11 = *(_DWORD *)v10;
      HIWORD(v7) = (unsigned int)"ate" >> 16;
      v12 = (unsigned __int8)v10[4];
      v13 = *((unsigned __int16 *)v10 + 3);
      v10 += 12;
      logfmt_raw(v15, 0x1000u, 0, v7, v12, (unsigned __int8)*(v10 - 4), v13, v11);
      V_UNLOCK();
      HIWORD(v8) = (unsigned int)"zer_tuning_one_lane" >> 16;
      zlog(*v3, v8, 154, "get_work_mode", 13, 311, 20, v15);
    }
    while ( v10 != v9 );
  }
  free(v5);
  return 0;
}
