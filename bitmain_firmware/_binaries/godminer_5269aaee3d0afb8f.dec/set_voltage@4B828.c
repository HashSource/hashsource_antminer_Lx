int __fastcall set_voltage(int a1, int a2)
{
  int v3; // r3
  _DWORD *v4; // r3
  int v5; // r1
  char v7[4112]; // [sp+10h] [bp-1010h] BYREF

  if ( !a2 )
    return -1;
  V_LOCK();
  LOWORD(v3) = 20548;
  HIWORD(v3) = (unsigned int)&unk_13700C >> 16;
  logfmt_raw(v7, 0x1000u, 0, v3, "set_voltage", a1);
  V_UNLOCK();
  LOWORD(v4) = -14756;
  HIWORD(v4) = (unsigned int)&unk_16E68C >> 16;
  LOWORD(v5) = 20392;
  HIWORD(v5) = (unsigned int)&unk_136F70 >> 16;
  zlog(*v4, v5, 143, "set_voltage", 11, 283, 60, v7);
  return sub_4B718(a1);
}
