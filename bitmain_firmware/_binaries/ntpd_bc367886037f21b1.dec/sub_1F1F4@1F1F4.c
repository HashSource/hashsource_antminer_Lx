__int16 *__fastcall sub_1F1F4(int a1)
{
  size_t v1; // r0
  char v3[64]; // [sp+4h] [bp-48h] BYREF

  sub_1E418(a1, (int)v3, 64);
  v1 = strlen(v3);
  sub_1EE84("nonce", (int)v3, v1);
  return sub_1E934(0);
}
