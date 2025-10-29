int __fastcall sub_E1BE0(unsigned __int8 a1)
{
  int v1; // r3

  if ( a1 > 0x2Fu && a1 <= 0x39u )
    return (unsigned __int8)(a1 - 48);
  v1 = a1;
  if ( a1 > 0x60u )
  {
    v1 = a1;
    if ( a1 <= 0x66u )
      return (unsigned __int8)(a1 - 87);
  }
  return v1;
}
