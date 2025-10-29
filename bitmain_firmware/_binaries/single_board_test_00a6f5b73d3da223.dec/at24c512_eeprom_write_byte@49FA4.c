int __fastcall at24c512_eeprom_write_byte(int a1, unsigned __int8 a2, __int16 a3, char a4)
{
  _BYTE v7[4]; // [sp+8h] [bp+8h] BYREF
  int v8; // [sp+Ch] [bp+Ch]

  v7[0] = HIBYTE(a3);
  v7[1] = a3;
  v7[2] = a4;
  if ( ioctl(a1, 0x703u, a2) >= 0 )
  {
    v8 = sub_49EC0(a1, (int)v7);
    if ( !v8 )
      usleep(0xBB8u);
    return v8;
  }
  else
  {
    perror("failed to get i2c_slave ioctl");
    return -1;
  }
}
