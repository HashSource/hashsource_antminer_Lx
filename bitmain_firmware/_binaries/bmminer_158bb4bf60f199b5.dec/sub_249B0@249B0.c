int sub_249B0()
{
  int v0; // r3
  int v1; // r12
  int v3; // r4
  unsigned int v4; // r0
  int v5; // r3
  char v6[2052]; // [sp+0h] [bp-804h] BYREF

  sub_24418();
  sub_13EE8(100);
  sub_6FBE0(0x40000000);
  sub_23BF0();
  sub_70B9C();
  sub_23150();
  v0 = dword_A0D68;
  v1 = *(unsigned __int8 *)(dword_A0D68 + 12935);
  if ( !*(_BYTE *)(dword_A0D68 + 12935) )
  {
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy(v6, "No chain exist, exit.\n");
      sub_47AB4(3, v6, v1);
    }
    return -1;
  }
  if ( byte_244080 || byte_1AECC4 || dword_9E320 > 4 )
  {
    snprintf(v6, 0x800u, "chain num = %d", *(unsigned __int8 *)(dword_A0D68 + 12935));
    sub_47AB4(5, v6, 0);
    v0 = dword_A0D68;
  }
  v3 = 0;
  while ( 1 )
  {
    v4 = (unsigned __int8)v3;
    v5 = *(_DWORD *)(v0 + 4 * v3++ + 4);
    if ( v5 == 1 )
      break;
    if ( v3 == 16 )
      goto LABEL_13;
LABEL_10:
    v0 = dword_A0D68;
  }
  sub_748C0(v4);
  if ( v3 != 16 )
    goto LABEL_10;
LABEL_13:
  sub_185FC(1);
  if ( sub_188CC() )
    return 0;
  if ( dword_9C294 != 1 )
    sub_31794(3, 255);
  if ( (unsigned int)dword_9E31C <= 3 )
    return -1;
  strcpy(v6, "Fixture data load failed, exit.\n");
  sub_47AB4(3, v6, 0);
  return -1;
}
