char *__fastcall sub_84DF4(int a1)
{
  _DWORD *v2; // r5

  v2 = *(_DWORD **)(a1 + 80);
  if ( !v2 )
  {
    fprintf(stderr, off_B7504[0]);
    sub_7CA64(1);
  }
  *(_DWORD *)(a1 + 80) = 0;
  sub_84D00((void *)a1);
  memcpy((void *)a1, v2, 0x84u);
  memcpy(*(void **)(a1 + 68), v2 + 33, v2[25] << 6);
  *(_DWORD *)(a1 + 80) = v2;
  return sub_7E270((char *)a1);
}
