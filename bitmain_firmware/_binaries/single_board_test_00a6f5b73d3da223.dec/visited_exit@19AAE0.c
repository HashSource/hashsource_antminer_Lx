void __fastcall visited_exit(void **a1)
{
  if ( *a1 )
    free(*a1);
}
