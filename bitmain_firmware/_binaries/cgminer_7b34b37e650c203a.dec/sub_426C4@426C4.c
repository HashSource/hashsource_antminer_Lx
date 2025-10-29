int __fastcall sub_426C4(const void *a1, size_t a2)
{
  char v5[2048]; // [sp+8h] [bp-800h] BYREF

  if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
  {
    strcpy(v5, "about to send shutdown");
    sub_20F58(7, v5, 0);
  }
  return sub_44264((int)aBitmainShutdow, a1, a2, v5);
}
