void __fastcall sub_13EE8(signed int a1)
{
  int v2; // r0
  char v3[2052]; // [sp+0h] [bp-804h] BYREF

  sub_1758C();
  v2 = dword_9F808;
  if ( !dword_9F808 )
  {
    v2 = sub_674E4(0);
    dword_9F808 = v2;
  }
  if ( v2 < 0 )
  {
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
    {
      strcpy(v3, "pwm for fan init error");
      sub_47AB4(3, v3, 0);
    }
  }
  else
  {
    if ( a1 >= 100 )
      a1 = 100;
    if ( a1 < 5 )
      a1 = 5;
    if ( (unsigned int)dword_9E31C > 4 )
    {
      snprintf(v3, 0x800u, "FAN PWM: %d\n", a1);
      sub_47AB4(4, v3, 0);
      v2 = dword_9F808;
    }
    *(_DWORD *)dword_A0D68 = (a1 >> 1 << 16) | ((100 - a1) >> 1);
    *(_BYTE *)(dword_A0D68 + 12978) = a1;
    sub_675D4(v2, a1);
  }
}
