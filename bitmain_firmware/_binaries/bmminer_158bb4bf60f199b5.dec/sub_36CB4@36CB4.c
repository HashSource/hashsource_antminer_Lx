void __fastcall sub_36CB4(int a1, int a2)
{
  int i; // r6
  bool v3; // zf
  int v4; // r4
  unsigned int v5; // r3
  unsigned int v6; // r4
  int v7; // r12
  int v8; // r3
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  for ( i = 0; i != 16; ++i )
  {
    while ( 2 )
    {
      v3 = a1 == i;
      if ( a1 == i )
        v3 = *(_DWORD *)(dword_A0D68 + 4 * i + 4) == 1;
      v4 = !v3;
      if ( !v3 )
        goto LABEL_2;
      v5 = dword_9E31C;
      if ( (unsigned int)dword_9E31C > 3 )
      {
        snprintf(s, 0x800u, "Dump asic grade table, chain = %d\n", i);
        sub_47EC8(3, s, v4);
        v5 = dword_9E31C;
      }
      v6 = 0;
      do
      {
        while ( v5 <= 3 )
        {
          ++v6;
LABEL_13:
          if ( v6 == 78 )
            goto LABEL_19;
        }
        v7 = *(unsigned __int8 *)(a2 + 78 * i + v6);
        v8 = v6++;
        snprintf(s, 0x800u, "[%3d]:%-3d ", v8, v7);
        sub_47EC8(3, s, 0);
        v5 = dword_9E31C;
        if ( v6 != 6 * (v6 / 6) || (unsigned int)dword_9E31C <= 3 )
          goto LABEL_13;
        strcpy(s, "\n");
        sub_47EC8(3, s, v6 % 6);
        v5 = dword_9E31C;
      }
      while ( v6 != 78 );
LABEL_19:
      if ( v5 <= 3 )
      {
LABEL_2:
        if ( ++i == 16 )
          return;
        continue;
      }
      break;
    }
    strcpy(s, "\n");
    sub_47EC8(3, s, 0);
  }
}
