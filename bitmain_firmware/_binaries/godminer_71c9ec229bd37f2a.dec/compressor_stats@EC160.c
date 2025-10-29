int __fastcall compressor_stats(_DWORD *a1)
{
  const char *v2; // r0
  const char *v3; // r0
  const char *v4; // r0
  const char *v5; // r0
  const char *v6; // r0
  const char *v7; // r0
  const char *v8; // r0
  const char *v9; // r0
  const char *v11; // r0

  if ( a1 )
  {
    LOWORD(v2) = -12344;
    HIWORD(v2) = (unsigned int)&unk_14AD50 >> 16;
    printf(v2, *a1);
    LOWORD(v3) = -12324;
    HIWORD(v3) = (unsigned int)&unk_14AD64 >> 16;
    printf(v3, a1[1]);
    LOWORD(v4) = -12308;
    HIWORD(v4) = (unsigned int)&unk_14AD74 >> 16;
    printf(v4, a1[2]);
    LOWORD(v5) = -12292;
    HIWORD(v5) = (unsigned int)&unk_14AD84 >> 16;
    printf(v5, a1[6]);
    LOWORD(v6) = -12280;
    HIWORD(v6) = (unsigned int)&unk_14AD90 >> 16;
    printf(v6, a1[3]);
    LOWORD(v7) = -12268;
    HIWORD(v7) = (unsigned int)&unk_14AD9C >> 16;
    printf(v7, a1[4]);
    LOWORD(v8) = -12256;
    HIWORD(v8) = (unsigned int)&unk_14ADA8 >> 16;
    printf(v8, a1[5]);
    LOWORD(v9) = -12240;
    HIWORD(v9) = (unsigned int)&unk_14ADB8 >> 16;
    return printf(v9, a1[8]);
  }
  else
  {
    LOWORD(v11) = -12228;
    HIWORD(v11) = (unsigned int)&unk_14ADC4 >> 16;
    return puts(v11);
  }
}
