bool __fastcall sub_2D9FC(int a1, int a2, time_t *a3)
{
  _QWORD *v6; // r5
  int v7; // r4
  int v8; // r4
  bool v9; // zf
  int v10; // r4
  __int16 v11; // r2
  __int16 v12; // r3
  __int64 v14; // [sp+0h] [bp-38h] BYREF
  __int64 v15; // [sp+8h] [bp-30h] BYREF
  _BYTE v16[4]; // [sp+14h] [bp-24h] BYREF
  char v17; // [sp+18h] [bp-20h]
  char v18; // [sp+19h] [bp-1Fh]
  unsigned __int8 v19; // [sp+1Ah] [bp-1Eh]
  char v20; // [sp+1Bh] [bp-1Dh]
  char v21; // [sp+1Ch] [bp-1Ch]
  _DWORD v22[3]; // [sp+20h] [bp-18h] BYREF
  __int16 v23; // [sp+2Ch] [bp-Ch]
  char v24; // [sp+2Eh] [bp-Ah]

  v6 = sub_2CDF0(1);
  sub_654FC((int)&v14, a2, a3);
  v15 = v14;
  if ( sub_6D738(&v15, v6 + 3) < 0 || *((_WORD *)v6 + 16) && sub_6D738(&v15, v6 + 10) <= 0 )
  {
    v7 = 0;
    *_errno_location() = 34;
  }
  else
  {
    sub_662F4(v16, &v15);
    if ( v18 == 1 && (v7 = v19) == 0 )
    {
      *_errno_location() = 22;
    }
    else
    {
      v18 = 1;
      v19 = 0;
      v20 = 0;
      v21 = 0;
      sub_663D0(&v14, v16);
      v8 = v14;
      ++v17;
      sub_663D0(&v14, v16);
      v9 = *((unsigned __int16 *)v6 + 16) == 0;
      v22[1] = HIDWORD(v14);
      v10 = v14 - v8;
      if ( v9 )
        v11 = *((_WORD *)v6 + 17);
      else
        v11 = *((_WORD *)v6 + 46);
      v22[2] = v10;
      v22[0] = v14;
      v12 = -1;
      if ( a1 )
        v12 = 1;
      v23 = v11 + v12;
      v24 = 1;
      v7 = sub_2C7C4((int)v6, (int)v22);
      if ( v7 )
        return sub_2CEA0(v6) != 0;
    }
  }
  return v7;
}
