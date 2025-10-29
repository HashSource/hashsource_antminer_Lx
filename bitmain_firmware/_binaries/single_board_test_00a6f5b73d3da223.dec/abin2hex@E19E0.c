void *__fastcall abin2hex(int a1, unsigned int a2)
{
  void *v6; // [sp+Ch] [bp+Ch]

  v6 = malloc(2 * a2 + 1);
  if ( !v6 )
    return 0;
  bin2hex((int)v6, a1, a2);
  return v6;
}
