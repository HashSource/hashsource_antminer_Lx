const char *__fastcall sub_1BBF8(const char *a1, char a2)
{
  int i; // r4
  int v5; // r2
  const char *result; // r0
  char s[12]; // [sp+4h] [bp-Ch] BYREF

  for ( i = 0; i != 16; ++i )
  {
    sprintf(s, "chain_acn%d", i + 1);
    v5 = i + 12918;
    result = sub_43D6C((int)a1, s, (const char *)(dword_A0D68 + v5), a2);
    a1 = result;
  }
  return result;
}
