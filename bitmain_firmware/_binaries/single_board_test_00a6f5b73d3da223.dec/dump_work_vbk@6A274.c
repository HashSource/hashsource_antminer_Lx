int __fastcall dump_work_vbk(int a1, unsigned __int8 a2)
{
  unsigned int i; // [sp+Ch] [bp+Ch]

  printf("dump work wc %d:", a2);
  for ( i = 0; i <= 0x3F; ++i )
    printf("%02x ", *(unsigned __int8 *)(i + a1 + 16));
  return putchar(10);
}
