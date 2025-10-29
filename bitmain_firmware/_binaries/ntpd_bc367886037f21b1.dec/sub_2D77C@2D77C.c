bool __fastcall sub_2D77C(int a1)
{
  _QWORD *v2; // r3
  __int16 v3; // r0
  __int16 v4; // r2
  __int64 v5; // r6

  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  v2 = sub_2CDF0(0);
  v3 = *((_WORD *)v2 + 18);
  v4 = *((_WORD *)v2 + 19);
  *(_QWORD *)a1 = v2[8];
  v5 = v2[6];
  *(_WORD *)(a1 + 20) = v3;
  *(_WORD *)(a1 + 22) = v4 - v3;
  *(_QWORD *)(a1 + 8) = v5;
  *(_BYTE *)(a1 + 27) = *((_BYTE *)v2 + 72);
  return sub_6D738(v2 + 6, v2 + 7) >= 0;
}
