int __fastcall sub_FB614(int a1, __int64 a2)
{
  int v3; // r2
  _DWORD *v4; // r3
  int v5; // r3

  qword_47BDD8[a1] ^= a2;
  sub_FB2E4(a1);
  sub_FB2E4(a1);
  qword_47BD78[a1] ^= a2;
  v3 = HIDWORD(qword_47BDB8[a1]);
  v4 = &qword_47BDB8[a1];
  *v4 ^= 0xFFu;
  v4[1] = v3;
  sub_FB2E4(a1);
  sub_FB2E4(a1);
  sub_FB2E4(a1);
  sub_FB2E4(a1);
  return v5;
}
