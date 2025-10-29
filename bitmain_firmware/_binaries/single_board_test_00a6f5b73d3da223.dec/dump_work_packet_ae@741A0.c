int __fastcall dump_work_packet_ae(int a1)
{
  unsigned int i; // [sp+Ch] [bp+Ch]

  printf("the work packet ");
  for ( i = 0; i <= 0x56; ++i )
    printf("%02x ", *(unsigned __int8 *)(i + a1));
  return putchar(10);
}
