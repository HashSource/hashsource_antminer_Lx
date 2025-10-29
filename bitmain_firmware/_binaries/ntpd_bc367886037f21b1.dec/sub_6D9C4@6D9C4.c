int __fastcall sub_6D9C4(pthread_t *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r5
  int result; // r0
  size_t v7; // r5
  int v8; // r0
  size_t v9; // r7
  char *v10; // r0
  char *v11; // r0
  char *v12; // r0
  pthread_t v13; // [sp+8h] [bp-138h] BYREF
  size_t stacksize; // [sp+Ch] [bp-134h] BYREF
  __int64 v15; // [sp+10h] [bp-130h] BYREF
  pthread_attr_t v16; // [sp+18h] [bp-128h] BYREF
  sigset_t v17; // [sp+3Ch] [bp-104h] BYREF
  sigset_t set; // [sp+BCh] [bp-84h] BYREF

  a1[2] = 0;
  if ( sub_68B24(&v15, (int *)&v13) )
  {
    sub_64A18(3, "start_blocking_thread: pipe_socketpair() %m");
    exit(1);
  }
  a1[13] = sub_6BD14(v15);
  v2 = sub_6BD14(SHIDWORD(v15));
  a1[15] = v13;
  a1[14] = v2;
  v3 = fcntl(a1[13], 3, 0);
  if ( v3 == -1 )
  {
    sub_64A18(3, "start_blocking_thread: fcntl(F_GETFL) %m");
    exit(1);
  }
  if ( fcntl(a1[13], 4, v3 | 0x800) == -1 )
  {
    sub_64A18(3, "start_blocking_thread: fcntl(F_SETFL, O_NONBLOCK) %m");
    exit(1);
  }
  addremove_io_fd(a1[13], a1[15], 0);
  pthread_attr_init(&v16);
  pthread_attr_setdetachstate(&v16, 1);
  v4 = pthread_attr_getstacksize(&v16, &stacksize);
  if ( v4 )
  {
    v11 = strerror(v4);
    sub_64A18(3, "start_blocking_thread: pthread_attr_getstacksize() -> %s", v11);
  }
  else
  {
    if ( stacksize < 0x10000 )
    {
      v7 = 0x10000;
    }
    else
    {
      if ( stacksize <= 0x40000 )
        goto LABEL_7;
      v7 = 0x40000;
    }
    v8 = pthread_attr_setstacksize(&v16, v7);
    if ( v8 )
    {
      v9 = stacksize;
      v10 = strerror(v8);
      sub_64A18(3, "start_blocking_thread: pthread_attr_setstacksize(0x%lx -> 0x%lx) -> %s", v9, v7, v10);
    }
  }
LABEL_7:
  a1[2] = (pthread_t)sub_637E4(0, 4u, 0, 1);
  sigemptyset(&set);
  sigaddset(&set, 14);
  sigaddset(&set, 10);
  sigaddset(&set, 12);
  sigaddset(&set, 1);
  sigaddset(&set, 2);
  sigaddset(&set, 3);
  sigaddset(&set, 15);
  sigaddset(&set, 7);
  sigemptyset(&v17);
  pthread_sigmask(0, &set, &v17);
  v5 = pthread_create(a1 + 35, &v16, (void *(*)(void *))blocking_thread, a1);
  pthread_sigmask(2, &v17, 0);
  result = pthread_attr_destroy(&v16);
  if ( v5 )
  {
    v12 = strerror(v5);
    sub_64A18(3, "start_blocking_thread: pthread_create() -> %s", v12);
    exit(1);
  }
  a1[2] = (pthread_t)(a1 + 35);
  return result;
}
