__int16 *__fastcall sub_5CC00(int a1, int a2)
{
  int v3; // r4
  char v4; // r2

  v3 = *(_DWORD *)(a2 + 84);
  if ( write(*(_DWORD *)(v3 + 28), "\r*toc\r", 6u) == 6 )
  {
    v4 = *(_BYTE *)(v3 + 768);
    ++*(_DWORD *)(v3 + 776);
    if ( (v4 & 2) == 0 )
      sub_5F334(v3 + 232);
  }
  else
  {
    sub_3918C((__int16 *)a2, 3);
  }
  if ( *(_DWORD *)(v3 + 216) == *(_DWORD *)(v3 + 220) )
    return sub_3918C((__int16 *)a2, 1);
  else
    return (__int16 *)sub_39A1C(a2);
}
