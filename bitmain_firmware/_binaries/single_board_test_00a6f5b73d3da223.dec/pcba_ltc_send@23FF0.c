int __fastcall pcba_ltc_send(int a1, int a2)
{
  _BYTE s[216]; // [sp+8h] [bp+8h] BYREF
  int v5; // [sp+E0h] [bp+E0h]
  int v6; // [sp+E4h] [bp+E4h]

  v6 = a2;
  v5 = 0;
  memset(s, 0, sizeof(s));
  memcpy(&s[72], (const void *)(v6 + 4), 0x50u);
  v5 = _byteswap_ulong(*(_DWORD *)(v6 + 84));
  v5 = (v5 - 10) << 7;
  s[72] = HIBYTE(v5);
  s[73] = BYTE2(v5);
  s[74] = BYTE1(v5);
  s[75] = v5;
  sub_23ADC((int)&s[72], 80);
  return (*(int (__fastcall **)(int, _BYTE *))(a1 + 24))(a1, s);
}
