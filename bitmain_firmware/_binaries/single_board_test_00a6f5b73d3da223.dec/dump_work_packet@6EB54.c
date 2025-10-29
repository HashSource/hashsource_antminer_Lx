int __fastcall dump_work_packet(int a1)
{
  unsigned int i; // [sp+Ch] [bp+Ch]

  printf("work: ");
  for ( i = 0; i <= 0xFC; ++i )
    printf("%02x ", *(unsigned __int8 *)(i + a1));
  return putchar(10);
}
