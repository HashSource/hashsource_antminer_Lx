const char *__fastcall sub_1BCD4(const char *a1, char a2)
{
  int v4; // r5
  int v5; // r4
  const char *v6; // r2
  const char *result; // r0
  char v8[20]; // [sp+0h] [bp-14h] BYREF

  v4 = 1206;
  v5 = 0;
  do
  {
    sprintf(v8, "chain_hw%d", ++v5);
    v6 = (const char *)(dword_A0D68 + v4);
    v4 += 4;
    result = sub_43E0C((int)a1, v8, v6, a2);
    a1 = result;
  }
  while ( v5 != 16 );
  return result;
}
