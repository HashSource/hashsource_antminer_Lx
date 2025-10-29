int __fastcall sub_64568(char a1)
{
  unsigned __int64 v1; // d17
  _DWORD v4[3]; // [sp+Ch] [bp-20h] BYREF
  char *flag_from_monitor; // [sp+18h] [bp-14h]
  _DWORD *all_created_runtime; // [sp+1Ch] [bp-10h]
  int i; // [sp+20h] [bp-Ch]
  unsigned __int8 v8; // [sp+27h] [bp-5h]

  v8 = 0;
  v4[0] = 0;
  all_created_runtime = get_all_created_runtime(v4);
  for ( i = 0; i < v4[0]; ++i )
  {
    flag_from_monitor = get_flag_from_monitor(all_created_runtime[i]);
    v4[2] = flag_from_monitor;
    v4[1] = 0;
    LODWORD(v1) = 0;
    if ( (vshld_u64(1u, v1) & *(_QWORD *)flag_from_monitor) != 0 && a1 )
      v8 = 1;
  }
  return v8;
}
