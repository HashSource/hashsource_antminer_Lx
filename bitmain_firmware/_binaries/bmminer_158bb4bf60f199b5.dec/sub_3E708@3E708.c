int sub_3E708()
{
  int *v1; // r0
  int *v2; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( pthread_mutex_lock(&stru_1AEB78) )
  {
    v1 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v1, "api.c", "restart_thread", 4831);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  if ( pthread_mutex_unlock(&stru_1AEB78) )
  {
    v2 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v2, "api.c", "restart_thread", 4832);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  off_9E444();
  if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
  {
    strcpy(s, "API: restarting bmminer");
    sub_47AB4(7, s, 0);
  }
  sub_57A6C();
  return 0;
}
