__int16 *__fastcall sub_53608(int a1, int a2)
{
  int v3; // r4
  _DWORD *v4; // t1
  __int16 *result; // r0

  v3 = *(_DWORD *)(a2 + 84);
  v4 = *(_DWORD **)v3;
  *v4 = 0;
  v4[1] = v3 + 56;
  if ( write(*(_DWORD *)(v3 + 28), "QTQDQMT", 6u) != 6 )
    sub_3918C((__int16 *)a2, 3);
  if ( *(_DWORD *)(v3 + 216) == *(_DWORD *)(v3 + 220) )
    return sub_3918C((__int16 *)a2, 1);
  sub_39A1C(a2);
  result = (__int16 *)sub_41CA4(a2 + 16, (const char *)(v3 + 56));
  ++*(_DWORD *)(v3 + 776);
  return result;
}
