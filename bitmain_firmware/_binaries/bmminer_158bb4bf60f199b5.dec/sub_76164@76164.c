int __fastcall sub_76164(_BYTE *a1)
{
  int v1; // r5

  if ( !a1 )
    return -1;
  v1 = 0;
  *(_DWORD *)a1 = 0;
  a1[4] = 0;
  a1[1] = 5;
  *a1 = 83;
  a1[4] = a1[4] & 0xE0 | sub_76284(a1, 0x20u) & 0x1F;
  return v1;
}
