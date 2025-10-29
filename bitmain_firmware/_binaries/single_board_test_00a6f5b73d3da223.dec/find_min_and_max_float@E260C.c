int __fastcall find_min_and_max_float(int result, int a2, float *a3, float *a4)
{
  int i; // [sp+14h] [bp+14h]
  float v5; // [sp+18h] [bp+18h]
  float v6; // [sp+1Ch] [bp+1Ch]

  v6 = INFINITY;
  v5 = -INFINITY;
  for ( i = 0; i < a2; ++i )
  {
    if ( *(float *)(4 * i + result) < v6 )
      v6 = *(float *)(4 * i + result);
    if ( *(float *)(4 * i + result) > v5 )
      v5 = *(float *)(4 * i + result);
  }
  *a3 = v6;
  *a4 = v5;
  return result;
}
