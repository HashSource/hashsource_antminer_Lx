int __fastcall sub_82FD0(int a1, unsigned int a2)
{
  void (__fastcall *v2)(int, double *); // r5
  double v4[3]; // [sp+4h] [bp-48h] BYREF
  double v5; // [sp+1Ch] [bp-30h]
  double v6; // [sp+24h] [bp-28h]
  double v7; // [sp+2Ch] [bp-20h]
  double v8; // [sp+34h] [bp-18h]
  double v9; // [sp+3Ch] [bp-10h]

  v2 = *(void (__fastcall **)(int, double *))(a1 + 40);
  *(_QWORD *)&v5 = a2;
  memset(v4, 0, sizeof(v4));
  v6 = 0.0;
  v7 = 0.0;
  v8 = 0.0;
  v9 = 0.0;
  v2(3, v4);
  return LODWORD(v5);
}
