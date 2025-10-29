__int64 __fastcall log_droa(const char *a1)
{
  if ( !dword_16096C )
    dword_16096C = zlog_get_category(off_15104C[0]);
  return zlog(
           dword_16096C,
           "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godm"
           "iner-origin_godminer-branch1/common/general/log/log.c",
           162,
           "log_droa",
           8,
           110,
           40,
           "%s",
           a1);
}
