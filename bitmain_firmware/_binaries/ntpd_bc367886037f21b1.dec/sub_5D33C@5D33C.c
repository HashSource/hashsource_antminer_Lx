__int16 *__fastcall sub_5D33C(int a1)
{
  int v1; // r7
  int *v2; // r8
  int v3; // r4
  const char *v4; // r5
  __int16 *result; // r0
  __int16 **v6; // r4
  __int16 *v7; // r1
  int v8; // r1
  __int16 *v9; // r1
  int v10; // r3
  int v11; // r1
  int v12; // r3
  struct tm *v13; // r0
  struct tm *v14; // r11
  int v15; // r0
  __int64 v16; // r2
  int v17; // r1
  int v18; // [sp+8h] [bp-4Ch] BYREF
  int v19; // [sp+Ch] [bp-48h] BYREF
  int v20; // [sp+10h] [bp-44h] BYREF
  time_t v21; // [sp+14h] [bp-40h] BYREF
  __int16 *v22; // [sp+18h] [bp-3Ch] BYREF
  __int16 *v23; // [sp+1Ch] [bp-38h]
  struct tm tp; // [sp+20h] [bp-34h] BYREF

  v1 = *(_DWORD *)(a1 + 4);
  v2 = *(int **)(v1 + 84);
  v4 = (const char *)(v2 + 14);
  v3 = *v2;
  result = (__int16 *)sub_39BB4(a1, (bool *)v2 + 56, 128, &v22);
  if ( result )
  {
    v2[46] = (int)result;
    v8 = *(_DWORD *)(v3 + 8);
    v2[58] = *(_DWORD *)(v3 + 4);
    v2[59] = v8;
    v9 = v23;
    *(_DWORD *)(v3 + 4) = v22;
    *(_DWORD *)(v3 + 8) = v9;
    *(_BYTE *)v3 = 1;
    result = (__int16 *)sscanf(v4, "Y %d/%d/%d", v3 + 16, v3 + 24, v3 + 20);
    if ( result )
    {
      v10 = *(_DWORD *)(v3 + 16);
      if ( v10 <= 68 )
        v10 += 100;
      *(_DWORD *)(v3 + 16) = v10;
    }
    else
    {
      result = (__int16 *)sscanf(v4, "Z %02d:%02d:%02d", &v18, &v19, &v20);
      if ( result == (__int16 *)((char *)&dword_0 + 3) )
      {
        memset(&tp.tm_isdst, 0, 12);
        memset(&tp.tm_mday, 0, 20);
        tp.tm_hour = v18;
        tp.tm_min = v19;
        tp.tm_sec = v20;
        v11 = *(_DWORD *)(v3 + 20);
        v12 = *(_DWORD *)(v3 + 24);
        tp.tm_year = *(_DWORD *)(v3 + 16);
        tp.tm_mday = v11;
        tp.tm_mon = v12 - 1;
        tp.tm_isdst = -1;
        v21 = mktime(&tp);
        v13 = gmtime(&v21);
        v14 = v13;
        if ( v13 )
        {
          v15 = sub_6E898(v13->tm_year + 1900, v13->tm_mon + 1, v13->tm_mday);
          LODWORD(v16) = v14->tm_min;
          HIDWORD(v16) = v14->tm_sec;
          v2[49] = v14->tm_hour;
          *((_QWORD *)v2 + 25) = v16;
          v2[48] = v15;
          if ( sub_399D0(v2) )
          {
            v17 = v2[59];
            v2[56] = v2[58];
            v2[57] = v17;
            sub_39A1C(v1);
            result = (__int16 *)sub_41CA4(v1 + 16, v4);
            *(_BYTE *)(v3 + 12) = v2[49];
          }
          else
          {
            return sub_3918C((__int16 *)v1, 6);
          }
        }
        else
        {
          return sub_3918C((__int16 *)v1, 3);
        }
      }
    }
  }
  else if ( *(_BYTE *)v3 )
  {
    *(_BYTE *)v3 = 0;
  }
  else
  {
    *(_BYTE *)v3 = 1;
    v6 = (__int16 **)(v3 + 4);
    result = v22;
    v7 = v23;
    *v6 = v22;
    v6[1] = v7;
  }
  return result;
}
