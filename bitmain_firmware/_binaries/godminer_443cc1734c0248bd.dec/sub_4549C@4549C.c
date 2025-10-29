int sub_4549C()
{
  int result; // r0
  int v1; // r2

  result = 0;
  v1 = dword_165028 + 1;
  if ( (unsigned int)(dword_165028 + 1) >= 0x4000 )
    v1 = 0;
  dword_165028 = v1;
  return result;
}
