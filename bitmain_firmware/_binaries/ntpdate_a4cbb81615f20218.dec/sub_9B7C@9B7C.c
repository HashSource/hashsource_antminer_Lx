int __fastcall sub_9B7C(const char *a1, int a2, int a3)
{
  int v6; // r4
  struct addrinfo *v7; // lr
  struct sockaddr *ai_addr; // r2
  char *v9; // r3
  int v10; // r4
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int result; // r0
  int v16; // r3
  char *v17; // r0
  int buf; // [sp+4h] [bp-ACh] BYREF
  struct addrinfo *pai; // [sp+8h] [bp-A8h] BYREF
  struct addrinfo req; // [sp+Ch] [bp-A4h] BYREF
  char v21[128]; // [sp+2Ch] [bp-84h] BYREF

  if ( !a1 )
    sub_10788("is_ip_address.c", 40, 0, "host != ((void *)0)");
  if ( !a3 )
    sub_10788("is_ip_address.c", 41, 0, "addr != ((void *)0)");
  *(_QWORD *)a3 = 0;
  *(_QWORD *)(a3 + 8) = 0;
  v6 = a2 == 0;
  *(_QWORD *)(a3 + 12) = 0;
  *(_QWORD *)(a3 + 20) = 0;
  if ( (a2 & 0xFFFFFFFD) != 0 || (result = inet_pton(2, a1, &buf), result != 1) )
  {
    if ( a2 == 10 )
      v6 |= 1u;
    if ( !v6 || strlen(a1) > 0x7F )
      return 0;
    if ( *a1 == 91 )
    {
      sub_10410(v21, a1 + 1, 128);
      v17 = strchr(v21, 93);
      if ( v17 )
        *v17 = 0;
    }
    else
    {
      sub_10410(v21, a1, 128);
    }
    memset(&req.ai_socktype, 0, 24);
    req.ai_family = 10;
    req.ai_flags = 4;
    if ( getaddrinfo(v21, 0, &req, &pai) )
    {
      return 0;
    }
    else
    {
      v7 = pai;
      *(_WORD *)a3 = 10;
      ai_addr = v7->ai_addr;
      v9 = &ai_addr->sa_data[6];
      v10 = *(_DWORD *)&ai_addr[1].sa_data[6];
      v11 = *(_DWORD *)&ai_addr->sa_data[6];
      v12 = *(_DWORD *)&ai_addr->sa_data[10];
      v13 = *(_DWORD *)&ai_addr[1].sa_family;
      v14 = *((_DWORD *)v9 + 3);
      *(_DWORD *)(a3 + 8) = v11;
      *(_DWORD *)(a3 + 12) = v12;
      *(_DWORD *)(a3 + 16) = v13;
      *(_DWORD *)(a3 + 20) = v14;
      *(_DWORD *)(a3 + 24) = v10;
      freeaddrinfo(v7);
      return 1;
    }
  }
  else
  {
    v16 = buf;
    *(_WORD *)a3 = 2;
    *(_DWORD *)(a3 + 4) = v16;
  }
  return result;
}
