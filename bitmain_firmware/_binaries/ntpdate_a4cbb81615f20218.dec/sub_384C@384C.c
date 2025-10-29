int __fastcall sub_384C(int a1)
{
  struct sockaddr *v2; // r8
  int v3; // r0
  int v4; // r0
  unsigned int v5; // r3
  unsigned int v6; // kr04_4
  int v7; // kr08_4
  unsigned int v8; // r2
  unsigned __int64 v9; // kr10_8
  int v10; // r0
  int result; // r0
  __int16 v12; // r3
  unsigned int v13; // r3
  const char *v14; // r0
  const char *v15; // r0
  const char *v16; // r0
  _BYTE v17[4]; // [sp+4h] [bp-84Ch] BYREF
  int v18; // [sp+8h] [bp-848h]
  int v19; // [sp+Ch] [bp-844h]
  int v20; // [sp+10h] [bp-840h]
  int v21; // [sp+14h] [bp-83Ch]
  int v22; // [sp+18h] [bp-838h]
  int v23; // [sp+1Ch] [bp-834h]
  int v24; // [sp+20h] [bp-830h]
  int v25; // [sp+24h] [bp-82Ch]
  int v26; // [sp+28h] [bp-828h]
  unsigned int v27; // [sp+2Ch] [bp-824h]
  unsigned int v28; // [sp+30h] [bp-820h]
  unsigned int v29; // [sp+34h] [bp-81Ch]
  int v30; // [sp+84Ch] [bp-4h]

  v2 = (struct sockaddr *)(a1 + 4);
  if ( debug )
  {
    v16 = (const char *)sub_F6BC(a1 + 4);
    _printf_chk(1, "transmit(%s)\n", v16);
  }
  v3 = a1 + 244;
  v17[1] = 0;
  v20 = 0;
  v22 = 0;
  v21 = 0;
  v24 = 0;
  v23 = 0;
  v26 = 0;
  v25 = 0;
  v17[2] = 3;
  v17[0] = ~(~((8 * sys_version) & 0x38) & 0x3C);
  v17[3] = -6;
  v18 = 256;
  v19 = 256;
  if ( sys_authenticate )
  {
    v29 = bswap32(sys_authkey);
    sub_65B4(v3);
    v4 = sys_authkey;
    v6 = *(_DWORD *)(a1 + 248);
    v7 = sys_authdelay;
    v5 = v6 + sys_authdelay;
    v8 = *(_DWORD *)(a1 + 244);
    *(_DWORD *)(a1 + 248) = v6 + sys_authdelay;
    v9 = __PAIR64__(v8, v6) + (unsigned int)v7;
    *(_DWORD *)(a1 + 244) = HIDWORD(v9);
    v28 = bswap32(v5);
    v27 = bswap32(HIDWORD(v9));
    v10 = sub_8638(v4, v17, 48);
    sub_3730(v2, v17, v10 + 48);
    if ( debug > 1 )
    {
      v15 = (const char *)sub_F6BC(v2);
      _printf_chk(1, "transmit auth to %s\n", v15);
    }
  }
  else
  {
    sub_65B4(v3);
    v13 = *(_DWORD *)(a1 + 248);
    v27 = bswap32(*(_DWORD *)(a1 + 244));
    v28 = bswap32(v13);
    sub_3730(v2, v17, 0x30u);
    if ( debug > 1 )
    {
      v14 = (const char *)sub_F6BC(v2);
      _printf_chk(1, "transmit to %s\n", v14);
    }
  }
  result = v30;
  v12 = *(_WORD *)(a1 + 68);
  *(_DWORD *)(a1 + 60) = current_time + sys_timeout;
  *(_WORD *)(a1 + 68) = v12 + 1;
  return result;
}
