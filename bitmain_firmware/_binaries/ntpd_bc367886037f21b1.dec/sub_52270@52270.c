int __fastcall sub_52270(_DWORD *a1, _DWORD *a2, char *a3)
{
  __int16 v6; // r12
  char v7; // r1
  __int16 v8; // r3
  int v9; // r4
  int v10; // r2
  int result; // r0
  _WORD v12[2]; // [sp+0h] [bp-14h] BYREF
  __int16 v13; // [sp+4h] [bp-10h]

  if ( !dword_BC5F8 )
  {
    if ( !sub_652A4(v12) )
    {
      v12[0] = 2015;
      v13 = 257;
    }
    dword_BC5F8 = sub_66044(v12);
  }
  v6 = (unsigned __int8)a3[2];
  v7 = *a3;
  v8 = (unsigned __int8)a3[3];
  LOBYTE(v13) = a3[1];
  HIBYTE(v13) = v7;
  v12[0] = v8 | (v6 << 8);
  v9 = sub_66044(v12);
  sub_65828(v12, v9);
  if ( __PAIR64__((unsigned __int8)v13, HIBYTE(v13)) != __PAIR64__((unsigned __int8)a3[1], (unsigned __int8)*a3)
    || v12[0] != ((unsigned __int8)a3[3] | ((unsigned __int8)a3[2] << 8)) )
  {
    return -1;
  }
  for ( ; v9 < dword_BC5F8; v9 += 7168 )
    ;
  sub_65828(v12, v9);
  v10 = v12[0];
  result = HIBYTE(v13) | (32 * (unsigned __int8)v13);
  *a2 = v12[1];
  *a1 = v10;
  return result;
}
