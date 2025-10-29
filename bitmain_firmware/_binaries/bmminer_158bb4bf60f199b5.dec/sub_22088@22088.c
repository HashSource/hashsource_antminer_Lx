void __fastcall sub_22088(unsigned int *a1)
{
  int v2; // r3
  unsigned int *v3; // r5
  unsigned int v4; // r8
  unsigned int v5; // r2
  unsigned int v6; // r4
  unsigned int v7; // r3
  char dest[2052]; // [sp+8h] [bp-804h] BYREF

  if ( byte_244080 || byte_1AECC4 || dword_9E320 > 4 )
  {
    strcpy(dest, "==========================capability start==========================\n");
    sub_47AB4(5, dest, 0);
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 4 )
    {
      snprintf(dest, 0x800u, "board num = %d\n", *a1);
      sub_47AB4(5, dest, 0);
    }
  }
  v2 = (unsigned __int8)byte_244080;
  if ( *a1 )
  {
    v3 = a1;
    v4 = 0;
    do
    {
      if ( v2 || (v2 = (unsigned __int8)byte_1AECC4, byte_1AECC4) || dword_9E320 > 4 )
      {
        snprintf(dest, 0x800u, "board id = %d, chain num = %d\n", v3[1], v3[2]);
        sub_47AB4(5, dest, 0);
        v2 = (unsigned __int8)byte_244080;
      }
      v5 = v3[2];
      if ( v5 )
      {
        v6 = 0;
        do
        {
          if ( !v2 )
          {
            while ( 1 )
            {
              v2 = (unsigned __int8)byte_1AECC4;
              if ( byte_1AECC4 || dword_9E320 > 4 )
                break;
              if ( v5 <= ++v6 )
                goto LABEL_17;
            }
          }
          v7 = v3[v6++ + 3];
          snprintf(dest, 0x800u, "\tchain id = %d\n", v7);
          sub_47AB4(5, dest, 0);
          v5 = v3[2];
          v2 = (unsigned __int8)byte_244080;
        }
        while ( v5 > v6 );
      }
LABEL_17:
      ++v4;
      v3 += 18;
    }
    while ( *a1 > v4 );
  }
  if ( v2 || byte_1AECC4 || dword_9E320 > 4 )
  {
    strcpy(dest, "==========================capability end============================\n");
    sub_47AB4(5, dest, 0);
  }
}
