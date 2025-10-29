int get_max_voltage()
{
  double v0; // d0

  if ( byte_479DB0 != 1 )
    return -1;
  bitmain_convert_N_to_V();
  return (int)(v0 * 100.0);
}
