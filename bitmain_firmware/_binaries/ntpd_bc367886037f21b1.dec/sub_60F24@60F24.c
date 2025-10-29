int __fastcall sub_60F24(int a1, int a2, int a3)
{
  int v5; // r8
  unsigned int v6; // r1
  int v7; // r4
  unsigned int v8; // r1
  int v9; // r3
  int *v11; // r0
  char *v12; // r0
  int *v13; // r0
  char *v14; // r0
  int *v15; // r0
  char *v16; // r0
  int v17; // [sp+0h] [bp-Ch] BYREF

  v5 = dword_1060F4;
  v17 = (100 * a1 / 255) | ((100 * a1 / 255) << 8);
  if ( byte_10602C )
  {
    v7 = ioctl(dword_1060F4, dword_B6CC0, &v17);
  }
  else
  {
    v6 = -1073459961;
    if ( a3 == 2 )
      v6 = -1073459962;
    v7 = ioctl(dword_1060F4, v6, &v17);
  }
  if ( v7 == -1 )
  {
    v11 = _errno_location();
    v12 = strerror(*v11);
    _printf_chk(1, "audio_gain: agc write: %s\n", v12);
  }
  else
  {
    if ( dword_B6CC8 != a2 )
    {
      if ( byte_106090 )
        v8 = dword_B6CC4;
      else
        v8 = 19712;
      if ( !byte_106090 )
        HIWORD(v8) = -16380;
      v17 = (100 * a2 / 255) | ((100 * a2 / 255) << 8);
      v7 = ioctl(v5, v8, &v17);
      if ( v7 == -1 )
      {
        v15 = _errno_location();
        v16 = strerror(*v15);
        _printf_chk(1, "audio_gain: mongain write: %s\n", v16);
        return v7;
      }
      dword_B6CC8 = a2;
    }
    if ( dword_B6CCC != a3 )
    {
      if ( a3 == 2 )
        v9 = 64;
      else
        v9 = 128;
      v17 = v9;
      v7 = ioctl(v5, 0xC0044DFF, &v17);
      if ( v7 == -1 )
      {
        v13 = _errno_location();
        v14 = strerror(*v13);
        _printf_chk(1, "SOUND_MIXER_WRITE_RECSRC: %s\n", v14);
      }
      else
      {
        dword_B6CCC = a3;
      }
    }
  }
  return v7;
}
