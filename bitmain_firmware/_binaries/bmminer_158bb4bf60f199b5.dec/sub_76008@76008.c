int __fastcall sub_76008(int a1, char a2, char a3, int a4, _BYTE *a5)
{
  int v5; // r5

  if ( !a5 )
    return -1;
  v5 = 0;
  *(_DWORD *)a5 = 0;
  a5[3] = a3;
  a5[7] = a4;
  a5[2] = a2;
  a5[4] = HIBYTE(a4);
  a5[5] = BYTE2(a4);
  a5[6] = BYTE1(a4);
  a5[8] = 0;
  *a5 = (16 * (a1 != 0)) & 0x1E | 0x41;
  a5[1] = 9;
  a5[8] = a5[8] & 0xE0 | sub_76284(a5, 0x40u) & 0x1F;
  return v5;
}
