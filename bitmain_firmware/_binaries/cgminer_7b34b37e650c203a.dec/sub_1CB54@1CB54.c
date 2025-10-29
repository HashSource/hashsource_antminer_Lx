int __fastcall sub_1CB54(int a1, int a2, int a3, int a4)
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

  sub_18AD4((unsigned int *)a1, 11, 0, 0, a4);
  v6 = "SUMMARY,";
  if ( a4 )
    v6 = ",\"SUMMARY\":[";
  v51 = sub_15B00((unsigned int *)a1, v6);
  if ( pthread_mutex_lock(&stru_76838) )
    sub_17604("summary", 2788);
  qword_76850 = (__int64)(dbl_73370 + dbl_73390 + dbl_766B8);
  v53 = (__int64)(dbl_73370 + dbl_73390 + dbl_766B8);
  LODWORD(v8) = sub_4A11C(qword_755D8);
  HIDWORD(v8) = v7;
  v9 = dbl_68720;
  if ( dbl_68720 == 0.0 )
  {
    v10 = 1.0;
  }
  else
  {
    v8 = v8 / dbl_68720;
    v10 = dbl_68720;
  }
  v54 = v8 * 60.0;
  v55 = (dbl_756A8 - dbl_76830) / 1000.0 / (dbl_68720 - dbl_68738);
  LODWORD(v11) = sub_4A11C(v53);
  v57 = (double)SLODWORD(flt_6ABA0) + v9;
  v56 = v11 / v10 * 60.0;
  v12 = sub_18850(0, "Elapsed", 13, (const char *)&v57, 1);
  if ( !(_BYTE)dword_6ABA4 )
    sprintf((char *)&dword_6ABA4, "%.2f", 0.0);
  v13 = sub_18850((int)v12, "GHS 5s", 1, (const char *)&dword_6ABA4, 0);
  v14 = sub_18850((int)v13, "GHS av", 17, (const char *)&v55, 0);
  v15 = &dbl_6ABB8;
  if ( dbl_6ABB8 < 0.01 )
    v15 = &v55;
  v16 = sub_18850((int)v14, "GHS 30m", 17, (const char *)v15, 0);
  v17 = sub_18850((int)v16, "Found Blocks", 7, (const char *)&dword_7345C, 1);
  v18 = sub_18850((int)v17, "Getworks", 11, (const char *)&dword_755E8, 1);
  v19 = sub_18850((int)v18, "Accepted", 11, (const char *)&qword_755D8, 1);
  v20 = sub_18850((int)v19, "Rejected", 11, (const char *)&qword_767E8, 1);
  v21 = sub_18850((int)v20, "Hardware Errors", 6, (const char *)&dword_73368, 1);
  v22 = sub_18850((int)v21, "Utility", 20, (const char *)&v54, 0);
  v23 = sub_18850((int)v22, "Discarded", 11, (const char *)&qword_73380, 1);
  v24 = sub_18850((int)v23, "Stale", 11, (const char *)&qword_73318, 1);
  v25 = sub_18850((int)v24, "Get Failures", 7, (const char *)&dword_755D0, 1);
  v26 = sub_18850((int)v25, "Local Work", 7, (const char *)&dword_767E0, 1);
  v27 = sub_18850((int)v26, "Remote Failures", 7, (const char *)&dword_74494, 1);
  v28 = sub_18850((int)v27, "Network Blocks", 7, (const char *)&dword_766DC, 1);
  v29 = sub_18850((int)v28, "Total MH", 18, (const char *)&dbl_756A8, 1);
  v30 = sub_18850((int)v29, "Work Utility", 20, (const char *)&v56, 0);
  v31 = sub_18850((int)v30, "Difficulty Accepted", 24, (const char *)&dbl_73370, 1);
  v32 = sub_18850((int)v31, "Difficulty Rejected", 24, (const char *)&dbl_73390, 1);
  v33 = sub_18850((int)v32, "Difficulty Stale", 24, (const char *)&dbl_766B8, 1);
  v34 = sub_18850((int)v33, "Best Share", 10, (const char *)&qword_68FF0, 1);
  v35 = qword_76850 + dword_73368;
  if ( v35 )
  {
    v36 = (double)dword_73368;
    LODWORD(v37) = sub_4A11C(v35);
    v38 = v36 / v37;
  }
  else
  {
    v38 = 0.0;
  }
  v58 = v38;
  v39 = sub_18850((int)v34, "Device Hardware%", 25, (const char *)&v58, 0);
  if ( qword_76850 )
  {
    LODWORD(v40) = sub_4A11C(qword_76850);
    v41 = dbl_73390 / v40;
  }
  else
  {
    v41 = 0.0;
  }
  v59 = v41;
  v42 = sub_18850((int)v39, "Device Rejected%", 25, (const char *)&v59, 0);
  v43 = dbl_73390 + dbl_73370 + dbl_766B8;
  if ( v43 == 0.0 )
    v44 = 0.0;
  else
    v44 = dbl_73390 / v43;
  v60 = v44;
  v45 = sub_18850((int)v42, "Pool Rejected%", 25, (const char *)&v60, 0);
  v46 = dbl_73370 + dbl_73390 + dbl_766B8;
  if ( v46 == 0.0 )
    v47 = 0.0;
  else
    v47 = dbl_766B8 / v46;
  v61 = v47;
  v48 = sub_18850((int)v45, "Pool Stale%", 25, (const char *)&v61, 0);
  v49 = (char **)sub_18850((int)v48, "Last getwork", 16, (const char *)&dword_744A0, 0);
  if ( pthread_mutex_unlock(&stru_76838) )
    sub_17668("summary", 2844);
  off_67ED8();
  result = sub_17D00((unsigned int *)a1, v49, a4, 0);
  if ( (a4 & v51) != 0 )
    *(_BYTE *)(a1 + 13) = 1;
  return result;
}
