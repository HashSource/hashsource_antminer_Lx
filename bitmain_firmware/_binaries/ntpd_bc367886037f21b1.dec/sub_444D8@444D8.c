int __fastcall sub_444D8(int a1)
{
  _DWORD *v2; // r5
  int v3; // r0
  int result; // r0
  int v5; // r0
  int v6; // r0
  char *v7; // r1
  int v8; // r3
  bool v9; // zf
  int v10; // r12
  int v11; // r3
  const char *v12; // r2
  int v13; // r2
  int v14; // r3
  int v15; // r3
  bool v16; // zf
  const char *v17; // r2
  int optval; // [sp+8h] [bp-10h] BYREF
  struct pollfd optlen; // [sp+Ch] [bp-Ch] BYREF

  v2 = *(_DWORD **)a1;
  v3 = *(_DWORD *)(*(_DWORD *)a1 + 136);
  optlen.events = 4;
  optlen.fd = v3;
  result = poll(&optlen, 1u, 0);
  if ( result != 1 || (optlen.revents & 4) == 0 )
    return result;
  v2[36] = 10;
  optlen.fd = 4;
  v5 = v2[34];
  optval = 0;
  v9 = getsockopt(v5, 1, 4, &optval, (socklen_t *)&optlen) == -1;
  v6 = optval;
  if ( v9 )
  {
    if ( !optval )
    {
      v6 = *_errno_location();
      optval = v6;
    }
  }
  else if ( !optval )
  {
    *(_DWORD *)(a1 + 28) = v2[34];
    v2[34] = -1;
    result = sub_18BA4((int *)(a1 + 8));
    if ( result )
      return result;
    if ( (*(_BYTE *)(a1 + 768) & 4) != 0 )
      goto LABEL_23;
    v15 = v2[45];
    v16 = v15 == 3600;
    if ( v15 != 3600 )
      v16 = v15 == 0;
    if ( v16 )
    {
LABEL_23:
      v17 = (const char *)v2[5];
      v2[45] = 3600;
      sub_64A18(3, "%s: failed to register with I/O engine", v17);
    }
    goto LABEL_12;
  }
  v7 = strerror(v6);
  if ( (*(_BYTE *)(a1 + 768) & 4) != 0 )
    goto LABEL_11;
  v8 = v2[45];
  v9 = v8 == 3600;
  if ( v8 != 3600 )
    v9 = v8 == 0;
  if ( v9 )
  {
LABEL_11:
    v10 = optval;
    v11 = v2[34];
    v12 = (const char *)v2[5];
    v2[45] = 3600;
    sub_64A18(3, "%s: async connect to GPSD failed, fd=%d, ec=%d(%s)", v12, v11, v10, v7);
  }
LABEL_12:
  result = v2[34];
  if ( result != -1 )
    result = close(result);
  v13 = v2[37];
  v2[34] = -1;
  v14 = v13 + 5;
  v2[36] = v13;
  if ( (unsigned int)(v13 + 5) >= 0x78 )
    v14 = 120;
  v2[37] = v14;
  return result;
}
