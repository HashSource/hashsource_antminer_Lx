unsigned int __fastcall sub_FABE4(int a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  unsigned int v5; // r3
  unsigned int v8; // [sp+8h] [bp+8h]
  unsigned int i; // [sp+14h] [bp+14h]

  v8 = a2;
  for ( i = 0; ; ++i )
  {
    if ( !v8 )
      return i;
    if ( i > 0xFF )
      break;
    v5 = i;
    *(_DWORD *)(4 * v5 + a3) = v8;
    v8 = cuckoo_hash_operator(a1, v8);
  }
  do
    v3 = i--;
  while ( v3 && *(_DWORD *)(4 * i + a3) != v8 );
  if ( i != -1 )
  {
    printf("illegal %4d-cycle from node %d\n", 256 - i, a2);
    exit(0);
  }
  puts("\nWARNINIG: maximum path length exceeded");
  return 0;
}
