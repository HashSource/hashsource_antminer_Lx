char *__fastcall sub_52694(const char *a1)
{
  char *result; // r0

  dword_1AEEB8 = 2;
  result = sub_6448C(a1, &dword_242FE4);
  if ( !result && (unsigned int)dword_242FE4 > 0x270F )
    return "Value out of range";
  return result;
}
