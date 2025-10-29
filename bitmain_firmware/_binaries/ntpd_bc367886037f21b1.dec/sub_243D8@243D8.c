__int16 *__fastcall sub_243D8(__int16 *result, __int16 a2)
{
  __int16 *v2; // r6
  int v3; // r7
  unsigned int v4; // r4
  __int16 *v5; // r6
  struct tm *v6; // r0
  size_t v7; // r0
  const char *v8; // r0
  const char *v9; // r0
  const char *v10; // r0
  const char *v11; // r0
  const char *v12; // r0
  const char *v13; // r0
  int v14; // r0
  FILE *v15; // r0
  FILE *v16; // r7
  const char *v17; // r0
  size_t v18; // r0
  int *v19; // r0
  char *v20; // r0
  const char *v21; // r0
  int *v22; // r0
  char *v23; // r0
  const char *v24; // r0
  time_t timer; // [sp+8h] [bp-3A4h] BYREF
  _DWORD v26[2]; // [sp+Ch] [bp-3A0h] BYREF
  char v27[128]; // [sp+14h] [bp-398h] BYREF
  char s[128]; // [sp+94h] [bp-318h] BYREF
  unsigned __int8 v29[144]; // [sp+114h] [bp-298h] BYREF
  char v30[512]; // [sp+1A4h] [bp-208h] BYREF

  v2 = result;
  if ( (a2 & 0x100) != 0 )
  {
    sub_1F140((int)"%s", "saveconfig prohibited by restrict ... nomodify");
    result = sub_1E934(0);
    if ( (ntp_syslogmask & 1) != 0 )
    {
      v11 = (const char *)sub_6BF44(v2 + 2);
      result = (__int16 *)sub_64A18(5, "saveconfig from %s rejected due to nomodify restriction", v11);
    }
    ++sys_restricted;
  }
  else if ( saveconfigdir )
  {
    v3 = dword_B8408;
    v4 = dword_B840C - dword_B8408;
    if ( dword_B840C != dword_B8408 )
    {
      result = (__int16 *)memchr((const void *)dword_B8408, 0, dword_B840C - dword_B8408);
      if ( !result || (v4 = (unsigned int)result - v3, result != (__int16 *)v3) )
      {
        v5 = v2 + 2;
        if ( v4 > 0x7F )
        {
          sub_1F140((int)"saveconfig exceeded maximum raw name length (%u)", 128);
          sub_1E934(0);
          v9 = (const char *)sub_6BF44(v5);
          return (__int16 *)sub_64A18(5, "saveconfig exceeded maximum raw name length from %s", v9);
        }
        else
        {
          _memcpy_chk(v27, v3);
          v27[v4] = 0;
          time(&timer);
          v6 = localtime(&timer);
          if ( !strftime(s, 0x80u, v27, v6) )
            sub_6D12C(s);
          if ( sub_22DFC(s) )
          {
            if ( strpbrk(s, "\\/") )
            {
              sub_6BCB0(v30, 128, "saveconfig does not allow directory in filename");
              v7 = strlen(v30);
              v26[0] = v30;
              v26[1] = v7;
              sub_1EC64((char *)v26, 1, 0);
              sub_1E934(0);
              v8 = (const char *)sub_6BF44(v5);
              return (__int16 *)sub_64A18(5, "saveconfig rejects unsafe file name from %s", v8);
            }
            else if ( (unsigned int)sub_6BCB0(v30, 512, "%s%s", (const char *)saveconfigdir, s) < 0x200 )
            {
              v14 = open64(v30, 705);
              if ( v14 == -1 || (v15 = fdopen(v14, "w"), (v16 = v15) == 0) )
              {
                v19 = _errno_location();
                v20 = strerror(*v19);
                sub_1F140((int)"Unable to save configuration to file '%s': %s", s, v20);
                v21 = (const char *)sub_6BF44(v5);
                sub_64A18(3, "saveconfig %s from %s failed", s, v21);
              }
              else
              {
                if ( sub_ED04(v15, 1) == -1 )
                {
                  v22 = _errno_location();
                  v23 = strerror(*v22);
                  sub_1F140((int)"Unable to save configuration to file '%s': %s", s, v23);
                  v24 = (const char *)sub_6BF44(v5);
                  sub_64A18(3, "saveconfig %s from %s failed", s, v24);
                }
                else
                {
                  sub_1F140((int)"Configuration saved to '%s'", s);
                  v17 = (const char *)sub_6BF44(v5);
                  sub_64A18(5, "Configuration saved to '%s' (requested by %s)", v30, v17);
                  sub_6BCB0(v29, 141, "%s%s", "savedconfig=", s);
                  v18 = strlen((const char *)v29);
                  sub_24370(v29, v18 + 1, 1);
                }
                fclose(v16);
              }
              return sub_1E934(0);
            }
            else
            {
              sub_1F140((int)"saveconfig exceeded maximum path length (%u)", 512);
              sub_1E934(0);
              v13 = (const char *)sub_6BF44(v5);
              return (__int16 *)sub_64A18(5, "saveconfig exceeded maximum path length from %s", v13);
            }
          }
          else
          {
            sub_1F140((int)"saveconfig rejects unsafe file name '%s'", s);
            sub_1E934(0);
            v12 = (const char *)sub_6BF44(v5);
            return (__int16 *)sub_64A18(5, "saveconfig rejects unsafe file name from %s", v12);
          }
        }
      }
    }
  }
  else
  {
    sub_1F140((int)"%s", "saveconfig prohibited, no saveconfigdir configured");
    result = sub_1E934(0);
    if ( (ntp_syslogmask & 1) != 0 )
    {
      v10 = (const char *)sub_6BF44(v2 + 2);
      return (__int16 *)sub_64A18(5, "saveconfig from %s rejected, no saveconfigdir", v10);
    }
  }
  return result;
}
