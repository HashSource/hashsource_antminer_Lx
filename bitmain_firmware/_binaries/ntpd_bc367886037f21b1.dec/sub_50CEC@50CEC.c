int __fastcall sub_50CEC(_BYTE *a1, _DWORD *a2, int a3, int a4)
{
  int v5; // r1
  const char *v7; // r0
  int v8; // lr
  const char *v9; // r12
  int v10; // t1
  int v11; // r0
  char v13; // r2
  char v14; // r1
  unsigned int v15; // [sp+14h] [bp-1Ch] BYREF
  unsigned int v16; // [sp+18h] [bp-18h] BYREF
  unsigned int v17; // [sp+1Ch] [bp-14h] BYREF
  int v18; // [sp+20h] [bp-10h] BYREF
  int v19; // [sp+24h] [bp-Ch] BYREF
  int v20; // [sp+28h] [bp-8h] BYREF

  v5 = *(_DWORD *)(a3 + 12);
  if ( a4 < v5 )
  {
    v7 = *(const char **)a3;
    v5 = 0;
    *(_DWORD *)(a3 + 12) = 0;
    *(_DWORD *)(a3 + 4) = v7;
  }
  else
  {
    v7 = *(const char **)(a3 + 4);
    if ( a4 <= v5 )
      goto LABEL_9;
  }
  v8 = *(unsigned __int8 *)v7;
  if ( *v7 )
  {
    v9 = v7 + 1;
    do
    {
      if ( v8 == 44 )
        ++v5;
      *(_DWORD *)(a3 + 4) = v9;
      *(_DWORD *)(a3 + 12) = v5;
      v7 = v9;
      if ( a4 <= v5 )
        break;
      v10 = *(unsigned __int8 *)v9++;
      v8 = v10;
    }
    while ( v10 );
  }
LABEL_9:
  v11 = sscanf(v7, "%2u%2u%2u%n.%3lu%n", &v15, &v16, &v17, &v18, &v20, &v19);
  if ( v11 <= 2 )
    return 0;
  if ( v18 != 6 )
    return 0;
  if ( v15 > 0x17 )
    return 0;
  v13 = v16;
  if ( v16 > 0x3B )
    return 0;
  v14 = v17;
  if ( v17 > 0x3C )
    return 0;
  a1[6] = v15;
  a1[7] = v13;
  a1[8] = v14;
  if ( v11 == 4 )
    *a2 = v20 * dword_98DD8[v19 - 7];
  else
    *a2 = 0;
  return 1;
}
