int sub_29190()
{
  pthread_t v0; // r0
  unsigned int v1; // r1
  unsigned int v3; // [sp+Ch] [bp+Ch]

  v0 = pthread_self();
  pthread_detach(v0);
  v3 = 0;
  while ( g_pcba_info )
  {
    v1 = v3++;
    if ( !(v1 % 0xA) )
    {
      (*(void (__fastcall **)(_DWORD))(dword_1F0C90 + 72))(*(_DWORD *)(dword_1F0C8C + 136));
      printf("%s[%d]\n", "pcba_pic_heartbeat_func", 373);
      printf("Got match nonce %d, tatol send work %d\n", dword_47BE74, dword_47BE78);
    }
    sleep(1u);
  }
  printf("%s[%d] quit\n", "pcba_pic_heartbeat_func", 378);
  return 0;
}
