unsigned int __fastcall sub_1461C(_DWORD *a1, unsigned int a2)
{
  int v2; // r3
  int v3; // lr
  _BYTE *v5; // r2

  if ( !a1 || *a1 != 1114990113 )
    sub_10788();
  v2 = a1[3];
  if ( (unsigned int)(v2 + 4) > a1[2] )
    sub_10788();
  v3 = a1[1];
  a1[3] = v2 + 4;
  v5 = (_BYTE *)(v3 + v2);
  *(_BYTE *)(v3 + v2) = HIBYTE(a2);
  v5[3] = a2;
  v5[1] = BYTE2(a2);
  v5[2] = BYTE1(a2);
  return HIBYTE(a2);
}
