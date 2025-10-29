__int16 *__fastcall sub_476FC(int a1, int a2)
{
  int v4; // r4
  int v5; // r2
  int v6; // r1
  int v7; // r0
  int v8; // r3
  int v9; // r2
  char v10; // r1
  int v11; // r12
  int v12; // r8
  int v13; // r7
  int v14; // lr
  const char *v15; // r7
  _DWORD *v16; // r8
  int v17; // r1
  _DWORD *v18; // r4
  __int16 *result; // r0
  int v20; // [sp+4h] [bp-44h]
  int v21; // [sp+8h] [bp-40h]
  int v22; // [sp+20h] [bp-28h] BYREF
  int v23; // [sp+24h] [bp-24h]
  int v24; // [sp+2Ch] [bp-1Ch]
  int v25; // [sp+30h] [bp-18h]
  int v26; // [sp+34h] [bp-14h]
  int v27; // [sp+38h] [bp-10h]
  int v28; // [sp+3Ch] [bp-Ch]
  int v29; // [sp+40h] [bp-8h]

  v4 = *(_DWORD *)(a2 + 84);
  if ( ioctl(fd, 0x20000u, &v22) < 0 )
    sub_64A18(3, "HOPF_P(%d): HOPF_CLOCK_GET_UTC: %m", a1);
  v5 = v24;
  v6 = v23;
  ++*(_DWORD *)(v4 + 776);
  v7 = sub_6E898(v22, v6, v5);
  v8 = v29;
  v9 = (_DWORD)&unk_F4240 * v28;
  v10 = v29 & 0x20;
  v11 = v25;
  if ( (v29 & 0x20) != 0 )
    v10 = 1;
  *(_BYTE *)(v4 + 40) = v10;
  v12 = v26;
  v13 = v27;
  *(_DWORD *)(v4 + 196) = v11;
  *(_DWORD *)(v4 + 200) = v12;
  *(_DWORD *)(v4 + 208) = v9;
  *(_DWORD *)(v4 + 204) = v13;
  v14 = v22;
  *(_DWORD *)(v4 + 192) = v7;
  v20 = v12;
  v21 = v13;
  v15 = (const char *)(v4 + 56);
  v16 = (_DWORD *)(v4 + 232);
  sub_6BCB0(
    v4 + 56,
    128,
    "ST: %02X T: %02d:%02d:%02d.%03ld D: %02d.%02d.%04d",
    v8,
    v11,
    v20,
    v21,
    v9 / 1000000,
    v24,
    v23,
    v14);
  *(_DWORD *)(v4 + 184) = (unsigned __int16)strlen((const char *)(v4 + 56));
  sub_5F334(v4 + 232);
  if ( (v29 & 0xC0) != 0 && ((v29 & 0xC0) != 0x40 || (*(_BYTE *)(v4 + 768) & 1) != 0) )
  {
    if ( sub_399D0((_DWORD *)v4) )
    {
      v17 = *(_DWORD *)(v4 + 236);
      v18 = (_DWORD *)(v4 + 224);
      *v18 = *v16;
      v18[1] = v17;
      sub_39A1C(a2);
      return (__int16 *)sub_41CA4(a2 + 16, v15);
    }
    else
    {
      return sub_3918C((__int16 *)a2, 6);
    }
  }
  else
  {
    result = sub_3918C((__int16 *)a2, 6);
    *(_BYTE *)(v4 + 40) = 3;
  }
  return result;
}
