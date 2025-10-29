int __fastcall sub_54454(int a1, int a2)
{
  int **v3; // r4
  int *v4; // r5
  int v5; // r1
  int *v7; // r3
  int v8; // [sp+4h] [bp-8h]

  v3 = *(int ***)(a2 + 84);
  v4 = *v3;
  v5 = **v3;
  if ( v5 )
  {
    *v4 = v5 - 1;
  }
  else
  {
    sub_53CC4(a2, 0);
    sub_3918C((__int16 *)a2, 1);
  }
  v7 = v3[194];
  v4[2] = 1;
  v3[194] = (int *)((char *)v7 + 1);
  return v8;
}
