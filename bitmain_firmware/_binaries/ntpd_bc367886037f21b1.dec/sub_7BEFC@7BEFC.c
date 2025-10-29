int __fastcall sub_7BEFC(int a1, _DWORD *a2)
{
  void (*v2)(void); // r7
  int v3; // r3
  int v6; // r2
  int v7; // r1
  int result; // r0
  int v9; // r2

  v2 = (void (*)(void))a2[10];
  v3 = a2[4] & 0xFFFFF00 | 8;
  a2[4] = v3;
  if ( v2 )
  {
    v2();
    v3 = a2[4];
  }
  v6 = *(unsigned __int16 *)a2;
  v7 = *(_DWORD *)(a1 + 120);
  result = _stack_chk_guard;
  a2[6] = *(_DWORD *)(*(_DWORD *)(a1 + 116) + 4 * v6);
  v9 = *(_DWORD *)(v7 + 4 * v6);
  a2[4] = v3 & 0xFFFFF00;
  a2[7] = v9;
  return result;
}
