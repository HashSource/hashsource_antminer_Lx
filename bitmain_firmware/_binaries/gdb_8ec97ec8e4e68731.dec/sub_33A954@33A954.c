int *__fastcall sub_33A954(int a1)
{
  int v2; // r12
  int *result; // r0
  int v4; // r3
  int v5; // lr
  unsigned int v6; // r5
  unsigned int v7; // r1
  unsigned int v8; // r2
  __int64 v9; // r2
  _DWORD *v10; // r3
  int v11; // r2
  int v12; // r1
  _DWORD *v13; // r0

  if ( &_pthread_key_create && pthread_mutex_lock((pthread_mutex_t *)&dword_48FEF0) )
    sub_33A920();
  v2 = a1 - 8;
  result = &dword_48FEF0;
  v4 = dword_48FF08;
  if ( dword_48FF08 && (v5 = *(_DWORD *)(a1 - 8), v6 = v2 + v5, dword_48FF08 <= (unsigned int)(v2 + v5)) )
  {
    if ( dword_48FF08 == v2 + v5 )
    {
      *(_DWORD *)(a1 - 8) = *(_DWORD *)dword_48FF08 + v5;
      *(_DWORD *)(a1 - 4) = *(_DWORD *)(dword_48FF08 + 4);
      dword_48FF08 = a1 - 8;
    }
    else
    {
      v7 = *(_DWORD *)(dword_48FF08 + 4);
      if ( v7 && v6 < v7 )
      {
        while ( 1 )
        {
          v8 = *(_DWORD *)(v7 + 4);
          result = (int *)(v4 + 4);
          if ( !v8 )
            break;
          v4 = v7;
          if ( v6 >= v8 )
            break;
          v7 = *(_DWORD *)(v7 + 4);
        }
      }
      else
      {
        v8 = *(_DWORD *)(dword_48FF08 + 4);
        result = &dword_48FF08;
        v7 = dword_48FF08;
      }
      if ( v6 == v8 )
      {
        v9 = *(_QWORD *)v6;
        *(_DWORD *)(v7 + 4) = *(_DWORD *)(v6 + 4);
        v5 += v9;
      }
      v10 = (_DWORD *)*result;
      v11 = *(_DWORD *)*result;
      v12 = *result + v11;
      if ( v2 == v12 )
        *v10 = v11 + v5;
      else
        v10 = (_DWORD *)v10[1];
      if ( v2 != v12 )
      {
        *(_DWORD *)(a1 - 8) = v5;
        *(_DWORD *)(a1 - 4) = v10;
        *(_DWORD *)(*result + 4) = v2;
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 - 4) = dword_48FF08;
    dword_48FF08 = a1 - 8;
  }
  if ( &_pthread_key_create )
  {
    result = (int *)pthread_mutex_unlock((pthread_mutex_t *)&dword_48FEF0);
    if ( result )
    {
      v13 = (_DWORD *)sub_33AB64(4);
      *v13 = &off_468D08;
      sub_33A780(
        (int)v13,
        (int)&`typeinfo for'__gnu_cxx::__concurrence_unlock_error,
        (int)__gnu_cxx::__concurrence_unlock_error::~__concurrence_unlock_error);
    }
  }
  return result;
}
