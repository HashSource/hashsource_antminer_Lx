int __fastcall get_uuid(void *a1)
{
  if ( !a1 )
    return -1;
  memset(a1, 0, 0x10u);
  return sub_B6DC4("eth0", (int)a1);
}
