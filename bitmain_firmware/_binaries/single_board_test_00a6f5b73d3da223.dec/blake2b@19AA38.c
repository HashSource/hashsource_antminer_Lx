int __fastcall blake2b(_DWORD *a1, int a2, unsigned int a3)
{
  int v3; // r1
  int v4; // r2
  int v5; // r3
  int result; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r3
  __int64 v13[27]; // [sp+10h] [bp+10h] BYREF
  _DWORD v14[4]; // [sp+E8h] [bp+E8h] BYREF
  int v15; // [sp+F8h] [bp+F8h]
  int v16; // [sp+FCh] [bp+FCh]
  int v17; // [sp+100h] [bp+100h]
  int v18; // [sp+104h] [bp+104h]

  blake2b_init((int)v13, 0x20u, 0, 0);
  blake2b_update(v13, a2, a3);
  blake2b_final((int)v13, (int)v14);
  v3 = v14[1];
  v4 = v14[2];
  v5 = v14[3];
  *a1 = v14[0];
  a1[1] = v3;
  a1[2] = v4;
  a1[3] = v5;
  result = v15;
  v7 = v16;
  v8 = v17;
  v9 = v18;
  a1[4] = v15;
  a1[5] = v7;
  a1[6] = v8;
  a1[7] = v9;
  return result;
}
