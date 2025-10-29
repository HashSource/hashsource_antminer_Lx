bool __fastcall check_asic_num_ltc(_DWORD *a1, int a2)
{
  unsigned int v2; // r7
  int v5; // r5
  int v6; // r0
  unsigned int v7; // r3
  int (**v9)(); // r0
  int v10; // r0
  int (**v11)(); // r0
  int v12; // r0
  int (**v13)(); // r0

  v2 = a1[51];
  a1[61] = 0;
  if ( !v2 )
    return 1;
  v5 = 3;
  while ( 1 )
  {
    v6 = sub_AA1AC((int)a1, v2);
    if ( a2 )
    {
      if ( a1[61] < v2 )
      {
        v9 = dev_ctrl(v6);
        ((void (__fastcall *)(_DWORD))v9[7])(a1[36]);
        v10 = usleep((__useconds_t)&loc_493E0);
        v11 = dev_ctrl(v10);
        v12 = ((int (__fastcall *)(_DWORD, _DWORD, _DWORD))v11[6])(a1[36], a1[193], a1[196]);
        v13 = dev_ctrl(v12);
        ((void (__fastcall *)(_DWORD))v13[9])(a1[36]);
      }
    }
    usleep((__useconds_t)&loc_493E0);
    v7 = a1[61];
    if ( v7 >= v2 )
      break;
    if ( !--v5 )
      return 0;
  }
  return v7 == v2;
}
