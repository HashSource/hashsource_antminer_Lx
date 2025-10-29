// local variable allocation has failed, the output may be wrong!
double __cdecl json_number_value(const json_t *json)
{
  __int64 v1; // r0
  double result; // r0

  if ( json && *(_DWORD *)json == 3 )
  {
    LODWORD(v1) = json_integer_value(json);
    json = (const json_t *)sub_1A3C1C(v1);
  }
  else if ( json && *(_DWORD *)json == 4 )
  {
    *(double *)&json = json_real_value(json);
  }
  LODWORD(result) = json;
  return result;
}
