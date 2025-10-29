int __fastcall sub_1E990(int a1, char *a2, size_t a3)
{
  const char *v4; // r5
  int v6; // r0
  int result; // r0
  int v8; // [sp+0h] [bp-80Ch] BYREF
  int v9; // [sp+4h] [bp-808h] BYREF
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v4 = (const char *)(a1 + 4);
  v8 = -1;
  v9 = -1;
  if ( strstr((const char *)(a1 + 4), "/rate") )
  {
    if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
    {
      strcpy(s, "cmd : get rate");
      sub_47AB4(7, s, 0);
    }
    v6 = sub_3047C();
LABEL_7:
    sub_1E7E8(a2, a3, v6);
    return 0;
  }
  if ( strstr(v4, "/test") )
  {
    _isoc99_sscanf(v4, "/test.%d.%d", &v8, &v9);
    if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
    {
      snprintf(s, 0x800u, "cmd : get test = %d", v8);
      sub_47AB4(7, s, 0);
    }
    if ( v8 == 523 )
      sub_1E884(a2);
    else
      sprintf(a2, "OK get test=%d", v8);
    return 0;
  }
  else
  {
    if ( strstr(v4, "/ideal_rate") )
    {
      if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
      {
        strcpy(s, "cmd : get ideal rate");
        sub_47AB4(7, s, 0);
      }
      v6 = sub_30348();
      goto LABEL_7;
    }
    if ( strstr(v4, "/max_rate") )
    {
      if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
      {
        strcpy(s, "cmd : get max rate");
        sub_47AB4(7, s, 0);
      }
      v6 = sub_301EC();
      goto LABEL_7;
    }
    if ( strstr(v4, "/miner_status") )
    {
      result = (unsigned __int8)byte_1AECC5;
      if ( byte_1AECC5 )
      {
        if ( byte_244080 || (result = (unsigned __int8)byte_1AECC4, byte_1AECC4) || dword_9E320 > 6 )
        {
          strcpy(s, "cmd : get miner status");
          sub_47AB4(7, s, 0);
          return 0;
        }
      }
    }
    else if ( strstr(v4, "/productName") )
    {
      if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
      {
        strcpy(s, "cmd : get miner type");
        sub_47AB4(7, s, 0);
      }
      snprintf(a2, 0x100u, "%s", byte_1B08E4);
      return 0;
    }
    else
    {
      return -1;
    }
  }
  return result;
}
