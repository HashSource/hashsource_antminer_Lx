int __fastcall sub_406FC(int a1, int a2)
{
  _DWORD *v3; // r5
  int v5; // r6

  v3 = (_DWORD *)(a2 + 1512);
  if ( !strncasecmp((const char *)(a1 + 1064), (const char *)(a2 + 1512), 0x20u) )
  {
    if ( !strncasecmp((const char *)(a1 + 8), (const char *)(a2 + 456), 0x20u) )
      v5 = 0;
    else
      v5 = 2;
  }
  else
  {
    v5 = 2;
  }
  set_cur_seed(v3);
  set_cur_block_num(*(_QWORD *)(a2 + 1680));
  return v5;
}
