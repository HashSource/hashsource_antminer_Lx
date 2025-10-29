json_t *__fastcall json_vpack_ex(json_error_t *a1, int a2, _BYTE *a3, int *a4)
{
  int *v10; // [sp+18h] [bp-5Ch] BYREF
  int v11[9]; // [sp+1Ch] [bp-58h] BYREF
  char v12; // [sp+40h] [bp-34h]
  json_t *v13; // [sp+6Ch] [bp-8h]

  if ( a3 && *a3 )
  {
    jsonp_error_init(a1, 0);
    sub_421F8(v11, (int)a1, a2, (int)a3);
    sub_422CC(v11);
    v10 = a4;
    v13 = sub_43068((int)v11, &v10);
    if ( v13 )
    {
      sub_422CC(v11);
      if ( v12 )
      {
        sub_42190((int)v13);
        sub_4250C(v11, "<format>", 9, "Garbage after format string");
        return 0;
      }
      else
      {
        return v13;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    jsonp_error_init(a1, "<format>");
    jsonp_error_set((int)a1, -1, -1, 0, 4, "NULL or empty format string");
    return 0;
  }
}
