void __fastcall sub_6BE38(int a1, int a2)
{
  int v3; // r0
  int v4; // r3
  int v5; // r3

  v3 = *(_DWORD *)(a1 + 8);
  if ( !v3 || (v4 = *(_DWORD *)(v3 + 4), v4 == -1) || (v5 = v4 - 1, (*(_DWORD *)(v3 + 4) = v5) != 0) )
  {
    *(_DWORD *)(a1 + 8) = a2;
  }
  else
  {
    sub_6E5DC((void **)v3);
    *(_DWORD *)(a1 + 8) = a2;
  }
}
