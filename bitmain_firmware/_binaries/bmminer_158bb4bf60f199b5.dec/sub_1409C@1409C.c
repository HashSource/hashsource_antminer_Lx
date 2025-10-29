void sub_1409C()
{
  float v0; // s0
  int v1; // r6
  int v2; // r5
  int v3; // r4
  int v4; // r0
  bool v5; // cc
  bool v6; // cc
  _BOOL4 v7; // r5
  int v8; // r8
  int v9; // r7
  int v10; // r6
  float v11; // s14
  signed int v12; // r0
  int v13; // r6
  char s[2048]; // [sp+18h] [bp-800h] BYREF

  sub_1758C();
  v1 = sub_171C0();
  v2 = sub_17264();
  v3 = sub_169E4();
  v4 = sub_16B30();
  v5 = v2 <= 2;
  if ( v2 <= 2 )
    v5 = v1 <= 2;
  if ( !v5 )
    goto LABEL_21;
  v6 = v4 <= 85;
  if ( v4 <= 85 )
    v6 = v3 <= 70;
  v7 = !v6;
  if ( !v6 )
  {
LABEL_21:
    v13 = sub_16940();
    flt_9F7E8 = (float)sub_16B30();
    sub_13BE8();
    sub_13EE8(100);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy(s, " Air out temprature is too high, set fixed full fan speed\n");
      sub_47AB4(3, s, 0);
      if ( (unsigned int)dword_9E31C > 3 )
      {
        snprintf(s, 0x800u, "PWM keep 100:  airin_temp=%d, airout_temp=%f\n", v13, flt_9F7E8);
        sub_47AB4(3, s, 0);
      }
    }
    return;
  }
  if ( (byte_241D04 & 2) == 0 || (unsigned __int8)byte_241D0A > 0x64u )
  {
    sub_1758C();
    v8 = *(unsigned __int8 *)(dword_A0D68 + 12978);
    v9 = sub_16940();
    flt_9F7E8 = (float)sub_16B30();
    sub_13BE8();
    v10 = (int)v0 + v8;
    if ( v10 == *(unsigned __int8 *)(dword_A0D68 + 12978) )
      goto LABEL_19;
    v11 = (float)v10;
    if ( (float)v10 > *(float *)&dword_9F7E0 )
    {
      if ( v11 <= *(float *)&dword_9F7DC )
      {
        v12 = (unsigned __int8)(unsigned int)v11;
        goto LABEL_18;
      }
    }
    else if ( *(float *)&dword_9F7E0 <= *(float *)&dword_9F7DC )
    {
      v12 = (unsigned __int8)(unsigned int)*(float *)&dword_9F7E0;
LABEL_18:
      sub_13EE8(v12);
LABEL_19:
      if ( (unsigned int)dword_9E31C > 4 )
      {
        snprintf(
          s,
          0x800u,
          "PWM change from %d to %d:  airin_temp=%d, airout_temp=%f\n",
          *(unsigned __int8 *)(dword_A0D68 + 12978),
          v10,
          v9,
          flt_9F7E8);
        sub_47AB4(4, s, 0);
      }
      return;
    }
    v12 = (unsigned __int8)(unsigned int)*(float *)&dword_9F7DC;
    goto LABEL_18;
  }
  sub_13EE8((unsigned __int8)byte_241D0A);
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "fan_etf: Set fixed fan speed=%d\n", (unsigned __int8)byte_241D0A);
    sub_47AB4(3, s, v7);
  }
}
