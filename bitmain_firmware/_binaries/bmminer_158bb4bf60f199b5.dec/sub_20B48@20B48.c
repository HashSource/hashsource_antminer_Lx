int sub_20B48()
{
  unsigned int v1; // r5
  int v2; // r9
  unsigned int v3; // r0
  int v4; // r8
  int v5; // r7
  int v6; // r6
  int v7; // r4
  int v8; // r3
  int v9; // r6
  int v10; // r0
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( sub_16940() <= 7 || (double)sub_3047C() * 0.98 <= dbl_241D48 )
    return 0;
  v1 = sub_16940();
  v2 = sub_30524(v1, 1);
  v3 = sub_312D8();
  v4 = sub_3050C(v3, 0);
  v5 = sub_1A1B0();
  v6 = sub_1A1C0();
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "latest avg rate < %.2f......\n", 0.98);
    sub_47AB4(3, s, 0);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, "current PCB min temperature %d\n", v1);
      sub_47AB4(3, s, 0);
      if ( (unsigned int)dword_9E31C > 3 )
      {
        snprintf(s, 0x800u, "current voltage raw is %d, working voltage raw is %d\n", v6, v5);
        sub_47AB4(3, s, 0);
      }
    }
  }
  if ( v1 > 0x16 )
  {
    v7 = (unsigned __int8)byte_A06CC;
    if ( byte_A06CC )
    {
      if ( (unsigned int)dword_9E31C > 3 )
      {
        strcpy(s, "high temp, voltage has already increased 0.1V/0.2V\n");
        sub_47AB4(3, s, 0);
      }
      return 0;
    }
    if ( v4 >= 2 )
      v8 = 10;
    else
      v8 = 20;
    v9 = v8 + v6;
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, "high temp, increase voltage 0.1V/0.2V to %d\n", v9);
      sub_47AB4(3, s, v7);
    }
    byte_A06CC = 1;
    byte_A06B8 = 0;
    sub_1A0F0(v9);
  }
  else
  {
    if ( v5 != v6 )
    {
      if ( (unsigned int)dword_9E31C > 3 )
      {
        strcpy(s, "low temp, voltage has already increased to higher voltage\n");
        sub_47AB4(3, s, 0);
        return 0;
      }
      return 0;
    }
    if ( byte_A06CC )
      v10 = sub_3055C(v4, v2);
    else
      v10 = sub_30540(v4, v2);
    if ( v5 + 99 < v10 )
      v10 = v5 + 100;
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, "low temp, increase voltage to higher voltage %d\n", v10);
      sub_47AB4(3, s, 0);
    }
    byte_A06B8 = 0;
  }
  if ( sub_257E4() )
    sub_226C0(4u, "reopen core failed!");
  sub_20B28();
  return -1;
}
