int sub_46D04()
{
  int result; // r0
  int v1; // r2

  result = 0;
  v1 = dword_168050 + 1;
  if ( (unsigned int)(dword_168050 + 1) >= 0x4000 )
    v1 = 0;
  dword_168050 = v1;
  return result;
}
