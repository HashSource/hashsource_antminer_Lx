int __fastcall sub_3AB54(struct sockaddr *a1, int a2, int a3, int a4)
{
  unsigned int v6; // r4
  int *v9; // r10
  unsigned int v10; // r4
  int v11; // t1

  v6 = __rev16(*(unsigned __int16 *)(a3 + 4)) & 0xFFF;
  if ( v6 )
  {
    v9 = (int *)(a3 + 8);
    v10 = v6 - 1;
    do
    {
      --v10;
      v11 = *v9++;
      sub_61DF8(v11, a4);
    }
    while ( v10 != -1 );
  }
  return sub_3AA2C(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 0);
}
