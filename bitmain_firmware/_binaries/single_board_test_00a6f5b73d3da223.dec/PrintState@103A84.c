int __fastcall PrintState(int a1)
{
  int i; // [sp+14h] [bp+Ch]

  for ( i = 0; i <= 15; ++i )
    printf(
      "0x%02x%02x%02x%02x ",
      HIBYTE(*(_DWORD *)(4 * i + a1)),
      (unsigned __int8)BYTE2(*(_DWORD *)(4 * i + a1)),
      BYTE1(*(_DWORD *)(4 * i + a1)),
      (unsigned __int8)*(_DWORD *)(4 * i + a1));
  return putchar(10);
}
