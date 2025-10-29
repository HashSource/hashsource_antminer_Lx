int __fastcall pcba_get_chip_num(int a1)
{
  int v3; // [sp+8h] [bp+8h]
  _DWORD *ptr; // [sp+Ch] [bp+Ch]
  size_t nmemb; // [sp+10h] [bp+10h]
  int i; // [sp+14h] [bp+14h]

  nmemb = *(_DWORD *)(a1 + 196);
  ptr = calloc(nmemb, 8u);
  v3 = sub_35C00(a1, 0, nmemb, (int)ptr);
  for ( i = 0; i < v3; ++i )
    printf("chip-%02x %08x\n", LOBYTE(ptr[2 * i]), ptr[2 * i + 1]);
  free(ptr);
  return v3;
}
