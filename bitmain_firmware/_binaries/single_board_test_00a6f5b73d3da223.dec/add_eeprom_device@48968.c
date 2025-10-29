_DWORD *__fastcall add_eeprom_device(int a1)
{
  int v1; // r2

  v1 = dword_479EA8++;
  dword_479E68[v1] = a1;
  return dword_479E68;
}
