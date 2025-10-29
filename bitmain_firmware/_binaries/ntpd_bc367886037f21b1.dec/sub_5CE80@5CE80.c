__int16 *__fastcall sub_5CE80(int a1)
{
  int v1; // r7
  int *v2; // r4
  const char *v3; // r5
  int v4; // r8
  __int16 *result; // r0
  __int16 *v6; // r3
  int v7; // r1
  int v8; // r1
  int v9; // r6
  int v10; // r3
  int v11; // r2
  int v12; // r3
  size_t v13; // r2
  __int16 *v14; // r1
  int v15; // r2
  int v16; // r5
  char *v17; // r11
  __int16 *v18; // r3
  size_t v19; // r0
  int v20; // r3
  int v21; // r7
  int v22; // r3
  __int16 *v23; // [sp+10h] [bp-1Ch]
  int v24; // [sp+14h] [bp-18h]
  _DWORD v25[2]; // [sp+1Ch] [bp-10h] BYREF

  v1 = *(_DWORD *)(a1 + 4);
  v2 = *(int **)(v1 + 84);
  v3 = (const char *)(v2 + 14);
  v4 = *v2;
  result = (__int16 *)sub_39BB4(a1, (bool *)v2 + 56, 128, v25);
  v2[46] = (int)result;
  if ( result )
  {
    v6 = result;
    if ( (v2[192] & 2) != 0 )
    {
      v7 = v25[1];
      v2[58] = v25[0];
      v2[59] = v7;
    }
    v8 = *(_DWORD *)(v4 + 204);
    if ( v8 <= 0 )
    {
      if ( result == (__int16 *)((char *)&dword_0 + 1) )
      {
        result = (__int16 *)strtol(v3, 0, 10);
        *(_DWORD *)(v4 + 204) = result;
      }
      else
      {
        v9 = v4 + 4;
        sub_41CA4(v1 + 16, (const char *)(v4 + 4));
        *(_BYTE *)(v4 + 4) = 0;
        v10 = v2[46];
        *(_DWORD *)v4 = v4 + 4;
        if ( v10 > 18
          && sscanf(v3, "%2d:%3d:%2d:%2d:%2d.%3ld", v2 + 47, v2 + 48, v2 + 49, v2 + 50, v2 + 51, v2 + 52) == 6 )
        {
          v11 = *((unsigned __int8 *)v2 + 58);
          v12 = (_DWORD)&unk_F4240 * v2[52];
          if ( v11 == 58 )
            *((_BYTE *)v2 + 40) = 0;
          v2[52] = v12;
          if ( v11 != 58 )
            *((_BYTE *)v2 + 40) = 3;
          if ( sub_399D0(v2) )
          {
            result = *(__int16 **)v4;
            v13 = v2[46];
            if ( (int)(*(_DWORD *)v4 - v9 + v13) <= 198 )
            {
              result = (__int16 *)memcpy(result, v3, v13);
              v14 = *(__int16 **)v4;
              v15 = v2[46];
              v16 = *(_DWORD *)v4 + v15;
              *(_DWORD *)v4 = v16;
              v24 = v15;
              v23 = v14;
              if ( (v2[192] & 8) != 0 )
              {
                result = (__int16 *)strlen(&aItf[30 * *(_DWORD *)(v4 + 208)]);
                if ( (int)result + v16 - v9 + 1 <= 198 )
                {
                  *(_DWORD *)v4 = v16 + 1;
                  v17 = (char *)result - 1;
                  *((_BYTE *)v23 + v24) = 32;
                  memcpy(*(void **)v4, &aItf[30 * *(_DWORD *)(v4 + 208)], (size_t)result);
                  v18 = *(__int16 **)v4;
                  *(_DWORD *)v4 += v17;
                  v17[(_DWORD)v18] = 0;
                  v19 = strlen(&aItf[30 * *(_DWORD *)(v4 + 208)]);
                  result = (__int16 *)write(v2[7], &aItf[30 * *(_DWORD *)(v4 + 208)], v19);
                  v20 = *(_DWORD *)(v4 + 208) + 1;
                  *(_DWORD *)(v4 + 208) = v20;
                  v21 = 30 * v20;
                  v22 = (unsigned __int8)aItf[30 * v20];
                  if ( !aItf[v21] )
                    *(_DWORD *)(v4 + 208) = v22;
                }
              }
            }
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
      result = *(__int16 **)v4;
      *(_DWORD *)(v4 + 204) = v8 - 1;
      if ( (int)v6 + (int)result - v4 - 4 <= 198 )
      {
        *(_DWORD *)v4 = (char *)result + 1;
        *(_BYTE *)result = 32;
        result = (__int16 *)memcpy(*(void **)v4, v3, v2[46] + 1);
        *(_DWORD *)v4 += v2[46];
      }
    }
  }
  return result;
}
