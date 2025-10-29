bool __fastcall sub_DE798(_DWORD *a1, char a2)
{
  _UNKNOWN **v2; // r0
  _UNKNOWN **v3; // r0
  _UNKNOWN **v4; // r0
  int v5; // r3
  unsigned int v9; // [sp+8h] [bp+8h]
  int v10; // [sp+Ch] [bp+Ch]

  v9 = a1[49];
  v10 = 0;
  a1[59] = 0;
  while ( a1[59] < v9 )
  {
    v5 = v10++;
    if ( v5 > 2 )
      break;
    sub_DAE88((int)a1, v9);
    if ( a2 && a1[59] < v9 )
    {
      v2 = dev_ctrl();
      ((void (__fastcall *)(_DWORD))v2[7])(a1[34]);
      usleep(0x493E0u);
      v3 = dev_ctrl();
      ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))v3[6])(a1[34], a1[191], a1[194]);
      v4 = dev_ctrl();
      ((void (__fastcall *)(_DWORD))v4[9])(a1[34]);
    }
    usleep(0x493E0u);
  }
  return a1[59] == v9;
}
