void __noreturn sub_20F90()
{
  time_t v0; // r5
  unsigned int v1; // r0
  unsigned int v2; // r4
  unsigned int v3; // r11

  prctl(15, "chk_sys", 0);
  sub_2F7DC();
  v0 = sub_20A08();
  while ( 1 )
  {
    if ( sub_226B0() == 1 )
    {
      v1 = sub_20A08() - v0;
      if ( qword_241D50 || v1 > 0x708 )
        break;
    }
    sub_4A804();
  }
  dword_A06D0 = sub_20A08();
  sub_20B28();
LABEL_7:
  v2 = 1;
  while ( 1 )
  {
    if ( v2 == 5 * (v2 / 5) && sub_20EC8() )
      goto LABEL_7;
    v3 = v2 % 0x3C;
    if ( v2 == 60 * (v2 / 0x3C) )
    {
LABEL_19:
      v3 = 0;
      sub_23590();
    }
    if ( v2 == 1800 * (v2 / 0x708) )
    {
      sub_20A38();
      sub_14BF4();
      if ( sub_20B48() )
        goto LABEL_7;
    }
    if ( v2 == 21600 * (v2 / 0x5460) )
      sub_20E60();
    if ( !v3 )
    {
      sub_2F354();
      sub_2F5AC();
    }
    if ( v2 == 10 * (v2 / 0xA) )
      sub_2F984();
    ++v2;
    sub_4A804();
    if ( v2 == 120 )
    {
      byte_A06B8 = 1;
      if ( sub_20EC8() )
        goto LABEL_7;
      goto LABEL_19;
    }
  }
}
