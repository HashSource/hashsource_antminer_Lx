__int16 *__fastcall sub_44BE4(int a1, int a2)
{
  int v2; // r5
  _DWORD *v3; // r4
  int v4; // r8
  int v5; // r3
  int v6; // r2
  int v9; // r1
  __int16 *result; // r0
  int v11; // r1
  _DWORD *v12; // r3
  _DWORD *v13; // r5
  int v14; // r1
  int v15; // r3

  v2 = *(_DWORD *)(a2 + 84);
  v3 = *(_DWORD **)v2;
  v4 = *(_DWORD *)(*(_DWORD *)v2 + 8);
  ++*(_DWORD *)(v2 + 776);
  v5 = *(_DWORD *)(v2 + 216);
  v6 = *(_DWORD *)(v2 + 220);
  if ( v4 == a2 )
  {
    if ( v6 == v5 )
    {
      v15 = *(_DWORD *)(v4 + 68);
      *(_BYTE *)(v4 + 95) = -20;
      *(_DWORD *)(v4 + 68) = v15 & 0xFFFFFF7F;
      return sub_3918C((__int16 *)v4, 1);
    }
    else
    {
      v12 = (_DWORD *)(v2 + 232);
      v13 = (_DWORD *)(v2 + 224);
      v14 = v12[1];
      *v13 = *v12;
      v13[1] = v14;
      sub_3918C((__int16 *)v4, 0);
      return (__int16 *)sub_39A1C(v4);
    }
  }
  else
  {
    if ( v6 == v5 )
    {
      *(_BYTE *)(a2 + 95) = -9;
      if ( *(_DWORD *)(v2 + 28) == -1 )
      {
        result = sub_3918C((__int16 *)a2, 3);
      }
      else
      {
        if ( v3[39] )
          v9 = 2;
        else
          v9 = 1;
        result = sub_3918C((__int16 *)a2, v9);
      }
    }
    else
    {
      v11 = *(_DWORD *)(v2 + 236);
      *(_DWORD *)(v2 + 224) = *(_DWORD *)(v2 + 232);
      *(_DWORD *)(v2 + 228) = v11;
      sub_3918C((__int16 *)a2, 0);
      result = (__int16 *)sub_39A1C(a2);
    }
    if ( (*(_BYTE *)(v2 + 768) & 8) != 0 )
      result = (__int16 *)sub_41DB0(
                            a2 + 16,
                            (int)"%u %u %u %u %u %u %u",
                            v3[38],
                            v3[39],
                            v3[40],
                            v3[41],
                            v3[42],
                            v3[43],
                            v3[44]);
    v3[39] = 0;
    v3[38] = 0;
    v3[40] = 0;
    v3[41] = 0;
    v3[42] = 0;
    v3[43] = 0;
    v3[44] = 0;
  }
  return result;
}
