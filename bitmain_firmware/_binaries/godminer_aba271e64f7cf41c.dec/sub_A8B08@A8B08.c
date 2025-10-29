int __fastcall sub_A8B08(int a1, unsigned int a2, unsigned __int64 a3, unsigned int a4)
{
  int v5; // r2
  unsigned __int64 v6; // r0
  unsigned int v9; // [sp+8h] [bp-5Ch]
  int v11; // [sp+14h] [bp-50h]
  __int64 v12; // [sp+18h] [bp-4Ch]
  __int64 v13; // [sp+20h] [bp-44h]
  __int64 v14; // [sp+28h] [bp-3Ch]
  __int64 v15; // [sp+30h] [bp-34h]
  __int64 v16; // [sp+38h] [bp-2Ch]
  __int64 v17; // [sp+40h] [bp-24h]
  _BYTE v18[13]; // [sp+48h] [bp-1Ch] BYREF
  unsigned int j; // [sp+58h] [bp-Ch]
  unsigned int i; // [sp+5Ch] [bp-8h]

  v9 = a2;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  memset(v18, 0, sizeof(v18));
  if ( (int)a4 <= 1 || a4 > 0x24 || !a2 )
    return 0;
  if ( a2 > 0x41 )
    v9 = 65;
  for ( i = 0; i < v9 - 1; ++i )
  {
    sub_CCDFC(a3, (int)a4);
    *((_BYTE *)&v11 + i) = a0123456789abcd[v5];
    LODWORD(v6) = sub_CCDFC(a3, (int)a4);
    a3 = v6;
  }
  if ( a3 )
    return 0;
  for ( j = 0; j < v9 - 1; ++j )
    *(_BYTE *)(a1 + j) = *((_BYTE *)&v11 + v9 - j - 2);
  *(_BYTE *)(a1 + v9 - 1) = 0;
  return 1;
}
