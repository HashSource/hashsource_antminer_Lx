void __fastcall free_graph29(void (__fastcall **a1)(_DWORD))
{
  if ( a1 )
  {
    a1[25](a1);
    free(a1);
  }
}
