int __fastcall sub_48440(int a1, int a2)
{
  int *v3; // r5
  int v4; // r4
  int v5; // r3
  int v6; // r8
  int v7; // r12
  int v8; // r3
  int v9; // r2
  int v10; // r3
  int v11; // r0
  int v12; // r3
  char v13; // r12
  char v14; // r2
  int result; // r0
  int v16; // r3
  bool v17; // zf
  int v18; // r0
  int v19; // r1
  int v20; // r8
  int v21; // r3
  int v22; // r2
  int v23; // r9
  int v24; // r3
  double v25; // d17
  double v26; // d16
  double v27; // d11
  double v28; // d10
  const char *v29; // r0
  int v30; // r3
  int v31; // r1
  int v32; // r1
  int v33; // r3
  int v34; // [sp+50h] [bp-34h]
  int v35; // [sp+54h] [bp-30h]
  int v36; // [sp+58h] [bp-2Ch]
  int v37; // [sp+5Ch] [bp-28h]
  int v38; // [sp+60h] [bp-24h]
  int v39; // [sp+64h] [bp-20h]
  int v40; // [sp+6Ch] [bp-18h] BYREF
  char v41; // [sp+70h] [bp-14h] BYREF
  char v42; // [sp+74h] [bp-10h] BYREF
  int v43; // [sp+7Ch] [bp-8h]

  v3 = *(int **)(a1 + 84);
  v4 = *v3;
  v40 = 0;
  v5 = _stack_chk_guard;
  v6 = *(_DWORD *)(v4 + 3216);
  v7 = *(int *)(v4 + 3224) >> 1;
  *(_DWORD *)(v4 + 3224) = v7;
  v43 = v5;
  if ( a2 == 1 )
  {
    *(_DWORD *)(v4 + 3224) = v7 | 0x200;
    v8 = v6 % 10;
  }
  else
  {
    if ( a2 == 2 )
    {
      v16 = *(_DWORD *)(v4 + 3204);
      if ( v16 == 2 )
      {
        v17 = v6 == 1;
        v6 = 1;
        if ( !v17 )
          v16 = *(_DWORD *)(v4 + 768);
        v18 = *(_DWORD *)(v4 + 56);
        v19 = *(_DWORD *)(v4 + 60);
        if ( !v17 )
          *(_DWORD *)(v4 + 768) = v16 | 8;
        *(_DWORD *)(v4 + 40) = v18;
        *(_DWORD *)(v4 + 44) = v19;
        *(_DWORD *)(v4 + 3204) = 2;
        goto LABEL_9;
      }
    }
    v8 = v6 % 10;
  }
  *(_DWORD *)(v4 + 3204) = a2;
  if ( v8 )
    goto LABEL_9;
  v9 = *(_DWORD *)(v4 + 3224);
  v10 = *(_DWORD *)(v4 + 3220);
  if ( v6 == 10 )
  {
    if ( v10 <= 1 )
      goto LABEL_9;
    v9 >>= 1;
  }
  else if ( v10 <= 1 )
  {
    goto LABEL_8;
  }
  v11 = v4 + v10;
  v12 = v10 - 2;
  v13 = a0123456789abcd[v9 & 0xF];
  v14 = a0123456789abcd[((unsigned int)v9 >> 5) & 0xF];
  *(_BYTE *)(v11 - 1) = v13;
  *(_DWORD *)(v4 + 3220) = v12;
  *(_BYTE *)(v4 + v12) = v14;
LABEL_8:
  if ( v6 )
    goto LABEL_9;
  *(_DWORD *)(v4 + 3220) = 20;
  if ( sscanf(
         (const char *)v4,
         "%6s%2d%1d%2s%3d%2d%2d%2d",
         &v42,
         v3 + 47,
         &v40,
         &v41,
         v3 + 48,
         v3 + 49,
         v3 + 50,
         v3 + 51) == 8 )
    *((_BYTE *)v3 + 40) = 0;
  else
    *((_BYTE *)v3 + 40) = 3;
  v20 = *(_DWORD *)(v4 + 768);
  v34 = v3[48];
  v21 = (*(_DWORD *)(v4 + 3208) + *(_DWORD *)(v4 + 3160)) % 60;
  v22 = v3[47];
  v36 = v22;
  *(_DWORD *)(v4 + 3208) = v21;
  if ( v34 && (!v22 || v40) )
  {
    v23 = v3[51];
    if ( v21 == v23 )
    {
      v30 = *(_DWORD *)(v4 + 3180);
      *(_DWORD *)(v4 + 3208) = v23;
      v35 = v30;
      if ( !v20 && v30 == 10 )
      {
        v31 = v3[59];
        v3[56] = v3[58];
        v3[57] = v31;
        v32 = *(_DWORD *)(v4 + 44);
        v3[58] = *(_DWORD *)(v4 + 40);
        v3[59] = v32;
        if ( !sub_399D0(v3) )
          sub_3918C((__int16 *)a1, 6);
        v20 = *(_DWORD *)(v4 + 768);
        v23 = v3[51];
        v34 = v3[48];
        v35 = *(_DWORD *)(v4 + 3180);
        v36 = v3[47];
      }
      goto LABEL_25;
    }
  }
  else
  {
    v23 = v3[51];
    v20 |= 0x80u;
    *(_DWORD *)(v4 + 768) = v20;
    if ( v21 == v23 )
    {
      v33 = *(_DWORD *)(v4 + 3180);
      *(_DWORD *)(v4 + 3208) = v23;
      v35 = v33;
      goto LABEL_25;
    }
  }
  v24 = *(_DWORD *)(v4 + 3180);
  v20 |= 0x20u;
  *(_DWORD *)(v4 + 3208) = v23;
  *(_DWORD *)(v4 + 768) = v20;
  v35 = v24;
LABEL_25:
  v25 = *(double *)(v4 + 736);
  v37 = v3[49];
  v26 = *(double *)(v4 + 712);
  v38 = v3[50];
  v39 = *(_DWORD *)(v4 + 2836);
  v27 = *(double *)(v4 + 3000);
  v28 = *(double *)(v4 + 744);
  v29 = (const char *)sub_63424(v3[58]);
  sub_6BCB0(
    v3 + 14,
    128,
    "%02x %02d %03d %02d:%02d:%02d %4.0f %3d %6.3f %2d %6.2f %6.1f %s",
    v20,
    v36,
    v34,
    v37,
    v38,
    v23,
    v27,
    v39,
    v28,
    v35,
    v25 * 1000000.0 / 8000.0,
    v26 * 1000000.0 / 8000.0,
    v29);
  v3[46] = strlen((const char *)v3 + 56);
  *(_DWORD *)(v4 + 768) = 0;
  if ( (v3[192] & 8) != 0 )
    sub_41CA4(a1 + 16, (const char *)v3 + 56);
  v6 = *(_DWORD *)(v4 + 3216);
LABEL_9:
  result = _stack_chk_guard;
  *(_DWORD *)(v4 + 3216) = (v6 + 1) % 100;
  return result;
}
