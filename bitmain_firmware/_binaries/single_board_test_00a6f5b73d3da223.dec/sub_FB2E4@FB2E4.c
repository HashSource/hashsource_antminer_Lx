int __fastcall sub_FB2E4(int a1)
{
  qword_47BD78[a1] += qword_47BD98[a1];
  qword_47BDB8[a1] += qword_47BDD8[a1];
  qword_47BD98[a1] = sub_FB15C(qword_47BD98[a1], 13);
  qword_47BDD8[a1] = sub_FB15C(qword_47BDD8[a1], 16);
  qword_47BD98[a1] ^= qword_47BD78[a1];
  qword_47BDD8[a1] ^= qword_47BDB8[a1];
  qword_47BD78[a1] = sub_FB15C(qword_47BD78[a1], 32);
  qword_47BDB8[a1] += qword_47BD98[a1];
  qword_47BD78[a1] += qword_47BDD8[a1];
  qword_47BD98[a1] = sub_FB15C(qword_47BD98[a1], 17);
  qword_47BDD8[a1] = sub_FB15C(qword_47BDD8[a1], 21);
  qword_47BD98[a1] ^= qword_47BDB8[a1];
  qword_47BDD8[a1] ^= qword_47BD78[a1];
  qword_47BDB8[a1] = sub_FB15C(qword_47BDB8[a1], 32);
  return 8 * a1;
}
