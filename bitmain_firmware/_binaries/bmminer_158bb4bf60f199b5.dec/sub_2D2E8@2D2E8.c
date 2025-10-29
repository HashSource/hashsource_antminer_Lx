void __fastcall sub_2D2E8(unsigned int *a1)
{
  unsigned int v1; // r3
  unsigned int v2; // r5
  char *v4; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v1 = dword_9E31C;
  v2 = *a1;
  if ( (unsigned int)dword_9E31C <= 3 )
  {
    if ( *((_BYTE *)a1 + 4) )
      return;
    goto LABEL_17;
  }
  v4 = "FOUND";
  if ( !*((_BYTE *)a1 + 4) )
    v4 = "NOT FOUND";
  snprintf(s, 0x800u, ">> core_id[%d], CORE_REG[14] = 0x%02X, PG Mont, %s\n", HIWORD(v2), (unsigned __int16)v2, v4);
  sub_47EC8(3, s, 0);
  v1 = dword_9E31C;
  if ( !*((_BYTE *)a1 + 4) )
  {
LABEL_17:
    if ( v1 > 3 )
    {
      strcpy(s, "\n");
      sub_47EC8(3, s, 0);
    }
    return;
  }
  if ( (unsigned int)dword_9E31C <= 3 )
    return;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[15]     PGM_OVERLAP", (v2 >> 14) & 1);
  sub_47EC8(3, s, 0);
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[14:10]  Reserved", (v2 >> 9) & 0x1F);
    sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      return;
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[9:8]    CLK_SEL", (v2 >> 7) & 3);
    sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_14;
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[7]      PGM_AUTO", (v2 >> 6) & 1);
    sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      return;
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[6]      PGM_ADD", (v2 >> 5) & 1);
    sub_47EC8(3, s, 0);
  }
  v1 = dword_9E31C;
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_17;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[5:4]    PGM_CTRL", (v2 >> 4) & 1);
  sub_47EC8(3, s, 0);
  if ( (unsigned int)dword_9E31C <= 3 )
    return;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[3:2]    Reserved ", (v2 >> 2) & 3);
  sub_47EC8(3, s, 0);
LABEL_14:
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[1]      PGM_UPLOAD", (v2 >> 1) & 1);
    sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[0]      PGM_ENABLE", v2 & 1);
      sub_47EC8(3, s, 0);
      v1 = dword_9E31C;
      goto LABEL_17;
    }
  }
}
