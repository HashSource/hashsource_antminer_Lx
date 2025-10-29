bool __fastcall sub_610B4(int a1)
{
  unsigned int v3; // [sp+8h] [bp+8h]
  int i; // [sp+Ch] [bp+Ch]

  v3 = *(_DWORD *)(a1 + 196);
  for ( i = 0; i <= 2; ++i )
  {
    sub_5CEE8(a1, v3);
    usleep(0x2710u);
    if ( *(_DWORD *)(a1 + 236) >= v3 )
      break;
  }
  return *(_DWORD *)(a1 + 236) == v3;
}
