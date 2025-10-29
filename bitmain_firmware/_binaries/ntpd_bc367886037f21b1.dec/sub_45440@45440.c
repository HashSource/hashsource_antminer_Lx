unsigned __int64 __fastcall sub_45440(_DWORD *a1, char *a2)
{
  int v3; // r0
  unsigned __int8 *v4; // r4
  unsigned __int64 v5; // d16
  unsigned __int8 *v7; // [sp+0h] [bp-Ch] BYREF

  v3 = sub_45314(a1, a2, 0);
  if ( v3 == -1 || (v4 = (unsigned __int8 *)(*a1 + a1[5 * v3 + 3])) == 0 )
  {
    v5 = 0;
    *_errno_location() = 22;
  }
  else
  {
    v5 = sub_43C78(v4, &v7);
    if ( v4 == v7 || *v7 )
      return 0;
  }
  return v5;
}
