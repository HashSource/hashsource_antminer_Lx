__int16 *__fastcall sub_54CF8(int a1)
{
  int v1; // r8
  int *v2; // r4
  const char *v3; // r5
  int v4; // r6
  __int16 *result; // r0
  __int16 **v6; // r6
  __int16 *v7; // r1
  int v8; // r1
  __int16 *v9; // r1
  int v10; // r3
  int v11; // r2
  int v12; // r3
  int v13; // r2
  bool v14; // zf
  char v15; // r3
  int v16; // r3
  _BYTE v17[4]; // [sp+20h] [bp-8h] BYREF
  int v18; // [sp+24h] [bp-4h] BYREF
  __int16 *v19; // [sp+28h] [bp+0h] BYREF
  __int16 *v20; // [sp+2Ch] [bp+4h]
  char v21; // [sp+30h] [bp+8h] BYREF
  char v22; // [sp+31h] [bp+9h]

  v1 = *(_DWORD *)(a1 + 4);
  v2 = *(int **)(v1 + 84);
  v18 = 0x7FFFFFFF;
  v3 = (const char *)(v2 + 14);
  v4 = *v2;
  result = (__int16 *)sub_39BB4(a1, (bool *)v2 + 56, 128, &v19);
  if ( !result )
  {
    if ( *(_BYTE *)v4 )
    {
      *(_BYTE *)v4 = 0;
    }
    else
    {
      *(_BYTE *)v4 = 1;
      v6 = (__int16 **)(v4 + 4);
      result = v19;
      v7 = v20;
      *v6 = v19;
      v6[1] = v7;
    }
    return result;
  }
  v2[46] = (int)result;
  v8 = *(_DWORD *)(v4 + 8);
  v2[58] = *(_DWORD *)(v4 + 4);
  v2[59] = v8;
  v9 = v20;
  *(_DWORD *)(v4 + 4) = v19;
  *(_DWORD *)(v4 + 8) = v9;
  *(_BYTE *)v4 = 1;
  memset(v17, 32, sizeof(v17));
  if ( result == (__int16 *)&off_18 )
    goto LABEL_12;
  if ( result != (__int16 *)&dword_20 )
    return sub_3918C((__int16 *)v1, 2);
  if ( sscanf(v3, "%c%*31c", &v17[3]) != 1 )
  {
LABEL_12:
    if ( sscanf(
           v3,
           "%c%1d%c%4d%3d%*c%2d:%2d:%2d.%2ld%c",
           v17,
           &v18,
           &v17[2],
           v2 + 47,
           v2 + 48,
           v2 + 49,
           v2 + 50,
           v2 + 51,
           v2 + 52,
           &v17[1]) == 10 )
    {
      v13 = v17[1];
      v14 = v17[1] == 73;
      v2[52] *= 10000000;
      if ( v14 )
      {
        v17[1] = 43;
      }
      else if ( v13 == 68 )
      {
        v17[1] = 45;
      }
      v12 = v17[0];
      if ( v17[0] == 63 )
      {
        v11 = v2[46];
      }
      else
      {
        v12 = 58;
        v11 = v2[46];
        v17[0] = 58;
      }
      goto LABEL_21;
    }
    return sub_3918C((__int16 *)v1, 2);
  }
  v10 = v17[3];
  if ( v17[3] != 82 )
    goto LABEL_10;
  if ( sscanf(
         v3,
         "%*2c %*2c%2c%*c%4d%*c%3d%*4c %2d%c%2d:%2d%c%*2c",
         &v21,
         v2 + 47,
         v2 + 48,
         v2 + 49,
         v17,
         v2 + 50,
         v2 + 51,
         &v17[1]) != 8 )
  {
LABEL_35:
    v10 = v17[3];
    goto LABEL_10;
  }
  if ( v21 == 48 )
    v16 = 0;
  else
    v16 = 99;
  v18 = v16;
  if ( v17[1] == 73 )
  {
    v17[1] = 43;
    goto LABEL_35;
  }
  v10 = v17[3];
  if ( v17[1] == 68 )
    v17[1] = 45;
LABEL_10:
  if ( v10 != 83
    || sscanf(
         v3,
         "%*4c %2c %4d%*c%3d%*4c %2d%c%2d:%2d%c%*2c",
         &v21,
         v2 + 47,
         v2 + 48,
         v2 + 49,
         v17,
         v2 + 50,
         v2 + 51,
         &v17[1]) != 8 )
  {
    v11 = v2[46];
    v12 = v17[0];
    goto LABEL_21;
  }
  v11 = v2[46];
  if ( v21 != 76 )
  {
    if ( v21 != 48 )
    {
      v18 = 99;
      v12 = v17[0];
      goto LABEL_40;
    }
    v12 = v17[0];
    v18 = v22 & 0xF;
LABEL_21:
    if ( v11 == 32 )
    {
      switch ( v18 )
      {
        case 0:
          goto LABEL_25;
        case 1:
LABEL_30:
          *((_QWORD *)v2 + 31) = 0x3F947AE147AE147BLL;
          break;
        case 2:
LABEL_32:
          *((_QWORD *)v2 + 31) = 0x3FA47AE147AE147BLL;
          break;
        case 3:
LABEL_31:
          *((_QWORD *)v2 + 31) = 0x3FB47AE147AE147BLL;
          break;
        default:
          goto LABEL_40;
      }
    }
    else
    {
      switch ( v18 )
      {
        case 1:
          *((_QWORD *)v2 + 31) = 0x3FC47AE147AE147BLL;
          break;
        case 2:
          goto LABEL_31;
        case 3:
          goto LABEL_32;
        case 4:
          goto LABEL_30;
        case 5:
          goto LABEL_25;
        default:
          goto LABEL_40;
      }
    }
    goto LABEL_26;
  }
  v18 = 0;
  v12 = v17[0];
  if ( v11 != 32 )
  {
LABEL_40:
    *((_QWORD *)v2 + 31) = 0x4030000000000000LL;
    goto LABEL_26;
  }
LABEL_25:
  *((_QWORD *)v2 + 31) = 0x3F60624DD2F1A9FCLL;
LABEL_26:
  if ( v12 == 58 )
  {
    if ( v17[1] == 43 )
    {
      *((_BYTE *)v2 + 40) = 1;
    }
    else
    {
      if ( v17[1] == 45 )
        v15 = 2;
      else
        v15 = 0;
      *((_BYTE *)v2 + 40) = v15;
    }
  }
  else
  {
    *((_BYTE *)v2 + 40) = 3;
  }
  result = (__int16 *)sub_399D0(v2);
  if ( !result )
    return sub_3918C((__int16 *)v1, 6);
  return result;
}
