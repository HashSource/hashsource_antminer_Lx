double *__fastcall json_loads(int a1, int a2, char *a3)
{
  char *v4; // r1
  int v7; // r3
  double *v8; // r4
  const char *v10; // r3
  _DWORD v11[2]; // [sp+0h] [bp-54h] BYREF
  _DWORD v12[2]; // [sp+8h] [bp-4Ch] BYREF
  char v13; // [sp+10h] [bp-44h]
  int v14; // [sp+18h] [bp-3Ch]
  int v15; // [sp+1Ch] [bp-38h]
  int v16; // [sp+20h] [bp-34h]
  int v17; // [sp+24h] [bp-30h]
  int v18; // [sp+2Ch] [bp-28h]
  _DWORD v19[9]; // [sp+30h] [bp-24h] BYREF

  LOWORD(v4) = 6448;
  HIWORD(v4) = (unsigned int)"\":\"mining.authorize\",\"params\":[\"%s\",\"%s\"]}" >> 16;
  jsonp_error_init(a3, v4);
  if ( a1 )
  {
    LOWORD(v7) = 21352;
    v8 = 0;
    HIWORD(v7) = (unsigned int)&loc_36C28 >> 16;
    v11[0] = a1;
    v12[0] = v7;
    v11[1] = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v17 = 0;
    v18 = 0;
    v12[1] = v11;
    v16 = 1;
    if ( !strbuffer_init(v19) )
    {
      v19[3] = a2;
      v19[5] = -1;
      v8 = sub_36450(v12, a2, (int)a3);
      sub_3553C((int)v12);
    }
  }
  else
  {
    LOWORD(v10) = 6460;
    HIWORD(v10) = (unsigned int)"thorize\",\"params\":[\"%s\",\"%s\"]}" >> 16;
    v8 = 0;
    sub_3540C((int)a3, 0, 4, v10);
  }
  return v8;
}
