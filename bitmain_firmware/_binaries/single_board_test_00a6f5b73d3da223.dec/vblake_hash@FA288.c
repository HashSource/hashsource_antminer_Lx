int __fastcall vblake_hash(int a1, int a2)
{
  _BYTE v5[64]; // [sp+8h] [bp+8h] BYREF
  _QWORD s[8]; // [sp+48h] [bp+48h] BYREF
  int i; // [sp+8Ch] [bp+8Ch]

  memset(v5, 0, sizeof(v5));
  s[1] = *(_QWORD *)&dword_1EF840;
  s[2] = *(_QWORD *)&dword_1EF848;
  s[3] = *(_QWORD *)&dword_1EF850;
  s[4] = *(_QWORD *)&dword_1EF858;
  s[5] = *(_QWORD *)&dword_1EF860;
  s[6] = *(_QWORD *)&dword_1EF868;
  s[7] = *(_QWORD *)&dword_1EF870;
  s[0] = *(_QWORD *)dword_1EF838 ^ 0x1010018LL;
  for ( i = 0; i <= 63; ++i )
    v5[i] = *(_BYTE *)(i + a2);
  sub_F99A4((int)s, (int)v5);
  return sub_FA148(a1, (int)s);
}
