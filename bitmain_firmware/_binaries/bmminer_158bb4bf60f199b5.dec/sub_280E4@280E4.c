void __fastcall sub_280E4(unsigned int *a1)
{
  unsigned int v1; // r3
  unsigned int v2; // r6
  char *v3; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v1 = dword_9E31C;
  v2 = *a1;
  if ( (unsigned int)dword_9E31C <= 3 )
  {
    if ( *((_BYTE *)a1 + 4) )
      return;
    goto LABEL_19;
  }
  v3 = "FOUND";
  if ( !*((_BYTE *)a1 + 4) )
    v3 = "NOT FOUND";
  snprintf(s, 0x800u, ">> ASIC_REG[0x28] = 0x%08X, fast UART configuration, %s\n", v2, v3);
  sub_47EC8(3, s, 0);
  v1 = dword_9E31C;
  if ( !*((_BYTE *)a1 + 4) )
  {
LABEL_19:
    if ( v1 > 3 )
    {
      strcpy(s, "\n");
      sub_47EC8(3, s, 0);
    }
    return;
  }
  if ( (unsigned int)dword_9E31C <= 3 )
    return;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[31:30] DIV4_ODDSET", v2 >> 30);
  sub_47EC8(3, s, 0);
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[29,28] Reserved", (v2 >> 28) & 3);
    sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      return;
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[27:24] PLL3_DIV4", HIBYTE(v2) & 0xF);
    sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_14;
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[23:22] USRC_ODDSET", (v2 >> 22) & 3);
    sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      return;
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[21:16] USRC_DIV", HIWORD(v2) & 0x3F);
    sub_47EC8(3, s, 0);
  }
  if ( (unsigned int)dword_9E31C <= 3 )
  {
LABEL_17:
    if ( (unsigned int)dword_9E31C <= 3 )
      return;
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[7:0]   CLKO_DIV", (unsigned __int8)v2);
    sub_47EC8(3, s, 0);
    v1 = dword_9E31C;
    goto LABEL_19;
  }
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[15]    SYNC_CLKO", (v2 >> 15) & 1);
  sub_47EC8(3, s, 0);
  if ( (unsigned int)dword_9E31C <= 3 )
    return;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[14]    CLKO_SEL", (v2 >> 14) & 1);
  sub_47EC8(3, s, 0);
LABEL_14:
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[13:12] CLKO_ODDSET", (v2 >> 12) & 3);
    sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[11,8]  Reserved", (v2 >> 8) & 0xF);
      sub_47EC8(3, s, 0);
      goto LABEL_17;
    }
  }
}
