unsigned int *__fastcall sub_33AA58(unsigned int a1)
{
  int v2; // r3
  unsigned int *v3; // r4
  unsigned int v4; // r3
  unsigned int v5; // r2
  int v7; // r3
  unsigned int v8; // r1
  int v9; // r5
  char *v10; // r2
  unsigned int *v11; // r0
  int *v12; // r4
  _DWORD *v13; // r0

  if ( &_pthread_key_create )
  {
    if ( pthread_mutex_lock((pthread_mutex_t *)&dword_48FEF0) )
      sub_33A920();
    v2 = a1 + 8;
    v3 = (unsigned int *)dword_48FF08;
    if ( a1 >= 0xFFFFFFF8 )
      v2 = 8;
    v4 = (v2 + 7) & 0xFFFFFFF8;
    if ( !dword_48FF08 )
      goto LABEL_12;
  }
  else
  {
    v7 = a1 + 8;
    if ( a1 >= 0xFFFFFFF8 )
      v7 = 8;
    v3 = (unsigned int *)dword_48FF08;
    v4 = (v7 + 7) & 0xFFFFFFF8;
    if ( !dword_48FF08 )
      return v3;
  }
  v5 = *v3;
  if ( *v3 < v4 )
  {
    while ( 1 )
    {
      v11 = (unsigned int *)v3[1];
      if ( !v11 )
        break;
      v5 = *v11;
      if ( *v11 >= v4 )
      {
        v12 = (int *)(v3 + 1);
        goto LABEL_19;
      }
      v3 = (unsigned int *)v3[1];
    }
    v3 = 0;
    if ( !&_pthread_key_create )
      return v3;
    goto LABEL_12;
  }
  v11 = v3;
  v12 = &dword_48FF08;
LABEL_19:
  v8 = v5 - v4;
  v9 = v11[1];
  if ( v5 - v4 <= 7 )
  {
    *v11 = v5;
    *v12 = v9;
  }
  else
  {
    v10 = (char *)v11 + v4;
    *((_DWORD *)v10 + 1) = v9;
    *(unsigned int *)((char *)v11 + v4) = v8;
    v11 = (unsigned int *)*v12;
    *(_DWORD *)*v12 = v4;
    *v12 = (int)v10;
  }
  v3 = v11 + 2;
  if ( &_pthread_key_create )
  {
LABEL_12:
    if ( pthread_mutex_unlock((pthread_mutex_t *)&dword_48FEF0) )
    {
      v13 = (_DWORD *)sub_33AB64(4);
      *v13 = &off_468D08;
      sub_33A780(
        (int)v13,
        (int)&`typeinfo for'__gnu_cxx::__concurrence_unlock_error,
        (int)__gnu_cxx::__concurrence_unlock_error::~__concurrence_unlock_error);
    }
  }
  return v3;
}
