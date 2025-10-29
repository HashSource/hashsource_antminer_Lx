void __fastcall sub_17FF8(int a1)
{
  unsigned int v2; // r2
  int v3; // r3
  unsigned int v4; // r4
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v2 = dword_9E31C;
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_2;
  snprintf(s, 0x800u, "%-30s : 0x%04x\n", "miner_header", *(unsigned __int16 *)(a1 + 40));
  sub_47AB4(3, s, 0);
  v2 = dword_9E31C;
  if ( (unsigned int)dword_9E31C <= 3 )
  {
LABEL_15:
    if ( v2 > 3 )
    {
      snprintf(s, 0x800u, "%-30s : %d\n", "ideal_hash_rate", *(_DWORD *)(a1 + 122));
      sub_47AB4(3, s, 0);
      v2 = dword_9E31C;
    }
    goto LABEL_2;
  }
  snprintf(s, 0x800u, "%-30s : 0x%02x\n", "work_mode_count", *(unsigned __int8 *)(a1 + 128));
  sub_47AB4(3, s, 0);
  v2 = dword_9E31C;
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "%-30s : 0x%02x\n", "miner_bin", *(unsigned __int8 *)(a1 + 129));
    sub_47AB4(3, s, 0);
    v2 = dword_9E31C;
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, "[mode %d]\n", 0);
      sub_47AB4(3, s, 0);
      v2 = dword_9E31C;
      if ( (unsigned int)dword_9E31C > 3 )
      {
        snprintf(s, 0x800u, "%-30s : %d\n", "voltage", *(unsigned __int16 *)(a1 + 120));
        sub_47AB4(3, s, 0);
        v2 = dword_9E31C;
        goto LABEL_15;
      }
    }
  }
LABEL_2:
  v3 = 0;
  while ( 1 )
  {
    v4 = v3 + 1;
    if ( v2 > 3 )
    {
      snprintf(s, 0x800u, "IC[%03d]:%3d ", v3, 5 * *(unsigned __int8 *)(a1 + v4 + 41));
      sub_47EC8(3, s, 0);
      if ( v4 == 6 * (v4 / 6) && (unsigned int)dword_9E31C > 3 )
        break;
    }
    v3 = v4;
    if ( v4 == 78 )
      return;
LABEL_4:
    v2 = dword_9E31C;
  }
  strcpy(s, "\n");
  sub_47EC8(3, s, v4 % 6);
  v3 = v4;
  if ( v4 != 78 )
    goto LABEL_4;
}
