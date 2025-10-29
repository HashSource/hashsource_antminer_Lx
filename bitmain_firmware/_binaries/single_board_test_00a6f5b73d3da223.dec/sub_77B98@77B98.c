int __fastcall sub_77B98(int a1, char a2, int a3, int a4, _DWORD *s, _DWORD *a6, size_t n)
{
  if ( sub_77A2C(a1, a2, a3, a4 | 0x1980000) )
    return 0;
  usleep(0xC350u);
  memset(s, 0, 4 * n);
  memset(a6, 0, 4 * n);
  return sub_77A78(a1, a2, a3, s, a6, n);
}
