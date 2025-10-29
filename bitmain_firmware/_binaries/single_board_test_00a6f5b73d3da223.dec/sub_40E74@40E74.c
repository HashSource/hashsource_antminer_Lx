int __fastcall sub_40E74(
        _DWORD *a1,
        int a2,
        int a3,
        hashtable_t *a4,
        int (__fastcall *a5)(const char *, int, int),
        int a6)
{
  double v6; // d0
  __int64 v8; // r0
  const char *v9; // r4
  size_t v10; // r0
  _DWORD *v11; // r0
  const char **v12; // r4
  size_t v13; // r0
  size_t v14; // r0
  _DWORD *v15; // r0
  unsigned int v19; // [sp+10h] [bp+8h]
  char s[100]; // [sp+1Ch] [bp+14h] BYREF
  char v22[12]; // [sp+80h] [bp+78h] BYREF
  char v23[12]; // [sp+8Ch] [bp+84h] BYREF
  char *v24; // [sp+98h] [bp+90h]
  void *v25; // [sp+9Ch] [bp+94h]
  json_t *v26; // [sp+A0h] [bp+98h]
  char *v27; // [sp+A4h] [bp+9Ch]
  void *base; // [sp+A8h] [bp+A0h]
  size_t nmemb; // [sp+ACh] [bp+A4h]
  size_t v30; // [sp+B0h] [bp+A8h]
  int v31; // [sp+B4h] [bp+ACh]
  double v32; // [sp+B8h] [bp+B0h]
  unsigned int v33; // [sp+C4h] [bp+BCh]
  int v34; // [sp+C8h] [bp+C0h]
  size_t i; // [sp+CCh] [bp+C4h]
  int v36; // [sp+D0h] [bp+C8h]
  const char *v37; // [sp+D4h] [bp+CCh]
  void *v38; // [sp+D8h] [bp+D0h]
  size_t j; // [sp+DCh] [bp+D4h]

  v34 = a2 & 0x10000;
  v19 = a2 & 0xFFFEFFFF;
  if ( a1 )
  {
    switch ( *a1 )
    {
      case 0:
        if ( (a2 & 0x20) != 0 )
        {
          v37 = ":";
          v36 = 1;
        }
        else
        {
          v37 = ": ";
          v36 = 2;
        }
        if ( sub_40E24(a4, a1, v22, 0xBu) )
          return -1;
        v38 = json_object_iter((json_t *)a1);
        if ( !v34 && a5("{", 1, a6) )
          return -1;
        if ( v38 )
        {
          if ( sub_40B40(v19, a3 + 1, 0, a5, a6) )
            return -1;
          if ( (v19 & 0x80) == 0 )
          {
            while ( 1 )
            {
              if ( !v38 )
                goto LABEL_82;
              v25 = json_object_iter_next((json_t *)a1, v38);
              v24 = (char *)json_object_iter_key(v38);
              v14 = strlen(v24);
              sub_40BEC(v24, v14, a5, a6, v19);
              if ( a5(v37, v36, a6) )
                return -1;
              v15 = (_DWORD *)json_object_iter_value((int)v38);
              if ( sub_40E74(v15, v19, a3 + 1, a4, a5, a6) )
                return -1;
              if ( v25 )
              {
                if ( a5(",", 1, a6) || sub_40B40(v19, a3 + 1, 1, a5, a6) )
                  return -1;
              }
              else if ( sub_40B40(v19, a3, 0, a5, a6) )
              {
                return -1;
              }
              v38 = v25;
            }
          }
          nmemb = json_object_size((const json_t *)a1);
          base = jsonp_malloc(4 * nmemb);
          if ( !base )
            return -1;
          i = 0;
          while ( v38 )
          {
            v12 = (const char **)((char *)base + 4 * i);
            *v12 = json_object_iter_key(v38);
            v38 = json_object_iter_next((json_t *)a1, v38);
            ++i;
          }
          qsort(base, nmemb, 4u, (__compar_fn_t)compare_keys);
          for ( i = 0; i < nmemb; ++i )
          {
            v27 = (char *)*((_DWORD *)base + i);
            v26 = json_object_get((const json_t *)a1, v27);
            v13 = strlen(v27);
            sub_40BEC(v27, v13, a5, a6, v19);
            if ( a5(v37, v36, a6) || sub_40E74(v26, v19, a3 + 1, a4, a5, a6) )
            {
LABEL_67:
              jsonp_free(base);
              return -1;
            }
            if ( nmemb - 1 <= i )
            {
              if ( sub_40B40(v19, a3, 0, a5, a6) )
                goto LABEL_67;
            }
            else if ( a5(",", 1, a6) || sub_40B40(v19, a3 + 1, 1, a5, a6) )
            {
              goto LABEL_67;
            }
          }
          jsonp_free(base);
LABEL_82:
          hashtable_del((int)a4, v22);
          if ( v34 )
            return 0;
        }
        else
        {
          hashtable_del((int)a4, v22);
          if ( v34 )
            return 0;
        }
        return a5("}", 1, a6);
      case 1:
        if ( sub_40E24(a4, a1, v23, 0xBu) )
          return -1;
        v30 = json_array_size((const json_t *)a1);
        if ( !v34 && a5("[", 1, a6) )
          return -1;
        if ( v30 )
        {
          if ( sub_40B40(v19, a3 + 1, 0, a5, a6) )
            return -1;
          for ( j = 0; j < v30; ++j )
          {
            v11 = (_DWORD *)json_array_get(a1, j);
            if ( sub_40E74(v11, v19, a3 + 1, a4, a5, a6) )
              return -1;
            if ( v30 - 1 <= j )
            {
              if ( sub_40B40(v19, a3, 0, a5, a6) )
                return -1;
            }
            else if ( a5(",", 1, a6) || sub_40B40(v19, a3 + 1, 1, a5, a6) )
            {
              return -1;
            }
          }
          hashtable_del((int)a4, v23);
          if ( v34 )
            return 0;
        }
        else
        {
          hashtable_del((int)a4, v23);
          if ( v34 )
            return 0;
        }
        return a5("]", 1, a6);
      case 2:
        v9 = json_string_value((const json_t *)a1);
        v10 = json_string_length((const json_t *)a1);
        return sub_40BEC(v9, v10, a5, a6, v19);
      case 3:
        v8 = json_integer_value(a1);
        v33 = snprintf(s, 0x64u, "%lld", v8);
        if ( v33 < 0x64 )
          return a5(s, v33, a6);
        else
          return -1;
      case 4:
        json_real_value((const json_t *)a1);
        v32 = v6;
        v31 = jsonp_dtostr(s, 0x64u, (unsigned __int16)v19 >> 11);
        if ( v31 >= 0 )
          return a5(s, v31, a6);
        else
          return -1;
      case 5:
        return a5("true", 4, a6);
      case 6:
        return a5("false", 5, a6);
      case 7:
        return a5("null", 4, a6);
      default:
        return -1;
    }
  }
  return -1;
}
