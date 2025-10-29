void __fastcall sub_1823C(int a1, unsigned __int16 *a2)
{
  char v3[2052]; // [sp+0h] [bp-804h] BYREF

  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(v3, 0x800u, "[chain %d]\n", a1);
    sub_47AB4(3, v3, 0);
  }
  sub_17AF8((int)a2);
  if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy(v3, "\n");
    sub_47EC8(3, v3, 0);
  }
  sub_17CE0(a2);
  sub_17FF8((int)a2);
}
