int sub_3DADC()
{
  int result; // r0
  int v1; // r2

  result = 0;
  v1 = dword_164E98 + 1;
  if ( (unsigned int)(dword_164E98 + 1) >= 0x400000 )
    v1 = 0;
  dword_164E98 = v1;
  return result;
}
