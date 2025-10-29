void __fastcall sub_2D0E0(unsigned int *a1)
{
  unsigned int v1; // r2
  unsigned int v2; // r3
  const char *v4; // r2
  unsigned int v5; // r6
  unsigned int v6; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v1 = dword_9E31C;
  v2 = *a1;
  if ( (unsigned int)dword_9E31C <= 3 )
  {
    if ( *((_BYTE *)a1 + 4) )
      return;
    goto LABEL_11;
  }
  v4 = "FOUND";
  v5 = (unsigned __int16)v2;
  v6 = HIWORD(v2);
  if ( !*((_BYTE *)a1 + 4) )
    v4 = "NOT FOUND";
  snprintf(s, 0x800u, ">> core_id[%d], CORE_REG[14] = 0x%02X, OCV Sel, %s\n", v6, v5, v4);
  sub_47EC8(3, s, 0);
  v1 = dword_9E31C;
  if ( !*((_BYTE *)a1 + 4) )
    goto LABEL_11;
  if ( (unsigned int)dword_9E31C <= 3 )
    return;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[15:8]  Reserved", v5 >> 8);
  sub_47EC8(3, s, 0);
  v1 = dword_9E31C;
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_11;
  snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[7]     OCV_CLEAR", (v5 >> 7) & 1);
  sub_47EC8(3, s, 0);
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[6]     OCV_EN", (v5 >> 6) & 1);
    sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[5]     Reserved", (v5 >> 5) & 1);
      sub_47EC8(3, s, 0);
      if ( (unsigned int)dword_9E31C > 3 )
      {
        snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[4:0]   OCV_SEL", v5 & 0x1F);
        sub_47EC8(3, s, 0);
        v1 = dword_9E31C;
LABEL_11:
        if ( v1 > 3 )
        {
          strcpy(s, "\n");
          sub_47EC8(3, s, 0);
        }
      }
    }
  }
}
