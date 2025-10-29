int __fastcall sub_6DEFC(int result)
{
  if ( dword_10622C )
  {
    if ( result )
      return sub_6DCA8((sem_t *)dword_10622C, 0);
    else
      return sem_post((sem_t *)dword_10622C);
  }
  return result;
}
