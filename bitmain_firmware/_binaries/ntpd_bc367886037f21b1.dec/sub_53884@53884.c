__int16 *__fastcall sub_53884(int a1)
{
  int v1; // r7
  int v2; // r5
  int *v3; // r4
  __int16 *result; // r0
  int v5; // r2
  int v6; // r12
  int v7; // r1
  int v8; // r3
  int v9; // r3
  int v10; // r2
  bool v11; // zf
  unsigned int v12; // s15
  int v13; // r1
  char v14; // [sp+22h] [bp-2Eh] BYREF
  char v15; // [sp+23h] [bp-2Dh] BYREF
  unsigned int v16; // [sp+24h] [bp-2Ch] BYREF
  _DWORD v17[2]; // [sp+28h] [bp-28h] BYREF
  char v18; // [sp+30h] [bp-20h] BYREF
  char v19; // [sp+3Ch] [bp-14h] BYREF
  char v20; // [sp+45h] [bp-Bh]
  char v21; // [sp+48h] [bp-8h]

  v1 = *(_DWORD *)(a1 + 4);
  v2 = *(_DWORD *)(v1 + 84);
  v3 = *(int **)v2;
  result = (__int16 *)sub_39BB4(a1, *(bool **)(*(_DWORD *)v2 + 4), v2 + 182 - *(_DWORD *)(*(_DWORD *)v2 + 4), v17);
  v5 = v3[1];
  v3[1] = (int)result + v5 + 1;
  *((_BYTE *)result + v5) = 32;
  v6 = v2 + 56;
  *(_BYTE *)v3[1] = 0;
  if ( *v3 )
  {
    v9 = *v3 + 1;
    v10 = v3[1];
    *v3 = v9;
    *(_DWORD *)(v2 + 184) = v10 - v6;
    if ( v9 > 2 )
    {
      if ( v10 - v6 > 45
        && sscanf(
             (const char *)(v2 + 56),
             "%c%2d:%2d:%2d.%3ld%c %9s%3d%13s%4ld",
             &v14,
             v2 + 196,
             v2 + 200,
             v2 + 204,
             v2 + 208,
             &v15,
             &v18,
             v2 + 192,
             &v19,
             &v16) == 10 )
      {
        v11 = v20 == 56;
        *(_DWORD *)(v2 + 208) *= (_DWORD)&unk_F4240;
        if ( !v11 )
          *(_BYTE *)(v2 + 40) = 3;
        if ( v21 == 72 )
          *(_DWORD *)(v2 + 764) = *(_DWORD *)"WWVH";
        else
          strcpy((char *)(v2 + 764), "WWV");
        if ( *(unsigned __int8 *)(v1 + 93) <= 1u )
          *(_DWORD *)(v1 + 112) = *(_DWORD *)(v2 + 764);
        v12 = v16;
        if ( !v16 )
        {
          v13 = *(_DWORD *)(v2 + 236);
          *(_DWORD *)(v2 + 224) = *(_DWORD *)(v2 + 232);
          *(_DWORD *)(v2 + 228) = v13;
        }
        *(double *)(v2 + 248) = (double)v12 * 0.00001 * 60.0;
        result = (__int16 *)sub_399D0((_DWORD *)v2);
        if ( result )
        {
          if ( *(double *)(v1 + 632) > 1.5 )
            return (__int16 *)sub_39A1C(v1);
        }
        else
        {
          return sub_3918C((__int16 *)v1, 6);
        }
      }
      else
      {
        return sub_3918C((__int16 *)v1, 2);
      }
    }
  }
  else
  {
    result = (__int16 *)v17[0];
    v7 = v17[1];
    v8 = v3[1];
    *(_DWORD *)(v2 + 232) = v17[0];
    *(_DWORD *)(v2 + 236) = v7;
    *v3 = 1;
    *(_DWORD *)(v2 + 184) = v8 - v6;
  }
  return result;
}
