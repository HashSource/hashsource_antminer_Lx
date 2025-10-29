int __fastcall read_system_status_from_monitor(int a1)
{
  int v1; // r1
  __int64 v2; // r2
  int v3; // r1
  __int64 v4; // r2
  int v5; // r1
  double v6; // r2
  int v7; // r1
  int v10; // [sp+Ch] [bp-48h] BYREF
  __int64 v11; // [sp+10h] [bp-44h]
  __int64 v12; // [sp+18h] [bp-3Ch]
  __int64 v13; // [sp+20h] [bp-34h]
  __int64 v14; // [sp+28h] [bp-2Ch]
  double v15; // [sp+30h] [bp-24h]
  double v16; // [sp+38h] [bp-1Ch]
  __int64 v17; // [sp+40h] [bp-14h]
  _DWORD *all_created_runtime; // [sp+48h] [bp-Ch]
  int i; // [sp+4Ch] [bp-8h]

  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0.0;
  v16 = 0.0;
  v17 = 0;
  v10 = 0;
  all_created_runtime = get_all_created_runtime(&v10);
  LODWORD(v11) = v10;
  for ( i = 0; i < v10; ++i )
  {
    *((float *)&v12 + 1) = *((float *)&v12 + 1)
                         + *(float *)&dword_152900[56 * *(_DWORD *)(all_created_runtime[i] + 248) + 9];
    *(float *)&v13 = *(float *)&v13 + *(float *)&dword_152900[56 * *(_DWORD *)(all_created_runtime[i] + 248) + 10];
    *((float *)&v13 + 1) = *((float *)&v13 + 1)
                         + *(float *)&dword_152900[56 * *(_DWORD *)(all_created_runtime[i] + 248) + 11];
    *(float *)&v14 = *(float *)&v14 + *(float *)&dword_152900[56 * *(_DWORD *)(all_created_runtime[i] + 248) + 12];
    v17 += *(_QWORD *)&dword_152900[56 * *(_DWORD *)(all_created_runtime[i] + 248) + 22];
    v15 = v15 + *(double *)&dword_152900[56 * *(_DWORD *)(all_created_runtime[i] + 248) + 14];
    v16 = v16 + *(double *)&dword_152900[56 * *(_DWORD *)(all_created_runtime[i] + 248) + 16];
  }
  if ( v10 > 0 )
  {
    HIDWORD(v11) = dword_152900[56 * *(_DWORD *)(*all_created_runtime + 248) + 25];
    LODWORD(v12) = dword_152900[56 * *(_DWORD *)(*all_created_runtime + 248) + 26];
  }
  v1 = HIDWORD(v11);
  v2 = v12;
  *(_DWORD *)a1 = v11;
  *(_DWORD *)(a1 + 4) = v1;
  *(_QWORD *)(a1 + 8) = v2;
  v3 = HIDWORD(v13);
  v4 = v14;
  *(_DWORD *)(a1 + 16) = v13;
  *(_DWORD *)(a1 + 20) = v3;
  *(_QWORD *)(a1 + 24) = v4;
  v5 = HIDWORD(v15);
  v6 = v16;
  *(_DWORD *)(a1 + 32) = LODWORD(v15);
  *(_DWORD *)(a1 + 36) = v5;
  *(double *)(a1 + 40) = v6;
  v7 = HIDWORD(v17);
  *(_DWORD *)(a1 + 48) = v17;
  *(_DWORD *)(a1 + 52) = v7;
  return a1;
}
