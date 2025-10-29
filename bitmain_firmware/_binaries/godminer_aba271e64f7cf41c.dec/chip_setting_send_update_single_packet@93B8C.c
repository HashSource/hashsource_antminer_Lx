int __fastcall chip_setting_send_update_single_packet(int a1, const void *a2, unsigned __int8 a3, char a4)
{
  unsigned __int8 v7[2]; // [sp+14h] [bp-210h] BYREF
  char v8; // [sp+16h] [bp-20Eh]
  char v9; // [sp+17h] [bp-20Dh]
  char v10; // [sp+18h] [bp-20Ch]
  unsigned __int8 v11; // [sp+19h] [bp-20Bh]
  __int16 v12; // [sp+1Ah] [bp-20Ah]
  _DWORD v13[129]; // [sp+1Ch] [bp-208h] BYREF

  v13[128] = 0;
  v7[0] = 85;
  v7[1] = -86;
  if ( a4 )
    v8 = 15;
  else
    v8 = 6;
  v9 = -1;
  v10 = -1;
  v11 = a3;
  memcpy(v13, a2, a3);
  v12 = 0;
  v12 = BM_CRC16((char *)v7, a3 + 8);
  return set_chip_reg_x7(a1, v7);
}
