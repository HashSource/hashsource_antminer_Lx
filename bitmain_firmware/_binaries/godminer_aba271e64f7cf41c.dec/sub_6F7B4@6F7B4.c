void *sub_6F7B4()
{
  void *result; // r0
  int v1; // [sp+0h] [bp-Ch]
  int i; // [sp+4h] [bp-8h]

  v1 = dword_161240;
  for ( i = 1; i < v1; ++i )
    result = memcpy((void *)(dword_161260 + 120 * i), (const void *)dword_161260, 0x78u);
  return result;
}
