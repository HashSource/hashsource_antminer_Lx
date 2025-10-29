int __fastcall sub_E229C(int a1, int a2)
{
  int i; // [sp+10h] [bp+8h]
  int v6; // [sp+14h] [bp+Ch]

  v6 = 0;
  for ( i = 0; i <= 31; i += 4 )
    v6 += sprintf(
            (char *)(a1 + v6),
            "%02x%02x%02x%02x ",
            *(unsigned __int8 *)(i + a2),
            *(unsigned __int8 *)(i + 1 + a2),
            *(unsigned __int8 *)(i + 2 + a2),
            *(unsigned __int8 *)(i + 3 + a2));
  return a1;
}
