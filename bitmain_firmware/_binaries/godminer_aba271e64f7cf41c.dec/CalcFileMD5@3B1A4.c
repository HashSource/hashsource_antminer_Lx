int __fastcall CalcFileMD5(const char *a1, _BYTE *a2)
{
  _BYTE *v3; // r3
  const unsigned __int16 *v4; // r4
  char s[412]; // [sp+8h] [bp-1B4h] BYREF
  int v8; // [sp+1A4h] [bp-18h]
  FILE *stream; // [sp+1A8h] [bp-14h]
  int i; // [sp+1ACh] [bp-10h]

  sprintf(s, "md5sum %.256s 2>/dev/null", a1);
  stream = popen(s, "r");
  if ( !stream )
    return -1;
  for ( i = 0; i <= 31; ++i )
  {
    v4 = *_ctype_b_loc();
    v8 = fgetc(stream);
    if ( (v4[v8] & 0x1000) == 0 )
      break;
    v3 = a2++;
    *v3 = v8;
  }
  *a2 = 0;
  pclose(stream);
  return i != 32;
}
