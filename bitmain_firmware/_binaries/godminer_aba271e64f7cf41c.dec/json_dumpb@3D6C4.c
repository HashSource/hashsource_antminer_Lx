int __fastcall json_dumpb(_DWORD *a1, int a2, int a3, int a4)
{
  int v6; // [sp+14h] [bp-10h] BYREF
  int v7; // [sp+18h] [bp-Ch]
  int v8; // [sp+1Ch] [bp-8h]

  v6 = a3;
  v7 = 0;
  v8 = a2;
  if ( json_dump_callback(a1, (int (__fastcall *)(const char *, int, int))sub_3C680, (int)&v6, a4) )
    return 0;
  else
    return v7;
}
