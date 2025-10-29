void __fastcall free_bitmap(void (__fastcall **a1)(_DWORD))
{
  a1[8](a1);
  if ( a1 )
    free(a1);
}
