int __fastcall sub_1E7E8(char *a1, size_t a2, int a3)
{
  int v6; // r0
  int *v8; // r0

  v6 = sub_36C34();
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      v8 = sub_31ABC();
      snprintf(a1, a2, "%s:%s", "searchfailed", (const char *)v8);
    }
    else
    {
      snprintf(a1, a2, "searching");
    }
    return 0;
  }
  else
  {
    snprintf(a1, a2, "%d", a3);
    return 0;
  }
}
