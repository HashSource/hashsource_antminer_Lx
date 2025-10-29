int __fastcall api_get_eeprom_voltage(int a1)
{
  int v2; // [sp+Ch] [bp-8h] BYREF

  v2 = 0;
  eeprom_get_voltage(dword_15FA6C[a1], &v2);
  return v2;
}
