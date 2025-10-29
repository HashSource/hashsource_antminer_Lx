unsigned int *__fastcall sub_88DC(unsigned int *result, int a2, int a3, int a4)
{
  unsigned int v4; // r3

  if ( !result )
    return (unsigned int *)sub_A8D0(3);
  v4 = *result + 1;
  *result = v4;
  if ( v4 <= 5 )
    return (unsigned int *)sub_A8D0(3);
  return result;
}
