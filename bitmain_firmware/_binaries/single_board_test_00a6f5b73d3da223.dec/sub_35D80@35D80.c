int __fastcall sub_35D80(int a1, const char *a2, int a3, int a4, int a5)
{
  char s[32]; // [sp+28h] [bp+10h] BYREF
  unsigned int v11; // [sp+48h] [bp+30h]
  int i; // [sp+4Ch] [bp+34h]
  int j; // [sp+50h] [bp+38h]
  int v14; // [sp+54h] [bp+3Ch]

  v14 = 0;
  if ( a1 )
  {
    if ( a1 != 1 )
    {
      printf("%s unkonw error, exit\n", a2);
      sleep(1u);
      exit(1);
    }
    memset(&ret_str, 0, 0x40u);
    sprintf((char *)&ret_str, "%s error:", (const char *)&unk_1ED200 + 36 * (_DWORD)a2 + 20);
    for ( i = 0; i < a3; ++i )
    {
      printf(
        "%s[%d] ctrl [%02x %02x %08x], result [%02x %02x %08x]\n",
        "pcba_hbm_error_display",
        147,
        *(unsigned __int8 *)(8 * i + a4),
        *(unsigned __int8 *)(8 * i + a4 + 1),
        *(_DWORD *)(8 * i + a4 + 4),
        *(unsigned __int8 *)(8 * i + a5),
        *(unsigned __int8 *)(8 * i + a5 + 1),
        *(_DWORD *)(8 * i + a5 + 4));
      memset(s, 0, sizeof(s));
      v11 = (*(_DWORD *)(8 * i + a4 + 4) << 24)
          | HIBYTE(*(_DWORD *)(8 * i + a4 + 4))
          | ((*(_DWORD *)(8 * i + a4 + 4) & 0xFF0000u) >> 8)
          | ((*(_DWORD *)(8 * i + a4 + 4) & 0xFF00) << 8);
      if ( (v11 & 4) != 0 )
      {
        sprintf(s, "[%02x s0]", *(unsigned __int8 *)(8 * i + a4));
        strcat((char *)&ret_str, s);
        ++v14;
      }
      if ( (v11 & 2) != 0 )
      {
        memset(s, 0, sizeof(s));
        sprintf(s, "[%02x s1]", *(unsigned __int8 *)(8 * i + a4));
        strcat((char *)&ret_str, s);
        ++v14;
      }
      v11 = (*(_DWORD *)(8 * i + a5 + 4) << 24)
          | HIBYTE(*(_DWORD *)(8 * i + a5 + 4))
          | ((*(_DWORD *)(8 * i + a5 + 4) & 0xFF0000u) >> 8)
          | ((*(_DWORD *)(8 * i + a5 + 4) & 0xFF00) << 8);
      if ( v11 )
      {
        memset(s, 0, sizeof(s));
        sprintf(s, "[%02x c%08x]", *(unsigned __int8 *)(8 * i + a5), v11);
        strcat((char *)&ret_str, s);
        ++v14;
      }
    }
  }
  else
  {
    memset(&ret_str, 0, 0x40u);
    sprintf((char *)&ret_str, "%s timeout:", (const char *)&unk_1ED200 + 36 * (_DWORD)a2 + 20);
    for ( j = 0; j < a3; ++j )
    {
      printf(
        "%s[%d] chip-%02x ctrl [%02x %08x]\n",
        "pcba_hbm_error_display",
        130,
        *(unsigned __int8 *)(8 * j + a4),
        *(unsigned __int8 *)(8 * j + a4 + 1),
        *(_DWORD *)(8 * j + a4 + 4));
      memset(s, 0, sizeof(s));
      if ( sub_35D38(*(_DWORD *)(8 * j + a4 + 4)) )
      {
        sprintf(s, "[%02x]", *(unsigned __int8 *)(8 * j + a4));
        strcat((char *)&ret_str, s);
        ++v14;
      }
    }
  }
  if ( v14 )
  {
    printf("%s failed\n", (const char *)&unk_1ED200 + 36 * (_DWORD)a2 + 20);
    return 0;
  }
  else
  {
    printf("%s success\n", (const char *)&unk_1ED200 + 36 * (_DWORD)a2 + 20);
    return 1;
  }
}
