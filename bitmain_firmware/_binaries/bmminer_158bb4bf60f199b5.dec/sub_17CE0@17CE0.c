void __fastcall sub_17CE0(unsigned __int16 *a1)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  _DWORD s[8]; // [sp+8h] [bp-824h] BYREF
  char v6[2052]; // [sp+28h] [bp-804h] BYREF

  memset(s, 0, sizeof(s));
  if ( (unsigned int)dword_9E31C <= 3 )
    return;
  snprintf(v6, 0x800u, "%-30s : 0x%04x\n", "fixture_header", *a1);
  sub_47AB4(3, v6, 0);
  if ( (unsigned int)dword_9E31C <= 3 )
    return;
  snprintf(v6, 0x800u, "%-30s : 0x%04x\n", "fixture_version", a1[1]);
  sub_47AB4(3, v6, 0);
  v2 = *((_DWORD *)a1 + 2);
  v3 = *((_DWORD *)a1 + 3);
  v4 = *((_DWORD *)a1 + 4);
  s[0] = *((_DWORD *)a1 + 1);
  s[1] = v2;
  s[2] = v3;
  s[3] = v4;
  s[4] = *((_DWORD *)a1 + 5);
  if ( (unsigned int)dword_9E31C <= 3 )
    return;
  snprintf(v6, 0x800u, "%-30s : %s\n", "hash_board_sn", (const char *)s);
  sub_47AB4(3, v6, 0);
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_10;
  snprintf(v6, 0x800u, "%-30s : 0x%04x\n", "pcb_version", a1[12]);
  sub_47AB4(3, v6, 0);
  if ( (unsigned int)dword_9E31C <= 3 )
    return;
  snprintf(v6, 0x800u, "%-30s : 0x%04x\n", "bom_version", a1[13]);
  sub_47AB4(3, v6, 0);
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(v6, 0x800u, "%-30s : 0x%02x\n", "product_id", *((unsigned __int8 *)a1 + 28));
    sub_47AB4(3, v6, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      return;
    snprintf(v6, 0x800u, "%-30s : 0x%02x\n", "board_bin", *((unsigned __int8 *)a1 + 29));
    sub_47AB4(3, v6, 0);
LABEL_10:
    if ( (unsigned int)dword_9E31C <= 3 )
      return;
    snprintf(v6, 0x800u, "%-30s : A%dV%d\n", "chip_ft", *((unsigned __int8 *)a1 + 31), *((unsigned __int8 *)a1 + 32));
    sub_47AB4(3, v6, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      return;
    snprintf(v6, 0x800u, "%-30s : BIN%d\n", "chip_bin", *((unsigned __int8 *)a1 + 30));
    sub_47AB4(3, v6, 0);
  }
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(v6, 0x800u, "%-30s : %c%c\n", "chip_version", *((unsigned __int8 *)a1 + 33), *((unsigned __int8 *)a1 + 34));
    sub_47AB4(3, v6, 0);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy(v6, "\n");
      sub_47AB4(3, v6, 0);
    }
  }
}
