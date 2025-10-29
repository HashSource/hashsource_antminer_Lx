int __fastcall sub_1A3E94(unsigned __int64 a1, unsigned __int64 a2)
{
  if ( a2 )
    return _udivmoddi4(a1, HIDWORD(a1), a2);
  else
    return raise(8);
}
