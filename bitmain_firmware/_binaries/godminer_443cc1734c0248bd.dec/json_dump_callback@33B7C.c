int __fastcall json_dump_callback(_DWORD *a1, int (__fastcall *a2)(char *, int, int), int a3, int a4)
{
  int v8; // r4
  _DWORD v10[8]; // [sp+Ch] [bp-20h] BYREF

  if ( (a4 & 0x200) == 0 && (!a1 || *a1 > 1u) || hashtable_init(v10) )
    return -1;
  v8 = sub_333D0(a1, a4, 0, v10, a2, a3);
  hashtable_close((int)v10);
  return v8;
}
