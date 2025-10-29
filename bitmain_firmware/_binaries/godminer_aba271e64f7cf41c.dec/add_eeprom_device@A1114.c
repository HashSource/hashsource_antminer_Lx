_DWORD *__fastcall add_eeprom_device(int a1)
{
  int v1; // r2

  v1 = dword_15FAAC++;
  dword_15FA6C[v1] = a1;
  return dword_15FA6C;
}
