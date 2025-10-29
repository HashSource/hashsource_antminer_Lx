unsigned int __fastcall sub_97FB0(unsigned __int8 a1, const char *a2)
{
  const char *v6; // [sp+14h] [bp-8h]

  v6 = a2;
  do
    ++v6;
  while ( *v6 != 32 );
  *v6 = 0;
  if ( !atoi(a2) )
    return 0;
  if ( atoi(a2) > 4000000 )
    dword_15F93C[a1] = atoi(a2);
  return 10 * ((unsigned int)(float)(6.0e10 / (float)(unsigned int)(2 * dword_15F93C[a1])) / 0xA);
}
