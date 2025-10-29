__int16 *__fastcall sub_1E934(int a1)
{
  int v2; // r3
  unsigned int v3; // r6
  size_t n; // r4
  _BYTE *v5; // r3
  int *v6; // r5
  int v8; // r2
  _DWORD *v9; // r12
  size_t v10; // r5
  int v11; // r0
  int v12; // r0
  char v13; // lr
  int v14; // r1

  v2 = dword_B8498;
  v3 = dword_B8498 - (_DWORD)&unk_B84A8;
  if ( !a1 && dword_B86A0 && v3 + 2 < 0x1D4 )
  {
    v3 += 2;
    *(_BYTE *)dword_B8498 = 13;
    dword_B8498 = v2 + 2;
    *(_BYTE *)(v2 + 1) = 10;
  }
  n = v3 + 12;
  if ( ((v3 + 12) & 3) != 0 )
  {
    v5 = (_BYTE *)dword_B8498;
    do
    {
      ++n;
      *v5++ = 0;
    }
    while ( (n & 3) != 0 );
    dword_B8498 = (int)v5;
  }
  word_B84A6 = __rev16(v3);
  word_B84A4 = __rev16(dword_B86A8);
  byte_B849D = a1 | ~(~((byte_B86A4 & 0x1Fu) << 25) >> 25);
  if ( !byte_B86AC )
  {
    if ( byte_B86AD && sys_authenticate )
    {
      v8 = dword_B8498;
      if ( (n & 7) != 0 )
      {
        v9 = (_DWORD *)dword_B8498;
        do
        {
          *(_BYTE *)v9 = 0;
          v9 = (_DWORD *)((char *)v9 + 1);
          v10 = (size_t)v9 + n - v8;
        }
        while ( (v10 & 7) != 0 );
        dword_B8498 = (int)v9;
      }
      else
      {
        v9 = (_DWORD *)dword_B8498;
        v10 = n;
      }
      v11 = dword_B86B0;
      *v9 = bswap32(dword_B86B0);
      v12 = sub_623CC(v11, &byte_B849C, v10);
      sub_16874((struct sockaddr *)dword_B8494, dword_B86B4, -5, (unsigned __int8 *)&byte_B849C, v12 + v10);
      if ( a1 )
        goto LABEL_19;
    }
    else
    {
      sub_16874((struct sockaddr *)dword_B8494, dword_B86B4, -6, (unsigned __int8 *)&byte_B849C, n);
      if ( a1 )
      {
LABEL_19:
        ++numctlfrags;
        goto LABEL_11;
      }
    }
    ++numctlresponses;
    goto LABEL_11;
  }
  v6 = (int *)&ctl_traps;
  do
  {
    if ( (*((_BYTE *)v6 + 50) & 1) != 0 )
    {
      v13 = (8 * *((_BYTE *)v6 + 51)) & 0x38;
      v14 = v6[7];
      word_B849E = __rev16(*((unsigned __int16 *)v6 + 24));
      byte_B849C = (sys_leap << 6) | 6 | v13;
      sub_16874((struct sockaddr *)v6, v14, -4, (unsigned __int8 *)&byte_B849C, n);
      if ( !a1 )
        ++*((_WORD *)v6 + 24);
      ++numasyncmsgs;
    }
    v6 += 13;
  }
  while ( &numctlinputresp != v6 );
LABEL_11:
  dword_B86A8 += v3;
  dword_B8498 = (int)&unk_B84A8;
  ++word_B86B8;
  return &word_B86B8;
}
