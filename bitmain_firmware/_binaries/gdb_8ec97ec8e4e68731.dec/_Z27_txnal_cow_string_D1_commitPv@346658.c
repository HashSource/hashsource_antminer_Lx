void __fastcall _txnal_cow_string_D1_commit(unsigned int *a1)
{
  unsigned int *v1; // r2
  int v2; // r3

  if ( a1 != (unsigned int *)&std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v1 = a1 + 2;
      __dmb(0xBu);
      do
        v2 = __ldrex(v1);
      while ( __strex(v2 - 1, v1) );
      __dmb(0xBu);
    }
    else
    {
      v2 = a1[2];
      a1[2] = v2 - 1;
    }
    if ( v2 <= 0 )
      sub_344EA0(a1);
  }
}
