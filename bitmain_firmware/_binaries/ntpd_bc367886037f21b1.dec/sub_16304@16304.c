unsigned __int16 *__fastcall sub_16304(unsigned __int16 *result)
{
  int v1; // r1
  unsigned __int16 *v2; // r4
  int v3; // r3
  int v4; // r3
  int v5; // r2
  int v6; // r0
  const char *v7; // r1
  _DWORD *v8; // r6
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r1
  int v13; // r2
  int v14; // r3
  bool v15; // zf
  int v16; // r0
  int v17; // r2
  int v18; // r3
  const char *v19; // r7
  const char *v20; // r0
  int v21; // r3
  int v22; // r1
  int v23; // r2
  int v24; // r3
  int v25; // r1
  int v26; // r2
  const char *v27; // r0

  v1 = *result;
  v2 = result;
  if ( v1 == 2 )
    v3 = *((_DWORD *)result + 1);
  else
    v3 = *((unsigned __int8 *)result + 8);
  if ( v1 == 2 )
    v4 = (v3 & 0xF0) - 224;
  else
    v4 = v3 - 255;
  if ( v4 )
    return result;
  if ( sub_14FEC(result) )
  {
    v5 = sub_6BF44(v2);
    v6 = 6;
    v7 = "Duplicate request found for multicast address %s";
    return (unsigned __int16 *)sub_64A18(v6, v7, v5);
  }
  v8 = sub_13D64(0);
  v9 = *((_DWORD *)v2 + 1);
  v10 = *((_DWORD *)v2 + 2);
  v11 = *((_DWORD *)v2 + 3);
  v8[6] = *(_DWORD *)v2;
  v8[7] = v9;
  v8[8] = v10;
  v8[9] = v11;
  v12 = *((_DWORD *)v2 + 5);
  v13 = *((_DWORD *)v2 + 6);
  v14 = *((unsigned __int16 *)v8 + 12);
  v15 = v14 == 10;
  v8[10] = *((_DWORD *)v2 + 4);
  v8[11] = v12;
  v8[12] = v13;
  *((_WORD *)v8 + 70) = v14;
  *((_WORD *)v8 + 26) = v14;
  if ( v14 != 10 )
    v14 = -1;
  *((_WORD *)v8 + 13) = 31488;
  if ( v15 )
  {
    *(_QWORD *)(v8 + 15) = -1;
    *(_QWORD *)(v8 + 17) = -1;
  }
  else
  {
    v8[14] = v14;
  }
  sub_13FCC(1);
  v8[4] = -1;
  v16 = sub_15310((struct sockaddr *)(v8 + 6), 0, 0, (int)v8);
  v8[3] = v16;
  if ( v16 != -1 )
  {
    v17 = v8[36];
    v18 = 0;
    v8[45] = 0;
    v8[36] = v17 | 0x100;
    if ( *v2 != 2 )
      v18 = *((_DWORD *)v2 + 6);
    v8[44] = v18;
    sub_6D12C(v8 + 27);
    sub_140C0((int)v8);
    sub_14654((int)v8);
    goto LABEL_20;
  }
  free(v8);
  v21 = *v2;
  if ( v21 == 2 )
  {
    v8 = (_DWORD *)dword_B82C8;
  }
  else
  {
    if ( v21 != 10 )
    {
LABEL_25:
      v5 = sub_6BF44(v2);
      v6 = 3;
      v7 = "No multicast socket available to use for address %s";
      return (unsigned __int16 *)sub_64A18(v6, v7, v5);
    }
    v8 = (_DWORD *)dword_B82CC;
  }
  if ( !v8 )
    goto LABEL_25;
  v22 = *((_DWORD *)v2 + 1);
  v23 = *((_DWORD *)v2 + 2);
  v24 = *((_DWORD *)v2 + 3);
  v8[20] = *(_DWORD *)v2;
  v8[21] = v22;
  v8[22] = v23;
  v8[23] = v24;
  v25 = *((_DWORD *)v2 + 5);
  v26 = *((_DWORD *)v2 + 6);
  v8[24] = *((_DWORD *)v2 + 4);
  v8[25] = v25;
  v8[26] = v26;
  v27 = (const char *)sub_6BF44(v2);
  sub_64A18(3, "multicast address %s using wildcard interface #%d %s", v27, v8[5], (const char *)v8 + 108);
LABEL_20:
  if ( sub_146F8(v8, v2) )
  {
    v19 = (const char *)sub_6BF44(v8 + 6);
    v20 = (const char *)sub_6BF44(v2);
    sub_64A18(6, "Joined %s socket to multicast group %s", v19, v20);
  }
  return (unsigned __int16 *)sub_13CCC(v2, (int)v8);
}
