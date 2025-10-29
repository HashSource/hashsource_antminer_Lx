char *__fastcall sub_69E70(char *result)
{
  char *v1; // r2
  char *v2; // r9
  char *v3; // r4
  int *v4; // r12
  int *v5; // r3
  char *v6; // r0

  v1 = (char *)dword_106220;
  if ( dword_106220 )
  {
    v2 = result;
    do
    {
      while ( 1 )
      {
        v3 = *(char **)v1;
        if ( *((char **)v1 + 16) == v2 )
          break;
        v1 = *(char **)v1;
        if ( !v3 )
          return result;
      }
      v4 = (int *)dword_106220;
      v5 = *(int **)dword_106220;
      if ( (char *)dword_106220 == v1 )
      {
        v4 = &dword_106220;
        v6 = v1;
      }
      else
      {
        if ( !v5 )
          goto LABEL_20;
        while ( v5 != (int *)v1 )
        {
          v4 = v5;
          if ( !*v5 )
            goto LABEL_20;
          v5 = (int *)*v5;
        }
        v6 = (char *)*v4;
        v5 = *(int **)*v4;
      }
      *v4 = (int)v5;
      if ( v5 )
      {
        if ( (char *)dword_106224 == v6 )
          dword_106224 = (int)&dword_106220;
      }
      else
      {
        dword_106224 = 0;
      }
      if ( v6 != v1 )
LABEL_20:
        sub_6E8F0("recvbuff.c", 285, 2, "punlinked == rbufp");
      --dword_10620C;
      result = sub_69BD8(v6);
      v1 = v3;
    }
    while ( v3 );
  }
  return result;
}
