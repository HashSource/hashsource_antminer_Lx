int __fastcall json_dumpfd(_DWORD *a1, int a2, int a3)
{
  int (__fastcall *v3)(char *, int, int); // r1
  int v5; // [sp+4h] [bp-8h] BYREF

  v5 = a2;
  LOWORD(v3) = 18436;
  HIWORD(v3) = (unsigned int)&loc_34FF4 >> 16;
  return json_dump_callback(a1, v3, (int)&v5, a3);
}
