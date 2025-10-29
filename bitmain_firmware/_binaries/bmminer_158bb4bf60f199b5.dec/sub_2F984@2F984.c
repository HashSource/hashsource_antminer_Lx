void sub_2F984()
{
  FILE *v0; // r5
  int v1; // r0
  FILE *v2; // r4
  unsigned int v3; // r4
  unsigned int v4; // r3
  int v5; // r5
  int v6; // r0
  int v7; // r0
  unsigned __int8 v8; // r3
  FILE *v9; // r5
  int v10; // r6
  int v11; // r4
  int v12; // r6
  int v13; // r4
  int i; // r4
  int v15; // [sp+8h] [bp-828h] BYREF
  int v16; // [sp+Ch] [bp-824h] BYREF
  char s[32]; // [sp+10h] [bp-820h] BYREF
  char ptr[2048]; // [sp+30h] [bp-800h] BYREF

  v15 = 0;
  v16 = 0;
  v0 = (FILE *)fopen64("/tmp/testID", "rb");
  if ( v0 )
  {
    memset(s, 0, sizeof(s));
    fread(s, 1u, 0x20u, v0);
    fclose(v0);
    if ( s[0] == 48 && s[1] == 120 )
    {
      _isoc99_sscanf(s, "%x %x", &v15, &v16);
      if ( (unsigned int)dword_9E31C > 3 )
      {
        snprintf(ptr, 0x800u, "receive test id :0x%x, data : 0x%x!\n", v15, v16);
        sub_47AB4(3, ptr, 0);
      }
    }
    else
    {
      v1 = strtol(s, 0, 10);
      v15 = v1;
      if ( v1 && (unsigned int)dword_9E31C > 3 )
      {
        snprintf(ptr, 0x800u, "receive test id :%d!\n", v1);
        sub_47AB4(3, ptr, 0);
      }
    }
  }
  v2 = (FILE *)fopen64("/tmp/testID", "wb");
  if ( v2 )
  {
    memset(ptr, 0, 0x20u);
    sprintf(ptr, "%d", 0);
    fwrite(ptr, 1u, 0x20u, v2);
    fclose(v2);
  }
  v3 = v15;
  if ( v15 )
  {
    switch ( v15 )
    {
      case 11:
        sub_2F930();
        break;
      case 12:
        v7 = dword_9C558;
        if ( (unsigned int)dword_9E31C > 3 )
        {
          snprintf(ptr, 0x800u, "current voltage raw = %d\n", dword_9C558);
          sub_47AB4(3, ptr, 0);
          v7 = dword_9C558;
        }
        sub_1A0F0(v7);
        sub_1A3B8();
        dword_9C558 -= 10;
        break;
      case 13:
        v6 = dword_9C55C;
        if ( (unsigned int)dword_9E31C > 3 )
        {
          snprintf(ptr, 0x800u, "current voltage raw = %d\n", dword_9C55C);
          sub_47AB4(3, ptr, 0);
          v6 = dword_9C55C;
        }
        sub_1A0F0(v6);
        sub_1A3B8();
        dword_9C55C += 10;
        break;
      case 14:
        v8 = dword_9C560;
        if ( (unsigned int)dword_9E31C > 3 )
        {
          snprintf(ptr, 0x800u, "current pwm = %d\n", dword_9C560);
          sub_47AB4(3, ptr, 0);
          v8 = dword_9C560;
        }
        sub_13EE8(v8);
        dword_9C560 -= 3;
        break;
      case 15:
        v10 = sub_1A1B0() + 20;
        if ( (unsigned int)dword_9E31C > 3 )
        {
          snprintf(ptr, 0x800u, "Increase voltage to get pm, current voltage raw = %d\n", v10);
          sub_47AB4(3, ptr, 0);
        }
        v11 = 0;
        sub_1A0F0(v10);
        sub_1A3B8();
        do
        {
          if ( *(_DWORD *)(dword_A0D68 + 4 * v11 + 4) == 1 )
          {
            memset(ptr, 0, 0x270u);
            sub_2DF9C(v11, (int)ptr);
          }
          ++v11;
        }
        while ( v11 != 16 );
        break;
      case 16:
        v12 = sub_1A1B0() - 20;
        if ( (unsigned int)dword_9E31C > 3 )
        {
          snprintf(ptr, 0x800u, "Decrease voltage to get pm, current voltage raw = %d\n", v12);
          sub_47AB4(3, ptr, 0);
        }
        v13 = 0;
        sub_1A0F0(v12);
        sub_1A3B8();
        do
        {
          if ( *(_DWORD *)(dword_A0D68 + 4 * v13 + 4) == 1 )
          {
            memset(ptr, 0, 0x270u);
            sub_2DF9C(v13, (int)ptr);
          }
          ++v13;
        }
        while ( v13 != 16 );
        break;
      case 17:
        if ( (unsigned int)dword_9E31C > 1 )
        {
          strcpy(ptr, "try to set log level...\n");
          sub_47AB4(1, ptr, 0);
        }
        v9 = (FILE *)fopen64("/etc/config/log_level", "rb");
        if ( v9 )
        {
          memset(s, 0, sizeof(s));
          fread(s, 1u, 0x20u, v9);
          fclose(v9);
          strtol(s, 0, 10);
          if ( (unsigned int)dword_9E31C > 1 )
          {
            snprintf(ptr, 0x800u, "log level set to %d\n", dword_9E31C);
            sub_47AB4(1, ptr, 0);
          }
        }
        break;
      case 18:
        byte_A06B8 = 0;
        if ( sub_257E4() )
          sub_226C0(4u, "reopen core failed!");
        sub_20B28();
        break;
      case 19:
        for ( i = 0; i != 16; ++i )
        {
          if ( *(_DWORD *)(dword_A0D68 + 4 * i + 4) == 1 )
          {
            sub_1AA2C((unsigned __int8)i);
            sub_1AA30((unsigned __int8)i, 0, 0);
            sub_1A9D4((unsigned __int8)i);
          }
        }
        break;
      default:
        v4 = v15 & 0xFF000000;
        if ( (v15 & 0xFF000000) == 0xA0000000 )
        {
          if ( (unsigned int)dword_9E31C > 3 )
          {
            strcpy(ptr, "dump asic reg!\n");
            sub_47AB4(3, ptr, 0);
          }
          sub_2E6D4((v3 >> 20) & 0xF, (unsigned __int8)(v3 >> 12));
        }
        else
        {
          switch ( v4 )
          {
            case 0xB0000000:
              if ( (unsigned int)dword_9E31C > 3 )
              {
                strcpy(ptr, "dump core reg!\n");
                sub_47AB4(3, ptr, 0);
              }
              sub_2DB40((v3 >> 20) & 0xF, (unsigned __int8)(v3 >> 12), (unsigned __int8)v3);
              break;
            case 0xB1000000:
              if ( (unsigned int)dword_9E31C > 3 )
              {
                strcpy(ptr, "dump core process monitor reg!\n");
                sub_47AB4(3, ptr, 0);
              }
              sub_2E180((v3 >> 20) & 0xF, (unsigned __int8)(v3 >> 12), (unsigned __int8)v3);
              break;
            case 0xB2000000:
              if ( (unsigned int)dword_9E31C > 3 )
              {
                strcpy(ptr, "dump core clock counter reg!\n");
                sub_47AB4(3, ptr, 0);
              }
              sub_2E4F8((v3 >> 20) & 0xF, (unsigned __int8)(v3 >> 12), (unsigned __int8)v3);
              break;
            case 0xC0000000:
              v5 = v16;
              if ( (unsigned int)dword_9E31C > 3 )
              {
                strcpy(ptr, "write asic reg!\n");
                sub_47AB4(3, ptr, 0);
              }
              sub_2E81C((v3 >> 20) & 0xF, (unsigned __int8)(v3 >> 12), (unsigned __int8)v3, v5);
              break;
          }
        }
        break;
    }
  }
}
