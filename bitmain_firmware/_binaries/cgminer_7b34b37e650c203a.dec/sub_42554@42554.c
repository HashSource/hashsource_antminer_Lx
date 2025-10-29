int __fastcall sub_42554(const void *a1, size_t a2)
{
  char v5[2048]; // [sp+8h] [bp-800h] BYREF

  if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
  {
    strcpy(v5, "about to send detect");
    sub_20F58(5, v5, 0);
  }
  return sub_44264((int)aBitmainApiDete, a1, a2, v5);
}
