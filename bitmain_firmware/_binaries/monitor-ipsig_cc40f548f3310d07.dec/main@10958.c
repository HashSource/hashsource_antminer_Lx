void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0

  v3 = printf("monitor-ipsig compile %s--%s\n", "Aug 21 2024", "19:33:53");
  v4 = sub_11014(v3);
  while ( 1 )
  {
    if ( sub_114D8(v4) != 1 )
    {
      do
        v5 = usleep(0x61A80u);
      while ( sub_114D8(v5) != 1 );
    }
    do
    {
      v6 = puts("Key Down!!!!!");
      v7 = sub_11114(v6);
      v4 = sub_112A4(v7);
    }
    while ( v4 != 1 );
  }
}
