int __fastcall pcba_dash_send(int a1, int a2)
{
  _BYTE s[180]; // [sp+8h] [bp+8h] BYREF
  int v5; // [sp+BCh] [bp+BCh]
  int v6; // [sp+C0h] [bp+C0h]
  int i; // [sp+C4h] [bp+C4h]
  _BYTE vars0[8]; // [sp+C8h] [bp+C8h] BYREF

  v6 = a2;
  v5 = 0;
  memset(s, 0, 0xB0u);
  memcpy(&s[40], (const void *)(v6 + 4), 0x50u);
  for ( i = 0; i <= 19; ++i )
  {
    vars0[4 * i - 149] = *(_BYTE *)(4 * i + v6 + 4);
    vars0[4 * i - 150] = *(_BYTE *)(4 * i + 1 + v6 + 4);
    vars0[4 * i - 151] = *(_BYTE *)(4 * i + 2 + v6 + 4);
    vars0[4 * i - 152] = *(_BYTE *)(4 * i + 3 + v6 + 4);
  }
  return (*(int (__fastcall **)(int, _BYTE *))(a1 + 24))(a1, s);
}
