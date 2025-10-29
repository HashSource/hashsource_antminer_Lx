void bitmain_convert_N_to_V_calibration()
{
  char *v0; // r12
  char *v1; // r2

  if ( dword_16B4C0 > 1 )
  {
    v0 = (char *)&unk_16B461;
    v1 = (char *)&unk_16B470;
    do
    {
      ++v0;
      v1 += 8;
    }
    while ( &byte_16B460[dword_16B4C0] != v0 );
  }
}
