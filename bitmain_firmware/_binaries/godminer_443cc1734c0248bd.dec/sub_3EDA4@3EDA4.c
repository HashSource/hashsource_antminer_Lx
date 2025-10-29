int __fastcall sub_3EDA4(_QWORD *a1, int *a2)
{
  int v2; // r2
  bool v3; // zf
  int v4; // r2

  v2 = dword_164EFC;
  v3 = (dword_164EFC & 0xFFFFFFF) == 0xFFFFFFF;
  *a1 = *a2;
  if ( v3 )
    v4 = 0;
  else
    v4 = v2 + 1;
  dword_164EFC = v4;
  return 0;
}
