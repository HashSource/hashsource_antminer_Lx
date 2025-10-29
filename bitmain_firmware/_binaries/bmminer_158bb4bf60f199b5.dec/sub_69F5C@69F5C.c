int __fastcall sub_69F5C(int *a1, int a2)
{
  int *v2; // r0
  int *v3; // r4
  void *ptr[3]; // [sp+4h] [bp-Ch] BYREF

  if ( !a1 )
    return 501;
  v2 = sub_6A6EC(*a1, a2);
  v3 = v2;
  if ( v2 )
  {
    sub_6AC04(v2[4], ptr);
    free(ptr[0]);
    destroy_sample_buffer((void **)v3[4]);
    sub_6AC04(v3[5], ptr);
    free(ptr[0]);
    destroy_sample_buffer((void **)v3[5]);
    free(v3);
  }
  return 0;
}
