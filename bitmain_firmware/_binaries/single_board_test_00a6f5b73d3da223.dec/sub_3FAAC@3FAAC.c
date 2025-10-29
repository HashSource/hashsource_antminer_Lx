_QWORD *__fastcall sub_3FAAC(double a1)
{
  double v1; // r0
  int *v4; // [sp+Ch] [bp+Ch]
  _QWORD *v5; // [sp+14h] [bp+14h]

  v4 = (int *)LODWORD(a1);
  v5 = json_real(a1);
  if ( v5 )
  {
    LODWORD(v1) = v5;
    if ( json_real_set(v1) )
    {
      sub_3F210((int)v5);
      sub_3F404(v4, "<args>", 15, "Invalid floating point value");
      v4[19] = 1;
      return 0;
    }
    else
    {
      return v5;
    }
  }
  else
  {
    sub_3F404(v4, "<internal>", 1, "Out of memory");
    v4[19] = 1;
    return 0;
  }
}
