int sub_731E4()
{
  int v0; // r5
  int v1; // r7
  int v2; // r4
  int v3; // r6
  int v5; // [sp+8h] [bp-814h] BYREF
  __int16 v6; // [sp+Ch] [bp-810h]
  int v7; // [sp+10h] [bp-80Ch] BYREF
  int v8; // [sp+14h] [bp-808h]
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  if ( dword_1B14B0 || (v0 = sub_72E2C(), v0 >= 0) )
  {
    v1 = dword_1B14AC;
    v2 = 10;
    do
    {
      LOBYTE(v5) = -1;
      LOBYTE(v7) = 0;
      pthread_mutex_lock(&stru_1B1494);
      if ( sub_73984(v1, (unsigned __int8 *)&v7, 1, (int)&v5, 1) == 1 )
      {
        v3 = (unsigned __int8)v5;
        pthread_mutex_unlock(&stru_1B1494);
        if ( v3 == 245 )
          break;
      }
      else
      {
        snprintf(s, 0x800u, "%s: iic read is failed\n", "_bitmain_get_power_code_version");
        sub_47AB4(0, s, 0);
        pthread_mutex_unlock(&stru_1B1494);
      }
      usleep(0x186A0u);
      --v2;
    }
    while ( v2 );
    v5 = 33860181;
    v7 = 0;
    v8 = 0;
    v6 = 6;
    if ( sub_72E84(v1, (unsigned __int8 *)&v5, 6u, (unsigned __int8 *)&v7) )
    {
      v0 = -2147482880;
      strcpy(s, "get power version failed\n");
      sub_47AB4(0, s, 0);
    }
    else
    {
      return (unsigned __int16)v8;
    }
  }
  else
  {
    snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_power_version");
    sub_47AB4(0, s, 0);
  }
  return v0;
}
