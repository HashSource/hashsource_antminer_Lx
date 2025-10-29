void *__fastcall sub_FBB68(int *a1, int a2, int a3)
{
  int v3; // r0
  __int64 v4; // kr00_8
  int v5; // r3
  void *result; // r0

  *a1 = a2;
  v3 = *a1;
  a1[4] = 1 << *a1;
  a1[5] = (1 << (v3 - 32)) | (1u >> (32 - v3));
  *((_QWORD *)a1 + 1) = *((_QWORD *)a1 + 2);
  v4 = *((_QWORD *)a1 + 2);
  v5 = v4 >> 1;
  a1[6] = v5 - 1;
  a1[7] = (v5 != 0) + (HIDWORD(v4) >> 1) - 1;
  *((_QWORD *)a1 + 4) = *((_QWORD *)a1 + 3);
  a1[12] = a3;
  a1[10] = *((_QWORD *)a1 + 1) >> a1[12];
  a1[11] = a1[10];
  a1[15] = 2;
  a1[13] = -1;
  a1[20] = (int)new_compressor(*a1, a1[12]);
  a1[21] = (int)new_compressor(*a1, a1[12]);
  a1[22] = (int)new_bitmap(2 * a1[10]);
  a1[23] = (int)new_siphash();
  a1[17] = (int)calloc(2 * a1[10], 4u);
  if ( !a1[17] )
    puts("graph adjlist calloc failed!");
  a1[19] = (int)calloc(2 * a1[10], 8u);
  if ( !a1[19] )
    puts("graph link calloc failed!");
  a1[18] = (int)calloc(a1[15], 0xACu);
  if ( !a1[18] )
    puts("graph sols calloc failed!");
  result = memset((void *)a1[17], (unsigned __int8)a1[13], 8 * a1[10]);
  a1[14] = 0;
  a1[16] = 0;
  return result;
}
