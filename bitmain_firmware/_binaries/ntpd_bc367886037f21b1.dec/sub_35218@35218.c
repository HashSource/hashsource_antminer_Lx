int __fastcall sub_35218(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        char a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        double a40,
        int a41,
        int a42,
        int a43,
        int a44,
        int a45,
        int a46,
        int a47,
        int a48,
        int a49,
        int a50,
        int a51,
        int a52,
        int a53,
        double a54)
{
  __int64 v56; // d0
  __int64 v57; // d1
  __int64 v58; // d2
  int v59; // s15
  double v60; // d17
  int v62; // r6
  int v63; // r1
  int v64; // r2
  int v65; // r4
  int v66; // r0
  double *v67; // r10
  double *v68; // r8
  int v69; // r0
  int v70; // r3
  double v71; // d9
  bool v72; // nf
  int v73; // r3
  int v74; // r11
  double v75; // d16
  double v76; // r0
  double v77; // r0
  _DWORD *v78; // r12
  double *v79; // r1
  int i; // r0
  double *v81; // r2
  int v82; // r3
  double v83; // d16
  double v84; // d17
  int v85; // lr
  int v86; // r4
  _BYTE *v87; // r3
  int *v88; // r2
  double v89; // r0
  double v90; // d18
  int v91; // t1
  double v92; // d16
  int v93; // r6
  double v94; // d16
  int v95; // r3
  int v96; // r0
  int v97; // r2
  bool v99; // zf
  double v100; // d0
  int v101; // r7
  double v102; // d10
  double v103; // d9
  __int64 v104; // r2
  double v105; // d8
  double v106; // r0
  int v107; // r2
  double v108; // d8
  double v109; // d16
  int v110; // r6
  unsigned int v111; // r10
  double v112; // d17
  unsigned int v113; // r4
  double v114; // d0
  int v115; // r0
  double v116; // d9
  unsigned int v118; // [sp+8h] [bp-8h]
  _DWORD v119[8]; // [sp+10h] [bp+0h] BYREF
  _BYTE v120[68]; // [sp+30h] [bp+20h] BYREF
  char v121[80]; // [sp+74h] [bp+64h] BYREF
  int v122; // [sp+C4h] [bp+B4h]

  v62 = 7;
  v63 = *(_DWORD *)(a1 + 320);
  v64 = a1 + 8 * v63;
  *(_QWORD *)(v64 + 392) = v56;
  v65 = (v63 + 1) & 7;
  if ( v63 + 1 <= 0 )
    v65 = -(-(v63 + 1) & 7);
  v66 = _stack_chk_guard;
  *(_QWORD *)(v64 + 328) = v57;
  v67 = (double *)v120;
  v122 = v66;
  v68 = (double *)v120;
  *(_QWORD *)(v64 + 456) = v58;
  v69 = current_time;
  v70 = current_time - *(_DWORD *)(a1 + 704);
  *(_DWORD *)(a1 + 4 * (v63 + 130)) = current_time;
  *(_DWORD *)(a1 + 320) = v65;
  *(_DWORD *)(a1 + 704) = v69;
  v71 = (double)(unsigned int)v70 * clock_phi;
  do
  {
    v74 = a1 + 8 * v65;
    v75 = *(double *)(v74 + 456);
    if ( v62 )
    {
      v75 = v75 + v71;
      *(double *)(v74 + 456) = v75;
    }
    if ( v75 < 16.0 )
    {
      HIDWORD(v76) = &allan_xpt;
      v118 = *(_DWORD *)(a1 + 704) - *(_DWORD *)(a1 + 4 * (v65 + 130));
      LODWORD(v76) = (unsigned __int8)allan_xpt;
      v77 = ldexp(v76, v64);
      v64 = (unsigned int)1.0;
      if ( v118 <= (unsigned int)1.0 )
        v77 = *(double *)(v74 + 328);
      else
        v75 = *(double *)(v74 + 328);
      if ( v118 <= (unsigned int)1.0 )
        v68[7] = v77;
      else
        v60 = *(double *)(v74 + 456);
      if ( v118 > (unsigned int)1.0 )
        v68[7] = v75 + v60;
    }
    else
    {
      *(double *)(v74 + 456) = 16.0;
      v68[7] = 16.0;
    }
    v119[v62] = v65;
    v72 = -(v65 + 1) < 0;
    --v62;
    v73 = -(v65 + 1) & 7;
    v65 = (v65 + 1) & 7;
    if ( !v72 )
      v65 = -v73;
    --v68;
  }
  while ( v62 != -1 );
  if ( !LODWORD(freq_cnt) )
  {
    v78 = v119;
    v79 = (double *)v120;
    for ( i = 1; i != 8; ++i )
    {
      v81 = (double *)v120;
      v82 = 0;
      do
      {
        v83 = *v81++;
        v84 = v79[1];
        if ( v83 > v84 )
        {
          *(v81 - 1) = v84;
          v85 = v119[v82];
          v86 = v78[1];
          v79[1] = v83;
          v119[v82] = v86;
          v78[1] = v85;
        }
        ++v82;
      }
      while ( v82 != i );
      ++v79;
      ++v78;
    }
  }
  v87 = (_BYTE *)(a1 + 552);
  v88 = v119;
  HIDWORD(v89) = 0;
  v90 = sys_maxdist;
  do
  {
    v91 = *v88++;
    v92 = *v67++;
    *v87++ = v91;
    if ( v92 < 16.0 && (SHIDWORD(v89) <= 1 || v92 < v90) )
      ++HIDWORD(v89);
  }
  while ( (_BYTE *)(a1 + 560) != v87 );
  v93 = v119[0];
  v94 = 0.0;
  v95 = 7;
  v96 = v119[0] + 49;
  *(_QWORD *)(a1 + 624) = 0;
  LODWORD(v89) = a1 + 8 * v96;
  *(_QWORD *)(a1 + 632) = 0;
  do
  {
    v97 = a1 + 8 * v119[v95];
    v94 = (v94 + *(double *)(v97 + 456)) * 0.5;
    if ( SHIDWORD(v89) > v95 )
      *(double *)(a1 + 624) = *(double *)(a1 + 624)
                            + (*(double *)(v97 + 392) - *(double *)LODWORD(v89))
                            * (*(double *)(v97 + 392) - *(double *)LODWORD(v89));
  }
  while ( v95-- != 0 );
  *(double *)(a1 + 632) = v94;
  if ( !HIDWORD(v89) )
    goto LABEL_60;
  v99 = HIDWORD(v89) == 1;
  v100 = *(double *)(a1 + 624);
  if ( HIDWORD(v89) != 1 )
    --HIDWORD(v89);
  v101 = a1 + 8 * v93;
  if ( !v99 )
    v59 = HIDWORD(v89);
  v102 = *(double *)(v101 + 392);
  if ( !v99 )
    v94 = (double)v59;
  v103 = *(double *)(a1 + 608);
  *(double *)(a1 + 608) = v102;
  if ( !v99 )
    v100 = v100 / v94;
  v104 = *(_QWORD *)(v101 + 328);
  *(_QWORD *)(a1 + 616) = v104;
  if ( !v99 )
    *(double *)(a1 + 624) = v100;
  v105 = sqrt(v100);
  if ( v100 < 0.0 )
    v89 = sqrt(v89);
  LODWORD(v89) = sys_precision;
  v106 = ldexp(v89, v104);
  if ( v105 > 1.0 )
  {
    v114 = *(double *)(a1 + 624);
    v108 = sqrt(v114);
    if ( v114 < 0.0 )
      v106 = sqrt(v106);
  }
  else
  {
    LODWORD(v106) = sys_precision;
    v106 = ldexp(v106, v107);
    v108 = 1.0;
  }
  v109 = sys_maxdist;
  v110 = a1 + 4 * v93;
  v111 = *(_DWORD *)(a1 + 304);
  v112 = *(double *)(a1 + 632);
  *(double *)(a1 + 624) = v108;
  v113 = *(_DWORD *)(v110 + 520);
  if ( v112 < v109 && v109 > *(double *)(v101 + 456) )
  {
    v116 = fabs(v103 - v102);
    if ( v108 * 3.0 < v116 )
    {
      LODWORD(v106) = *(unsigned __int8 *)(a1 + 64);
      v106 = ldexp(v106, v107);
      if ( (double)(v113 - v111) < 1.0 + 1.0 )
      {
        sub_6BCB0(v121, 80, "%.6f s", v116);
        LODWORD(v106) = sub_25C8C((__int16 *)((char *)&dword_8C + 1), a1, v121);
        return LODWORD(v106);
      }
      v113 = *(_DWORD *)(v110 + 520);
      v111 = *(_DWORD *)(a1 + 304);
    }
  }
  if ( v113 > v111 )
  {
    *(_DWORD *)(a1 + 304) = v113;
    v115 = sub_2329C(a1);
    LODWORD(v106) = sub_41A3C(a1 + 16, v115);
    if ( !*(_DWORD *)(a1 + 308) || sys_leap == 3 )
LABEL_60:
      LODWORD(v106) = sub_34110();
  }
  return LODWORD(v106);
}
