int __fastcall sub_3516C(const char *a1, _BYTE *a2, _BYTE *a3, const char *a4, _BYTE *a5)
{
  int v6; // r3
  char s[256]; // [sp+30h] [bp+18h] BYREF
  int v13; // [sp+130h] [bp+118h]
  size_t i; // [sp+134h] [bp+11Ch]

  i = 0;
  v13 = 0;
  memset(s, 0, sizeof(s));
  if ( !a1 || !a2 || !a3 || !a4 || !a5 )
    return -1;
  if ( *a1 )
  {
    printf("scan_code_data::%s", a1);
    memset(s, 0, sizeof(s));
    for ( i = 0; strlen(a1) > i; ++i )
    {
      if ( (unsigned __int8)a1[i] > 0x1Fu && (unsigned __int8)a1[i] <= 0x7Eu )
      {
        v6 = v13++;
        s[v6] = a1[i];
      }
    }
    printf("after check, scan_code_data::%s", s);
    if ( strchr(s, 32) )
    {
      *a5 = 1;
      _isoc99_sscanf(s, "%s %s %s %s %s %s %s %s", a4, a4 + 32, a4 + 48, a4 + 64, a4 + 80, a4 + 96, a4 + 112, a4 + 128);
      puts("recv qrcode data::");
      printf("factory_job::[%s].\n", a4);
      printf("chip_die::[%s].\n", a4 + 32);
      printf("chip_marking::[%s].\n", a4 + 48);
      printf("chip_bin::[%s].\n", a4 + 64);
      printf("chip_ftversion::[%s].\n", a4 + 80);
      printf("temp_sensor_type::[%s].\n", a4 + 96);
      printf("hashboard_ctrl_code::[%s].\n", a4 + 112);
      printf("hashboard_index::[%s].\n", a4 + 128);
    }
    else
    {
      if ( strlen(s) != 17 )
      {
        puts("bad data format!!!drop it.");
        return -3;
      }
      *a3 = 1;
      memset(a2 + 1, 0, 0x20u);
      *a2 = 17;
      memcpy(a2 + 1, s, 0x11u);
      printf("recv sn data::[%s]\n", a2 + 1);
    }
    return 0;
  }
  return -2;
}
