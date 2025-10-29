const char *sub_44ADC()
{
  const char *result; // r0
  int v1; // r4
  char **v2; // r5
  const char *v3; // r1
  const char *v4; // t1
  struct addrinfo req; // [sp+4h] [bp-24h] BYREF

  result = &byte_6;
  *(_QWORD *)&req.ai_flags = 0;
  v1 = dword_BC560;
  *(_QWORD *)byte_BC564 = 0;
  unk_BC56C = 0;
  req.ai_protocol = 6;
  memset(&req.ai_addrlen, 0, 16);
  req.ai_socktype = 1;
  if ( dword_BC560 )
  {
    v1 = 0;
  }
  else
  {
    v2 = off_B36C4;
    v3 = "gpsd";
    result = "localhost";
    while ( 1 )
    {
      result = (const char *)getaddrinfo(result, v3, &req, (struct addrinfo **)&dword_BC560);
      *(_DWORD *)&byte_BC564[4 * v1] = result;
      if ( !result )
        break;
      v4 = v2[2];
      v2 += 2;
      result = v4;
      ++v1;
      dword_BC560 = 0;
      if ( !v4 )
        break;
      v3 = v2[1];
    }
  }
  dword_BC574 = v1;
  return result;
}
