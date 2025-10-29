int __fastcall sub_36840(int a1, int a2, int a3, int a4, const char *a5)
{
  const char *v5; // r1
  int v6; // r3
  int v7; // r3
  char s[32]; // [sp+28h] [bp+10h] BYREF
  unsigned int v14; // [sp+48h] [bp+30h]
  int i; // [sp+4Ch] [bp+34h]
  int j; // [sp+50h] [bp+38h]
  int v17; // [sp+54h] [bp+3Ch]

  v17 = 0;
  if ( a1 == 1 )
  {
    memset(&ret_str, 0, 0x40u);
    sprintf((char *)&ret_str, "%s error:", (const char *)&unk_1ED200 + 36 * a2 + 20);
    for ( i = 0; i < a3; ++i )
    {
      printf(
        "%s[%d] ctrl [%02x %02x %08x], result [%02x %02x %08x]\n",
        "pcba_ddr_error_display",
        419,
        *(unsigned __int8 *)(8 * i + a4),
        *(unsigned __int8 *)(8 * i + a4 + 1),
        *(_DWORD *)(8 * i + a4 + 4),
        (unsigned __int8)a5[8 * i],
        (unsigned __int8)a5[8 * i + 1],
        *(_DWORD *)&a5[8 * i + 4]);
      memset(s, 0, sizeof(s));
      v14 = (*(_DWORD *)&a5[8 * i + 4] << 24)
          | HIBYTE(*(_DWORD *)&a5[8 * i + 4])
          | ((*(_DWORD *)&a5[8 * i + 4] & 0xFF0000u) >> 8)
          | ((*(_DWORD *)&a5[8 * i + 4] & 0xFF00) << 8);
      if ( v14 )
      {
        v7 = (unsigned __int8)a5[8 * i];
        if ( v7 == 64 )
        {
          sprintf(s, "[%s %02x %x]", "U67", (unsigned __int8)a5[8 * i], v14);
        }
        else if ( (unsigned __int8)a5[8 * i] > 0x40u )
        {
          if ( v7 == 128 )
          {
            sprintf(s, "[%s %02x %x]", "U76", (unsigned __int8)a5[8 * i], v14);
          }
          else
          {
            if ( v7 != 192 )
            {
LABEL_34:
              printf("%s[%d] unknow chip addr\n", a5, a5);
              sleep(1u);
              exit(1);
            }
            sprintf(s, "[%s %02x %x]", "U70", (unsigned __int8)a5[8 * i], v14);
          }
        }
        else
        {
          if ( a5[8 * i] )
            goto LABEL_34;
          sprintf(s, "[%s %02x %x]", "U73", (unsigned __int8)a5[8 * i], v14);
        }
        strcat((char *)&ret_str, s);
        ++v17;
      }
    }
  }
  else
  {
    if ( a1 != 2 )
    {
      printf("%s unkonw error, exit\n", "pcba_ddr_error_display");
      sleep(1u);
      exit(1);
    }
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
          sprintf(s, "[%s %02x]", "U67", *(unsigned __int8 *)(8 * j + a4));
        }
        else if ( *(unsigned __int8 *)(8 * j + a4) > 0x40u )
        {
          if ( v6 == 128 )
          {
            sprintf(s, "[%s %02x]", "U76", *(unsigned __int8 *)(8 * j + a4));
          }
          else
          {
            if ( v6 != 192 )
            {
LABEL_16:
              printf("%s[%d] unknow chip addr\n", v5, a4);
              sleep(1u);
              exit(1);
            }
            sprintf(s, "[%s %02x]", "U70", *(unsigned __int8 *)(8 * j + a4));
          }
        }
        else
        {
          if ( *(_BYTE *)(8 * j + a4) )
            goto LABEL_16;
          sprintf(s, "[%s %02x]", "U73", *(unsigned __int8 *)(8 * j + a4));
        }
        strcat((char *)&ret_str, s);
        ++v17;
      }
    }
  }
  if ( v17 )
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
