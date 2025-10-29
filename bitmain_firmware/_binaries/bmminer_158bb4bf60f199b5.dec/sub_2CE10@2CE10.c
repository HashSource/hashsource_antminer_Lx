void __fastcall sub_2CE10(unsigned int *a1)
{
  unsigned int v1; // r3
  unsigned int v2; // r6
  char *v4; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v1 = dword_9E31C;
  v2 = *a1;
  if ( (unsigned int)dword_9E31C <= 3 )
  {
    if ( *((_BYTE *)a1 + 4) )
      return;
    goto LABEL_8;
  }
  v4 = "FOUND";
  if ( !*((_BYTE *)a1 + 4) )
    v4 = "NOT FOUND";
  snprintf(
    s,
    0x800u,
    ">> core_id[%d], CORE_REG[12] = 0x%02X, IR Drop Data High, %s\n",
    HIWORD(v2),
    (unsigned __int16)v2,
    v4);
  sub_47EC8(3, s, 0);
  v1 = dword_9E31C;
  if ( !*((_BYTE *)a1 + 4) )
  {
LABEL_8:
    if ( v1 > 3 )
    {
      strcpy(s, "\n");
      sub_47EC8(3, s, 0);
    }
    return;
  }
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[15:8]  Reserved", BYTE1(v2));
    sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[7:0]   IR_DATA_HIGH", (unsigned __int8)v2);
      sub_47EC8(3, s, 0);
      v1 = dword_9E31C;
      goto LABEL_8;
    }
  }
}
