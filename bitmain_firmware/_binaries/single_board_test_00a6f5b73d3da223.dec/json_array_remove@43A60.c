int __fastcall json_array_remove(_DWORD *a1, unsigned int a2)
{
  if ( !a1 || *a1 != 1 )
    return -1;
  if ( a1[3] <= a2 )
    return -1;
  sub_42F24(*(_DWORD *)(4 * a2 + a1[4]));
  if ( a1[3] - 1 > a2 )
    sub_43808((int)a1, a2, a2 + 1, a1[3] - a2 - 1);
  --a1[3];
  return 0;
}
