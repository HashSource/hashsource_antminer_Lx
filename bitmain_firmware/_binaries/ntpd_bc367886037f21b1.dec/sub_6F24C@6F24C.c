void __fastcall __noreturn sub_6F24C(const char *a1, int a2, const char *a3)
{
  const char *v6; // r0

  v6 = (const char *)sub_73430(isc_msgcat, 1, 101, "failed");
  sub_6F1F8(a1, a2, (int)"RUNTIME_CHECK(%s) %s", a3, v6);
}
