_DWORD *__fastcall sub_FE3B4(_DWORD *a1, _DWORD *a2)
{
  int v2; // r6
  int v3; // r5
  int v4; // r4
  int v5; // r0
  int v7; // [sp+4h] [bp+4h]

  v7 = a2[3];
  v2 = a2[4];
  v3 = a2[5];
  v4 = a2[6];
  v5 = sub_FE384((int)a2);
  *a1 = v7;
  a1[1] = v2;
  a1[2] = v3;
  a1[3] = v4;
  a1[4] = v5;
  return a1;
}
