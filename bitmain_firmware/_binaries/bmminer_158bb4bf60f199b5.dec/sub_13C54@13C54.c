int __fastcall sub_13C54(unsigned int a1)
{
  int v2; // r10
  int v3; // r4
  int v4; // r0
  int v5; // r3
  int v6; // r5
  int v7; // r1
  int v8; // r2
  unsigned int v9; // r3
  unsigned int v11; // r2
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v2 = 10;
  do
  {
    v3 = 0;
    sub_70CC0();
    do
    {
      while ( 1 )
      {
        v4 = sub_66480(v3);
        if ( v4 >= 0 )
        {
          v5 = dword_A0D68;
          v6 = 4 * (v3 + 3204);
          *(_DWORD *)(dword_A0D68 + v6 + 6) = v4;
          if ( (unsigned int)dword_9E31C > 4 )
          {
            snprintf(s, 0x800u, "fan[%u] speed[%u]\n", v3, v4);
            sub_47AB4(4, s, 0);
            if ( (unsigned int)dword_9E31C > 4 )
            {
              snprintf(s, 0x800u, "fan_id = %d, fan_speed = %d\n", v3, *(_DWORD *)(dword_A0D68 + v6 + 6));
              sub_47AB4(4, s, 0);
            }
            v5 = dword_A0D68;
            v4 = *(_DWORD *)(dword_A0D68 + v6 + 6);
          }
          v7 = v5 + v3;
          if ( a1 > v4 )
          {
            if ( *(_BYTE *)(v5 + v3 + 12814) == 1 )
            {
              *(_BYTE *)(v7 + 12814) = 0;
              --*(_BYTE *)(v5 + 12936);
              *(_DWORD *)(v5 + 76) &= ~(1 << v3);
            }
            goto LABEL_5;
          }
          if ( !*(_BYTE *)(v5 + v3 + 12814) )
            break;
        }
LABEL_5:
        if ( ++v3 == 8 )
          goto LABEL_11;
      }
      *(_BYTE *)(v7 + 12814) = 1;
      ++*(_BYTE *)(v5 + 12936);
      v8 = *(_DWORD *)(v5 + 76) | (1 << v3++);
      *(_DWORD *)(v5 + 76) = v8;
    }
    while ( v3 != 8 );
LABEL_11:
    if ( *(unsigned __int8 *)(dword_A0D68 + 12936) > 3u )
      return 0;
    sub_4A804();
    --v2;
  }
  while ( v2 );
  v9 = *(unsigned __int8 *)(dword_A0D68 + 12936);
  if ( v9 > 3 )
    return 0;
  v11 = dword_9E31C;
  if ( (unsigned int)dword_9E31C > 1 )
  {
    snprintf(s, 0x800u, "Error, fan lost, only find %d (< %d)\n", v9, 4);
    sub_47AB4(1, s, 0);
    v11 = dword_9E31C;
  }
  while ( 1 )
  {
    if ( v11 > 3 )
    {
      snprintf(s, 0x800u, "fan_id = %d, fan_speed = %d\n", v2, *(_DWORD *)(dword_A0D68 + 4 * (v2 + 3204) + 6));
      sub_47AB4(3, s, 0);
    }
    if ( ++v2 == 8 )
      break;
    v11 = dword_9E31C;
  }
  sub_31794(10, 255);
  sub_226C0(6u, "fan lost");
  return -1;
}
