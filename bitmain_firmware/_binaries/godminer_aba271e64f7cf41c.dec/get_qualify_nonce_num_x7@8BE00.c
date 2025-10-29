int __fastcall get_qualify_nonce_num_x7(int a1, float *a2)
{
  unsigned __int64 v2; // d17
  double v3; // d8
  double v4; // r0
  float v5; // s15
  double v9; // [sp+8h] [bp-1Ch] BYREF
  int v10; // [sp+14h] [bp-10h]

  v10 = 0;
  v9 = 0.0;
  (*(void (__fastcall **)(int, double *))(a1 + 136))(a1, &v9);
  v3 = v9;
  LODWORD(v2) = *(_DWORD *)(a1 + 432);
  LODWORD(v4) = sub_CCAD4(vshld_u64(1u, v2));
  v5 = v3 / v4 / 6.0 * 0.75;
  *a2 = v5;
  return 0;
}
