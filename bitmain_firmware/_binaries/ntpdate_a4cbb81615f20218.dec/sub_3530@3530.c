void __noreturn sub_3530()
{
  int *v0; // r0

  v0 = _errno_location();
  sub_A848(3, "read system clock failed: %m (%d)", *v0);
  exit(1);
}
