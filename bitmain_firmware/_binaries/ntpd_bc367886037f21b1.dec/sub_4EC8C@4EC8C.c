__int16 *__fastcall sub_4EC8C(__int16 *result)
{
  int v1; // r2

  if ( (int)result <= 0 )
  {
    v1 = 54 * (_DWORD)result;
    result = *(__int16 **)&word_BC578[54 * (_DWORD)result + 12];
    if ( result != (__int16 *)-1 )
      return sub_18C18((int)&word_BC578[v1 + 2]);
  }
  return result;
}
