int __fastcall sub_C4AD8(unsigned __int8 *a1)
{
  unsigned __int8 *v1; // r3
  int v4; // [sp+Ch] [bp-8h]

  v4 = 5381;
  while ( *a1 )
  {
    v1 = a1++;
    v4 = *v1 ^ (33 * v4);
  }
  return v4;
}
