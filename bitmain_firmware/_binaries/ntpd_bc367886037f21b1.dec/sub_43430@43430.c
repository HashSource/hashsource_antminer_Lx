__int16 *__fastcall sub_43430(int a1)
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
  int v10; // r1
  int v11; // r3
  struct tm *v12; // r0
  int tm_min; // r1
  int tm_hour; // r2
  int tm_mday; // r3
  int tm_year; // r1
  int tm_wday; // r2
  int tm_yday; // r3
  int tm_gmtoff; // r1
  const char *tm_zone; // r2
  struct tm *v21; // r0
  struct tm *v22; // r6
  int v23; // r0
  __int64 v24; // r2
  int v25; // r1
  int v26; // [sp+Ch] [bp-4Ch] BYREF
  int v27; // [sp+10h] [bp-48h] BYREF
  int v28; // [sp+14h] [bp-44h] BYREF
  time_t v29; // [sp+18h] [bp-40h] BYREF
  time_t timer; // [sp+1Ch] [bp-3Ch] BYREF
  __int16 *v31; // [sp+20h] [bp-38h] BYREF
  __int16 *v32; // [sp+24h] [bp-34h]
  struct tm tp; // [sp+28h] [bp-30h] BYREF

  v1 = *(_DWORD *)(a1 + 4);
  v2 = *(int **)(v1 + 84);
  v4 = (const char *)(v2 + 14);
  v3 = *v2;
  result = (__int16 *)sub_39BB4(a1, (bool *)v2 + 56, 128, &v31);
  if ( result )
  {
    v2[46] = (unsigned __int16)result;
    v8 = *(_DWORD *)(v3 + 8);
    v2[58] = *(_DWORD *)(v3 + 4);
    v2[59] = v8;
    v9 = v32;
    *(_DWORD *)(v3 + 4) = v31;
    *(_DWORD *)(v3 + 8) = v9;
    *(_BYTE *)v3 = 1;
    result = (__int16 *)sscanf(v4, "%02d:%02d:%02d", &v26, &v27, &v28);
    if ( result == (__int16 *)((char *)&dword_0 + 3) )
    {
      memset(&tp.tm_wday, 0, 20);
      tp.tm_hour = v26;
      v10 = *(_DWORD *)(v3 + 32);
      v11 = *(_DWORD *)(v3 + 28);
      tp.tm_year = *(_DWORD *)(v3 + 36);
      tp.tm_min = v27;
      tp.tm_mon = v10;
      tp.tm_sec = v28;
      tp.tm_mday = v11;
      tp.tm_isdst = -1;
      v29 = mktime(&tp);
      time(&timer);
      if ( v29 - timer > 3600 )
      {
        v29 -= 86400;
      }
      else if ( v29 - timer < -3600 )
      {
        v29 += 86400;
      }
      v12 = localtime(&v29);
      if ( !v12 )
        return sub_3918C((__int16 *)v1, 3);
      tm_min = v12->tm_min;
      tm_hour = v12->tm_hour;
      tm_mday = v12->tm_mday;
      *(_DWORD *)(v3 + 16) = v12->tm_sec;
      *(_DWORD *)(v3 + 20) = tm_min;
      *(_DWORD *)(v3 + 24) = tm_hour;
      *(_DWORD *)(v3 + 28) = tm_mday;
      tm_year = v12->tm_year;
      tm_wday = v12->tm_wday;
      tm_yday = v12->tm_yday;
      *(_DWORD *)(v3 + 32) = v12->tm_mon;
      *(_DWORD *)(v3 + 36) = tm_year;
      *(_DWORD *)(v3 + 40) = tm_wday;
      *(_DWORD *)(v3 + 44) = tm_yday;
      tm_gmtoff = v12->tm_gmtoff;
      tm_zone = v12->tm_zone;
      *(_DWORD *)(v3 + 48) = v12->tm_isdst;
      *(_DWORD *)(v3 + 52) = tm_gmtoff;
      *(_DWORD *)(v3 + 56) = tm_zone;
      v21 = gmtime(&v29);
      v22 = v21;
      if ( v21 )
      {
        v23 = sub_6E898(v21->tm_year + 1900, v21->tm_mon + 1, v21->tm_mday);
        LODWORD(v24) = v22->tm_min;
        HIDWORD(v24) = v22->tm_sec;
        v2[49] = v22->tm_hour;
        *((_QWORD *)v2 + 25) = v24;
        v2[48] = v23;
        if ( sub_399D0(v2) )
        {
          v25 = v2[59];
          v2[56] = v2[58];
          v2[57] = v25;
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
    else if ( *(_BYTE *)(v3 + 13) )
    {
      --*(_BYTE *)(v3 + 13);
    }
    else
    {
      return sub_3918C((__int16 *)v1, 2);
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
    result = v31;
    v7 = v32;
    *v6 = v31;
    v6[1] = v7;
  }
  return result;
}
