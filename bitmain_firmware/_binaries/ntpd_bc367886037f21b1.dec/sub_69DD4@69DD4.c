int sub_69DD4()
{
  int result; // r0
  int *v1; // r1

  result = dword_106220;
  if ( dword_106220 )
  {
    v1 = *(int **)dword_106220;
    dword_106220 = *(_DWORD *)dword_106220;
    if ( dword_106220 )
    {
      if ( dword_106224 != result )
      {
LABEL_4:
        --dword_10620C;
        return result;
      }
      v1 = &dword_106220;
    }
    dword_106224 = (int)v1;
    goto LABEL_4;
  }
  return result;
}
