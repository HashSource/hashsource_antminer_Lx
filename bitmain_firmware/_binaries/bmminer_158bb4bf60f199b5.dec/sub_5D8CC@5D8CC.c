void __fastcall sub_5D8CC(_DWORD *a1, _DWORD *a2, _DWORD *a3, int a4, const char *a5)
{
  double *v9; // r4
  int v10; // r6
  unsigned int v11; // r0
  unsigned int v12; // r2
  unsigned int v13; // r1
  unsigned int v14; // kr00_4
  unsigned int v15; // r2
  unsigned int v16; // r1
  double v17; // d6
  double v18; // d5
  double v19; // d7
  const char *v20; // r9
  size_t v21; // r0
  size_t v22; // r8
  char *v23; // r7
  int v24; // r6
  double v25; // r0
  __int64 v26; // kr20_8
  double v27; // d6
  double v28; // d5
  double v29; // d7
  int v30; // r3
  time_t v31; // r0
  int v32; // r3
  int v33; // r3
  int v34; // r12
  int v35; // r3
  _DWORD *v36; // r0
  const char *v37; // r0
  int v38; // r3
  int v39; // r12
  char v40[20]; // [sp+20h] [bp-858h] BYREF
  char v41[2]; // [sp+34h] [bp-844h] BYREF
  _BYTE v42[30]; // [sp+36h] [bp-842h] BYREF
  char v43[36]; // [sp+54h] [bp-824h] BYREF
  char v44[2040]; // [sp+78h] [bp-800h] BYREF
  _DWORD savedregs[8]; // [sp+878h] [bp+0h] BYREF

  v9 = *(double **)(a4 + 260);
  v10 = *(_DWORD *)(sub_57BAC(*(_DWORD *)(a4 + 256)) + 36);
  if ( !a2 || *a2 != 5 && (!*(_BYTE *)(a4 + 324) || *a2 != 7) )
  {
    if ( !pthread_mutex_lock(&stru_246244) )
    {
      v11 = HIDWORD(qword_246368);
      v12 = qword_246368;
      ++*(_DWORD *)(v10 + 40);
      v14 = v12;
      v13 = v12 + 1;
      v15 = *((_DWORD *)v9 + 4);
      LODWORD(qword_246368) = v13;
      v16 = *((_DWORD *)v9 + 5);
      HIDWORD(qword_246368) = (__PAIR64__(v11, v14) + 1) >> 32;
      *((_DWORD *)v9 + 4) = v15 + 1;
      v17 = dbl_242F10;
      *((_DWORD *)v9 + 5) = (__PAIR64__(v16, v15) + 1) >> 32;
      *(double *)(v10 + 208) = *(double *)(v10 + 208) + *(double *)(a4 + 376);
      v18 = *(double *)(a4 + 376);
      v19 = v9[10] + v18;
      ++*((_DWORD *)v9 + 6);
      dbl_242F10 = v17 + v18;
      v9[10] = v19;
      if ( !pthread_mutex_unlock(&stru_246244) )
      {
        off_9E444();
        if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
        {
          strcpy(v44, "PROOF OF WORK RESULT: false (booooo)");
          sub_47AB4(7, v44, 0);
        }
        if ( byte_242EF8 || byte_24511C )
          goto LABEL_28;
        strcpy(v43, "reject");
        memset(&v43[7], (unsigned __int8)byte_24511C, 0x1Du);
        v41[0] = byte_24511C;
        if ( dword_242F4C > 1 )
          snprintf(v40, 0x14u, "pool %d", **(_DWORD **)(a4 + 260));
        else
          v40[0] = byte_24511C;
        if ( !*(_BYTE *)(a4 + 324) )
          a2 = (_DWORD *)sub_6DFCC(a1, "reject-reason");
        if ( a2 )
        {
          v20 = (const char *)sub_6E350(a2);
          v21 = strlen(v20);
          if ( v21 >= 0x1C )
            v22 = 28;
          else
            v22 = v21;
          *(_WORD *)v41 = 10272;
          v23 = (char *)savedregs + v22;
          sub_4C150(v42, v20, v22, (int)"cgminer.c", (int)"share_result", 3634);
          *(v23 - 2114) = 41;
          *(v23 - 2113) = 0;
          sub_4C150(&v43[7], v20, v22, (int)"cgminer.c", (int)"share_result", 3639);
          v43[6] = 58;
          *(v23 - 2077) = 0;
          goto LABEL_24;
        }
        if ( a3 )
          v35 = *(_BYTE *)(a4 + 284) & 1;
        else
          v35 = 0;
        if ( !v35 )
          goto LABEL_24;
        if ( *a3 == 1 )
        {
          v36 = sub_6E1C4(a3, 1u);
          if ( !v36 || *v36 != 2 )
            goto LABEL_24;
        }
        else
        {
          if ( *a3 != 2 )
            goto LABEL_24;
          v36 = a3;
        }
        v37 = (const char *)sub_6E350(v36);
        snprintf(v41, 0x1Fu, " (%s)", v37);
LABEL_24:
        if ( byte_244080 || byte_1AECC4 || dword_9E320 > 4 )
        {
          snprintf(
            v44,
            0x800u,
            "Rejected %s %s %d %s%s %s%s version 0x%x",
            a5,
            *(const char **)(*(_DWORD *)(v10 + 4) + 8),
            *(_DWORD *)(v10 + 8),
            v40,
            v41,
            "",
            "",
            *(_DWORD *)(a4 + 444));
          sub_47AB4(5, v44, 0);
        }
        sub_5B390(v43, (_DWORD *)a4);
LABEL_28:
        v24 = *((_DWORD *)v9 + 6);
        if ( v24 > 10 && !*(_BYTE *)(a4 + 281) )
        {
          if ( byte_246260 )
          {
            if ( dword_2440F8 > 1 )
            {
              LODWORD(v25) = sub_778B4(qword_245158);
              if ( (double)v24 > v25 / dbl_9ED68 * 60.0 * 3.0 )
              {
                if ( byte_244080 || byte_1AECC4 || dword_9E320 > 3 )
                {
                  snprintf(v44, 0x800u, "Pool %d rejected %d sequential shares, disabling!", *(_DWORD *)v9, v24);
                  sub_47AB4(4, v44, 0);
                }
                if ( *((_DWORD *)v9 + 25) == 1 )
                  --dword_2440F8;
                *((_DWORD *)v9 + 25) = 2;
                if ( v9 == (double *)sub_58084() )
                  sub_59E6C(0);
                *((_DWORD *)v9 + 6) = 0;
              }
            }
          }
        }
        return;
      }
      v38 = *_errno_location();
      v39 = 3594;
      goto LABEL_78;
    }
    v33 = *_errno_location();
    v34 = 3586;
LABEL_67:
    snprintf(v44, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", v33, "cgminer.c", "share_result", v34);
    goto LABEL_68;
  }
  if ( pthread_mutex_lock(&stru_246244) )
  {
    v33 = *_errno_location();
    v34 = 3523;
    goto LABEL_67;
  }
  v26 = qword_245158;
  ++*(_DWORD *)(v10 + 36);
  v27 = dbl_242EF0;
  qword_245158 = v26 + 1;
  ++*((_QWORD *)v9 + 1);
  *(double *)(v10 + 200) = *(double *)(v10 + 200) + *(double *)(a4 + 376);
  v28 = *(double *)(a4 + 376);
  v29 = v9[9] + v28;
  dbl_242EF0 = v27 + v28;
  v9[9] = v29;
  if ( pthread_mutex_unlock(&stru_246244) )
  {
    v38 = *_errno_location();
    v39 = 3533;
LABEL_78:
    snprintf(v44, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", v38, "cgminer.c", "share_result", v39);
LABEL_68:
    sub_47AB4(3, v44, 1);
    sub_54CCC(1, 1);
  }
  off_9E444();
  v30 = *(_DWORD *)v9;
  *((_DWORD *)v9 + 6) = 0;
  *(_DWORD *)(v10 + 216) = v30;
  v31 = time(0);
  *(_DWORD *)(v10 + 220) = v31;
  v32 = (unsigned __int8)byte_1AECC5;
  *(_QWORD *)(v10 + 224) = *(_QWORD *)(a4 + 376);
  *((_DWORD *)v9 + 88) = v31;
  v9[45] = *(double *)(a4 + 376);
  if ( v32 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
  {
    strcpy(v44, "PROOF OF WORK RESULT: true (yay!!!)");
    sub_47AB4(7, v44, 0);
  }
  if ( !byte_242EF8 && !byte_24511C )
  {
    if ( dword_242F4C <= 1 )
    {
      if ( byte_244080 || byte_1AECC4 || dword_9E320 > 4 )
      {
        snprintf(
          v44,
          0x800u,
          "Accepted %s %s %d %s%s",
          a5,
          *(const char **)(*(_DWORD *)(v10 + 4) + 8),
          *(_DWORD *)(v10 + 8),
          "",
          "");
        sub_47AB4(5, v44, 0);
      }
    }
    else if ( byte_244080 || byte_1AECC4 || dword_9E320 > 4 )
    {
      snprintf(
        v44,
        0x800u,
        "Accepted %s %s %d pool %d %s%s",
        a5,
        *(const char **)(*(_DWORD *)(v10 + 4) + 8),
        *(_DWORD *)(v10 + 8),
        **(_DWORD **)(a4 + 260),
        "",
        "");
      sub_47AB4(5, v44, 0);
    }
  }
  sub_5B390("accept", (_DWORD *)a4);
  if ( dword_1AF124 && (double)dword_1AF124 <= dbl_242EF0 )
  {
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 3 )
    {
      snprintf(v44, 0x800u, "Successfully mined %d accepted shares as requested and exiting.", dword_1AF124);
      sub_47AB4(4, v44, 0);
    }
    sub_54D4C();
  }
  if ( *((_DWORD *)v9 + 25) == 2 )
  {
    if ( !byte_244080 && !byte_1AECC4 && dword_9E320 <= 3
      || (snprintf(v44, 0x800u, "Rejecting pool %d now accepting shares, re-enabling!", *(_DWORD *)v9),
          sub_47AB4(4, v44, 0),
          *((_DWORD *)v9 + 25) != 1) )
    {
      *((_DWORD *)v9 + 25) = 1;
      ++dword_2440F8;
    }
    sub_59E6C(0);
  }
  if ( *(_BYTE *)(a4 + 283) )
    sub_54FC0();
}
