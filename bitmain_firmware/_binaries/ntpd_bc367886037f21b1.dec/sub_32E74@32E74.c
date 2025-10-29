int __fastcall sub_32E74(int a1)
{
  int v2; // r4
  struct sockaddr *v3; // r6
  int result; // r0
  char *v5; // r4
  char v6; // r1
  char v7; // r3
  unsigned int v8; // r1
  unsigned int v9; // r12
  unsigned int v10; // r2
  int v11; // r2
  const char *v12; // r0
  void *v13; // r0
  unsigned int v14; // r0
  int v15; // r12
  _BYTE v16[4]; // [sp+8h] [bp-870h] BYREF
  unsigned int v17; // [sp+Ch] [bp-86Ch] BYREF
  unsigned int v18; // [sp+10h] [bp-868h]
  int v19; // [sp+14h] [bp-864h]
  int v20; // [sp+18h] [bp-860h]
  __int64 v21; // [sp+1Ch] [bp-85Ch]
  __int64 v22; // [sp+24h] [bp-854h]
  _DWORD v23[530]; // [sp+2Ch] [bp-84Ch] BYREF

  v2 = *(_DWORD *)(a1 + 52);
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = *(struct sockaddr **)(v2 + 20);
      *(_DWORD *)(a1 + 52) = *(_DWORD *)(v2 + 28);
      result = sub_31748(&v3->sa_family, 0, 0, 3, 0, 0);
      if ( !result )
        break;
      v2 = *(_DWORD *)(a1 + 52);
      if ( !v2 )
        return result;
    }
    sub_3FDAC(v3, v16);
    if ( (v16[0] & 0x7F) != 0 )
      sub_40598(v3, 0, current_time + 9);
    v5 = sub_176E8(v3);
    memset(v23, 0, sizeof(v23));
    v6 = *(_BYTE *)(a1 + 64);
    LOBYTE(v23[0]) = (8 * *(_BYTE *)(a1 + 62)) & 0x38 | (sys_leap << 6) | 3;
    BYTE2(v23[0]) = v6;
    v7 = sys_stratum;
    if ( sys_stratum == 16 )
      v7 = 0;
    BYTE1(v23[0]) = v7;
    HIBYTE(v23[0]) = sys_precision;
    v23[3] = sys_refid;
    v23[1] = bswap32((int)(sys_rootdelay * 65536.0));
    v23[2] = bswap32((unsigned int)(sys_rootdisp * 65536.0));
    v23[4] = bswap32(sys_reftime);
    v23[5] = bswap32(dword_107C0C);
    sub_5F334(&v17);
    v8 = v18;
    v9 = v17;
    *(_DWORD *)(a1 + 584) = v17;
    *(_DWORD *)(a1 + 588) = v8;
    v23[10] = bswap32(v9);
    v23[11] = bswap32(v18);
    v10 = *(_DWORD *)(a1 + 76);
    if ( v10 >= sys_ttlmax )
      v10 = sys_ttlmax;
    sub_16874(v3, (int)v5, (unsigned __int8)sys_ttl[v10], (unsigned __int8 *)v23, 0x30u);
    v11 = *(_DWORD *)(a1 + 740) + 1;
    *(_DWORD *)(a1 + 712) += (1 << *(_BYTE *)(a1 + 65)) - 2;
    *(_DWORD *)(a1 + 740) = v11;
    v12 = (const char *)sub_6BF44(v3);
    return sub_64A18(6, "Soliciting pool server %s", v12);
  }
  else
  {
    v13 = *(void **)(a1 + 48);
    if ( v13 )
    {
      free(v13);
      *(_DWORD *)(a1 + 48) = 0;
    }
    v14 = *(unsigned __int16 *)(a1 + 16);
    v15 = *(unsigned __int16 *)(a1 + 60);
    v17 = 0;
    v21 = 0;
    v18 = v14;
    v22 = 0;
    v19 = 2;
    v20 = 17;
    result = sub_68134(*(_DWORD *)(a1 + 44), "ntp", &v17, 0, pool_name_resolved, v15);
    if ( result )
      return sub_64A18(3, "unable to start pool DNS %s: %m", (const char *)*(_DWORD *)(a1 + 44));
  }
  return result;
}
