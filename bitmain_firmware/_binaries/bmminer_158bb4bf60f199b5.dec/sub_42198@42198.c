int __fastcall sub_42198(unsigned int *a1, int a2, int a3, int a4)
{
  double v4; // d0
  int result; // r0
  _BOOL4 v9; // r1
  int v10; // r4
  float v11; // s14
  int v12; // s15
  int v13; // r10
  int v14; // r1
  const char *v15; // r10
  const char *v16; // r9
  const char *v17; // r0
  const char *v18; // r0
  const char *v19; // r0
  const char *v20; // r0
  const char *v21; // r0
  const char *v22; // r0
  const char *v23; // r9
  const char *v24; // r0
  const char *v25; // r0
  const char *v26; // r0
  const char *v27; // r0
  const char *v28; // r0
  int v29; // r2
  const char *v30; // r0
  const char *v31; // r0
  const char *v32; // r0
  const char *v33; // r0
  const char *v34; // r0
  const char *v35; // r0
  const char *v36; // r0
  const char *v37; // r0
  int v38; // r3
  int v39; // r5
  __int64 v40; // r10
  double v41; // d8
  double v42; // r0
  double v43; // d7
  const char *v44; // r5
  __int64 v45; // r0
  double v46; // r0
  double v47; // d7
  const char *v48; // r0
  char **v49; // r0
  int v50; // [sp+Ch] [bp-50h] BYREF
  float v51; // [sp+10h] [bp-4Ch] BYREF
  int v52; // [sp+14h] [bp-48h] BYREF
  double v53; // [sp+18h] [bp-44h] BYREF
  double v54; // [sp+20h] [bp-3Ch] BYREF
  double v55; // [sp+28h] [bp-34h] BYREF
  double v56; // [sp+30h] [bp-2Ch] BYREF
  char s[28]; // [sp+3Ch] [bp-20h] BYREF

  v50 = a2;
  result = sub_3E2BC();
  v9 = (v50 & ~(v50 >> 31)) < result;
  if ( v50 < 0 )
    v9 = 0;
  if ( v9 )
  {
    result = sub_3E378(v50);
    if ( result >= 0 )
    {
      v10 = sub_56518(result);
      v11 = *(double *)(v10 + 176);
      v51 = v11;
      sub_53118(v10);
      v12 = *(_DWORD *)(v10 + 36);
      v13 = *(_DWORD *)(v10 + 32);
      v14 = *(_DWORD *)(v10 + 96);
      v53 = v4;
      if ( v13 == 1 )
        v15 = "N";
      else
        v15 = "Y";
      *(double *)(v10 + 88) = (double)v12 / v4 * 60.0;
      switch ( v14 )
      {
        case 0:
          v16 = "Alive";
          break;
        case 1:
          v16 = "Sick";
          break;
        case 2:
          v16 = "Dead";
          break;
        case 3:
          v16 = "NoStart";
          break;
        case 4:
          v16 = "Initialising";
          break;
        default:
          v16 = "Unknown";
          break;
      }
      v17 = sub_3F3D8(0, "ASC", 6, (const char *)&v50, 0);
      v18 = sub_3F3D8((int)v17, "Name", 1, *(const char **)(*(_DWORD *)(v10 + 4) + 8), 0);
      v19 = sub_3F3D8((int)v18, "ID", 6, (const char *)(v10 + 8), 0);
      v20 = sub_3F3D8((int)v19, "Enabled", 1, v15, 0);
      v21 = sub_3F3D8((int)v20, "Status", 1, v16, 0);
      v22 = sub_3F3D8((int)v21, "Temperature", 19, (const char *)&v51, 0);
      v54 = *(double *)(v10 + 80) / v53;
      v23 = sub_3F3D8((int)v22, "MHS av", 17, (const char *)&v54, 0);
      sprintf(s, "MHS %ds", dword_9ED78);
      v24 = sub_3F3D8((int)v23, s, 17, (const char *)(v10 + 48), 0);
      v25 = sub_3F3D8((int)v24, "Accepted", 6, (const char *)(v10 + 36), 0);
      v26 = sub_3F3D8((int)v25, "Rejected", 6, (const char *)(v10 + 40), 0);
      v27 = sub_3F3D8((int)v26, "Hardware Errors", 6, (const char *)(v10 + 44), 0);
      v28 = sub_3F3D8((int)v27, "Utility", 20, (const char *)(v10 + 88), 0);
      if ( *(int *)(v10 + 220) <= 0 )
        v29 = -1;
      else
        v29 = *(_DWORD *)(v10 + 216);
      v52 = v29;
      v30 = sub_3F3D8((int)v28, "Last Share Pool", 6, (const char *)&v52, 0);
      v31 = sub_3F3D8((int)v30, "Last Share Time", 16, (const char *)(v10 + 220), 0);
      v32 = sub_3F3D8((int)v31, "Total MH", 18, (const char *)(v10 + 80), 0);
      v33 = sub_3F3D8((int)v32, "Diff1 Work", 11, (const char *)(v10 + 192), 0);
      v34 = sub_3F3D8((int)v33, "Difficulty Accepted", 24, (const char *)(v10 + 200), 0);
      v35 = sub_3F3D8((int)v34, "Difficulty Rejected", 24, (const char *)(v10 + 208), 0);
      v36 = sub_3F3D8((int)v35, "Last Share Difficulty", 24, (const char *)(v10 + 224), 0);
      v37 = sub_3F3D8((int)v36, "Last Valid Work", 16, (const char *)(v10 + 232), 0);
      v38 = *(_DWORD *)(v10 + 44);
      v39 = (int)v37;
      v40 = *(_QWORD *)(v10 + 192) + v38;
      if ( v40 )
      {
        v41 = (double)v38;
        LODWORD(v42) = sub_778B4(v40);
        v43 = v41 / v42;
      }
      else
      {
        v43 = 0.0;
      }
      v55 = v43;
      v44 = sub_3F3D8(v39, "Device Hardware%", 25, (const char *)&v55, 0);
      v45 = *(_QWORD *)(v10 + 192);
      if ( v45 )
      {
        LODWORD(v46) = sub_778B4(v45);
        v47 = *(double *)(v10 + 208) / v46;
      }
      else
      {
        v47 = 0.0;
      }
      v56 = v47;
      v48 = sub_3F3D8((int)v44, "Device Rejected%", 25, (const char *)&v56, 0);
      v49 = (char **)sub_3F3D8((int)v48, "Device Elapsed", 13, (const char *)&v53, 0);
      return sub_3E88C(a1, v49, a3, a4);
    }
  }
  return result;
}
