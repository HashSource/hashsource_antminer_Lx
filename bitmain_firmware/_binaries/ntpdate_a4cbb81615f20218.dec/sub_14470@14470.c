int __fastcall sub_14470(_DWORD *a1, int a2)
{
  int v2; // r3
  int v3; // lr
  int result; // r0

  if ( !a1 || *a1 != 1114990113 )
    sub_10788();
  v2 = a1[3];
  if ( (unsigned int)(v2 + 3) > a1[2] )
    sub_10788();
  v3 = a1[1];
  a1[3] = v2 + 3;
  result = v3 + v2;
  *(_BYTE *)(v3 + v2) = BYTE2(a2);
  *(_BYTE *)(result + 2) = a2;
  *(_BYTE *)(result + 1) = BYTE1(a2);
  return result;
}
