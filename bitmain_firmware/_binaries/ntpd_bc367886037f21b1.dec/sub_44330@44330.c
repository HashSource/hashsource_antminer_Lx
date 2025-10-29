int *__fastcall sub_44330(int *result, const char *a2, unsigned __int8 *a3, int a4)
{
  unsigned __int8 *v4; // r5
  unsigned __int8 *v6; // r7
  char *v7; // r4
  bool v8; // zf
  int v9; // r11
  int v10; // t1
  const char *v11; // r2
  const char *v12; // r3
  int v13; // t1
  char *v14; // r2
  char v15; // r3
  int v16; // t1
  int v17; // [sp+8h] [bp-1Ch]
  char v18; // [sp+13h] [bp-11h] BYREF
  char v19[8]; // [sp+14h] [bp-10h] BYREF

  v4 = a3;
  if ( debug > 1 )
  {
    v6 = &a3[a4];
    v7 = byte_BBD60;
    v17 = *result;
    while ( 1 )
    {
LABEL_3:
      v8 = v6 == v4;
      if ( v6 != v4 )
        v8 = v7 == (char *)&unk_BC55F;
      if ( v8 )
        break;
      v10 = *v4++;
      v9 = v10;
      if ( v10 == 92 )
      {
        v11 = "\\\\";
        v12 = (const char *)(&byte_BBD60[(_DWORD)"\\\\" + 2046] - v7);
        while ( 1 )
        {
          *v7++ = v9;
          if ( v11 == v12 )
            break;
          v13 = *(unsigned __int8 *)++v11;
          LOBYTE(v9) = v13;
          if ( !v13 )
            goto LABEL_3;
        }
        v7 = (char *)&unk_BC55F;
      }
      else if ( ((*_ctype_b_loc())[v9] & 0x4000) != 0 )
      {
        *v7++ = v9;
      }
      else
      {
        sub_6BCB0(v19, 6, "\\%03o", v9);
        v14 = &v18;
        do
        {
          v16 = (unsigned __int8)*++v14;
          v15 = v16;
          if ( !v16 )
            break;
          *v7++ = v15;
        }
        while ( v7 != (char *)&unk_BC55F );
      }
    }
    *v7 = 0;
    return (int *)sub_64940("%s[%s]: '%s'\n", *(const char **)(v17 + 20), a2, byte_BBD60);
  }
  return result;
}
