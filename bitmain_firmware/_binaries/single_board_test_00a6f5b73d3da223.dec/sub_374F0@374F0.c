int __fastcall sub_374F0(int a1, int a2)
{
  int v2; // r3
  int v4; // r3
  void *ptr; // [sp+14h] [bp+Ch]
  int v9; // [sp+18h] [bp+10h]
  unsigned __int8 *s; // [sp+1Ch] [bp+14h]
  signed int nmemb; // [sp+20h] [bp+18h]
  int v12; // [sp+24h] [bp+1Ch]
  int v13; // [sp+24h] [bp+1Ch]
  signed int i; // [sp+28h] [bp+20h]
  int v15; // [sp+2Ch] [bp+24h]
  int v16; // [sp+30h] [bp+28h]
  int v17; // [sp+30h] [bp+28h]
  unsigned __int8 v18; // [sp+37h] [bp+2Fh]

  v18 = 0;
  v16 = 0;
  nmemb = *(_DWORD *)(a1 + 196);
  s = (unsigned __int8 *)calloc(nmemb, 8u);
  while ( 1 )
  {
    v2 = v16++;
    if ( v2 > 29 )
      break;
    memset(s, 0, 4u);
    v12 = sub_35C00(a1, *((_BYTE *)&unk_1ED200 + 36 * a2 + 4), nmemb, (int)s);
    if ( v12 == nmemb )
    {
      v15 = 0;
      for ( i = 0; i < nmemb; ++i )
      {
        if ( sub_35D38(*(_DWORD *)&s[8 * i + 4]) )
        {
          printf(
            "%s[%d] chip%02x is still testing %02x %08x\n",
            "pcba_serdes_test",
            690,
            s[8 * i],
            s[8 * i + 1],
            *(_DWORD *)&s[8 * i + 4]);
        }
        else
        {
          ++v15;
          printf(
            "%s[%d] chip%02x test done %02x %08x\n",
            "pcba_serdes_test",
            688,
            s[8 * i],
            s[8 * i + 1],
            *(_DWORD *)&s[8 * i + 4]);
        }
      }
      if ( v15 == nmemb )
      {
        v18 = 1;
        break;
      }
      v18 = 0;
    }
    else
    {
      v18 = 0;
      printf("%s[%d] resp num not enough %d\n", "pcba_serdes_test", 702, v12);
    }
    sleep(1u);
  }
  if ( v18 != 1 )
  {
    printf("%s[%d] timeout\n", "pcba_serdes_test", 708);
    sub_36F08(0, a2, nmemb, (int)s, 0);
    free(s);
    return v18;
  }
  else
  {
    v17 = 0;
    ptr = calloc(nmemb, 8u);
    while ( 1 )
    {
      v4 = v17++;
      if ( v4 > 29 )
        break;
      memset(s, 0, 4u);
      memset(ptr, 0, 4u);
      v13 = sub_35C00(a1, *((_BYTE *)&unk_1ED200 + 36 * a2 + 4), nmemb, (int)s);
      v9 = sub_35C00(a1, *((_BYTE *)&unk_1ED200 + 36 * a2 + 5), nmemb, (int)ptr);
      if ( v13 == nmemb && v9 == nmemb )
      {
        v18 = sub_36F08(1, a2, nmemb, (int)s, (int)ptr);
        break;
      }
      v18 = 0;
      printf("%s[%d] resp num %d, resp num tmp %d\n", "pcba_serdes_test", 729, v13, v9);
      sleep(1u);
    }
    free(s);
    free(ptr);
    return v18;
  }
}
