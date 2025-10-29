int __fastcall get_sale_hashrate_ltc(int a1, double *a2, _DWORD *a3)
{
  float v3; // s0
  double v8; // [sp+10h] [bp-14h] BYREF
  float v9; // [sp+18h] [bp-Ch]
  int v10; // [sp+1Ch] [bp-8h]

  v10 = 0;
  v8 = 0.0;
  v9 = 0.0;
  (*(void (__fastcall **)(int, double *))(a1 + 136))(a1, &v8);
  if ( strcmp((const char *)(a1 + 304), "L9") )
    return 205;
  sub_84610();
  v9 = v3;
  *a2 = v3 * v8;
  *a3 = 1;
  return v10;
}
