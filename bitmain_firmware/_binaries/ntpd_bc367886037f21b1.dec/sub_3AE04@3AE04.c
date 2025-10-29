int __fastcall sub_3AE04(int a1, int a2, int a3)
{
  char v3; // r6
  char v4; // r2
  int v5; // r2
  __int16 v6; // r2
  int *v8; // [sp+0h] [bp-8h] BYREF

  v3 = *(_BYTE *)(a3 + 2);
  v4 = *(_BYTE *)(a3 + 3);
  dword_BBB28 = a1;
  dword_BBB24 = a2;
  v8 = &dword_BB92C;
  byte_BB927 = v4;
  if ( dword_BBB2C )
    v5 = 136;
  else
    v5 = 48;
  dword_BB91C = v5;
  if ( dword_BBB2C )
    v6 = -30720;
  else
    v6 = 12288;
  byte_BB926 = v3;
  dword_BBB20 = 0;
  word_BB92A = v6;
  dword_BB910 = 0;
  dword_BB914 = 0;
  dword_BB918 = 0;
  sub_186BC((void (__fastcall *)(int, unsigned __int16 **))sub_3A884, (int)&v8);
  return sub_3AD04();
}
