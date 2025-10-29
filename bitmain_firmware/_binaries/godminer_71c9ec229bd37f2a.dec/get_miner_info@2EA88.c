int __fastcall get_miner_info(char *a1)
{
  int v1; // r4
  int v3; // r2
  char *v4; // r0
  const char *v5; // r8
  const char *v6; // r7
  int v7; // r5
  int v8; // r4
  int v9; // r0
  const char *v10; // r1
  int v11; // r4
  int v12; // r0
  const char *v13; // r1
  int v14; // r4
  int v15; // r0
  int v16; // r0
  const char *v17; // r1
  int v19; // [sp+4h] [bp-4h] BYREF

  v1 = 0;
  v19 = 0;
  get_all_created_runtime(&v19);
  v3 = v19;
  if ( v19 > 0 )
  {
    LOWORD(v5) = 9024;
    LOWORD(v6) = 9044;
    v7 = 0;
    do
    {
      ++v7;
      HIWORD(v5) = (unsigned int)"rn noncenum" >> 16;
      v8 = sprintf(&a1[v1], v5, v7, 12) + v1;
      HIWORD(v6) = (unsigned int)"eg" >> 16;
      v9 = sprintf(&a1[v8], v6, v7, 0);
      LOWORD(v10) = 9068;
      v11 = v8 + v9;
      HIWORD(v10) = (unsigned int)"orereg" >> 16;
      v12 = sprintf(&a1[v11], v10, v7, 0);
      LOWORD(v13) = 9092;
      v14 = v11 + v12;
      HIWORD(v13) = (unsigned int)"heartbeat" >> 16;
      v15 = sprintf(&a1[v14], v13, v7, 0);
      v3 = v19;
      v1 = v14 + v15;
    }
    while ( v7 < v19 );
    v4 = &a1[v1];
  }
  else
  {
    v4 = a1;
  }
  v16 = sprintf(v4, "chainnum=%d;", v3);
  LOWORD(v17) = 9128;
  HIWORD(v17) = (unsigned int)"" >> 16;
  return sprintf(&a1[v16 + v1], v17, 1470428);
}
