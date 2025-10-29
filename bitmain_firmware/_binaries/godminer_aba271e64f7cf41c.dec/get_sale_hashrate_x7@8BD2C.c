int __fastcall get_sale_hashrate_x7(int a1, double *a2, _DWORD *a3)
{
  double v7; // [sp+10h] [bp-14h] BYREF
  int v8; // [sp+1Ch] [bp-8h]

  v8 = 0;
  v7 = 0.0;
  (*(void (__fastcall **)(int, double *))(a1 + 136))(a1, &v7);
  if ( strcmp((const char *)(a1 + 304), "X5") )
    return 205;
  *a2 = v7 * 0.985;
  *a3 = 1;
  return v8;
}
