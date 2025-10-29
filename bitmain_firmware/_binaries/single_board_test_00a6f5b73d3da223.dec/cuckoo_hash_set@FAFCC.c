int __fastcall cuckoo_hash_set(int result, unsigned int a2, int a3)
{
  unsigned __int64 v3; // kr00_8
  __int64 v4; // [sp+18h] [bp+18h]
  unsigned int i; // [sp+24h] [bp+24h]

  for ( i = a2 >> 22; ; i = (unsigned __int8)(i + 1) )
  {
    v3 = *(_QWORD *)(8 * i + cuckoo[result]);
    if ( !v3 || v3 >> 30 == a2 )
      break;
  }
  HIDWORD(v4) = (unsigned __int64)a2 >> 2;
  LODWORD(v4) = a3 | (a2 << 30);
  *(_QWORD *)(cuckoo[result] + 8 * i) = v4;
  return result;
}
