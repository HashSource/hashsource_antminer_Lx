int __fastcall sub_794A4(int a1)
{
  unsigned int i; // [sp+Ch] [bp+Ch]

  printf("work[%3d]: ", 46);
  for ( i = 0; i <= 0x2D; ++i )
    printf("%02x", *(unsigned __int8 *)(i + a1));
  return putchar(10);
}
