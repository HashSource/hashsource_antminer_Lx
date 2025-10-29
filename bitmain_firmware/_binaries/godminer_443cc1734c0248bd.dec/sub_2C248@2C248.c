int sub_2C248()
{
  int v0; // r2
  int v1; // r0

  v0 = 1470;
  if ( opt_custom_voltage == 1470 && (v0 = opt_custom_freq, opt_custom_freq == 1850) )
    v1 = 2;
  else
    v1 = 1;
  return set_working_voltage_strategy(v1, opt_custom_voltage, v0);
}
