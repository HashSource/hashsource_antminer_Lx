void __noreturn sub_2090C()
{
  int v0; // r0
  unsigned int v1; // r0
  int v2; // r5
  int v3; // r4
  _QWORD v4[2]; // [sp+8h] [bp-14h] BYREF

  v0 = sub_702AC();
  sub_702CC(v0 | 0x10000);
  prctl(15, "nonce_reg_process", 0);
  while ( 1 )
  {
    v1 = sub_6FD6C();
    v2 = (unsigned __int8)(v1 >> 1);
    if ( (unsigned __int8)(v1 >> 1) )
    {
      v3 = 0;
      do
      {
        while ( 1 )
        {
          sub_6FDC4(v4);
          if ( (v4[0] & 0x80000000LL) != 0 )
            break;
          ++v3;
          sub_2F194((int)v4);
          if ( v2 == v3 )
            goto LABEL_7;
        }
        ++v3;
        sub_2EE74((int)v4);
      }
      while ( v2 != v3 );
    }
LABEL_7:
    sub_4A804();
  }
}
