void __fastcall sub_22E9C(unsigned int a1, int a2, int a3)
{
  int v4; // r8
  unsigned int v5; // r3
  int v8; // r0
  unsigned int i; // r1
  unsigned int v10; // r4
  unsigned int v11; // r0
  unsigned int v12; // r8
  __int64 v13; // r2
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  v4 = dword_A0D68;
  if ( *(_BYTE *)(dword_A0D68 + 12954) && (v5 = *(_DWORD *)(dword_A0D68 + 12950)) != 0 )
  {
    v8 = *(unsigned __int8 *)(dword_A0D68 + 12954) << 24;
    if ( v5 > 1 )
    {
      for ( i = 1; i < v5; i *= 2 )
        ;
      v8 = sub_772E8(v8, i);
    }
    v10 = v8 * a3 / 100;
    *(_DWORD *)(v4 + 68) = v10;
    v11 = v10 / a1;
    *(_DWORD *)(v4 + 72) = v10 / a1;
    if ( (byte_241D04 & 4) != 0 && word_241D12 )
    {
      v11 = HIBYTE(word_241D12) + 1000 * (unsigned __int8)word_241D12;
      *(_DWORD *)(v4 + 72) = v11;
    }
    v12 = (v11 * a2) >> 2;
    sub_6FC8C(v12 & 0x1FFFF | 0x80000000);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, "freq = %d, percent = %d, hcn = %d, timeout = %d\n", a1, a3, (a2 * v10) >> 2, v12);
      sub_47AB4(3, s, 0);
    }
  }
  else
  {
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy(s, "Note: addrInterval or corenum is not initialized.\n");
      sub_47AB4(3, s, 0);
      v4 = dword_A0D68;
    }
    HIDWORD(v13) = (char *)&loc_1FFFC + 3;
    LODWORD(v13) = -1;
    *(_QWORD *)(v4 + 68) = v13;
  }
}
