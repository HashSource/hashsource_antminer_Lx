char *__fastcall sub_528E0(const char *a1, _DWORD *a2)
{
  char *result; // r0

  result = sub_6448C(a1, a2);
  if ( !result && (unsigned int)(*a2 - 1) > 0xFE )
    return "Value out of range";
  return result;
}
