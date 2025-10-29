int __fastcall bin2hex(int result, int a2, unsigned int a3)
{
  int v5; // [sp+Ch] [bp+Ch]
  unsigned int i; // [sp+14h] [bp+14h]

  v5 = result;
  for ( i = 0; i < a3; ++i )
    result = sprintf((char *)(v5 + 2 * i), "%02x", *(unsigned __int8 *)(i + a2));
  return result;
}
