int __fastcall update_mbist_cnt_for_pcba_test_eth(int a1, _DWORD *a2)
{
  int v3; // r1
  int v4; // r2
  int v5; // r3
  int v6; // r1
  int v7; // r2
  int v8; // r3

  v3 = unk_16CF4C;
  v4 = unk_16CF50;
  v5 = unk_16CF54;
  *a2 = unk_16CF48;
  a2[1] = v3;
  a2[2] = v4;
  a2[3] = v5;
  v6 = unk_16CF5C;
  v7 = unk_16CF60;
  v8 = unk_16CF64;
  a2[4] = unk_16CF58;
  a2[5] = v6;
  a2[6] = v7;
  a2[7] = v8;
  return 0;
}
