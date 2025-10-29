int __fastcall sub_50108(int a1, unsigned __int8 a2)
{
  int i; // [sp+Ch] [bp+Ch]

  for ( i = 0; a2 > i; ++i )
  {
    if ( (i & 1) != 0 )
    {
      sub_4FF7C(a1, *(_BYTE *)(i + *(_DWORD *)(a1 + 296)));
      usleep(0x4E20u);
    }
  }
  return 0;
}
