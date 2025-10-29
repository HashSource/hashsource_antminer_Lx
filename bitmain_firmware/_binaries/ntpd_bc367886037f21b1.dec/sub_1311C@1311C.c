int __fastcall sub_1311C(int a1)
{
  const char *v2; // r0
  void *v3; // r0
  int v4; // r0
  int v5; // r0
  _BYTE v7[128]; // [sp+4h] [bp-88h] BYREF

  v2 = (const char *)sub_6BF44(a1);
  sub_6BCB0(v7, 128, "remote config from %s", v2);
  sub_1BEEC(v7, 0);
  v3 = memset(&cfgt, 0, 0xB8u);
  dword_1064D8 = 5;
  v4 = sub_194F8(v3);
  sub_1BF70(v4);
  dword_106434 = 1;
  dword_106448 = time(0);
  v5 = sub_6BF44(a1);
  dword_106440 = sub_63948(v5);
  return sub_FCE8(0);
}
