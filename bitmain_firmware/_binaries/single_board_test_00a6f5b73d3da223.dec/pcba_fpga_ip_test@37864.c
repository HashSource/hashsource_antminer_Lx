int __fastcall pcba_fpga_ip_test(int a1)
{
  sub_37780(a1);
  if ( (unsigned __int8)sub_365F8(a1, (const char *)3) != 1 )
  {
    puts("pcba gpio test failed");
    return 2;
  }
  else if ( (unsigned __int8)sub_374F0(a1, 0) != 1 )
  {
    puts("pcba serdes test failed");
    return 1;
  }
  else if ( (unsigned __int8)sub_36C5C(a1, 1) != 1 )
  {
    puts("pcba DDR0 test failed");
    return 3;
  }
  else if ( (unsigned __int8)sub_36C5C(a1, 2) != 1 )
  {
    puts("pcba DDR1 test failed");
    return 4;
  }
  else if ( (unsigned __int8)sub_3612C(a1, (const char *)4) != 1 )
  {
    puts("pcba hbm test failed");
    return 5;
  }
  else
  {
    return 0;
  }
}
