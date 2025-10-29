bool __fastcall sub_6590C(_DWORD *a1, int a2)
{
  bool v3; // nf
  int v4; // r3
  signed int v5; // r1
  int v6; // r1
  int v7; // r2
  int v8; // r3
  _BOOL4 result; // r0
  int v10; // r3
  int v11; // [sp+0h] [bp-14h] BYREF
  int v12; // [sp+4h] [bp-10h] BYREF
  int v13; // [sp+8h] [bp-Ch]

  v4 = a2 % 7;
  v3 = a2 % 7 < 0;
  v5 = a2 - 1;
  if ( v3 )
    v4 += 7;
  a1[6] = v4;
  sub_65664((unsigned int *)&v12, v5, (_BOOL4 *)&v11);
  v6 = v13;
  v7 = v11;
  v8 = v12 - 1888;
  a1[7] = v13;
  a1[5] = v8 - 11;
  sub_65770(&v12, v6, v7);
  result = v11;
  v10 = v13 + 1;
  a1[4] = v12;
  a1[3] = v10;
  return result;
}
