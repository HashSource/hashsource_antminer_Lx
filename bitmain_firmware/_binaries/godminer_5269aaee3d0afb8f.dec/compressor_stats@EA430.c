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
    LOWORD(v2) = -21032;
    HIWORD(v2) = (unsigned int)&unk_1497D8 >> 16;
    printf(v2, *a1);
    LOWORD(v3) = -21012;
    HIWORD(v3) = (unsigned int)&unk_1497EC >> 16;
    printf(v3, a1[1]);
    LOWORD(v4) = -20996;
    HIWORD(v4) = (unsigned int)&unk_1497FC >> 16;
    printf(v4, a1[2]);
    LOWORD(v5) = -20980;
    HIWORD(v5) = (unsigned int)&unk_14980C >> 16;
    printf(v5, a1[6]);
    LOWORD(v6) = -20968;
    HIWORD(v6) = (unsigned int)&unk_149818 >> 16;
    printf(v6, a1[3]);
    LOWORD(v7) = -20956;
    HIWORD(v7) = (unsigned int)&unk_149824 >> 16;
    printf(v7, a1[4]);
    LOWORD(v8) = -20944;
    HIWORD(v8) = (unsigned int)&unk_149830 >> 16;
    printf(v8, a1[5]);
    LOWORD(v9) = -20928;
    HIWORD(v9) = (unsigned int)&unk_149840 >> 16;
    return printf(v9, a1[8]);
  }
  else
  {
    LOWORD(v11) = -20916;
    HIWORD(v11) = (unsigned int)&unk_14984C >> 16;
    return puts(v11);
  }
}
