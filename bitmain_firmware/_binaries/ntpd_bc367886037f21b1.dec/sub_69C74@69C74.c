char *__fastcall sub_69C74(char *result)
{
  char **v1; // r12
  int *v2; // r3

  if ( !result )
    return sub_64A18(3, "add_full_recv_buffer received NULL buffer");
  *(_DWORD *)result = 0;
  v2 = (int *)dword_106224;
  if ( dword_106224 )
  {
    v1 = *(char ***)dword_106224;
  }
  else
  {
    dword_106220 = (int)result;
    v2 = &dword_106220;
  }
  if ( dword_106224 )
  {
    *v1 = result;
    v2 = (int *)*v2;
  }
  dword_106224 = (int)v2;
  ++dword_10620C;
  return result;
}
