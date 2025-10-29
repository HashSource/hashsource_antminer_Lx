int __fastcall fh_buffer_putc(const void **a1, char a2)
{
  char v3; // [sp+7h] [bp-5h] BYREF

  v3 = a2;
  return sub_6D610(a1, &v3, 1u);
}
