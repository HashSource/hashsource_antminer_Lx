char *__fastcall sub_1EE84(const char *a1, int a2, int a3)
{
  size_t v5; // r0
  int v6; // r2
  int v7; // r1
  _DWORD v9[6]; // [sp+4h] [bp-1Ch] BYREF

  v9[0] = a1;
  v5 = strlen(a1);
  v6 = a3;
  if ( a3 )
    v6 = 1;
  v9[2] = "=";
  if ( !a2 )
    v6 = 0;
  if ( v6 )
  {
    v9[4] = a2;
    v7 = 3;
  }
  else
  {
    v7 = 2;
  }
  v9[3] = 1;
  if ( v6 )
    v9[5] = a3;
  v9[1] = v5;
  return sub_1EC64((char *)v9, v7, 0);
}
