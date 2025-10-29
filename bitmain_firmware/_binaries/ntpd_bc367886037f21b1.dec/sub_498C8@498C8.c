int __fastcall sub_498C8(int a1, int a2, _WORD *a3)
{
  __int16 *v3; // r6
  int v8; // r1
  int v9; // r3
  char *v10; // r2
  int v11; // r3
  int v12; // r12

  v3 = a3 + 256;
  if ( (*(&off_B36E4[5 * (__int16)a3[257] + 55] + (__int16)a3[256]))() == 1 )
  {
    v8 = *v3;
    v9 = 2 * (5 * (__int16)a3[257] + v8);
    v10 = (char *)&unk_97524 + v9;
    v11 = *(__int16 *)((char *)&unk_976A4 + v9);
    v12 = *((__int16 *)v10 + 112);
    if ( v8 != v11 )
    {
      a3[253] = 0;
      a3[255] = 0;
      a3[258] = 0;
    }
    *v3 = v11;
    if ( v12 )
    {
      a3[257] = v12;
      sub_498C8(a1, a2, a3);
    }
  }
  a3[257] = 0;
  return 0;
}
