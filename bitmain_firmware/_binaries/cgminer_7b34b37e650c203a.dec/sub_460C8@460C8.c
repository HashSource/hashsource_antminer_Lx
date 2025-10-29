void __fastcall sub_460C8(int a1)
{
  if ( *(_DWORD *)(a1 + 60) == 256 )
  {
    sub_47764(*(void **)(a1 + 64));
    *(_DWORD *)(a1 + 64) = 0;
    *(_DWORD *)(a1 + 68) = 0;
    sub_47854(a1 + 40);
  }
  else
  {
    sub_47854(a1 + 40);
  }
}
