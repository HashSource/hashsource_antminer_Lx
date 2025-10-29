unsigned __int64 __fastcall sub_FB1E4(int a1)
{
  __int64 v1; // kr08_8
  int v2; // r2
  __int64 v3; // kr10_8
  __int64 v4; // kr18_8
  unsigned __int64 v5; // r0

  v1 = qword_47BD98[a1];
  v2 = HIDWORD(qword_47BD78[a1]) ^ HIDWORD(v1);
  v3 = qword_47BDB8[a1];
  v4 = qword_47BDD8[a1];
  LODWORD(v5) = LODWORD(qword_47BD78[a1]) ^ v1 ^ v4 ^ v3;
  HIDWORD(v5) = v2 ^ HIDWORD(v4) ^ HIDWORD(v3);
  return sub_FB15C(v5, 17);
}
