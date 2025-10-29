__int16 *__fastcall sub_1F3D0(int a1, __int16 a2)
{
  int v2; // r8
  __int16 *result; // r0
  const char *v5; // r0
  int v6; // r9
  unsigned int v7; // r0
  unsigned int v8; // r10
  int v9; // r8
  const char *v10; // r0
  const char *v11; // r0
  int v12; // r3
  int v13; // r4
  const char *v14; // r0
  const char *v15; // r0
  int v16; // r0
  char *v17; // [sp+4h] [bp-Ch] BYREF
  size_t v18; // [sp+8h] [bp-8h]

  v2 = (unsigned __int16)word_B86C8;
  if ( word_B86C8 )
    return (__int16 *)sub_1F270(6);
  if ( (a2 & 0x100) != 0 )
  {
    sub_6BCB0(byte_1068F0, &elf_hash_bucket[145], "runtime configuration prohibited by restrict ... nomodify");
    v17 = byte_1068F0;
    v18 = strlen(byte_1068F0);
    sub_1EC64((char *)&v17, 1, v2);
    result = sub_1E934(v2);
    if ( (ntp_syslogmask & 1) != 0 )
    {
      v5 = (const char *)sub_6BF44(a1 + 4);
      result = (__int16 *)sub_64A18(5, "runtime config from %s rejected due to nomodify restriction", v5);
    }
    ++sys_restricted;
  }
  else
  {
    v6 = a1 + 4;
    v7 = sub_42A64(dword_B8408, dword_B840C);
    v8 = v7;
    if ( v7 > 0x3FE )
    {
      sub_6BCB0(byte_1068F0, &elf_hash_bucket[145], "runtime configuration failed: request too long");
      v17 = byte_1068F0;
      v18 = strlen(byte_1068F0);
      sub_1EC64((char *)&v17, 1, 0);
      sub_1E934(0);
      v15 = (const char *)sub_6BF44(v6);
      return (__int16 *)sub_64A18(5, "runtime config from %s rejected: request too long", v15);
    }
    else
    {
      v9 = dword_B840C - dword_B8408;
      if ( dword_B840C - dword_B8408 == v7 )
      {
        _memcpy_chk(remote_config, dword_B8408);
        remote_config[v9] = 0;
        v11 = (const char *)sub_6BF44(v6);
        sub_64A18(5, "%s config: %s", v11, (const char *)remote_config);
        dword_106CF0 = 0;
        remote_config[v9] = 10;
        dword_106CF4 = 0;
        remote_config[v9 + 1] = 0;
        dword_106CF8 = 0;
        sub_1311C(v6);
        if ( dword_106CF8 )
        {
          v12 = dword_106CF4;
        }
        else
        {
          v16 = sub_6BCB0(byte_1068F0, &elf_hash_bucket[145], "Config Succeeded");
          v12 = dword_106CF4;
          if ( v16 > 0 )
          {
            v12 = v16 + dword_106CF4;
            dword_106CF4 += v16;
          }
        }
        v18 = v12;
        v17 = byte_1068F0;
        sub_1EC64((char *)&v17, 1, 0);
        result = sub_1E934(0);
        v13 = dword_106CF8;
        if ( dword_106CF8 > 0 )
        {
          v14 = (const char *)sub_6BF44(v6);
          return (__int16 *)sub_64A18(5, "%d error in %s config", v13, v14);
        }
      }
      else
      {
        sub_6BCB0(
          byte_1068F0,
          &elf_hash_bucket[145],
          "runtime configuration failed: request contains an unprintable character");
        v17 = byte_1068F0;
        v18 = strlen(byte_1068F0);
        sub_1EC64((char *)&v17, 1, 0);
        sub_1E934(0);
        v10 = (const char *)sub_6BF44(v6);
        return (__int16 *)sub_64A18(
                            5,
                            "runtime config from %s rejected: request contains an unprintable character: %0x",
                            v10,
                            *(unsigned __int8 *)(dword_B8408 + v8));
      }
    }
  }
  return result;
}
