int __fastcall add_eeprom_device(int a1, int a2)
{
  int *v2; // r2

  v2 = &dword_16C470[dword_16C474++];
  v2[2] = a1;
  return a2;
}
