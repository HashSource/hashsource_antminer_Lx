int __fastcall pcba_read_ltc_temperature(int a1, int *a2, int *a3, int *a4, int *a5, _DWORD *a6, _DWORD *a7)
{
  const char *v7; // r1
  const char *v8; // r3
  const char *v9; // r1
  const char *v10; // r3
  const char *v11; // r1
  const char *v12; // r2
  int v19; // [sp+24h] [bp+14h] BYREF
  int v20; // [sp+28h] [bp+18h] BYREF
  int v21; // [sp+2Ch] [bp+1Ch] BYREF
  int v22; // [sp+30h] [bp+20h] BYREF
  _DWORD *v23; // [sp+34h] [bp+24h]
  _DWORD *v24; // [sp+38h] [bp+28h]
  int i; // [sp+3Ch] [bp+2Ch]

  v24 = *(_DWORD **)(a1 + 212);
  *a2 = -150;
  *a3 = 150;
  *a4 = -150;
  *a5 = 150;
  for ( i = 0; v24[1] > i; ++i )
  {
    v23 = (_DWORD *)(20 * i + *v24);
    v20 = 0;
    (*(void (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 100))(
      a1,
      &v22,
      &v20,
      *v23,
      v23[1],
      v23[2],
      v23[3],
      v23[4]);
    if ( v20 )
    {
      ++*a6;
      if ( *a2 < v22 )
        *a2 = v22;
      if ( *a3 > v22 )
        *a3 = v22;
      *((_BYTE *)&gHistory_Result + 265800 * dword_47BE7C + i + 265784) = v22;
    }
    else
    {
      if ( *(_DWORD *)(20 * i + *v24 + 8) )
        v7 = "ARI-OUT";
      else
        v7 = "AIR-IN";
      if ( *(_DWORD *)(20 * i + *v24 + 12) )
        v8 = "BOTTOM";
      else
        v8 = "TOP";
      printf("Read local temp error. Error sensor loacation: %s %s\n", v7, v8);
    }
    v19 = 0;
    (*(void (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 104))(
      a1,
      &v21,
      &v19,
      *v23,
      v23[1],
      v23[2],
      v23[3],
      v23[4]);
    if ( v19 )
    {
      ++*a7;
      if ( *a4 < v21 )
        *a4 = v21;
      if ( *a5 > v21 )
        *a5 = v21;
      *((_BYTE *)&gHistory_Result + 265800 * dword_47BE7C + i + 265788) = v21;
    }
    else
    {
      if ( *(_DWORD *)(20 * i + *v24 + 8) )
        v9 = "ARI-OUT";
      else
        v9 = "AIR-IN";
      if ( *(_DWORD *)(20 * i + *v24 + 12) )
        v10 = "BOTTOM";
      else
        v10 = "TOP";
      printf("Read remote temp error. Error sensor loacation: %s %s\n", v9, v10);
    }
    if ( *(_DWORD *)(20 * i + *v24 + 8) )
      v11 = "ARI-OUT";
    else
      v11 = "AIR-IN";
    if ( *(_DWORD *)(20 * i + *v24 + 12) )
      v12 = "BOTTOM";
    else
      v12 = "TOP";
    printf("%s %s[pcb: %d  chip: %d]\n", v11, v12, v22, v21);
  }
  if ( *a6 == v24[1] && *a7 == v24[1] )
    return 0;
  else
    return -1;
}
