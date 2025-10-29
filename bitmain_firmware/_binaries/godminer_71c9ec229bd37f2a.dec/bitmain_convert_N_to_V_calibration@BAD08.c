void bitmain_convert_N_to_V_calibration()
{
  char *v0; // r12
  char *v1; // r2

  if ( dword_16E5F0 > 1 )
  {
    v0 = (char *)&unk_16E591;
    v1 = (char *)&unk_16E5A0;
    do
    {
      ++v0;
      v1 += 8;
    }
    while ( &byte_16E590[dword_16E5F0] != v0 );
  }
}
