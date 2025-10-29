void __fastcall __noreturn sub_C76AC(int a1)
{
  unsigned int v1; // r0
  size_t v2; // r0
  char v3[20]; // [sp+18h] [bp-2054h] BYREF
  char v4[20]; // [sp+1018h] [bp-1054h] BYREF
  char src[20]; // [sp+2018h] [bp-54h] BYREF
  char s[32]; // [sp+202Ch] [bp-40h] BYREF
  time_t timer; // [sp+204Ch] [bp-20h] BYREF
  unsigned int v8; // [sp+2050h] [bp-1Ch]
  struct tm *tp; // [sp+2054h] [bp-18h]
  int v10; // [sp+2058h] [bp-14h]
  int v11; // [sp+205Ch] [bp-10h]

  v10 = a1;
  v11 = 0;
  if ( !a1 )
  {
    strcpy(v3, "input arg wrong\n");
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, v3, 0);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/common/general/log/log.c",
      162,
      "log_thread_routine",
      18,
      272,
      120,
      v4);
  }
  *(_DWORD *)v10 = 0;
  *(_DWORD *)(v10 + 92) = "cglog_sync";
  while ( 1 )
  {
    if ( !(++v11 % 0x1Eu) )
    {
      time(&timer);
      tp = localtime(&timer);
      strftime(s, 0xFu, "%Y-%m/%d", tp);
      strftime(src, 0xAu, "%H-%M-%S", tp);
      if ( !strncmp((const char *)(v10 + 42), "1970", 4u) && timer > 31536000 )
      {
        v8 = sub_C6EC4(v10, "cglog_init", s, src);
        v1 = sub_C6EC4(v10, "cglog_sync", s, src);
        v8 |= v1;
        if ( !v8 )
        {
          strncpy((char *)(v10 + 42), s, 0x1Eu);
          strncpy((char *)(v10 + 72), src, 0x14u);
          strcpy((char *)(v10 + 12), (const char *)(v10 + 42));
        }
      }
      if ( *(_BYTE *)(v10 + 12) )
      {
        v2 = strlen(s);
        if ( strncmp((const char *)(v10 + 12), s, v2) )
        {
          v8 = sub_C74B8(v10, "cglog_sync", s);
          if ( !v8 )
            strncpy((char *)(v10 + 12), s, 0x1Eu);
        }
      }
      else
      {
        strcpy((char *)(v10 + 12), (const char *)(v10 + 42));
      }
      sub_C7148(v10);
    }
    sleep(1u);
  }
}
