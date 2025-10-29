int __fastcall sub_2DBA4(int a1, int a2, time_t *a3)
{
  _QWORD *v6; // r0
  int v7; // r3
  _QWORD *v9; // r8
  int v10; // r0
  _QWORD *v11; // r2
  __int64 v12; // r0
  int v13; // r0
  int v14; // r3
  int v15; // r1
  __int16 v16; // r12
  __int16 v17; // r2
  __int16 v18; // r2
  __int64 v19; // [sp+0h] [bp-34h] BYREF
  __int64 v20; // [sp+8h] [bp-2Ch] BYREF
  __int64 v21; // [sp+10h] [bp-24h] BYREF
  __int64 v22; // [sp+18h] [bp-1Ch] BYREF
  __int16 v23; // [sp+20h] [bp-14h]

  v6 = sub_2CDF0(0);
  v7 = a1 <= 9;
  if ( *((_WORD *)v6 + 17) )
    v7 = 1;
  if ( v7 )
    return 0;
  v9 = v6;
  v10 = *((unsigned __int16 *)v6 + 16);
  if ( v10 )
  {
    if ( !*((_BYTE *)v9 + 94) )
      return 0;
    v11 = v9;
    while ( ++v7 != v10 )
    {
      v11 += 2;
      if ( !*((_BYTE *)v11 + 94) )
        return 0;
    }
  }
  sub_654FC((int)&v19, a2, a3);
  HIDWORD(v12) = v9;
  v20 = v19;
  LODWORD(v12) = &v21;
  sub_2CC08(v12, (int)&v20);
  sub_6D854(&v19, &v21, 20);
  v21 = v19;
  if ( sub_6D738(&v20, &v21) < 0 )
    return 0;
  sub_6D854(&v19, &v22, -20);
  v22 = v19;
  if ( sub_6D738(&v20, &v22) > 0 )
    return 0;
  v13 = *((unsigned __int16 *)v9 + 16);
  v14 = (unsigned __int16)(a1 - v23);
  v15 = v14 + *((unsigned __int16 *)v9 + 18);
  v16 = v14 + *((_WORD *)v9 + 17);
  v17 = v14 + *((_WORD *)v9 + 19);
  *((_WORD *)v9 + 18) = v15;
  *((_WORD *)v9 + 17) = v16;
  if ( v13 )
    v15 = 0;
  *((_WORD *)v9 + 19) = v17;
  if ( v13 )
  {
    do
    {
      ++v15;
      v18 = *((_WORD *)v9 + 46);
      v9 += 2;
      *((_WORD *)v9 + 38) = v14 + v18;
    }
    while ( v15 != v13 );
  }
  return 1;
}
