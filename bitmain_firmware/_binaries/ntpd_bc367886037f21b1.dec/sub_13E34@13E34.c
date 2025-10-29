int __fastcall sub_13E34(int a1, int fd, unsigned __int16 *a3)
{
  bool v5; // zf
  const char *v7; // r0
  int optval; // [sp+8h] [bp-8h] BYREF

  v5 = *a3 == 2;
  optval = 1;
  if ( v5 && setsockopt(fd, 1, 6, &optval, 4u) )
  {
    v7 = (const char *)sub_6BF44(a3);
    sub_64A18(3, "setsockopt(SO_BROADCAST) enable failure on address %s: %m", v7);
  }
  *(_DWORD *)(a1 + 144) |= 0x400u;
  return 1;
}
