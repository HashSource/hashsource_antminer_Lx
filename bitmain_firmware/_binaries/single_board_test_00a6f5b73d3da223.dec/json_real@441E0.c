_QWORD *__fastcall json_real(double a1)
{
  __int64 v1; // d0
  double v2; // r0
  _QWORD *v5; // [sp+Ch] [bp+Ch]

  LODWORD(v2) = _isnan(a1);
  if ( LODWORD(v2) || _isinf(v2) )
    return 0;
  v5 = jsonp_malloc(0x10u);
  if ( !v5 )
    return 0;
  json_init(v5, 4);
  v5[1] = v1;
  return v5;
}
