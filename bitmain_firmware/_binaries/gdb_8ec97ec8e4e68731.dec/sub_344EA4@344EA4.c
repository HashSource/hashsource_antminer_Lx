void __fastcall sub_344EA4(unsigned int *a1)
{
  unsigned int *v1; // r2
  int v2; // r3
  int v3; // r3

  if ( !&_pthread_key_create )
  {
    v3 = a1[2];
    a1[2] = v3 - 1;
    if ( v3 > 0 )
      return;
LABEL_8:
    sub_344EA0(a1);
    return;
  }
  v1 = a1 + 2;
  __dmb(0xBu);
  do
    v2 = __ldrex(v1);
  while ( __strex(v2 - 1, v1) );
  __dmb(0xBu);
  if ( v2 <= 0 )
    goto LABEL_8;
}
