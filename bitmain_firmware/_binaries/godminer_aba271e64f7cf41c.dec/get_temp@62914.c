signed int __fastcall get_temp(int a1)
{
  char v3[8]; // [sp+1Ch] [bp-1008h] BYREF
  signed int v4; // [sp+101Ch] [bp-8h]

  switch ( a1 )
  {
    case 0:
      v4 = sub_62264();
      break;
    case 1:
      v4 = sub_625D4();
      break;
    case 2:
      v4 = sub_61E84();
      break;
    case 3:
      v4 = sub_62104();
      break;
    case 4:
      v4 = sub_623C4();
      break;
    default:
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, "%s unknow temp type %d", a1);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/miner_util/set_pwm_by_temp.c",
        166,
        "get_temp",
        8,
        201,
        100,
        v3);
      v4 = 0x7FFFFFFF;
      break;
  }
  return v4;
}
