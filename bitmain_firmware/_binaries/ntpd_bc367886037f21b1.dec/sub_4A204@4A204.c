int __fastcall sub_4A204(__int16 *a1, int a2, _WORD *a3)
{
  int v5; // r2
  int v6; // r4
  int v8; // r1
  int v9; // r0

  v5 = (__int16)a3[256];
  v6 = (__int16)(a3[253] + 1);
  v8 = (__int16)word_9775C[v5];
  v9 = (__int16)word_97768[v5];
  a3[253] = v6;
  if ( v6 >= sub_8B4A0(v9, v8) )
    return sub_4A098(a1, a2);
  sub_4A174(a1, a2);
  a3[254] = 0;
  return 0;
}
