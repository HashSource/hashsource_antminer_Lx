__int16 *__fastcall sub_533B8(int a1, int a2)
{
  int v3; // r6
  int v5; // r2
  int v6; // r1
  bool v7; // cc
  struct tm *v8; // r7
  _DWORD *v9; // r9
  int v10; // r1
  bool v11; // zf
  int tm_yday; // r2
  int tm_sec; // r0
  int tm_min; // r12
  int tm_hour; // lr
  int v16; // r3
  int v17; // r3
  int v18; // r1
  _DWORD *v19; // r6
  time_t v20; // [sp+0h] [bp-4Ch] BYREF
  struct tm tp; // [sp+4h] [bp-48h] BYREF
  _BYTE v22[8]; // [sp+30h] [bp-1Ch] BYREF
  unsigned __int8 v23; // [sp+38h] [bp-14h]
  unsigned __int8 v24; // [sp+3Ah] [bp-12h]
  unsigned __int8 v25; // [sp+3Bh] [bp-11h]
  unsigned __int8 v26; // [sp+3Ch] [bp-10h]
  unsigned __int8 v27; // [sp+3Dh] [bp-Fh]
  unsigned __int8 v28; // [sp+3Eh] [bp-Eh]
  unsigned __int8 v29; // [sp+3Fh] [bp-Dh]
  unsigned __int8 v30; // [sp+40h] [bp-Ch]
  char v31; // [sp+41h] [bp-Bh]

  v3 = *(_DWORD *)(a2 + 84);
  v22[0] = 0;
  if ( read(*(_DWORD *)(v3 + 28), v22, 0x12u) <= 17 || v22[0] != 9 )
    return sub_3918C((__int16 *)a2, 3);
  v5 = 10 * v29 + v28;
  tp.tm_mday = 10 * v25 + v24;
  tp.tm_mon = 10 * v27 + v26 - 1;
  tp.tm_year = v5;
  tp.tm_hour = 10 * v22[7] + v22[6];
  tp.tm_min = 10 * v22[5] + v22[4];
  if ( (v23 & 1) != 0 )
    v6 = 1;
  else
    v6 = v23 ^ 2;
  memset(&tp.tm_wday, 0, 16);
  if ( (v23 & 1) == 0 )
    v6 = v6 << 30 >> 31;
  v7 = v5 <= 98;
  if ( v5 <= 98 )
    v5 += 100;
  tp.tm_sec = 10 * v22[3] + v22[2];
  if ( v7 )
    tp.tm_year = v5;
  *(_QWORD *)&tp.tm_gmtoff = 0;
  tp.tm_isdst = v6;
  v20 = mktime(&tp);
  if ( v20 == -1 )
    return sub_3918C((__int16 *)a2, 6);
  *(_DWORD *)(v3 + 184) = strftime((char *)(v3 + 56), 0x80u, "%Y %m %d %H %M %S", &tp);
  v8 = gmtime_r(&v20, &tp);
  if ( !v8 )
    return sub_3918C((__int16 *)a2, 3);
  v9 = (_DWORD *)(v3 + 232);
  sub_5F334(v3 + 232);
  v10 = 31250000 * v30;
  v11 = (v31 & 1) == 0;
  tm_yday = v8->tm_yday;
  tm_sec = v8->tm_sec;
  tm_min = v8->tm_min;
  tm_hour = v8->tm_hour;
  *(_DWORD *)(v3 + 188) = v8->tm_year + 1900;
  *(_DWORD *)(v3 + 192) = tm_yday + 1;
  v16 = *(_DWORD *)(v3 + 776);
  *(_DWORD *)(v3 + 208) = v10;
  v17 = v16 + 1;
  *(_DWORD *)(v3 + 776) = v17;
  if ( !v11 )
    v17 = v10 + 500000000;
  *(_DWORD *)(v3 + 204) = tm_sec;
  if ( !v11 )
    *(_DWORD *)(v3 + 208) = v17;
  *(_DWORD *)(v3 + 196) = tm_hour;
  *(_DWORD *)(v3 + 200) = tm_min;
  if ( !sub_399D0((_DWORD *)v3) )
    return sub_3918C((__int16 *)a2, 6);
  sub_41CA4(a2 + 16, (const char *)(v3 + 56));
  if ( (v22[1] & 1) == 0 || (*(_BYTE *)(v3 + 768) & 2) != 0 )
    *(_BYTE *)(v3 + 40) = 0;
  else
    *(_BYTE *)(v3 + 40) = 3;
  v18 = *(_DWORD *)(v3 + 236);
  v19 = (_DWORD *)(v3 + 224);
  *v19 = *v9;
  v19[1] = v18;
  return (__int16 *)sub_39A1C(a2);
}
