int __fastcall sub_32EC0(int a1)
{
  if ( (unsigned __int8)(a1 - 48) <= 9u )
    return a1 - 48;
  if ( (unsigned int)(a1 - 97) > 5 )
    return sub_32E40(a1);
  return a1 - 87;
}
