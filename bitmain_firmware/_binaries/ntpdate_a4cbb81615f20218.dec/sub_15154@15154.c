void __fastcall __noreturn sub_15154(const char *a1, int a2, const char *a3)
{
  const char *v6; // r0

  v6 = (const char *)sub_11084((_DWORD *)isc_msgcat, 1, 101, (int)"failed");
  sub_15100(a1, a2, (int)"RUNTIME_CHECK(%s) %s", a3, v6);
}
