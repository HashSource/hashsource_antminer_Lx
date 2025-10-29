int __fastcall sub_365F8(int a1, const char *a2)
{
  int v2; // r3
  int v4; // r3
  int v8; // [sp+14h] [bp+Ch]
  _DWORD *ptr; // [sp+18h] [bp+10h]
  signed int nmemb; // [sp+1Ch] [bp+14h]
  signed int i; // [sp+20h] [bp+18h]
  int v12; // [sp+24h] [bp+1Ch]
  int v13; // [sp+28h] [bp+20h]
  int v14; // [sp+28h] [bp+20h]
  unsigned __int8 v15; // [sp+2Fh] [bp+27h]

  nmemb = *(_DWORD *)(a1 + 196);
  ptr = calloc(nmemb, 8u);
  v15 = 0;
  v13 = 0;
  while ( 1 )
  {
    v2 = v13++;
    if ( v2 > 29 )
      break;
    if ( sub_35C00(a1, *((_BYTE *)&unk_1ED200 + 36 * (_DWORD)a2 + 4), nmemb, (int)ptr) == nmemb )
    {
      v12 = 0;
      for ( i = 0; i < nmemb; ++i )
      {
        if ( sub_35D38(ptr[2 * i + 1]) )
        {
          printf(
            "%s[%d] chip-%02x is still testing [%02x, %08x]\n",
            "pcba_gpio_test",
            325,
            LOBYTE(ptr[2 * i]),
            BYTE1(ptr[2 * i]),
            ptr[2 * i + 1]);
        }
        else
        {
          ++v12;
          printf(
            "%s[%d] chip-%02x test done [%02x, %08x]\n",
            "pcba_gpio_test",
            323,
            LOBYTE(ptr[2 * i]),
            BYTE1(ptr[2 * i]),
            ptr[2 * i + 1]);
        }
      }
      if ( v12 == nmemb )
      {
        v15 = 1;
        break;
      }
    }
    sleep(1u);
  }
  if ( v15 != 1 )
  {
    printf("%s[%d] timeout\n", "pcba_gpio_test", 337);
    sub_3633C(0, a2, nmemb, (int)ptr);
    free(ptr);
    return 0;
  }
  else
  {
    v14 = 0;
    while ( 1 )
    {
      v4 = v14++;
      if ( v4 > 29 )
        break;
      memset(ptr, 0, sizeof(_DWORD));
      v8 = sub_35C00(a1, *((_BYTE *)&unk_1ED200 + 36 * (_DWORD)a2 + 5), nmemb, (int)ptr);
      if ( v8 == nmemb )
      {
        v15 = sub_3633C(1, a2, nmemb, (int)ptr);
        break;
      }
      printf("%s[%d] resp num not enough %d\n", "pcba_gpio_test", 352, v8);
      sleep(1u);
    }
    free(ptr);
    return v15;
  }
}
