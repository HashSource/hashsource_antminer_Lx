int __fastcall sub_62EC8(char a1)
{
  float v1; // s0
  float v2; // s15
  int v6; // [sp+10h] [bp-Ch]
  int v7; // [sp+14h] [bp-8h]
  int v8; // [sp+14h] [bp-8h]

  flt_15245C = (float)get_temp(dword_14F3E4);
  v7 = fan_pwm_get();
  sub_62D88((int)&flt_152450);
  v6 = (int)v1;
  if ( a1 && v6 < -20 )
    v6 = -20;
  v8 = v7 + v6;
  if ( get_temp(dword_14F3DC) >= dword_14F3E0 )
    v8 = 100;
  if ( (float)v8 >= flt_152454 )
    v2 = (float)v8;
  else
    v2 = flt_152454;
  if ( v2 > flt_152450 )
    return (int)flt_152450;
  if ( (float)v8 >= flt_152454 )
    return (int)(float)v8;
  return (int)flt_152454;
}
