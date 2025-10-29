_BYTE *__fastcall sub_6D014(int a1)
{
  if ( (a1 & 0x80) != 0 )
    return sub_6CAC0(a1 & 0xFFFFFF7F, &dword_B3FFC);
  if ( (a1 & 0x100) != 0 )
    return sub_6CAC0(a1 & 0xFFFFFEFF, &dword_B411C);
  return sub_6CAC0(a1, &dword_B3EC4);
}
