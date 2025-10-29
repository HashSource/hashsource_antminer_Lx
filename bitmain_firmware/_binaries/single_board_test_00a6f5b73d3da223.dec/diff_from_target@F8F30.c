double __cdecl diff_from_target(void *target)
{
  double result; // r0

  LODWORD(result) = sub_F8E60((__int64 *)target);
  return result;
}
