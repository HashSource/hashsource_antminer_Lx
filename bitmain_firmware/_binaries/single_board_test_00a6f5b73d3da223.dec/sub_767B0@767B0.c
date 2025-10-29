unsigned int *__fastcall sub_767B0(unsigned int *result)
{
  float v1; // s0
  int v2; // r0
  int v3; // r0
  unsigned int v4; // [sp+10h] [bp+10h]
  unsigned __int8 v5; // [sp+14h] [bp+14h]
  unsigned __int8 j; // [sp+16h] [bp+16h]
  unsigned __int8 i; // [sp+17h] [bp+17h]

  for ( i = 7; i; --i )
  {
    for ( j = i; j; --j )
    {
      v4 = (unsigned int)(float)((float)((float)i * v1) * (float)j);
      if ( v4 <= 0x960 && v4 >= 0x320 )
      {
        v5 = v4 / 0x19;
        *result = j & 7 | (v5 << 16) | 0xC0000100 | (16 * (i & 7));
        v2 = sub_1A3658(25 * v5, 1u);
        v3 = sub_1A3658(v2, i);
        return (unsigned int *)sub_1A3658(v3, j);
      }
    }
  }
  return result;
}
