void *__fastcall json_vpack_ex(json_error_t *a1, int a2, _BYTE *a3, int a4)
{
  double v5; // r0
  int v11; // [sp+18h] [bp+10h] BYREF
  int v12[9]; // [sp+1Ch] [bp+14h] BYREF
  char v13; // [sp+40h] [bp+38h]
  void *v14; // [sp+6Ch] [bp+64h]

  if ( a3 && *a3 )
  {
    jsonp_error_init(a1, 0);
    sub_3F254(v12, (int)a1, a2, (int)a3);
    sub_3F2C8(v12);
    v11 = a4;
    HIDWORD(v5) = &v11;
    LODWORD(v5) = v12;
    v14 = sub_3FB38(v5);
    if ( v14 )
    {
      sub_3F2C8(v12);
      if ( v13 )
      {
        sub_3F210((int)v14);
        sub_3F404(v12, "<format>", 9, "Garbage after format string");
        return 0;
      }
      else
      {
        return v14;
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
