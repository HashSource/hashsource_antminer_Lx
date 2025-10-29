int pcba_calc_eth_jig_level()
{
  float v0; // s0
  int v1; // r3
  int v3; // [sp+Ch] [bp+Ch]

  v3 = (int)(float)(v0 * 100.0);
  if ( v3 > 9499 )
    return 0;
  if ( v3 <= 9498 && v3 > 8999 )
    return 1;
  if ( v3 <= 8998 && v3 > 8499 )
    return 2;
  if ( v3 <= 8498 && v3 >= 8000 )
    return 3;
  if ( v3 <= 7998 && v3 > 6999 )
    return 4;
  if ( v3 <= 6998 && v3 > 5999 )
    return 5;
  if ( v3 <= 5998 && v3 > 4999 )
    return 6;
  if ( v3 <= 4998 && v3 > 2999 )
    return 7;
  v1 = (int)(float)(v0 * 100.0);
  if ( v3 <= 2998 )
    return 8;
  return v1;
}
