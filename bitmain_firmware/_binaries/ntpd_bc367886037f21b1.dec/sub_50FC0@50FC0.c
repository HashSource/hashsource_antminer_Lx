bool __fastcall sub_50FC0(int a1, int a2)
{
  int v4; // r4
  int v5; // r0
  speed_t v6; // r11
  int v7; // r0
  int v8; // r10
  const char *v10; // r0
  const char *v11; // r0
  unsigned int v12; // r0
  char *v13; // r0
  struct addrinfo *v14; // r8
  int v15; // r0
  int v16; // r9
  const char *v17; // [sp+Ch] [bp-98h]
  struct addrinfo *pai; // [sp+14h] [bp-90h] BYREF
  struct addrinfo req; // [sp+18h] [bp-8Ch] BYREF
  char v20[20]; // [sp+38h] [bp-6Ch] BYREF
  char buf[88]; // [sp+4Ch] [bp-58h] BYREF

  v4 = *(_DWORD *)(a2 + 84);
  v5 = sub_637E4(0, 48, 0, 1);
  switch ( (*(_DWORD *)(a2 + 76) >> 4) & 7 )
  {
    case 0:
      v6 = 12;
      v17 = "4800";
      break;
    case 1:
      v6 = 13;
      v17 = "9600";
      break;
    case 2:
      v6 = 14;
      v17 = "19200";
      break;
    case 3:
      v6 = 15;
      v17 = "38400";
      break;
    case 4:
      v6 = 4097;
      v17 = "57600";
      break;
    case 5:
      v6 = 4098;
      v17 = "115200";
      break;
    default:
      v6 = 12;
      v17 = "4800 (fallback)";
      break;
  }
  *(_DWORD *)v4 = v5;
  *(_DWORD *)(v4 + 20) = a2;
  *(_DWORD *)(v4 + 12) = sub_5134C;
  *(_QWORD *)(v4 + 24) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v5 + 4) = -1;
  *(_BYTE *)(v5 + 40) = 2;
  *(_QWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 24) = 0;
  *(_QWORD *)(v5 + 32) = 0;
  *(_BYTE *)(a2 + 95) = -9;
  *(_DWORD *)(v4 + 764) = 5460039;
  *(_DWORD *)(v4 + 44) = "NMEA GPS Clock";
  if ( (unsigned int)sub_6BCB0(v20, 20, "/dev/gps%d", a1) > 0x13 )
  {
    v8 = 0;
    v10 = (const char *)sub_6A02C(a2 + 16);
    sub_64A18(3, "%s clock device name too long", v10);
  }
  else
  {
    v7 = sub_39F68(v20, v6, 1);
    *(_DWORD *)(v4 + 28) = v7;
    if ( v7 <= 0 )
    {
      v12 = readlink(v20, buf, 0x50u);
      if ( v12 > 0x4F )
        goto LABEL_28;
      buf[v12] = 0;
      v13 = strchr(buf, 58);
      if ( !v13 )
      {
        *(_DWORD *)(v4 + 28) = -1;
        return 0;
      }
      *v13 = 0;
      *(_QWORD *)&req.ai_flags = 0;
      req.ai_protocol = 6;
      memset(&req.ai_addrlen, 0, 16);
      req.ai_socktype = 1;
      v8 = getaddrinfo(buf, v13 + 1, &req, &pai);
      if ( v8 )
      {
LABEL_28:
        *(_DWORD *)(v4 + 28) = -1;
        return 0;
      }
      v14 = pai;
      if ( pai )
      {
        do
        {
          v15 = socket(v14->ai_family, v14->ai_socktype, v14->ai_protocol);
          v16 = v15;
          if ( v15 != -1 )
          {
            if ( connect(v15, v14->ai_addr, v14->ai_addrlen) != -1 )
            {
              freeaddrinfo(pai);
              *(_DWORD *)(v4 + 28) = v16;
              goto LABEL_5;
            }
            close(v16);
          }
          v14 = v14->ai_next;
        }
        while ( v14 );
        freeaddrinfo(pai);
        *(_DWORD *)(v4 + 28) = -1;
      }
      else
      {
        freeaddrinfo(0);
        *(_DWORD *)(v4 + 28) = -1;
      }
    }
    else
    {
LABEL_5:
      if ( (ntp_syslogmask & 0x100) != 0 )
      {
        v11 = (const char *)sub_6A02C(a2 + 16);
        sub_64A18(5, "%s serial %s open at %s bps", v11, v20, v17);
      }
      return sub_18BA4((int *)(v4 + 8)) != 0;
    }
  }
  return v8;
}
