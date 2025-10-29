void __noreturn sub_33988()
{
  int v0; // r0
  unsigned int v1; // r0
  int v2; // r8
  int v3; // r4
  char v4[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)dword_9E31C > 4 )
  {
    strcpy(v4, "[DEBUG] Recv nonce and register.\n");
    sub_47AB4(4, v4, 0);
  }
  v0 = sub_702AC();
  sub_702CC(v0 | 0x10000);
  sub_2E9B8();
  while ( 1 )
  {
    v1 = sub_6FD6C();
    v2 = (unsigned __int8)(v1 >> 1);
    if ( (unsigned __int8)(v1 >> 1) )
      break;
LABEL_12:
    usleep(0x3E8u);
  }
  v3 = 0;
  while ( 1 )
  {
    sub_6FDC4(v4);
    if ( v4[3] < 0 )
      break;
    if ( (unsigned int)dword_241D70 <= 0x1FE && dword_241D68[0] <= 0x1FEu )
    {
      sub_376A4(v4);
LABEL_7:
      if ( v2 == ++v3 )
        goto LABEL_12;
    }
    else
    {
      ++v3;
      sub_2E9B8();
      if ( v2 == v3 )
        goto LABEL_12;
    }
  }
  sub_37594();
  goto LABEL_7;
}
