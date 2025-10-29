void __fastcall __noreturn sub_1CEC8(const char *a1, int a2, int a3, int a4)
{
  char v8[256]; // [sp+4h] [bp-104h] BYREF

  sub_6F108(0);
  sub_64A18(3, "%s:%d: fatal error:", a1, a2);
  sub_6B34C(v8, 256, a3, a4);
  sub_64A18(3, "%s", v8);
  sub_64A18(3, "exiting (due to fatal error in library)");
  abort();
}
