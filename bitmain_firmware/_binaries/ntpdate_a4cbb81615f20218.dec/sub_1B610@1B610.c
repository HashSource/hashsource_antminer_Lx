int __fastcall sub_1B610(const char *a1, void *a2, size_t a3)
{
  const char *v5; // r7
  size_t v6; // r2

  if ( !a1 )
    sub_10788();
  if ( !a2 )
    sub_10788();
  v5 = sub_1B58C(a1);
  v6 = strlen(v5) + 1;
  if ( v6 > a3 )
    return 19;
  memcpy(a2, v5, v6);
  return 0;
}
