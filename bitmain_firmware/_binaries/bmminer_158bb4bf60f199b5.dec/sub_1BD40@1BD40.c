const char *__fastcall sub_1BD40(const char *a1, char a2)
{
  const char *v2; // r5
  int v5; // r4
  const char *result; // r0
  char v7[16]; // [sp+0h] [bp-10h] BYREF

  v2 = byte_241B00;
  v5 = 0;
  do
  {
    sprintf(v7, "chain_rate%d", ++v5);
    result = sub_43D2C((int)a1, v7, v2, a2);
    a1 = result;
    v2 += 32;
  }
  while ( v5 != 16 );
  return result;
}
