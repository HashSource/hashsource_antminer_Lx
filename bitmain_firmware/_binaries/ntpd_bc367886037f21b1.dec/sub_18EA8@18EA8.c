int __fastcall sub_18EA8(FILE *a1, int a2)
{
  const char *v3; // r3

  if ( a2 <= 207 )
    v3 = "token";
  else
    v3 = "nterm";
  _fprintf_chk(a1, 1, "%s %s (", v3, (&off_B26E0)[a2]);
  return fputc(41, a1);
}
