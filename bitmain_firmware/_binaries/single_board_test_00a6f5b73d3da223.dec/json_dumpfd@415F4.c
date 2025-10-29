int __fastcall json_dumpfd(_DWORD *a1, int a2, int a3)
{
  _DWORD v4[2]; // [sp+8h] [bp+8h] BYREF

  v4[1] = a1;
  v4[0] = a2;
  return json_dump_callback(a1, (int (__fastcall *)(const char *, int, int))((char *)sub_40B08 + 1), (int)v4, a3);
}
