int __fastcall map_get_(_DWORD *a1, char *s2)
{
  int result; // r0

  result = sub_E6094(a1, a1 + 1, s2);
  if ( result )
    return *(_DWORD *)(*(_DWORD *)result + 4);
  return result;
}
