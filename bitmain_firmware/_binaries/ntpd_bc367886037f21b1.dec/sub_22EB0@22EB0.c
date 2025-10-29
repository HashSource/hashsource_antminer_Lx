int __fastcall sub_22EB0(int a1, int a2)
{
  int v4; // r1
  int result; // r0
  int v6; // r2
  int v7; // r3
  int v8; // r12
  int v9; // lr
  unsigned __int16 v10; // r9
  __int16 v11; // r10
  bool v12; // zf
  unsigned int v13; // lr
  unsigned int v14; // r12
  unsigned int v15; // r11
  int v16; // r3
  char *i; // r0
  int v18; // r0
  int (*v19)(); // r3

  v4 = a1 + 4;
  result = *(_DWORD *)(a1 + 84);
  v6 = *(unsigned __int8 *)(a1 + 89);
  dword_B86B4 = *(_DWORD *)(a1 + 60);
  dword_B8494 = v4;
  ++numctlreq;
  v7 = *(unsigned __int16 *)(a1 + 96);
  if ( result <= 11 )
  {
    result = (int)&numctltooshort;
    ++numctltooshort;
LABEL_3:
    if ( (v6 & 0x80) != 0 )
    {
      result = (int)&numctlinputresp;
      ++numctlinputresp;
    }
    if ( (v6 & 0x20) != 0 )
    {
      result = (int)&numctlinputfrag;
      ++numctlinputfrag;
    }
    if ( (v6 & 0x40) != 0 )
      ++numctlinputerr;
    if ( v7 )
      ++numctlbadoffset;
    return result;
  }
  if ( (v6 & 0xE0) != 0 || *(_WORD *)(a1 + 96) )
    goto LABEL_3;
  v8 = (*(unsigned __int8 *)(a1 + 88) >> 3) & 7;
  byte_B88DC = (*(_BYTE *)(a1 + 88) >> 3) & 7;
  if ( (unsigned int)(v8 - 1) > 3 )
  {
    ++numctlbadversion;
    return result;
  }
  v9 = result & 3;
  if ( (result & 3) != 0 )
    v9 = 1;
  v10 = __rev16(*(unsigned __int16 *)(a1 + 98));
  word_B84A0 = 0;
  dword_B86A8 = 0;
  if ( v10 > result - 12 )
    v9 |= 1u;
  v11 = *(_WORD *)(a1 + 90);
  v12 = v9 == 0;
  v13 = *(unsigned __int16 *)(a1 + 94);
  byte_B86AC = 0;
  byte_B86AD = 0;
  byte_B849C = (sys_leap << 6) | 6 | (8 * v8);
  dword_B86B0 = 0;
  byte_B88DD = 0;
  dword_B86A0 = 0;
  dword_B86C0 = 0;
  dword_B86BC = 0;
  word_B84A2 = v13;
  word_B849E = v11;
  dword_B8498 = (int)&unk_B84A8;
  byte_B86A4 = v6;
  word_B86C8 = __rev16(v13);
  word_B86B8 = 1;
  dword_B86C4 = (int)&unk_B867C;
  if ( !v12 )
  {
    result = sub_1F270(2);
    ++numctldatatooshort;
    return result;
  }
  v14 = (v10 + 19) & 0xFFFFFFF8;
  v15 = result - v14;
  if ( result - v14 - 4 <= 0x14 && sys_authenticate )
  {
    byte_B86AD = 1;
    dword_B86B0 = bswap32(*(_DWORD *)(a1 + 88 + v14));
    if ( sub_61FE0() )
    {
      if ( !sub_62494(dword_B86B0, a1 + 88, *(_DWORD *)(a1 + 84) - v15, v15) )
      {
        dword_B86B0 = 0;
        v6 = (unsigned __int8)byte_B86A4;
        goto LABEL_24;
      }
      byte_B88DD = 1;
    }
    v6 = (unsigned __int8)byte_B86A4;
  }
LABEL_24:
  dword_B8408 = a1 + 100;
  dword_B840C = a1 + 100 + v10;
  if ( v6 )
  {
    v16 = 1;
    for ( i = (char *)&unk_B3480; ; i += 8 )
    {
      if ( v16 == -1 )
      {
        v18 = 3;
        ++numctlbadop;
        return sub_1F270(v18);
      }
      if ( v16 == v6 )
        break;
      v16 = *((__int16 *)i + 8);
    }
    if ( *((_WORD *)i + 5) == 1 && (!byte_B88DD || dword_B86B0 != ctl_auth_keyid) )
    {
      v18 = 1;
      return sub_1F270(v18);
    }
    v19 = (int (*)())*((_DWORD *)i + 3);
  }
  else
  {
    v19 = sub_23A94;
  }
  return ((int (__fastcall *)(int, int))v19)(a1, a2);
}
