void __fastcall sub_28BE4(unsigned int *a1)
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
  snprintf(s, 0x800u, ">> ASIC_REG[0x64] = 0x%08X, PLL2 Parameter, %s\n", v2, v3);
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
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[31]     LOCKED", v2 >> 31);
  sub_47EC8(3, s, 0);
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[30]     PLLEN", (v2 >> 30) & 1);
    sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      return;
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[29:28]  Reserved", (v2 >> 28) & 1);
    sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_14;
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[27:16]  FBDIV", HIWORD(v2) & 0xFFF);
    sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      return;
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[15:14]  Reserved", (unsigned __int16)v2 >> 14);
    sub_47EC8(3, s, 0);
  }
  if ( (unsigned int)dword_9E31C <= 3 )
  {
LABEL_17:
    if ( (unsigned int)dword_9E31C <= 3 )
      return;
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[2:0]    POSTDIV2", v2 & 7);
    sub_47EC8(3, s, 0);
    v1 = dword_9E31C;
    goto LABEL_19;
  }
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[13:8]   REFDIV", (v2 >> 8) & 0x3F);
  sub_47EC8(3, s, 0);
  if ( (unsigned int)dword_9E31C <= 3 )
    return;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[7]      Reserved", (v2 >> 7) & 1);
  sub_47EC8(3, s, 0);
LABEL_14:
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[6:4]    POSTDIV1", (v2 >> 4) & 7);
    sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[3]      Reserved", (v2 >> 3) & 1);
      sub_47EC8(3, s, 0);
      goto LABEL_17;
    }
  }
}
