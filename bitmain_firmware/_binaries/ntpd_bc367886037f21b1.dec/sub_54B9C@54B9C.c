__int16 *__fastcall sub_54B9C(int a1, int a2)
{
  int v3; // r4
  int v4; // r1
  char buf; // [sp+3h] [bp-5h] BYREF

  v3 = *(_DWORD *)(a2 + 84);
  buf = 84;
  if ( (*(_BYTE *)(v3 + 768) & 1) == 0 || write(*(_DWORD *)(v3 + 28), &buf, 1u) == 1 )
  {
    ++*(_DWORD *)(v3 + 776);
    if ( *(_DWORD *)(v3 + 216) == *(_DWORD *)(v3 + 220) )
      return sub_3918C((__int16 *)a2, 1);
  }
  else
  {
    sub_3918C((__int16 *)a2, 3);
    if ( *(_DWORD *)(v3 + 216) == *(_DWORD *)(v3 + 220) )
      return sub_3918C((__int16 *)a2, 1);
  }
  v4 = *(_DWORD *)(v3 + 236);
  *(_DWORD *)(v3 + 224) = *(_DWORD *)(v3 + 232);
  *(_DWORD *)(v3 + 228) = v4;
  sub_39A1C(a2);
  return (__int16 *)sub_41CA4(a2 + 16, (const char *)(v3 + 56));
}
