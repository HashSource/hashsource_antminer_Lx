int sub_3E4BC()
{
  int result; // r0
  int v1; // r2

  result = 0;
  v1 = dword_165EA8 + 1;
  if ( (unsigned int)(dword_165EA8 + 1) >= 0x400000 )
    v1 = 0;
  dword_165EA8 = v1;
  return result;
}
