_DWORD *__fastcall sub_345DD0(_DWORD *a1, int *a2)
{
  int v2; // r3
  void *v4; // r0
  _DWORD *v6; // r3
  unsigned int *v7; // r5
  unsigned int v8; // r2
  _BYTE v9[8]; // [sp+4h] [bp-8h] BYREF

  v2 = *a2;
  v4 = (void *)(*a2 - 12);
  if ( *(int *)(*a2 - 4) < 0 )
  {
    v6 = sub_345880((int)v4, (int)v9, 0);
    *a1 = v6;
    return a1;
  }
  else
  {
    if ( v4 != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v7 = (unsigned int *)(v2 - 4);
        __dmb(0xBu);
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 + 1, v7) );
        __dmb(0xBu);
      }
      else
      {
        ++*(_DWORD *)(v2 - 4);
      }
    }
    *a1 = v2;
    return a1;
  }
}
