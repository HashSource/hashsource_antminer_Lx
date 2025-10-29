__int16 *sub_18248()
{
  __int16 *result; // r0
  __int16 *v1; // r3
  int v2; // r7
  _DWORD *v3; // r0
  int v4; // r10
  _DWORD *v5; // r7
  int v6; // r1
  int v7; // r2
  int v8; // r3
  double v9; // kr00_8
  int v10; // r0
  uint32_t v11; // r1
  uint32_t v12; // r2
  uint32_t v13; // r3
  int v14; // r9
  _DWORD *v15; // r7
  int v16; // r1
  int v17; // r2
  int v18; // r3
  double v19; // kr08_8
  int v20; // r0
  const char *v21; // r0
  const char *v22; // r0
  __int16 addr; // [sp+4h] [bp-30h] BYREF
  int addr_2; // [sp+6h] [bp-2Eh]
  __int16 addr_6; // [sp+Ah] [bp-2Ah]
  int addr_8; // [sp+Ch] [bp-28h]
  _DWORD addr_12[3]; // [sp+10h] [bp-24h] BYREF
  unsigned __int64 v28; // [sp+1Ch] [bp-18h]
  double v29; // [sp+24h] [bp-10h]

  result = word_B8240;
  if ( !dword_B83D4 && (*(int *)((_BYTE *)&elf_hash_bucket[261] + (_DWORD)off_B511C) & 0xF) == 0 )
  {
    v1 = word_B8240;
    dword_B82C4 = 0;
    dword_B83D4 = 1;
    do
    {
      *((_DWORD *)v1 + 1) = 0;
      v1 += 2;
    }
    while ( v1 != (__int16 *)&unk_B82C0 );
    memset(addr_12, 0, sizeof(addr_12));
    v28 = 0;
    v29 = 0.0;
    if ( ipv6_works )
    {
      *(_QWORD *)&addr_12[1] = 0;
      v28 = 0;
      v29 = 0.0;
      addr_12[0] = 2063597578;
      v11 = in6addr_any.in6_u.u6_addr32[1];
      v12 = in6addr_any.in6_u.u6_addr32[2];
      v13 = in6addr_any.in6_u.u6_addr32[3];
      addr_12[2] = in6addr_any.in6_u.u6_addr32[0];
      v28 = __PAIR64__(v12, v11);
      LODWORD(v29) = v13;
      v14 = sub_147F4(0, (unsigned __int16 *)addr_12, 0);
      if ( v14 != 1 )
      {
        v15 = sub_13D64(0);
        sub_6D12C(v15 + 27);
        v16 = addr_12[1];
        v17 = addr_12[2];
        v18 = v28;
        v15[6] = addr_12[0];
        v15[9] = v18;
        v15[7] = v16;
        v15[8] = v17;
        v19 = v29;
        v15[10] = HIDWORD(v28);
        *(double *)(v15 + 11) = v19;
        *((_WORD *)v15 + 70) = 10;
        *((_WORD *)v15 + 26) = 10;
        *(_QWORD *)(v15 + 15) = -1;
        *(_QWORD *)(v15 + 17) = -1;
        v15[45] = v14 == 2;
        v15[36] = 129;
        v20 = sub_15310((struct sockaddr *)(v15 + 6), 0, 1, (int)v15);
        v15[3] = v20;
        if ( v20 == -1 )
        {
          v21 = (const char *)sub_6BF44(v15 + 6);
          sub_64A18(3, "unable to bind to wildcard address %s - another process may be running - EXITING", v21);
          exit(1);
        }
        dword_B82CC = (int)v15;
        any6_interface = (int)v15;
        sub_13CCC(v15 + 6, (int)v15);
        sub_140C0((int)v15);
        sub_14654((int)v15);
      }
    }
    if ( ipv4_works )
    {
      addr_12[1] = 0;
      addr_12[0] = 2063597570;
      v4 = sub_147F4(0, (unsigned __int16 *)addr_12, 0);
      if ( v4 != 1 )
      {
        v5 = sub_13D64(0);
        sub_6D12C(v5 + 27);
        v6 = addr_12[1];
        v7 = addr_12[2];
        v8 = v28;
        v5[6] = addr_12[0];
        v5[9] = v8;
        v5[7] = v6;
        v5[8] = v7;
        v9 = v29;
        v5[10] = HIDWORD(v28);
        *(double *)(v5 + 11) = v9;
        v5[45] = v4 == 2;
        v5[20] = 2063597570;
        v5[21] = 0;
        v5[14] = -1;
        v5[36] = 137;
        *((_WORD *)v5 + 70) = 2;
        *((_WORD *)v5 + 26) = 2;
        v10 = sub_15310((struct sockaddr *)(v5 + 6), 0, 1, (int)v5);
        v5[3] = v10;
        if ( v10 == -1 )
        {
          v22 = (const char *)sub_6BF44(v5 + 6);
          sub_64A18(3, "unable to bind to wildcard address %s - another process may be running - EXITING", v22);
          exit(1);
        }
        dword_B82C8 = (int)v5;
        any_interface = (int)v5;
        sub_13CCC(v5 + 6, (int)v5);
        sub_140C0((int)v5);
        sub_14654((int)v5);
      }
    }
    sub_17774(0, 0);
    sub_13FCC(0);
    if ( socket(16, 3, 0) < 0 )
    {
      return (__int16 *)sub_64A18(3, "unable to open routing socket (%m) - using polled interface update");
    }
    else
    {
      addr_6 = 0;
      addr_2 = 0;
      addr = 16;
      addr_8 = 1905;
      v2 = sub_6BD14();
      if ( bind(v2, (const struct sockaddr *)&addr, 0xCu) < 0 )
      {
        return (__int16 *)sub_64A18(3, "bind failed on routing socket (%m) - using polled interface update");
      }
      else
      {
        sub_6BEC8(v2);
        v3 = (_DWORD *)sub_637E4(0, 16, 0, 1);
        v3[3] = sub_15978;
        v3[1] = v2;
        *v3 = asyncio_reader_list;
        asyncio_reader_list = (int)v3;
        sub_15288(v2, 0);
        return (__int16 *)sub_64A18(6, "Listening on routing socket on fd #%d for interface updates", v2);
      }
    }
  }
  return result;
}
