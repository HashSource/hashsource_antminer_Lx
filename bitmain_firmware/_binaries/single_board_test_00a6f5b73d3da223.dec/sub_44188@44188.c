bool __fastcall sub_44188(_DWORD *a1, _DWORD *a2)
{
  int v2; // r5
  int v3; // r1
  int v4; // r6
  int v5; // r0
  int v6; // r1
  bool v7; // zf

  v2 = json_integer_value(a1);
  v4 = v3;
  v5 = json_integer_value(a2);
  v7 = v4 == v6;
  if ( v4 == v6 )
    return v2 == v5;
  return v7;
}
