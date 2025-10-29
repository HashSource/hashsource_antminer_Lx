double *__fastcall sub_42FAC(int *a1)
{
  double *v4; // [sp+14h] [bp-8h]

  v4 = json_real();
  if ( v4 )
  {
    if ( json_real_set((int)v4) )
    {
      sub_42190((int)v4);
      sub_4250C(a1, "<args>", 15, "Invalid floating point value");
      a1[19] = 1;
      return 0;
    }
    else
    {
      return v4;
    }
  }
  else
  {
    sub_4250C(a1, "<internal>", 1, "Out of memory");
    a1[19] = 1;
    return 0;
  }
}
