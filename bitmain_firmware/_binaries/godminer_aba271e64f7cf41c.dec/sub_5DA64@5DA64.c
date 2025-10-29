int __fastcall sub_5DA64(int a1)
{
  pthread_t v1; // r0

  v1 = pthread_self();
  pthread_detach(v1);
  pthread_setcanceltype(1, 0);
  sub_5D6CC();
  api();
  *(_DWORD *)(a1 + 4) = 0;
  return 0;
}
