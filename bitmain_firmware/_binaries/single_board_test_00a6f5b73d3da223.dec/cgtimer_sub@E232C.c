_DWORD *__fastcall cgtimer_sub(_DWORD *result, _DWORD *a2, _DWORD *a3)
{
  *a3 = *result - *a2;
  a3[1] = result[1] - a2[1];
  if ( (int)a3[1] < 0 )
  {
    --*a3;
    a3[1] += 1000000;
  }
  return result;
}
