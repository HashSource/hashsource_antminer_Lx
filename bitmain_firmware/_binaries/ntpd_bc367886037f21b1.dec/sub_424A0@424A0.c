size_t __fastcall sub_424A0(const char *a1)
{
  size_t result; // r0
  size_t v3; // r5
  void *v4; // r0

  result = strlen(a1);
  if ( result )
  {
    v3 = result + 1;
    dword_BBD30 = sub_637E4(dword_BBD30, result + 1, 0, 0);
    v4 = memcpy((void *)dword_BBD30, a1, v3);
    return sub_62764(v4);
  }
  return result;
}
