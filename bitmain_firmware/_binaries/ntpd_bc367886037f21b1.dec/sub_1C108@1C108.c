_DWORD *sub_1C108()
{
  _DWORD *result; // r0

  result = (_DWORD *)dword_B83D8;
  if ( dword_B83D8 )
  {
    if ( *(_DWORD *)dword_B83D8 )
    {
      dword_B83D8 = *(_DWORD *)dword_B83D8;
      sub_1BB80(result);
      return &dword_0 + 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
