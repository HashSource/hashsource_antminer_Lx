int __fastcall get_qualify_hashrate_ltc(int a1, double *a2)
{
  float v2; // s0
  double v6; // [sp+8h] [bp-14h] BYREF
  float v7; // [sp+10h] [bp-Ch]
  int v8; // [sp+14h] [bp-8h]

  v8 = 0;
  v6 = 0.0;
  v7 = 0.0;
  (*(void (__fastcall **)(int, double *))(a1 + 136))(a1, &v6);
  if ( strcmp((const char *)(a1 + 304), "L9") )
    return 205;
  sub_846F8();
  v7 = v2;
  *a2 = v2 * v6;
  return v8;
}
