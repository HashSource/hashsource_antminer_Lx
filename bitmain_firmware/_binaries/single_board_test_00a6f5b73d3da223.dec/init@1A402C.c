void __fastcall init(int argc, char **argv, char **envp)
{
  int v6; // r5
  int i; // r4
  void (__fastcall *v8)(int, char **, char **); // r3

  init_proc();
  v6 = &off_1EC258 - &off_1EC254;
  if ( v6 )
  {
    for ( i = 0; i != v6; ++i )
    {
      v8 = (void (__fastcall *)(int, char **, char **))*(&off_1EC254 + i);
      v8(argc, argv, envp);
    }
  }
}
