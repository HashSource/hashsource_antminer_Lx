int __fastcall set_url(char *a1)
{
  pool *v3; // [sp+Ch] [bp-8h]

  v3 = add_url();
  sub_32ECC((int)v3, a1);
  return 0;
}
