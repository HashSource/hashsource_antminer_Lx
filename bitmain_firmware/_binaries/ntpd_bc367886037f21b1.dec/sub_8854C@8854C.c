void __fastcall sub_8854C(unsigned int a1, int a2)
{
  sub_8845C(a1, a2);
  if ( *(_DWORD *)(a2 + 24) != -1 )
    *(_DWORD *)(a2 + 24) += time(0);
}
