void sub_15F14()
{
  char v0[2048]; // [sp+0h] [bp-800h] BYREF

  if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
  {
    snprintf(v0, 0x800u, "<<<<<<<<<<<<<<<<<<<<exec %s start>>>>>>>>>>>>>>>>", "pool_change");
    sub_20F58(5, v0, 0);
  }
  sub_3FE74();
  if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
  {
    snprintf(v0, 0x800u, "<<<<<<<<<<<<<<<<<<<<exec %s end>>>>>>>>>>>>>>>>>>", "pool_change");
    sub_20F58(5, v0, 0);
  }
}
