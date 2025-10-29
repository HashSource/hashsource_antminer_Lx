unsigned __int8 __cdecl twoc2hex(unsigned __int8 high, unsigned __int8 low)
{
  unsigned __int8 v4; // [sp+7h] [bp+7h]

  v4 = c2hex_0(high);
  return c2hex_0(low) ^ (16 * v4);
}
