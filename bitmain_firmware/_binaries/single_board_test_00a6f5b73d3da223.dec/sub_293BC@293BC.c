int __fastcall sub_293BC(int a1)
{
  pthread_t v1; // r0

  v1 = pthread_self();
  pthread_detach(v1);
  while ( g_pcba_info )
    off_47BE88(a1);
  printf("%s[%d] quit\n", "pcba_receive_func", 419);
  return 0;
}
