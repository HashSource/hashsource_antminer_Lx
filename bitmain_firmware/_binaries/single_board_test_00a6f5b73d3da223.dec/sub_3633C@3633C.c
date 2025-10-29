int __fastcall sub_3633C(int a1, const char *a2, int a3, int a4)
{
  char s[32]; // [sp+18h] [bp+10h] BYREF
  unsigned int v10; // [sp+38h] [bp+30h]
  int i; // [sp+3Ch] [bp+34h]
  int j; // [sp+40h] [bp+38h]
  int v13; // [sp+44h] [bp+3Ch]

  v13 = 0;
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
        "%s[%d] chip-%02x result [%02x %08x]\n",
        "pcba_gpio_error_display",
        277,
        *(unsigned __int8 *)(8 * i + a4),
        *(unsigned __int8 *)(8 * i + a4 + 1),
        *(_DWORD *)(8 * i + a4 + 4));
      memset(s, 0, sizeof(s));
      if ( (*(_DWORD *)(8 * i + a4 + 4) & 0x1F) != 0 )
      {
        v10 = (*(_DWORD *)(8 * i + a4 + 4) << 24)
            | HIBYTE(*(_DWORD *)(8 * i + a4 + 4))
            | ((*(_DWORD *)(8 * i + a4 + 4) & 0xFF0000u) >> 8)
            | ((*(_DWORD *)(8 * i + a4 + 4) & 0xFF00) << 8);
        sprintf(s, "[%02x %x]", *(unsigned __int8 *)(8 * i + a4), v10 & 0x1F);
        strcat((char *)&ret_str, s);
        ++v13;
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
        "pcba_gpio_error_display",
        261,
        *(unsigned __int8 *)(8 * j + a4),
        *(unsigned __int8 *)(8 * j + a4 + 1),
        *(_DWORD *)(8 * j + a4 + 4));
      memset(s, 0, sizeof(s));
      if ( sub_35D38(*(_DWORD *)(8 * j + a4 + 4)) )
      {
        sprintf(s, "[%02x]", *(unsigned __int8 *)(8 * j + a4));
        strcat((char *)&ret_str, s);
        ++v13;
      }
    }
  }
  if ( v13 )
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
