int __fastcall sub_40294(int a1, const json_t *a2, char ***a3)
{
  __int64 v3; // d0
  char **v5; // r3
  char **v6; // r3
  char **v7; // r3
  char **v8; // r3
  char **v9; // r3
  char **v10; // r3
  char **v11; // r3
  char **v12; // r3
  char *v17; // [sp+1Ch] [bp+14h]
  char *v18; // [sp+20h] [bp+18h]
  char *v19; // [sp+28h] [bp+20h]
  char *v20; // [sp+2Ch] [bp+24h]
  _DWORD *v21; // [sp+30h] [bp+28h]
  _DWORD *v22; // [sp+34h] [bp+2Ch]

  switch ( *(_BYTE *)(a1 + 36) )
  {
    case 'F':
      if ( !a2 || *(_DWORD *)a2 == 3 || *(_DWORD *)a2 == 4 )
      {
        if ( (*(_DWORD *)(a1 + 60) & 1) == 0 )
        {
          v11 = (*a3)++;
          v17 = *v11;
          if ( a2 )
          {
            json_number_value(a2);
            *(_QWORD *)v17 = v3;
          }
        }
        return 0;
      }
      else
      {
        sub_3F404((int *)a1, "<validation>", 10, "Expected real or integer, got %s");
        return -1;
      }
    case 'I':
      if ( a2 && *(_DWORD *)a2 != 3 )
        goto LABEL_20;
      if ( (*(_DWORD *)(a1 + 60) & 1) == 0 )
      {
        v8 = (*a3)++;
        if ( a2 )
        {
          v19 = *v8;
          *(_QWORD *)v19 = json_integer_value(a2);
        }
      }
      return 0;
    case 'O':
      if ( a2 && (*(_DWORD *)(a1 + 60) & 1) == 0 )
        sub_3F1D0((int)a2);
      goto LABEL_57;
    case '[':
      return sub_40088(a1, a2, a3);
    case 'b':
      if ( !a2 || *(_DWORD *)a2 == 5 || *(_DWORD *)a2 == 6 )
      {
        if ( (*(_DWORD *)(a1 + 60) & 1) == 0 )
        {
          v9 = (*a3)++;
          if ( a2 )
            *(_DWORD *)*v9 = *(_DWORD *)a2 == 5;
        }
        return 0;
      }
      else
      {
        sub_3F404((int *)a1, "<validation>", 10, "Expected true or false, got %s");
        return -1;
      }
    case 'f':
      if ( !a2 || *(_DWORD *)a2 == 4 )
      {
        if ( (*(_DWORD *)(a1 + 60) & 1) == 0 )
        {
          v10 = (*a3)++;
          v18 = *v10;
          if ( a2 )
          {
            json_real_value(a2);
            *(_QWORD *)v18 = v3;
          }
        }
        return 0;
      }
      else
      {
        sub_3F404((int *)a1, "<validation>", 10, "Expected real, got %s");
        return -1;
      }
    case 'i':
      if ( !a2 || *(_DWORD *)a2 == 3 )
      {
        if ( (*(_DWORD *)(a1 + 60) & 1) == 0 )
        {
          v7 = (*a3)++;
          if ( a2 )
          {
            v20 = *v7;
            *(_DWORD *)v20 = json_integer_value(a2);
          }
        }
        return 0;
      }
      else
      {
LABEL_20:
        sub_3F404((int *)a1, "<validation>", 10, "Expected integer, got %s");
        return -1;
      }
    case 'n':
      if ( !a2 || *(_DWORD *)a2 == 7 )
        return 0;
      sub_3F404((int *)a1, "<validation>", 10, "Expected null, got %s");
      return -1;
    case 'o':
LABEL_57:
      if ( (*(_DWORD *)(a1 + 60) & 1) == 0 )
      {
        v12 = (*a3)++;
        if ( a2 )
          *(_DWORD *)*v12 = a2;
      }
      return 0;
    case 's':
      if ( a2 && *(_DWORD *)a2 != 2 )
      {
        sub_3F404((int *)a1, "<validation>", 10, "Expected string, got %s");
        return -1;
      }
      if ( (*(_DWORD *)(a1 + 60) & 1) != 0 )
        return 0;
      v22 = 0;
      v5 = (*a3)++;
      v21 = *v5;
      if ( !*v5 )
      {
        sub_3F404((int *)a1, "<args>", 12, "NULL string argument");
        return -1;
      }
      sub_3F2C8((_DWORD *)a1);
      if ( *(_BYTE *)(a1 + 36) == 37 )
      {
        v6 = (*a3)++;
        v22 = *v6;
        if ( !*v6 )
        {
          sub_3F404((int *)a1, "<args>", 12, "NULL string length argument");
          return -1;
        }
      }
      else
      {
        sub_3F3D0((_DWORD *)a1);
      }
      if ( a2 )
      {
        *v21 = json_string_value(a2);
        if ( v22 )
          *v22 = json_string_length(a2);
      }
      return 0;
    case '{':
      return sub_3FD24(a1, a2, a3);
    default:
      sub_3F404((int *)a1, "<format>", 9, "Unexpected format character '%c'");
      return -1;
  }
}
