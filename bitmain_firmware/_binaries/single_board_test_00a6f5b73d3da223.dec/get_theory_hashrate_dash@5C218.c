int __fastcall get_theory_hashrate_dash(int a1, double *a2)
{
  if ( *(_BYTE *)(a1 + 310) )
  {
    *a2 = *(double *)(a1 + 312);
    return 0;
  }
  else
  {
    if ( !strcmp((const char *)(a1 + 216), "D7") )
    {
      *a2 = 3.79e11;
    }
    else if ( !strcmp((const char *)(a1 + 216), "D7e") )
    {
      *a2 = 3.6e11;
    }
    else
    {
      *a2 = *(float *)(a1 + 760) * 700.0 * 1000.0 * 1000.0 * 0.98;
    }
    return 8;
  }
}
