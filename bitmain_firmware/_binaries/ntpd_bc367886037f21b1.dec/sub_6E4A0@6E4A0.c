int __fastcall sub_6E4A0(int a1)
{
  int v2; // r7
  int i; // r0
  int v4; // r1
  int v5; // r5
  int v6; // r1
  int v7; // r6

LABEL_1:
  sub_6DCA8(*(sem_t **)(a1 + 28), 0);
  sub_6DCA8(*(sem_t **)(a1 + 4), 0);
  v2 = *(_DWORD *)(a1 + 20);
  for ( i = *(_DWORD *)(a1 + 24); ; i = v5 )
  {
    if ( v2 == i )
    {
      sem_post(*(sem_t **)(a1 + 4));
      goto LABEL_1;
    }
    v4 = *(_DWORD *)(a1 + 16);
    v5 = i + 1;
    *(_DWORD *)(a1 + 24) = i + 1;
    sub_8B484(i, v4);
    v7 = *(_DWORD *)(*(_DWORD *)(a1 + 12) + 4 * v6);
    *(_DWORD *)(*(_DWORD *)(a1 + 12) + 4 * v6) = 0;
    if ( v7 )
      break;
  }
  sem_post(*(sem_t **)(a1 + 4));
  if ( v7 == -1 )
  {
    sub_6E318(a1, -1);
    return 0;
  }
  return v7;
}
