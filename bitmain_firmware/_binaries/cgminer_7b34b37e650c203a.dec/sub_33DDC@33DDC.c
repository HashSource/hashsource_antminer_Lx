__int64 *__fastcall sub_33DDC(int a1)
{
  int v2; // r8
  int v3; // r4
  int v4; // r5
  double v5; // d8
  int v6; // r0
  void **v7; // r11
  int v8; // r1
  __int64 v9; // r2
  __int64 v11; // r2
  __int64 *result; // r0
  double v13; // d6
  double v14; // d8
  __int64 v15; // r4
  int v16; // r8
  int *v17; // r0
  int *v18; // r0
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  v2 = pthread_mutex_lock(&stru_690F0);
  if ( v2 )
  {
    v17 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
      *v17,
      "cgminer.c",
      "clear_stratum_shares",
      7367);
    goto LABEL_36;
  }
  v3 = dword_69108;
  if ( !dword_69108 )
  {
    if ( !pthread_mutex_unlock(&stru_690F0) )
      return (__int64 *)off_67ED8();
    goto LABEL_37;
  }
  v4 = *(_DWORD *)(dword_69108 + 8);
  v5 = 0.0;
  if ( *(_DWORD *)(*(_DWORD *)(dword_69108 + 36) + 260) == a1 )
    goto LABEL_6;
LABEL_4:
  if ( v4 )
  {
    while ( 1 )
    {
      v3 = v4;
      v4 = *(_DWORD *)(v4 + 8);
      if ( *(_DWORD *)(*(_DWORD *)(v3 + 36) + 260) != a1 )
        goto LABEL_4;
LABEL_6:
      v6 = *(_DWORD *)(v3 + 4);
      v7 = (void **)dword_69108;
      v8 = *(_DWORD *)dword_69108;
      if ( v6 )
        break;
      LODWORD(v9) = *(_DWORD *)(v3 + 8);
      if ( (_DWORD)v9 )
      {
        HIDWORD(v9) = *(_DWORD *)(v8 + 20);
        if ( v3 != *(_DWORD *)(v8 + 16) - HIDWORD(v9) )
          goto LABEL_30;
LABEL_28:
        *(_DWORD *)(v8 + 16) = v6 + HIDWORD(v9);
        v6 = *(_DWORD *)(v3 + 4);
        if ( !v6 )
        {
          LODWORD(v9) = *(_DWORD *)(v3 + 8);
LABEL_30:
          HIDWORD(v9) = v9;
          v7 = (void **)v9;
          dword_69108 = v9;
LABEL_9:
          LODWORD(v9) = *v7;
          if ( HIDWORD(v9) )
          {
            *(_DWORD *)(HIDWORD(v9) + *(_DWORD *)(v9 + 20) + 4) = *(_DWORD *)(v3 + 4);
            LODWORD(v9) = *v7;
          }
          HIDWORD(v9) = 3 * ((*(_DWORD *)(v9 + 4) - 1) & *(_DWORD *)(v3 + 28));
          --*(_DWORD *)(*(_DWORD *)v9 + 4 * HIDWORD(v9) + 4);
          LODWORD(v9) = *(_DWORD *)*v7;
          if ( *(_DWORD *)(v9 + 4 * HIDWORD(v9)) == v3 )
            *(_DWORD *)(v9 + 4 * HIDWORD(v9)) = *(_DWORD *)(v3 + 16);
          v11 = *(_QWORD *)(v3 + 12);
          if ( (_DWORD)v11 )
          {
            *(_DWORD *)(v11 + 16) = HIDWORD(v11);
            HIDWORD(v11) = *(_DWORD *)(v3 + 16);
          }
          if ( HIDWORD(v11) )
            *(_DWORD *)(HIDWORD(v11) + 12) = *(_DWORD *)(v3 + 12);
          --*((_DWORD *)*v7 + 3);
          goto LABEL_18;
        }
        HIDWORD(v9) = *((_DWORD *)*v7 + 5);
LABEL_8:
        *(_DWORD *)(v6 + HIDWORD(v9) + 8) = *(_DWORD *)(v3 + 8);
        HIDWORD(v9) = *(_DWORD *)(v3 + 8);
        goto LABEL_9;
      }
      free(*(void **)v8);
      free(*v7);
      dword_69108 = 0;
LABEL_18:
      ++v2;
      v5 = v5 + *(double *)(*(_DWORD *)(v3 + 36) + 376);
      sub_2CBA8((void ***)(v3 + 36), "cgminer.c", "clear_stratum_shares", 7375);
      --*(_DWORD *)(a1 + 732);
      free((void *)v3);
      if ( !v4 )
        goto LABEL_19;
    }
    v9 = *(_QWORD *)(v8 + 16);
    if ( v3 == (_DWORD)v9 - HIDWORD(v9) )
      goto LABEL_28;
    goto LABEL_8;
  }
LABEL_19:
  if ( pthread_mutex_unlock(&stru_690F0) )
  {
LABEL_37:
    v18 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v18,
      "cgminer.c",
      "clear_stratum_shares",
      7381);
LABEL_36:
    sub_20F58(3, s, 1);
    sub_2E6B0(1, 1);
  }
  result = (__int64 *)off_67ED8();
  if ( v2 )
  {
    if ( byte_74500 || byte_68BD4 || dword_67DB4 > 3 )
    {
      snprintf(s, 0x800u, "Lost %d shares due to stratum disconnect on pool %d", v2, *(_DWORD *)a1);
      sub_20F58(4, s, 0);
    }
    result = &qword_73318;
    v13 = *(double *)(a1 + 88) + v5;
    v14 = dbl_766B8 + v5;
    v15 = qword_73318 + v2;
    v16 = *(_DWORD *)(a1 + 120) + v2;
    *(double *)(a1 + 88) = v13;
    qword_73318 = v15;
    *(_DWORD *)(a1 + 120) = v16;
    dbl_766B8 = v14;
  }
  return result;
}
