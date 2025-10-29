int __fastcall sub_4BDEC(int a1, int a2)
{
  void *v4; // r0
  int v5; // r4
  int v6; // r5
  unsigned int v7; // r7
  int v8; // r8
  int *v9; // r7
  int v10; // r12
  int v12; // r0
  speed_t v13; // r1
  __int16 v14; // r2
  int v15; // r0
  char v16[24]; // [sp+8h] [bp-5Ch] BYREF
  char v17[60]; // [sp+20h] [bp-44h] BYREF

  v4 = (void *)sub_637E4(0, 520, 0, 0);
  v5 = (int)v4;
  if ( !v4 )
  {
    v6 = 0;
    sub_64A18(3, "refclock_jjy.c : jjy_start : emalloc");
    return v6;
  }
  v6 = 0;
  memset(v4, 0, 0x208u);
  *(_BYTE *)(v5 + 10) = 0;
  *(_WORD *)(v5 + 12) = 0;
  *(_BYTE *)(v5 + 14) = 0;
  *(_WORD *)(v5 + 16) = 0;
  *(_DWORD *)(v5 + 20) = 0;
  *(_DWORD *)(v5 + 56) = 0;
  *(_BYTE *)(v5 + 192) = 0;
  *(_DWORD *)(v5 + 400) = 0;
  *(_DWORD *)(v5 + 296) = 0;
  *(_DWORD *)(v5 + 184) = 0;
  *(_BYTE *)(v5 + 404) = 1;
  sub_6BCB0(v16, 21, "/dev/jjy%d", a1);
  sub_6BCB0(v17, 60, "mode=%d dev=%s", *(_DWORD *)(a2 + 76), v16);
  sub_49E3C(a2, 1, v17);
  v7 = *(_DWORD *)(a2 + 76);
  if ( v7 == 3 )
  {
    sub_49E3C(a2, 1, "Refclock: Echo Keisokuki Co. Ltd. LT2000");
    *(_BYTE *)v5 = 3;
    v14 = 1;
    *(_WORD *)(v5 + 8) = 1;
    v13 = 13;
    *(_WORD *)(v5 + 2) = 3;
    *(_DWORD *)(v5 + 4) = 13;
  }
  else
  {
    if ( v7 <= 3 )
    {
      if ( v7 <= 1 )
      {
        sub_49E3C(a2, 1, "Refclock: Tristate Ltd. TS-JJY01, TS-JJY02");
        *(_BYTE *)v5 = 1;
        v14 = 1;
        *(_WORD *)(v5 + 8) = 1;
        v13 = 13;
        *(_DWORD *)(v5 + 4) = 13;
      }
      else
      {
        sub_49E3C(a2, 1, "Refclock: C-DEX Co. Ltd. JST2000");
        *(_BYTE *)(v5 + 192) = 1;
        *(_BYTE *)(v5 + 404) = 0;
        *(_DWORD *)(v5 + 188) = &off_B5F8C;
        v13 = 13;
        v14 = 32;
        *(_DWORD *)(v5 + 4) = 13;
        *(_WORD *)(v5 + 8) = 32;
        *(_BYTE *)v5 = 2;
      }
      goto LABEL_11;
    }
    if ( v7 == 5 )
    {
      sub_49E3C(a2, 1, "Refclock: Tristate Ltd. TS-GPS01");
      *(_BYTE *)v5 = 5;
      v14 = 1;
      *(_WORD *)(v5 + 8) = 1;
      v13 = 15;
      *(_DWORD *)(v5 + 4) = 15;
    }
    else
    {
      if ( v7 < 5 )
      {
        sub_49E3C(a2, 1, "Refclock: CITIZEN T.I.C CO. LTD. JJY200");
        v13 = 12;
        *(_WORD *)(v5 + 8) = 1;
        v14 = 1;
        *(_DWORD *)(v5 + 4) = 12;
        *(_BYTE *)v5 = 4;
        goto LABEL_11;
      }
      if ( v7 == 6 )
      {
        sub_49E3C(a2, 1, "Refclock: SEIKO TIME SYSTEMS TDC-300");
        *(_BYTE *)v5 = 6;
        *(_BYTE *)(v5 + 192) = 1;
        v13 = 11;
        *(_BYTE *)(v5 + 404) = 0;
        v14 = 32;
        *(_DWORD *)(v5 + 188) = &off_B5F9C;
        *(_DWORD *)(v5 + 4) = 11;
        *(_WORD *)(v5 + 8) = 32;
      }
      else
      {
        if ( v7 != 100 && v7 - 101 > 0x4F )
        {
          v12 = sub_6BF44(a2 + 16);
          sub_64A18(3, "JJY receiver [ %s mode %d ] : Unsupported mode", v12, *(_DWORD *)(a2 + 76));
LABEL_24:
          free((void *)v5);
          return v6;
        }
        if ( sub_4B9E4((unsigned __int8 *)a2, v5) )
        {
          v6 = 0;
          v15 = sub_6BF44(a2 + 16);
          sub_64A18(3, "JJY receiver [ %s mode %d ] : Initialize error", v15, *(_DWORD *)(a2 + 76));
          goto LABEL_24;
        }
        v13 = *(_DWORD *)(v5 + 4);
        v14 = *(_WORD *)(v5 + 8);
      }
    }
  }
LABEL_11:
  v8 = sub_39F68(v16, v13, v14);
  if ( v8 <= 0 )
  {
    v6 = 0;
    free((void *)v5);
  }
  else
  {
    v9 = *(int **)(a2 + 84);
    *v9 = v5;
    v9[5] = a2;
    v9[7] = v8;
    v9[11] = (int)"JJY Receiver";
    v9[3] = (int)sub_4C21C;
    v9[6] = 0;
    v6 = sub_18BA4(v9 + 2);
    if ( v6 )
    {
      v6 = 1;
      qmemcpy(v9 + 191, "JJY", 3);
      v10 = *(unsigned __int8 *)(a2 + 66);
      *(_BYTE *)(a2 + 95) = -3;
      sub_6BCB0(v17, 60, "minpoll=%d maxpoll=%d", *(unsigned __int8 *)(a2 + 65), v10);
      sub_49E3C(a2, 1, v17);
    }
    else
    {
      close(v8);
      v9[7] = -1;
      free((void *)v5);
      *v9 = 0;
    }
  }
  return v6;
}
