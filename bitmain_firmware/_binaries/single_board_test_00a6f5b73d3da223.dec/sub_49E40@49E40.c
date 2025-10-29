int __fastcall sub_49E40(int a1, char a2, char a3, int a4, int a5)
{
  _BYTE v6[4]; // [sp+10h] [bp+10h] BYREF
  int v7; // [sp+14h] [bp+14h]
  int v8; // [sp+18h] [bp+18h]
  int v9; // [sp+1Ch] [bp+1Ch]

  v6[0] = a2;
  v6[1] = a3;
  v7 = a4;
  v8 = a5;
  v9 = ioctl(a1, 0x720u, v6);
  if ( v9 < 0 )
    perror("failed to get i2c_smbus ioctl");
  return v9;
}
