int sub_69270()
{
  int result; // r0
  unsigned int v1; // r4

  result = sub_40B58(0);
  if ( blocking_children_alloc )
  {
    v1 = 0;
    do
    {
      result = *(_DWORD *)(blocking_children + 4 * v1);
      if ( result )
        result = sub_6E718(result);
      ++v1;
    }
    while ( blocking_children_alloc > v1 );
  }
  return result;
}
