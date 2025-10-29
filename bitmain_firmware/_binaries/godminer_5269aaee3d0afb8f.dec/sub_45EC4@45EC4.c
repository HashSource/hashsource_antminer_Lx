int sub_45EC4()
{
  int result; // r0
  int v1; // r2

  result = 0;
  v1 = dword_166038 + 1;
  if ( (unsigned int)(dword_166038 + 1) >= 0x4000 )
    v1 = 0;
  dword_166038 = v1;
  return result;
}
