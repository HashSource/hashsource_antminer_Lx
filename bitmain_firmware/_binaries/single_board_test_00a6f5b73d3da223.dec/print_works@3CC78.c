int __fastcall print_works(int a1)
{
  int v1; // r3
  _DWORD *v4; // [sp+Ch] [bp+Ch]
  unsigned int k; // [sp+10h] [bp+10h]
  unsigned int j; // [sp+14h] [bp+14h]
  unsigned int i; // [sp+18h] [bp+18h]
  unsigned int m; // [sp+1Ch] [bp+1Ch]
  unsigned int n; // [sp+1Ch] [bp+1Ch]
  unsigned int ii; // [sp+1Ch] [bp+1Ch]

  printf("\n%s begin\n\n", "print_works");
  for ( i = 0; *(_DWORD *)(a1 + 40) > i; ++i )
  {
    for ( j = 0; *(_DWORD *)(*(_DWORD *)(a1 + 8) + 12) > j; ++j )
    {
      for ( k = 0; *(_DWORD *)(*(_DWORD *)(a1 + 8) + 16) > k; ++k )
      {
        v4 = (_DWORD *)(104
                      * (k + *(_DWORD *)(*(_DWORD *)(a1 + 8) + 16) * (j + i * *(_DWORD *)(*(_DWORD *)(a1 + 8) + 12)))
                      + *(_DWORD *)(*(_DWORD *)(a1 + 8) + 8));
        printf("asic[%02d][%02d][%02d].work=0x", i, j, k);
        for ( m = 0; v4[22] > m; ++m )
          printf("%02x", *((unsigned __int8 *)v4 + m + 4));
        printf(" nonce=0x");
        for ( n = 0; v4[23] > n; ++n )
          printf("%02x", *((unsigned __int8 *)v4 + n + 84));
        printf(" sol=0x");
        for ( ii = 0; v4[24] > ii; ++ii )
          printf("%02x", *((unsigned __int8 *)v4 + ii + 88));
        putchar(10);
      }
      putchar(10);
    }
    putchar(10);
  }
  printf("%s end\n\n", "print_works");
  return v1;
}
