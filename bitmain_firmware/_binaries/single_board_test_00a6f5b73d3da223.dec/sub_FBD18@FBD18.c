void __fastcall sub_FBD18(int a1)
{
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)(a1 + 88) + 32))(*(_DWORD *)(a1 + 88));
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)(a1 + 80) + 44))(*(_DWORD *)(a1 + 80));
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)(a1 + 84) + 44))(*(_DWORD *)(a1 + 84));
  if ( *(_DWORD *)(a1 + 76) )
    free(*(void **)(a1 + 76));
  if ( *(_DWORD *)(a1 + 68) )
    free(*(void **)(a1 + 68));
  if ( *(_DWORD *)(a1 + 72) )
    free(*(void **)(a1 + 72));
}
