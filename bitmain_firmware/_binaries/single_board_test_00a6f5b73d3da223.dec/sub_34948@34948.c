int __fastcall sub_34948(int a1)
{
  char v3[68]; // [sp+10h] [bp+8h] BYREF
  char s[68]; // [sp+54h] [bp+4Ch] BYREF
  int j; // [sp+98h] [bp+90h]
  int i; // [sp+9Ch] [bp+94h]

  memset(s, 0, 0x41u);
  memset(v3, 0, 0x41u);
  for ( i = 0; i <= 31; ++i )
    sprintf(&s[2 * i], "%02x", *(unsigned __int8 *)(i + a1 + 34));
  for ( j = 0; j <= 31; ++j )
    sprintf(&v3[2 * j], "%02x", *(unsigned __int8 *)(j + a1 + 98));
  printf(
    "nonce_recv: asic %02d core %02d pe %02d ",
    *(_DWORD *)(a1 + 8),
    *(_DWORD *)(a1 + 12),
    (unsigned int)(*(__int64 *)(a1 + 26) >> 9) & 7);
  return printf("header %s nonce %016llx mixhash %s\n", s, *(_QWORD *)(a1 + 26), v3);
}
