int __fastcall get_cur_seed(_DWORD *a1)
{
  int v1; // r1
  int v2; // r2
  int v3; // r3
  int v4; // r1
  int v5; // r2
  int v6; // r3

  pthread_mutex_lock(&stru_47BD5C);
  v1 = dword_47BD3C[1];
  v2 = dword_47BD3C[2];
  v3 = dword_47BD3C[3];
  *a1 = dword_47BD3C[0];
  a1[1] = v1;
  a1[2] = v2;
  a1[3] = v3;
  v4 = unk_47BD50;
  v5 = unk_47BD54;
  v6 = unk_47BD58;
  a1[4] = unk_47BD4C;
  a1[5] = v4;
  a1[6] = v5;
  a1[7] = v6;
  return pthread_mutex_unlock(&stru_47BD5C);
}
