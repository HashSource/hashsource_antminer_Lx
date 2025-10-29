unsigned int sub_686F8()
{
  int *v0; // r3
  int *v1; // r1
  unsigned int v2; // r0
  int *v3; // r3
  unsigned int result; // r0

  v0 = off_B6D70[0];
  v1 = (int *)&byte_4[(_DWORD)off_B6D74];
  v2 = *off_B6D70[0] + *off_B6D74;
  *off_B6D70[0] = v2;
  v3 = (int *)&byte_4[(_DWORD)v0];
  result = v2 >> 1;
  if ( v3 < (int *)off_B6D70 )
  {
    if ( v1 >= (int *)off_B6D70 )
      v1 = &dword_B6CF4;
  }
  else
  {
    v3 = &dword_B6CF4;
  }
  off_B6D70[0] = v3;
  off_B6D74 = v1;
  return result;
}
