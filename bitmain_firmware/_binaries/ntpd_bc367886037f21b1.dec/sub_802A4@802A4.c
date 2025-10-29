int __fastcall sub_802A4(_DWORD *a1, int a2, int a3)
{
  int v4; // r6
  int v5; // r5
  int v7; // r4
  int v8; // r3
  __int16 v9; // r2
  _BOOL4 v10; // r2
  _BOOL4 v11; // r2
  int v12; // r3
  int v13; // r3
  _BOOL4 v14; // r3
  char *v15; // r10
  int *v17; // r0
  int v18; // r3
  char v19; // r2
  int v20; // [sp+Ch] [bp-78h]
  _BYTE v22[80]; // [sp+2Ch] [bp-58h] BYREF

  v4 = 0;
  v20 = 0;
  v5 = a1[25];
  v7 = a1[17];
  do
  {
    v8 = *(_DWORD *)(v7 + 16);
    if ( (v8 & 0x6080000) != 0 )
    {
      if ( v8 == 524544 )
      {
        v14 = a2 == 0;
        if ( !*(_DWORD *)(v7 + 52) )
          v14 = 0;
        if ( v14 )
        {
          v15 = *(char **)(v7 + 44);
          if ( !v15 )
            v15 = off_B7558[0];
          sub_7DD9C(a1 + 3, (unsigned __int16 *)(v7 + 2), (const char **)&dword_1062F4, (const char **)&dword_1062F8);
          fprintf((FILE *)option_usage_fp, off_B7554[0], *(_DWORD *)(v7 + 52), v15);
        }
      }
    }
    else if ( (v8 & 0x200000) != 0 )
    {
      if ( !a2 )
      {
        ++v20;
        fprintf((FILE *)option_usage_fp, (const char *)dword_1062F0, *(_DWORD *)(v7 + 44), a3);
      }
    }
    else if ( (a1[3] & 0x40000) == 0
           || (v9 = *(_WORD *)(v7 + 2), (v9 & 0x80) == 0) && (dword_9ED4C[(unsigned __int8)v9] & 0x4000) != 0 )
    {
      v10 = v20 > 0;
      if ( a2 )
        v10 = 0;
      if ( v10 )
      {
        if ( a1[26] == v4 )
        {
          if ( (*(_DWORD *)(v7 - 48) & 0x200000) == 0 )
            fprintf((FILE *)option_usage_fp, (const char *)dword_1062F0, off_B7548[0], a3);
        }
        else
        {
          v11 = v5 == 1;
          if ( (a1[3] & 0x40000) == 0 )
            v11 = 0;
          if ( v11 )
            fprintf((FILE *)option_usage_fp, (const char *)dword_1062F0, off_B75FC[0], a3);
        }
      }
      sub_7DD9C(a1 + 3, (unsigned __int16 *)(v7 + 2), (const char **)&dword_1062F4, (const char **)&dword_1062F8);
      v12 = *(_DWORD *)(v7 + 16);
      if ( (v12 & 0x10000) != 0 )
      {
        v13 = dword_1062E8;
      }
      else
      {
        switch ( (unsigned __int16)v12 >> 12 )
        {
          case 0:
            v13 = dword_1062EC;
            break;
          case 1:
            v13 = dword_1062C8;
            break;
          case 2:
            v13 = dword_1062D8;
            break;
          case 3:
            v13 = dword_1062E0;
            break;
          case 4:
            v13 = dword_1062DC;
            break;
          case 5:
            v13 = dword_1062D0;
            break;
          case 6:
            v13 = dword_1062E4;
            break;
          case 7:
            v13 = dword_1062D4;
            break;
          case 8:
            v13 = dword_106300;
            break;
          default:
            fprintf(stderr, off_B74D8[0], a1[7], *(_DWORD *)(v7 + 52));
            sub_7CA64(70);
        }
      }
      if ( *(_WORD *)(v7 + 10) )
        v17 = (int *)dword_1062CC;
      else
        v17 = dword_1062C0;
      if ( !*(_WORD *)(v7 + 10) )
        v17 = (int *)v17[10];
      sub_6BCB0((int)v22, 0x50u, (char *)dword_1062FC, v13, *(_DWORD *)(v7 + 52), v17);
      fprintf((FILE *)option_usage_fp, byte_1063D0, v22, *(_DWORD *)(v7 + 44));
      v18 = (unsigned __int16)*(_DWORD *)(v7 + 16) >> 12;
      if ( v18 == 2 || v18 == 4 )
      {
        if ( *(_DWORD *)(v7 + 40) )
          v19 = 1;
        else
          v19 = byte_1063CC;
        byte_1063CC = v19;
      }
      if ( !a2 )
        sub_7F9BC(a1, (unsigned __int16 *)v7, a3);
    }
    --v5;
    v7 += 64;
    ++v4;
  }
  while ( v5 > 0 );
  return fputc(10, (FILE *)option_usage_fp);
}
