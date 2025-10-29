int __fastcall sub_40088(int a1, const json_t *a2, char ***a3)
{
  int v4; // r3
  int v5; // r0
  const json_t *v10; // [sp+1Ch] [bp+14h]
  _BOOL4 v11; // [sp+20h] [bp+18h]
  unsigned int v12; // [sp+24h] [bp+1Ch]

  v12 = 0;
  v11 = 0;
  if ( !a2 || *(_DWORD *)a2 == 1 )
  {
    sub_3F2C8((_DWORD *)a1);
    while ( *(_BYTE *)(a1 + 36) != 93 )
    {
      if ( v11 )
      {
        sub_3F404((int *)a1, "<format>", 9, "Expected ']' after '%c', got '%c'");
        return -1;
      }
      if ( !*(_BYTE *)(a1 + 36) )
      {
        sub_3F404((int *)a1, "<format>", 9, "Unexpected end of format string");
        return -1;
      }
      if ( *(_BYTE *)(a1 + 36) == 33 || *(_BYTE *)(a1 + 36) == 42 )
      {
        if ( *(_BYTE *)(a1 + 36) == 33 )
          v4 = 1;
        else
          v4 = -1;
        v11 = v4;
        sub_3F2C8((_DWORD *)a1);
      }
      else
      {
        if ( !strchr("{[siIbfFOon", *(unsigned __int8 *)(a1 + 36)) )
        {
          sub_3F404((int *)a1, "<format>", 9, "Unexpected format character '%c'");
          return -1;
        }
        if ( a2 )
        {
          v10 = (const json_t *)json_array_get(a2, v12);
          if ( !v10 )
          {
            sub_3F404((int *)a1, "<validation>", 17, "Array index %lu out of range");
            return -1;
          }
          v5 = sub_40294(a1, v10, a3);
        }
        else
        {
          v5 = sub_40294(a1, 0, a3);
        }
        if ( v5 )
          return -1;
        sub_3F2C8((_DWORD *)a1);
        ++v12;
      }
    }
    if ( !v11 )
      v11 = (*(_DWORD *)(a1 + 60) & 2) != 0;
    if ( a2 && v11 && json_array_size(a2) != v12 )
    {
      json_array_size(a2);
      sub_3F404((int *)a1, "<validation>", 7, "%li array item(s) left unpacked");
      return -1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    sub_3F404((int *)a1, "<validation>", 10, "Expected array, got %s");
    return -1;
  }
}
