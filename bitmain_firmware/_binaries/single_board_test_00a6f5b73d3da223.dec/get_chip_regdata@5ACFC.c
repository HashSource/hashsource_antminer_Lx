void __fastcall get_chip_regdata(int a1, unsigned __int8 a2)
{
  _BYTE v3[10]; // [sp+1Ch] [bp+Ch] BYREF
  __int16 v4; // [sp+26h] [bp+16h]
  int v5; // [sp+2Ch] [bp+1Ch] BYREF
  void *s; // [sp+30h] [bp+20h]
  int v7; // [sp+34h] [bp+24h]

  v5 = 0;
  v7 = *(_DWORD *)(a1 + 196);
  v3[8] = 1;
  v3[9] = 0;
  v4 = a2;
  s = malloc(12 * v7);
  memset(s, 0, 12 * v7);
  (*(void (__fastcall **)(int, _BYTE *, int, void *, int *))(a1 + 176))(a1, v3, v7, s, &v5);
  free(s);
}
