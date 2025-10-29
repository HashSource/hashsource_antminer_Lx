void bitmain_convert_N_to_V_calibration()
{
  char *v0; // r12
  char *v1; // r2

  if ( dword_16C5C0 > 1 )
  {
    v0 = (char *)&unk_16C561;
    v1 = (char *)&unk_16C570;
    do
    {
      ++v0;
      v1 += 8;
    }
    while ( &byte_16C560[dword_16C5C0] != v0 );
  }
}
