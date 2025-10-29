int __fastcall api_get_eeprom_voltage(int a1)
{
  int v2; // [sp+Ch] [bp+Ch] BYREF

  v2 = 0;
  eeprom_get_voltage(dword_479E68[a1], &v2);
  return v2;
}
