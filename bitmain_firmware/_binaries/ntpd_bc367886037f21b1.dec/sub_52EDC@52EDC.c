__int16 *__fastcall sub_52EDC(int a1)
{
  int v1; // r9
  unsigned __int8 *v3; // r5
  _BYTE *v4; // r10
  Elf32_Dyn **v5; // r1
  size_t v6; // r2
  int v7; // r4
  __int16 *result; // r0
  unsigned __int8 *v9; // r6
  int v10; // r3
  unsigned int v11; // r2
  unsigned int v12; // t1
  int v13; // r3
  bool v14; // zf
  int v15; // r2
  int *v16; // r8
  int v17; // r11
  int v18; // r12
  _DWORD *v19; // r3
  _DWORD *v20; // r8
  int v21; // r1
  int v22; // r2
  unsigned __int8 *v23; // r1
  int v24; // r5
  int v25; // r3
  char *v26; // r2
  int v27; // r3

  v1 = *(_DWORD *)(a1 + 4);
  v3 = (unsigned __int8 *)(a1 + 88);
  v4 = *(_BYTE **)(v1 + 84);
  v5 = &GLOBAL_OFFSET_TABLE_;
  v6 = *(_DWORD *)(a1 + 84);
  v7 = *(_DWORD *)v4;
  result = (__int16 *)_stack_chk_guard;
  if ( *(_DWORD *)(*(_DWORD *)v4 + 140) != 1 || !praecis_msg )
  {
    v9 = &v3[v6];
    if ( &v3[v6] == v3 )
      return result;
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = *(unsigned __int8 *)(v7 + 9);
        v12 = *v3++;
        v11 = v12;
        if ( v10 != 3 )
          break;
        v13 = *(__int16 *)(v7 + 10);
        v14 = v11 == 16;
        if ( v11 == 16 )
        {
          v15 = 4;
          *(_BYTE *)(v7 + 9) = 4;
        }
        else
        {
          LOWORD(v5) = v13 + 1;
          v15 = v7 + v13;
        }
        if ( !v14 )
        {
          v13 = (__int16)v5;
          *(_WORD *)(v7 + 10) = (_WORD)v5;
          LOWORD(v5) = *(v3 - 1);
          byte_9[v15 + 4] = (char)v5;
        }
LABEL_15:
        if ( v13 <= 128 )
          goto LABEL_8;
LABEL_16:
        *(_BYTE *)(v7 + 9) = 0;
        if ( v3 == v9 )
          return result;
      }
      if ( v10 == 4 )
      {
        if ( v11 == 16 )
        {
          v22 = *(__int16 *)(v7 + 10);
          *(_BYTE *)(v7 + 9) = 3;
          v13 = (__int16)(v22 + 1);
          *(_WORD *)(v7 + 10) = v13;
          LOWORD(v5) = *(v3 - 1);
          *(_BYTE *)(v7 + v22 + 13) = (_BYTE)v5;
          goto LABEL_15;
        }
        if ( v11 == 3 )
        {
          v27 = *(__int16 *)(v7 + 10);
          *(_BYTE *)(v7 + 9) = 1;
          if ( v27 > 128 )
            goto LABEL_16;
LABEL_26:
          v16 = *(int **)(v1 + 84);
          v17 = *v16;
          result = (__int16 *)sub_527CC(v1);
          if ( result && *(int *)(v17 + 4) > 0 )
          {
            v18 = v16[52];
            *(_DWORD *)(v17 + 4) = 0;
            v16[46] = 0;
            sub_6BCB0(v16 + 14, 128, "%4d %03d %02d:%02d:%02d.%09ld", v16[47], v16[48], v16[49], v16[50], v16[51], v18);
            v16[46] = 24;
            if ( sub_399D0(v16) )
            {
              sub_41CA4(v1 + 16, (const char *)v16 + 56);
              v19 = v16 + 58;
              v20 = v16 + 56;
              v21 = v19[1];
              *v20 = *v19;
              v20[1] = v21;
              result = (__int16 *)sub_39A1C(v1);
            }
            else
            {
              result = sub_3918C((__int16 *)v1, 6);
            }
          }
          goto LABEL_8;
        }
        *(_BYTE *)(v7 + 9) = 2;
        *(_BYTE *)(v7 + 12) = *(v3 - 1);
      }
      else
      {
        if ( v10 == 2 )
        {
          if ( v11 > 0x10 || (v5 = (Elf32_Dyn **)&loc_10008, ((unsigned int)&loc_10008 & (1 << v11)) == 0) )
          {
            *(_BYTE *)(v7 + 9) = 3;
            v13 = *(__int16 *)(v7 + 10);
            *(_BYTE *)(v7 + 12) = *(v3 - 1);
            goto LABEL_15;
          }
LABEL_7:
          *(_BYTE *)(v7 + 9) = 0;
          *(_WORD *)(v7 + 10) = 0;
          goto LABEL_8;
        }
        if ( v11 != 16 )
          goto LABEL_7;
        *(_BYTE *)(v7 + 9) = 2;
      }
      *(_WORD *)(v7 + 10) = 0;
      if ( (v4[768] & 2) != 0 )
      {
        result = (__int16 *)sub_5F334(v4 + 232);
        if ( *(_BYTE *)(v7 + 9) == 1 )
          goto LABEL_26;
      }
LABEL_8:
      if ( v3 == v9 )
        return result;
    }
  }
  v23 = v3;
  v24 = dword_BC5FC;
  result = (__int16 *)memcpy(&byte_BC600[dword_BC5FC], v23, v6);
  v25 = v24 + *(_DWORD *)(a1 + 84);
  dword_BC5FC = v25;
  v26 = (char *)&dword_BC5F8 + v25 - 2;
  if ( v26[8] == 13 && *((_BYTE *)&dword_BC5F8 + v25 + 7) == 10 )
  {
    v26[8] = 0;
    sub_41CA4(v1 + 16, byte_BC600);
    dword_BC5FC = 0;
    praecis_msg = 0;
    result = (__int16 *)sub_52C74((int)v4);
    if ( (int)result < 0 )
      return sub_3918C((__int16 *)v1, 3);
  }
  return result;
}
