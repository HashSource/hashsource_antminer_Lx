int __fastcall cuckoo_hash_operator(int a1, unsigned int a2)
{
  unsigned __int64 v2; // kr00_8
  unsigned int i; // [sp+14h] [bp+14h]

  for ( i = a2 >> 22; ; i = (unsigned __int8)(i + 1) )
  {
    v2 = *(_QWORD *)(8 * i + cuckoo[a1]);
    if ( !v2 )
      return 0;
    if ( v2 >> 30 == a2 )
      break;
  }
  return v2 & 0x3FFFFFFF;
}
