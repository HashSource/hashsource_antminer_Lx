int __fastcall sub_36F08(int a1, int a2, int a3, int a4, int a5)
{
  const char *v5; // r1
  int v6; // r3
  const char *v7; // r1
  _DWORD s[8]; // [sp+2Ch] [bp+14h] BYREF
  unsigned int v14; // [sp+4Ch] [bp+34h]
  unsigned int v15; // [sp+50h] [bp+38h]
  int i; // [sp+54h] [bp+3Ch]
  int j; // [sp+58h] [bp+40h]
  int v18; // [sp+5Ch] [bp+44h]

  v18 = 0;
  if ( a1 )
  {
    if ( a1 != 1 )
    {
      printf("%s[%d] unknow error\n", "pcba_serdes_error_display", 654);
      sleep(1u);
      exit(1);
    }
    memset(&ret_str, 0, 0x40u);
    sprintf((char *)&ret_str, "%s:", (const char *)&unk_1ED200 + 36 * a2 + 20);
    for ( i = 0; i < a3; ++i )
    {
      printf(
        "%s[%d] ctrl [%02x %02x %08x], result [%02x %02x %08x]\n",
        "pcba_serdes_error_display",
        583,
        *(unsigned __int8 *)(8 * i + a4),
        *(unsigned __int8 *)(8 * i + a4 + 1),
        *(_DWORD *)(8 * i + a4 + 4),
        *(unsigned __int8 *)(8 * i + a5),
        *(unsigned __int8 *)(8 * i + a5 + 1),
        *(_DWORD *)(8 * i + a5 + 4));
      memset(s, 0, sizeof(s));
      if ( *(_DWORD *)(8 * i + a4 + 4) || *(_DWORD *)(8 * i + a5 + 4) )
      {
        if ( *(_BYTE *)(8 * i + a4) )
        {
          if ( *(_BYTE *)(8 * i + a4) == 64 )
          {
            strcpy((char *)s, "[U67 ");
          }
          else if ( *(unsigned __int8 *)(8 * i + a4) == 128 )
          {
            strcpy((char *)s, "[U76 ");
          }
          else
          {
            if ( *(unsigned __int8 *)(8 * i + a4) != 192 )
            {
              printf("%s unknow chip address\n", v7);
              exit(1);
            }
            strcpy((char *)s, "[U70 ");
          }
        }
        else
        {
          strcpy((char *)s, "[U73 ");
        }
        strcat((char *)&ret_str, (const char *)s);
        memset(s, 0, sizeof(s));
        v15 = (*(_DWORD *)(8 * i + a4 + 4) << 24)
            | HIBYTE(*(_DWORD *)(8 * i + a4 + 4))
            | ((*(_DWORD *)(8 * i + a4 + 4) & 0xFF0000u) >> 8)
            | ((*(_DWORD *)(8 * i + a4 + 4) & 0xFF00) << 8);
        if ( (v15 & 0xF0000000) != 0 )
          s[0] = &unk_20314C;
        if ( (v15 & 0xF000000) != 0 )
          s[0] = 2109778;
        strcat((char *)&ret_str, (const char *)s);
        memset(s, 0, sizeof(s));
        if ( (v15 & 0x2000) != 0 )
          s[0] = &unk_20324C;
        if ( (v15 & 0x1000) != 0 )
          s[0] = 2110034;
        strcat((char *)&ret_str, (const char *)s);
        memset(s, 0, sizeof(s));
        if ( (v15 & 0x800) != 0 )
          s[0] = &unk_20334C;
        if ( (v15 & 0x400) != 0 )
          s[0] = 2110290;
        strcat((char *)&ret_str, (const char *)s);
        memset(s, 0, sizeof(s));
        if ( (v15 & 0x200) != 0 )
          s[0] = &unk_20344C;
        if ( (v15 & 0x100) != 0 )
          s[0] = 2110546;
        strcat((char *)&ret_str, (const char *)s);
        memset(s, 0, sizeof(s));
        v14 = (*(_DWORD *)(8 * i + a5 + 4) << 24)
            | HIBYTE(*(_DWORD *)(8 * i + a5 + 4))
            | ((*(_DWORD *)(8 * i + a5 + 4) & 0xFF0000u) >> 8)
            | ((*(_DWORD *)(8 * i + a5 + 4) & 0xFF00) << 8);
        if ( HIWORD(v14) << 16 )
          s[0] = &unk_20354C;
        if ( (_WORD)v14 )
          s[0] = 2110802;
        strcat((char *)&ret_str, (const char *)s);
        *(_WORD *)((char *)&ret_str + strlen((const char *)&ret_str)) = 93;
        ++v18;
      }
    }
  }
  else
  {
    memset(&ret_str, 0, 0x40u);
    sprintf((char *)&ret_str, "%s timeout:", (const char *)&unk_1ED200 + 36 * a2 + 20);
    for ( j = 0; j < a3; ++j )
    {
      memset(s, 0, sizeof(s));
      if ( sub_35D38(*(_DWORD *)(8 * j + a4 + 4)) )
      {
        v6 = *(unsigned __int8 *)(8 * j + a4);
        if ( v6 == 64 )
        {
          sprintf((char *)s, "[%s %02x]", "U67", *(unsigned __int8 *)(8 * j + a4));
        }
        else if ( *(unsigned __int8 *)(8 * j + a4) > 0x40u )
        {
          if ( v6 == 128 )
          {
            sprintf((char *)s, "[%s %02x]", "U76", *(unsigned __int8 *)(8 * j + a4));
          }
          else
          {
            if ( v6 != 192 )
            {
LABEL_17:
              printf("%s[%d] unknow chip addr\n", v5, a4);
              sleep(1u);
              exit(1);
            }
            sprintf((char *)s, "[%s %02x]", "U70", *(unsigned __int8 *)(8 * j + a4));
          }
        }
        else
        {
          if ( *(_BYTE *)(8 * j + a4) )
            goto LABEL_17;
          sprintf((char *)s, "[%s %02x]", "U73", *(unsigned __int8 *)(8 * j + a4));
        }
        strcat((char *)&ret_str, (const char *)s);
        ++v18;
      }
    }
  }
  if ( v18 )
  {
    printf("%s failed\n", (const char *)&unk_1ED200 + 36 * a2 + 20);
    return 0;
  }
  else
  {
    printf("%s success\n", (const char *)&unk_1ED200 + 36 * a2 + 20);
    return 1;
  }
}
