__int16 *__fastcall sub_46F8C(int a1, int a2)
{
  __int16 *result; // r0

  result = *(__int16 **)(a2 + 84);
  if ( *((_DWORD *)result + 7) != -1 )
    return sub_18C18((int)(result + 4));
  return result;
}
