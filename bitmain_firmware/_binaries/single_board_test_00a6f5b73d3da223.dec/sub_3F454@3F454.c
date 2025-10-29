char *__fastcall sub_3F454(int a1, char ***a2, int a3, size_t *a4, _DWORD *a5, int a6)
{
  char **v6; // r3
  char **v8; // r3
  size_t *v9; // r3
  size_t *v10; // r3
  size_t v11; // r3
  int v16; // [sp+18h] [bp+10h] BYREF
  unsigned int v17; // [sp+1Ch] [bp+14h]
  char *s; // [sp+24h] [bp+1Ch]
  char v19; // [sp+2Bh] [bp+23h]
  size_t v20; // [sp+2Ch] [bp+24h]

  sub_3F2C8((_DWORD *)a1);
  v19 = *(_BYTE *)(a1 + 36);
  sub_3F3D0((_DWORD *)a1);
  *a5 = 0;
  if ( v19 == 35 || v19 == 37 || v19 == 43 )
  {
    if ( a6 )
    {
      sub_3F404((int *)a1, "<format>", 9, "Cannot use '%c' on optional strings");
      *(_DWORD *)(a1 + 76) = 1;
      return 0;
    }
    else
    {
      if ( strbuffer_init((strbuffer_t *)&v16) )
      {
        sub_3F404((int *)a1, "<internal>", 1, "Out of memory");
        *(_DWORD *)(a1 + 76) = 1;
      }
      do
      {
        v8 = (*a2)++;
        s = *v8;
        if ( !s )
        {
          sub_3F404((int *)a1, "<args>", 12, "NULL %s");
          *(_DWORD *)(a1 + 76) = 1;
        }
        sub_3F2C8((_DWORD *)a1);
        if ( *(_BYTE *)(a1 + 36) == 35 )
        {
          v9 = (size_t *)(*a2)++;
          v20 = *v9;
        }
        else if ( *(_BYTE *)(a1 + 36) == 37 )
        {
          v10 = (size_t *)(*a2)++;
          v20 = *v10;
        }
        else
        {
          sub_3F3D0((_DWORD *)a1);
          if ( *(_DWORD *)(a1 + 76) )
            v11 = 0;
          else
            v11 = strlen(s);
          v20 = v11;
        }
        if ( !*(_DWORD *)(a1 + 76) && strbuffer_append_bytes((int)&v16, s, v20) == -1 )
        {
          sub_3F404((int *)a1, "<internal>", 1, "Out of memory");
          *(_DWORD *)(a1 + 76) = 1;
        }
        sub_3F2C8((_DWORD *)a1);
      }
      while ( *(_BYTE *)(a1 + 36) == 43 );
      sub_3F3D0((_DWORD *)a1);
      if ( *(_DWORD *)(a1 + 76) )
      {
        strbuffer_close((strbuffer_t *)&v16);
        return 0;
      }
      else if ( utf8_check_string(v16, v17) )
      {
        *a4 = v17;
        *a5 = 1;
        return (char *)strbuffer_steal_value(&v16);
      }
      else
      {
        sub_3F404((int *)a1, "<args>", 5, "Invalid UTF-8 %s");
        strbuffer_close((strbuffer_t *)&v16);
        *(_DWORD *)(a1 + 76) = 1;
        return 0;
      }
    }
  }
  else
  {
    v6 = (*a2)++;
    s = *v6;
    if ( s )
    {
      v20 = strlen(s);
      if ( utf8_check_string((int)s, v20) )
      {
        *a4 = v20;
        return s;
      }
      else
      {
        sub_3F404((int *)a1, "<args>", 5, "Invalid UTF-8 %s");
        *(_DWORD *)(a1 + 76) = 1;
        return 0;
      }
    }
    else
    {
      if ( !a6 )
      {
        sub_3F404((int *)a1, "<args>", 12, "NULL %s");
        *(_DWORD *)(a1 + 76) = 1;
      }
      return 0;
    }
  }
}
