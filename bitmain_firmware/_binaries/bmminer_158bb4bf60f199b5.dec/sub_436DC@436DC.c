int __fastcall sub_436DC(int a1, int a2, int a3, int a4)
{
  char *v6; // r1
  int v7; // r1
  double v8; // d7
  double v9; // d8
  double v10; // d10
  double v11; // r0
  const char *v12; // r4
  const char *v13; // r0
  const char *v14; // r0
  double *v15; // r3
  const char *v16; // r0
  const char *v17; // r0
  const char *v18; // r0
  const char *v19; // r0
  const char *v20; // r0
  const char *v21; // r0
  const char *v22; // r0
  const char *v23; // r0
  const char *v24; // r0
  const char *v25; // r0
  const char *v26; // r0
  const char *v27; // r0
  const char *v28; // r0
  const char *v29; // r0
  const char *v30; // r0
  const char *v31; // r0
  const char *v32; // r0
  const char *v33; // r0
  const char *v34; // r4
  __int64 v35; // r8
  double v36; // d8
  double v37; // r0
  double v38; // d7
  const char *v39; // r4
  double v40; // r0
  double v41; // d7
  const char *v42; // r0
  double v43; // d7
  double v44; // d5
  const char *v45; // r0
  double v46; // d7
  double v47; // d5
  const char *v48; // r0
  char **v49; // r4
  int result; // r0
  int v51; // [sp+10h] [bp-54h]
  __int64 v53; // [sp+18h] [bp-4Ch]
  double v54; // [sp+20h] [bp-44h] BYREF
  double v55; // [sp+28h] [bp-3Ch] BYREF
  double v56; // [sp+30h] [bp-34h] BYREF
  double v57; // [sp+38h] [bp-2Ch] BYREF
  double v58; // [sp+40h] [bp-24h] BYREF
  double v59; // [sp+48h] [bp-1Ch] BYREF
  double v60; // [sp+50h] [bp-14h] BYREF
  double v61; // [sp+58h] [bp-Ch] BYREF

  sub_3F65C((unsigned int *)a1, 11, 0, 0, a4);
  v6 = "SUMMARY,";
  if ( a4 )
    v6 = ",\"SUMMARY\":[";
  v51 = sub_3C770((unsigned int *)a1, v6);
  if ( pthread_mutex_lock(&stru_2463B8) )
    sub_3E190("summary", 2788);
  qword_2463D0 = (__int64)(dbl_242EF0 + dbl_242F10 + dbl_246238);
  v53 = (__int64)(dbl_242EF0 + dbl_242F10 + dbl_246238);
  LODWORD(v8) = sub_778B4(qword_245158);
  HIDWORD(v8) = v7;
  v9 = dbl_9ED68;
  if ( dbl_9ED68 == 0.0 )
  {
    v10 = 1.0;
  }
  else
  {
    v8 = v8 / dbl_9ED68;
    v10 = dbl_9ED68;
  }
  v54 = v8 * 60.0;
  v55 = (dbl_245228 - dbl_2463B0) / 1000.0 / (dbl_9ED68 - dbl_9ED80);
  LODWORD(v11) = sub_778B4(v53);
  v57 = (double)SLODWORD(flt_1B09F8) + v9;
  v56 = v11 / v10 * 60.0;
  v12 = sub_3F3D8(0, "Elapsed", 13, (const char *)&v57, 1);
  if ( !(_BYTE)dword_1B09FC )
    sprintf((char *)&dword_1B09FC, "%.2f", 0.0);
  v13 = sub_3F3D8((int)v12, "GHS 5s", 1, (const char *)&dword_1B09FC, 0);
  v14 = sub_3F3D8((int)v13, "GHS av", 17, (const char *)&v55, 0);
  v15 = &dbl_1B0A10;
  if ( dbl_1B0A10 < 0.01 )
    v15 = &v55;
  v16 = sub_3F3D8((int)v14, "GHS 30m", 17, (const char *)v15, 0);
  v17 = sub_3F3D8((int)v16, "Found Blocks", 7, (const char *)&dword_242FDC, 1);
  v18 = sub_3F3D8((int)v17, "Getworks", 11, (const char *)&dword_245168, 1);
  v19 = sub_3F3D8((int)v18, "Accepted", 11, (const char *)&qword_245158, 1);
  v20 = sub_3F3D8((int)v19, "Rejected", 11, (const char *)&qword_246368, 1);
  v21 = sub_3F3D8((int)v20, "Hardware Errors", 6, (const char *)&dword_242EE8, 1);
  v22 = sub_3F3D8((int)v21, "Utility", 20, (const char *)&v54, 0);
  v23 = sub_3F3D8((int)v22, "Discarded", 11, (const char *)&qword_242F00, 1);
  v24 = sub_3F3D8((int)v23, "Stale", 11, (const char *)&qword_242E98, 1);
  v25 = sub_3F3D8((int)v24, "Get Failures", 7, (const char *)&dword_245150, 1);
  v26 = sub_3F3D8((int)v25, "Local Work", 7, (const char *)&dword_246360, 1);
  v27 = sub_3F3D8((int)v26, "Remote Failures", 7, (const char *)&dword_244014, 1);
  v28 = sub_3F3D8((int)v27, "Network Blocks", 7, (const char *)&dword_24625C, 1);
  v29 = sub_3F3D8((int)v28, "Total MH", 18, (const char *)&dbl_245228, 1);
  v30 = sub_3F3D8((int)v29, "Work Utility", 20, (const char *)&v56, 0);
  v31 = sub_3F3D8((int)v30, "Difficulty Accepted", 24, (const char *)&dbl_242EF0, 1);
  v32 = sub_3F3D8((int)v31, "Difficulty Rejected", 24, (const char *)&dbl_242F10, 1);
  v33 = sub_3F3D8((int)v32, "Difficulty Stale", 24, (const char *)&dbl_246238, 1);
  v34 = sub_3F3D8((int)v33, "Best Share", 10, (const char *)&qword_1AF0D0, 1);
  v35 = qword_2463D0 + dword_242EE8;
  if ( v35 )
  {
    v36 = (double)dword_242EE8;
    LODWORD(v37) = sub_778B4(v35);
    v38 = v36 / v37;
  }
  else
  {
    v38 = 0.0;
  }
  v58 = v38;
  v39 = sub_3F3D8((int)v34, "Device Hardware%", 25, (const char *)&v58, 0);
  if ( qword_2463D0 )
  {
    LODWORD(v40) = sub_778B4(qword_2463D0);
    v41 = dbl_242F10 / v40;
  }
  else
  {
    v41 = 0.0;
  }
  v59 = v41;
  v42 = sub_3F3D8((int)v39, "Device Rejected%", 25, (const char *)&v59, 0);
  v43 = dbl_242F10 + dbl_242EF0 + dbl_246238;
  if ( v43 == 0.0 )
    v44 = 0.0;
  else
    v44 = dbl_242F10 / v43;
  v60 = v44;
  v45 = sub_3F3D8((int)v42, "Pool Rejected%", 25, (const char *)&v60, 0);
  v46 = dbl_242EF0 + dbl_242F10 + dbl_246238;
  if ( v46 == 0.0 )
    v47 = 0.0;
  else
    v47 = dbl_246238 / v46;
  v61 = v47;
  v48 = sub_3F3D8((int)v45, "Pool Stale%", 25, (const char *)&v61, 0);
  v49 = (char **)sub_3F3D8((int)v48, "Last getwork", 16, (const char *)&dword_244020, 0);
  if ( pthread_mutex_unlock(&stru_2463B8) )
    sub_3E1F4("summary", 2844);
  off_9E444();
  result = sub_3E88C((unsigned int *)a1, v49, a4, 0);
  if ( (a4 & v51) != 0 )
    *(_BYTE *)(a1 + 13) = 1;
  return result;
}
