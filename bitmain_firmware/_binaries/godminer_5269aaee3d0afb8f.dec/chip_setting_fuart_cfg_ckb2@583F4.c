int __fastcall chip_setting_fuart_cfg_ckb2(int a1, int a2)
{
  int v4; // r3
  int *v5; // r3
  int v6; // r0
  int v7; // r1
  _DWORD v9[2]; // [sp+10h] [bp-1014h] BYREF
  char v10; // [sp+18h] [bp-100Ch]
  char v11; // [sp+19h] [bp-100Bh]
  __int16 v12; // [sp+1Ah] [bp-100Ah]
  int v13; // [sp+1Ch] [bp-1008h]
  char v14[4100]; // [sp+20h] [bp-1004h] BYREF

  v11 = 0;
  v13 = 0;
  v9[1] = 0;
  v10 = 1;
  v12 = 96;
  if ( (_UNKNOWN *)a2 == &unk_16E360 )
    goto LABEL_21;
  if ( a2 > (int)&unk_16E360 )
  {
    if ( a2 == 3125000 )
      goto LABEL_20;
    if ( a2 > 3125000 )
    {
      if ( a2 != 6250000 && a2 != 12500000 )
        goto LABEL_14;
      goto LABEL_20;
    }
    if ( a2 != 1562500 )
    {
      if ( a2 != 3000000 )
        goto LABEL_14;
LABEL_20:
      v4 = 0;
      goto LABEL_9;
    }
LABEL_21:
    v4 = 256;
    goto LABEL_9;
  }
  if ( a2 != 460800 )
  {
    if ( a2 > 460800 )
    {
      if ( a2 == 921600 || a2 == 1041666 )
      {
        v4 = 512;
        goto LABEL_9;
      }
    }
    else if ( a2 == 38400 )
    {
      v4 = 20480;
      goto LABEL_9;
    }
LABEL_14:
    v4 = 6656;
    goto LABEL_9;
  }
  v4 = 1536;
LABEL_9:
  v9[0] = v4;
  V_LOCK();
  logfmt_raw(v14, 0x1000u, 0, "set fuart cfg value %08x/%d", v9[0], a2);
  V_UNLOCK();
  LOWORD(v5) = -14756;
  HIWORD(v5) = (unsigned int)&unk_16B55C >> 16;
  v6 = *v5;
  LOWORD(v5) = 30572;
  LOWORD(v7) = 30716;
  HIWORD(v5) = (unsigned int)"oot/tmp/release/build/godminer-origin_master/backend/chip_reg_io_base.c" >> 16;
  HIWORD(v7) = (unsigned int)": %02x %02x chip addr %02x reg addr %02x reg value %02x%02x%02x" >> 16;
  zlog(v6, v7, 161, v5, 27, 74, 60, v14);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v9);
}
