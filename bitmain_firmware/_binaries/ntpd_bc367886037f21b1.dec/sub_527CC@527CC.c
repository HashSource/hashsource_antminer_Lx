unsigned int __fastcall sub_527CC(int a1)
{
  int *v2; // r4
  int v3; // r6
  int v4; // r0
  int v5; // r2
  unsigned int v6; // r1
  unsigned int v7; // r3
  unsigned int result; // r0
  bool v9; // zf
  bool v10; // r0
  unsigned int v12; // r3
  int v13; // r2
  unsigned int v14; // r3
  int v15; // r0
  int v16; // r8
  int v17; // r3
  bool v18; // zf
  int v19; // r3
  bool v20; // zf
  double v21; // d16
  int v22; // r0
  unsigned int v23; // r2
  unsigned int v24; // r3
  bool v25; // cc
  bool v26; // zf
  char v27; // r3

  v2 = *(int **)(a1 + 84);
  v3 = *v2;
  v4 = *(_DWORD *)(*v2 + 140);
  v5 = *(unsigned __int8 *)(*v2 + 12);
  if ( (unsigned int)(v4 - 2) > 1 )
  {
    v6 = (unsigned __int8)(v5 - 65);
    if ( v6 > 0x13 )
      v7 = 0;
    else
      v7 = 525345;
    if ( v6 <= 0x13 )
      v7 = ((v7 >> v6) & 1) != 0;
    if ( v5 == 109 )
      v7 |= 1u;
    if ( v7 )
      return 0;
  }
  if ( v5 == 143 )
  {
    result = ((*((unsigned __int8 *)v2 + 768) ^ 2u) >> 1) & 1;
    if ( *(_WORD *)(v3 + 14) )
      result = 0;
    if ( result )
      return 0;
    v12 = *(unsigned __int8 *)(v3 + 13);
    if ( v12 == 171 )
    {
      if ( *(_WORD *)(v3 + 10) != 17 )
        goto LABEL_44;
      if ( *(int *)(v3 + 4) <= 0 )
        return 0;
      if ( !*(_WORD *)(v3 + 20) )
        goto LABEL_44;
      v16 = *(_BYTE *)(v3 + 22) & 0x1D;
      if ( (*(_BYTE *)(v3 + 22) & 0x1D) != 0 )
      {
        v2[52] = 0;
        if ( sub_52270(v2 + 47, v2 + 48, (char *)(v3 + 26)) < 0 )
          goto LABEL_44;
        v2[49] = *(unsigned __int8 *)(v3 + 25);
        v2[50] = *(unsigned __int8 *)(v3 + 24);
        v2[51] = *(unsigned __int8 *)(v3 + 23);
        return 1;
      }
    }
    else
    {
      if ( v12 <= 0xAB )
      {
        if ( v12 != 11 || *(int *)(v3 + 4) <= 0 )
          return 0;
        if ( *(_WORD *)(v3 + 10) != 74 )
          goto LABEL_44;
        if ( !*(_WORD *)(v3 + 29) )
          goto LABEL_44;
        v21 = COERCE_DOUBLE(_byteswap_uint64(*(_QWORD *)(v3 + 16)));
        v22 = (int)v21 - (_DWORD)&loc_15180 * ((int)v21 / 86400);
        v2[49] = v22 / 3600;
        v2[52] = (int)((v21 - (double)(int)v21) * 1000000000.0);
        v2[50] = v22 % 3600 / 60;
        v2[51] = v22 % 3600 % 60;
        if ( sub_52270(v2 + 47, v2 + 48, (char *)(v3 + 24)) < 0 )
          goto LABEL_44;
        if ( !*(_BYTE *)(v3 + 8) )
          return 2;
        *(_BYTE *)(v3 + 8) = 0;
        return 0;
      }
      if ( v12 == 172 )
      {
        if ( *(int *)(v3 + 4) <= 0 )
          return 0;
        if ( *(_WORD *)(v3 + 10) != 68 )
          goto LABEL_44;
        if ( (__rev16(*(unsigned __int16 *)(v3 + 23)) & 0x80) == 0 )
          goto LABEL_52;
        v19 = *(_DWORD *)(v3 + 144);
        v20 = v19 == 12;
        if ( v19 != 12 )
          v20 = v19 == 6;
        if ( v20 )
        {
          *((_BYTE *)v2 + 40) = 1;
        }
        else
        {
LABEL_52:
          *((_BYTE *)v2 + 40) = 0;
          return 0;
        }
        return result;
      }
      if ( v12 != 173 )
        return 0;
      if ( *(_WORD *)(v3 + 10) != 22 )
        goto LABEL_44;
      v13 = *(_DWORD *)(v3 + 4);
      *(_BYTE *)(v3 + 8) = *(_BYTE *)(v3 + 32);
      if ( v13 <= 0 )
        return 0;
      v14 = *(unsigned __int8 *)(v3 + 31);
      if ( v14 <= 0xE )
      {
        v23 = v14 - 2;
        v24 = v14 - 11;
        v25 = v24 > 1;
        if ( v24 > 1 )
          v25 = v23 > 5;
        if ( !v25 )
          goto LABEL_23;
      }
      v15 = sub_52270(v2 + 47, v2 + 48, (char *)(v3 + 27));
      if ( v15 < 0 )
        goto LABEL_44;
      v16 = *(unsigned __int8 *)(v3 + 8);
      v17 = v15 >> 5;
      *(_DWORD *)(v3 + 144) = v15 >> 5;
      if ( (v16 & 2) != 0 )
      {
        v26 = v17 == 12;
        if ( v17 != 12 )
          v26 = v17 == 6;
        if ( v26 )
        {
          if ( (v16 & 1) != 0 )
            v27 = 1;
          else
            v27 = 2;
          *((_BYTE *)v2 + 40) = v27;
          goto LABEL_39;
        }
LABEL_38:
        *((_BYTE *)v2 + 40) = 0;
LABEL_39:
        v2[52] = (int)(COERCE_DOUBLE(_byteswap_uint64(*(_QWORD *)(v3 + 16))) * 1000000000.0);
        v2[49] = *(unsigned __int8 *)(v3 + 24);
        v2[50] = *(unsigned __int8 *)(v3 + 25);
        v2[51] = *(unsigned __int8 *)(v3 + 26);
        return 1;
      }
      if ( v16 )
        goto LABEL_38;
    }
    *((_BYTE *)v2 + 40) = 3;
    sub_3918C((__int16 *)a1, 6);
    *(_DWORD *)(v3 + 4) = -1;
    return v16;
  }
  if ( v5 == 66 )
  {
    puts("0x42");
    return 0;
  }
  if ( v5 != 67 )
  {
    v9 = v4 == 2;
    if ( v4 == 2 )
      v9 = v5 == 65;
    if ( v9 )
    {
      puts("Undocumented 0x41 packet on Thunderbolt");
      return 0;
    }
    v10 = v4 == 3;
    if ( v5 != 65 || !v10 )
    {
      if ( v5 == 70 && v10 )
      {
        if ( *(_BYTE *)(v3 + 14) )
        {
LABEL_23:
          sub_3918C((__int16 *)a1, 6);
          *(_DWORD *)(v3 + 4) = -1;
          return 0;
        }
        goto LABEL_44;
      }
      v18 = v5 == 84;
      if ( v5 != 84 )
        v18 = v5 == 109;
      if ( !v18 )
      {
LABEL_44:
        sub_3918C((__int16 *)a1, 2);
        *(_DWORD *)(v3 + 4) = -1;
        return 0;
      }
    }
    return 0;
  }
  puts("0x43");
  return 0;
}
