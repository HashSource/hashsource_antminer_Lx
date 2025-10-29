int __fastcall sub_3612C(int a1, const char *a2)
{
  int v2; // r3
  int v4; // r3
  void *s; // [sp+10h] [bp+8h]
  int v9; // [sp+14h] [bp+Ch]
  _DWORD *ptr; // [sp+18h] [bp+10h]
  signed int nmemb; // [sp+1Ch] [bp+14h]
  signed int i; // [sp+20h] [bp+18h]
  int v13; // [sp+24h] [bp+1Ch]
  int v14; // [sp+28h] [bp+20h]
  int v15; // [sp+28h] [bp+20h]
  unsigned __int8 v16; // [sp+2Fh] [bp+27h]

  nmemb = *(_DWORD *)(a1 + 196);
  ptr = calloc(nmemb, 8u);
  v16 = 0;
  v14 = 0;
  while ( 1 )
  {
    v2 = v14++;
    if ( v2 > 29 )
      break;
    if ( sub_35C00(a1, *((_BYTE *)&unk_1ED200 + 36 * (_DWORD)a2 + 4), nmemb, (int)ptr) == nmemb )
    {
      v13 = 0;
      for ( i = 0; i < nmemb; ++i )
      {
        if ( sub_35D38(ptr[2 * i + 1]) )
        {
          printf(
            "%s[%d] chip-%02x is still testing [%02x, %08x]\n",
            "pcba_hbm_test",
            211,
            LOBYTE(ptr[2 * i]),
            BYTE1(ptr[2 * i]),
            ptr[2 * i + 1]);
        }
        else
        {
          ++v13;
          printf(
            "%s[%d] chip-%02x test done [%02x, %08x]\n",
            "pcba_hbm_test",
            209,
            LOBYTE(ptr[2 * i]),
            BYTE1(ptr[2 * i]),
            ptr[2 * i + 1]);
        }
      }
      if ( v13 == nmemb )
      {
        v16 = 1;
        break;
      }
    }
    sleep(1u);
  }
  if ( v16 != 1 )
  {
    printf("%s[%d] timeout\n", "pcba_hbm_test", 223);
    sub_35D80(0, a2, nmemb, (int)ptr, 0);
    free(ptr);
    return 0;
  }
  else
  {
    v15 = 0;
    s = calloc(nmemb, 8u);
    while ( 1 )
    {
      v4 = v15++;
      if ( v4 > 29 )
        break;
      memset(s, 0, 4u);
      v9 = sub_35C00(a1, *((_BYTE *)&unk_1ED200 + 36 * (_DWORD)a2 + 5), nmemb, (int)s);
      if ( v9 == nmemb )
      {
        v16 = sub_35D80(1, a2, nmemb, (int)ptr, (int)s);
        break;
      }
      printf("%s[%d] resp num not enough %d\n", "pcba_hbm_test", 239, v9);
      sleep(1u);
    }
    free(ptr);
    free(s);
    return v16;
  }
}
