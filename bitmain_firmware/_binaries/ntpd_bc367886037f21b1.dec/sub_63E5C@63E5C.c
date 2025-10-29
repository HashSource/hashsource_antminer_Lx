void sub_63E5C()
{
  if ( !lib_inited )
  {
    ipv4_works = sub_7383C() == 0;
    ipv6_works = sub_73894() == 0;
    sub_5F2F0();
    lib_inited = 1;
  }
}
