int __fastcall json_vunpack_ex(const json_t *a1, json_error_t *a2, int a3, _BYTE *a4, char **a5)
{
  char **v11; // [sp+1Ch] [bp+14h] BYREF
  int v12[9]; // [sp+20h] [bp+18h] BYREF
  char v13; // [sp+44h] [bp+3Ch]

  if ( a1 )
  {
    if ( a4 && *a4 )
    {
      jsonp_error_init(a2, 0);
      sub_3F254(v12, (int)a2, a3, (int)a4);
      sub_3F2C8(v12);
      v11 = a5;
      if ( sub_40294((int)v12, a1, &v11) )
      {
        return -1;
      }
      else
      {
        sub_3F2C8(v12);
        if ( v13 )
        {
          sub_3F404(v12, "<format>", 9, "Garbage after format string");
          return -1;
        }
        else
        {
          return 0;
        }
      }
    }
    else
    {
      jsonp_error_init(a2, "<format>");
      jsonp_error_set((int)a2, -1, -1, 0, 4, "NULL or empty format string");
      return -1;
    }
  }
  else
  {
    jsonp_error_init(a2, "<root>");
    jsonp_error_set((int)a2, -1, -1, 0, 12, "NULL root value");
    return -1;
  }
}
