int __fastcall setup_all_chip_grin29(int a1)
{
  int v2; // r4
  _BYTE *v3; // r3
  int v4; // r1
  int result; // r0

  v2 = 0;
  puts("setup_all_chip_grin29");
  v3 = *(_BYTE **)(a1 + 296);
  v3[2] = 0x80;
  v3[3] = -64;
  *v3 = 0;
  v3[1] = 64;
  *(_DWORD *)(a1 + 240) = 64;
  (*(void (__fastcall **)(int, _DWORD, int))(a1 + 148))(a1, *(_DWORD *)(a1 + 296), 4);
  sub_A3180(a1);
  while ( ++v2 != 4 )
  {
    while ( (v2 & 1) != 0 )
    {
      v4 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 296) + v2++);
      sub_A24D0(a1, v4);
      usleep(0x4E20u);
      if ( v2 == 4 )
        goto LABEL_5;
    }
  }
LABEL_5:
  sub_A30A8(a1);
  result = 0;
  if ( !*(_BYTE *)(a1 + 268) )
    *(_DWORD *)(a1 + 272) = (int)*(float *)(a1 + 760);
  return result;
}
