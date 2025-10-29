char *__fastcall base64_decode(char *result, int a2, int a3)
{
  int v3; // r10
  const char *v4; // r3
  char *v7; // r6
  int v8; // r7
  const char *v9; // r11
  int v10; // r4
  int v11; // r2
  int v12; // r5
  char *v13; // r1
  int v14; // r3
  int v15; // r4
  int v16; // t1
  int v17; // r2
  int v18; // r1
  int v19; // r3
  int v20; // t1
  int v21; // r2
  int v22; // r3
  int v23; // r1
  int v24; // r5
  int v25; // t1
  int v26; // r5
  int v27; // r2
  int v28; // r1
  int v29; // r3
  int v30; // t1

  v3 = a3 - 1;
  if ( a3 - 1 > 0 )
  {
    LOWORD(v4) = 12564;
    HIWORD(v4) = (unsigned int)"ice/hal/platform/7007/7007_iic.c" >> 16;
    v7 = result;
    v8 = 0;
    v9 = v4;
    do
    {
      if ( a3 > v8 )
      {
        v11 = *(unsigned __int8 *)(a2 + v8);
        v12 = v8 + 1;
        if ( v11 == 65 )
        {
          v10 = 0;
        }
        else
        {
          v13 = "BCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=";
          v14 = 66;
          v15 = 1;
          while ( 1 )
          {
            if ( v11 == v14 )
            {
              v10 = (v15 << 18) & 0xFC0000;
              goto LABEL_12;
            }
            if ( ++v15 == 65 )
              break;
            v16 = (unsigned __int8)*++v13;
            v14 = v16;
          }
          v10 = 16515072;
          result = (char *)printf(v9, "base64_decode_value");
        }
LABEL_12:
        if ( a3 <= v12 )
          goto LABEL_42;
        v17 = *(unsigned __int8 *)(a2 + v12);
        v12 = v8 + 2;
        if ( v17 != 65 )
        {
          result = "BCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=";
          v18 = 66;
          v19 = 1;
          while ( 1 )
          {
            if ( v17 == v18 )
            {
              v10 |= (v19 << 12) & 0x3F000;
              goto LABEL_19;
            }
            if ( ++v19 == 65 )
              break;
            v20 = (unsigned __int8)*++result;
            v18 = v20;
          }
          v10 |= 0x3F000u;
          result = (char *)printf(v9, "base64_decode_value");
        }
LABEL_19:
        if ( a3 <= v12 )
        {
LABEL_42:
          v8 = v12;
        }
        else
        {
          v21 = *(unsigned __int8 *)(a2 + v12);
          v22 = v8 + 3;
          if ( v21 == 65 )
          {
            v26 = 0;
          }
          else
          {
            result = "BCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=";
            v23 = 66;
            v24 = 1;
            while ( 1 )
            {
              if ( v21 == v23 )
              {
                v26 = ((_WORD)v24 << 6) & 0xFC0;
                goto LABEL_26;
              }
              if ( ++v24 == 65 )
                break;
              v25 = (unsigned __int8)*++result;
              v23 = v25;
            }
            v26 = 4032;
            result = (char *)printf(v9, "base64_decode_value");
            v22 = v8 + 3;
          }
LABEL_26:
          if ( a3 > v22 )
          {
            v27 = *(unsigned __int8 *)(a2 + v22);
            v8 += 4;
            if ( v27 != 65 )
            {
              result = "BCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=";
              v28 = 66;
              v29 = 1;
              while ( 1 )
              {
                if ( v27 == v28 )
                {
                  v26 |= v29 & 0x3F;
                  goto LABEL_34;
                }
                if ( ++v29 == 65 )
                  break;
                v30 = (unsigned __int8)*++result;
                v28 = v30;
              }
              v26 |= 0x3Fu;
              result = (char *)printf(v9, "base64_decode_value");
            }
LABEL_34:
            v10 += v26;
          }
          else
          {
            v10 += v26;
            v8 = v22;
          }
        }
      }
      else
      {
        v10 = 0;
      }
      v7[2] = v10;
      *v7 = BYTE2(v10);
      v7[1] = BYTE1(v10);
      v7 += 3;
    }
    while ( v8 < v3 );
  }
  return result;
}
