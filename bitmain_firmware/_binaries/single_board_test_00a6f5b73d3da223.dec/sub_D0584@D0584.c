int __fastcall sub_D0584(unsigned int a1, unsigned int a2)
{
  unsigned int v4; // [sp+4h] [bp+4h]
  int v5; // [sp+Ch] [bp+Ch]

  v4 = a1;
  v5 = 0;
  if ( !a1 )
    return 1;
  while ( 1 )
  {
    v4 /= a2;
    if ( !v4 )
      break;
    ++v5;
  }
  return v5;
}
