const char *__fastcall sub_1BF54(const char *a1, char a2)
{
  int v4; // r4
  int v5; // r3
  char v7[20]; // [sp+0h] [bp-28h] BYREF
  __int16 v8[10]; // [sp+14h] [bp-14h] BYREF

  v4 = 0;
  do
  {
    while ( 1 )
    {
      v5 = dword_A0D68 + 4 * v4++;
      if ( *(_DWORD *)(v5 + 4) == 1 )
        break;
      if ( v4 == 16 )
        return a1;
    }
    sprintf(v7, "chain_opencore_%d", v4);
    v8[0] = 49;
    a1 = sub_43D2C((int)a1, v7, (const char *)v8, a2);
  }
  while ( v4 != 16 );
  return a1;
}
