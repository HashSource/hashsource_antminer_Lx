void __cdecl flip32(void *dest_p, const void *src_p)
{
  int i; // [sp+14h] [bp-10h]

  for ( i = 0; i <= 7; ++i )
    *((_DWORD *)dest_p + i) = sub_4A4CC(*((_DWORD *)src_p + i));
}
