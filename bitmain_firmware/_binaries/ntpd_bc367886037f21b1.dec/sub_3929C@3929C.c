int sub_3929C()
{
  int v0; // r4
  char **v1; // r5
  char *v2; // t1
  int (*v3)(void); // r3
  int result; // r0

  if ( num_refclock_conf )
  {
    v0 = 0;
    v1 = &off_B4394;
    do
    {
      v2 = v1[1];
      ++v1;
      v3 = (int (*)(void))*((_DWORD *)v2 + 4);
      if ( v3 )
        result = v3();
      ++v0;
    }
    while ( (unsigned __int8)num_refclock_conf > v0 );
  }
  return result;
}
