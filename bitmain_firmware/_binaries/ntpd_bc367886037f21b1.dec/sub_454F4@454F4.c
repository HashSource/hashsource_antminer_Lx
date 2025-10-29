int __fastcall sub_454F4(_DWORD *a1, _DWORD *a2, char *a3, char *a4, int a5)
{
  int v9; // r4
  int *v10; // r11
  int v11; // r7
  int v12; // r0
  signed int v13; // r3
  int v14; // r0
  signed int v15; // r1
  bool v16; // cc
  __int64 v17; // r0

  v9 = 0;
  v10 = _errno_location();
  *v10 = 0;
  v11 = sub_45440(a2, a3);
  v12 = sub_45440(a2, a4);
  if ( !*v10 )
  {
    v13 = v12 * a5;
    v14 = v11;
    if ( v13 < 0 )
    {
      do
      {
        v13 += 1000000000;
        --v14;
      }
      while ( v13 < 0 );
    }
    else if ( v13 > 999999999 )
    {
      v15 = v13 - 1000000000;
      v16 = v13 - 1000000000 <= 999999999;
      if ( v13 - 1000000000 <= 999999999 )
        v14 = v11 + 1;
      else
        v13 -= 2013265920;
      if ( v16 )
      {
        v13 = v15;
      }
      else
      {
        v14 += 2;
        v13 += 13265920;
      }
    }
    *a1 = v14 - 2085978496;
    v9 = 1;
    v17 = vshld_n_s64(vshrd_n_s64(vdup_n_s32(v13).n64_i64[0], 0x20u), 0x20u) + loc_45628;
    a1[1] = sub_8BB68(v17, HIDWORD(v17), loc_45630, loc_45634);
  }
  return v9;
}
