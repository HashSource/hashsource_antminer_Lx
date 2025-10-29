void sub_9D4C()
{
  if ( !lib_inited )
  {
    ipv4_works = sub_11490() == 0;
    ipv6_works = sub_114E8() == 0;
    sub_6570();
    lib_inited = 1;
  }
}
