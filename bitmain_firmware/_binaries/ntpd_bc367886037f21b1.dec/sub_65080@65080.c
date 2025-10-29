_DWORD *__fastcall sub_65080(int *a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r7
  int v5; // r2
  int v6; // r3
  int v7; // r6
  _DWORD *v8; // r9
  int v9; // r1
  int v10; // r2
  int v11; // r3
  unsigned int v13; // r3

  v2 = *a1;
  v3 = a1[1];
  v4 = dword_106118[0];
  v5 = a1[2];
  v6 = a1[3];
  v7 = 7 * dword_106118[0];
  v8 = (_DWORD *)((char *)&unk_10611C + 28 * dword_106118[0]);
  dword_106118[0] = (LOBYTE(dword_106118[0]) + 1) & 7;
  *v8 = v2;
  v8[1] = v3;
  v8[2] = v5;
  v8[3] = v6;
  v9 = a1[5];
  v10 = a1[6];
  v8[4] = a1[4];
  v8[5] = v9;
  v8[6] = v10;
  v11 = LOWORD(dword_106118[v7 + 1]);
  if ( v11 == 2 )
  {
    v13 = bswap32(dword_106118[v7 + 2]);
    if ( (v13 & 0xE0000000) == 0xC0000000 )
    {
      v13 &= 0xFFFFFF00;
    }
    else if ( (v13 & 0xC0000000) == 0x80000000 )
    {
      v13 = HIWORD(v13) << 16;
    }
    dword_106118[7 * v4 + 2] = bswap32(v13);
  }
  else if ( v11 == 10 )
  {
    *(_QWORD *)((char *)&unk_10611C + v7 * 4 + 16) = 0;
  }
  return v8;
}
