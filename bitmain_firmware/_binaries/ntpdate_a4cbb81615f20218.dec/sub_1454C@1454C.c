unsigned int __fastcall sub_1454C(_DWORD *a1)
{
  int v1; // r2
  int v2; // r3

  if ( !a1 || *a1 != 1114990113 )
    sub_10788();
  v1 = a1[4];
  if ( (unsigned int)(a1[3] - v1) <= 3 )
    sub_10788();
  v2 = a1[1];
  a1[4] = v1 + 4;
  return bswap32(*(_DWORD *)(v2 + v1));
}
