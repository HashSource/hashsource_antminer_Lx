void __fastcall sub_2CD1C(unsigned int *a1)
{
  unsigned int v1; // r3
  const char *v2; // r2
  int v3; // r6
  unsigned int v5; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v1 = *a1;
  if ( (unsigned int)dword_9E31C > 3 )
  {
    v2 = "NOT FOUND";
    v3 = (unsigned __int16)v1;
    if ( *((_BYTE *)a1 + 4) )
      v2 = "FOUND";
    snprintf(
      s,
      0x800u,
      ">> core_id[%d], CORE_REG[11] = 0x%02X, IR Drop Data Low, %s\n",
      HIWORD(v1),
      (unsigned __int16)v1,
      v2);
    sub_47EC8(3, s, 0);
    v5 = dword_9E31C;
    if ( *((_BYTE *)a1 + 4) )
    {
      if ( (unsigned int)dword_9E31C <= 3 )
        return;
      snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[15:0]  IR_DATA_LOW", v3);
      sub_47EC8(3, s, 0);
      v5 = dword_9E31C;
    }
    if ( v5 > 3 )
    {
      strcpy(s, "\n");
      sub_47EC8(3, s, 0);
    }
  }
}
