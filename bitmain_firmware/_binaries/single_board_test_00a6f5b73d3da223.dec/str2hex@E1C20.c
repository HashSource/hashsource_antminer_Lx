int __fastcall str2hex(int a1, int a2, int a3)
{
  char v7; // [sp+13h] [bp+13h]
  int i; // [sp+14h] [bp+14h]

  for ( i = 0; i < a3; i += 2 )
  {
    v7 = sub_E1BE0(*(_BYTE *)(i + a2));
    *(_BYTE *)(a1 + i / 2) = sub_E1BE0(*(_BYTE *)(i + 1 + a2)) | (16 * v7);
  }
  return a3 / 2;
}
