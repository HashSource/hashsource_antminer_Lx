int __fastcall sub_760A0(char a1, _BYTE *a2)
{
  int v2; // r5

  if ( !a2 )
    return -1;
  v2 = 0;
  *(_DWORD *)a2 = 0;
  a2[4] = 0;
  a2[2] = a1;
  a2[1] = 5;
  *a2 = 64;
  a2[4] = a2[4] & 0xE0 | sub_76284(a2, 0x20u) & 0x1F;
  return v2;
}
