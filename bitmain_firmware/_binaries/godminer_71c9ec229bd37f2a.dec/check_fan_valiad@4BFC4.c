int check_fan_valiad()
{
  unsigned int v0; // r6
  int max_num; // r4
  unsigned int v2; // r11
  int v3; // r5
  int i; // r7
  int v5; // r0
  int realtime_speed; // r10
  _DWORD v8[7]; // [sp+40h] [bp-1024h] BYREF
  int v9; // [sp+5Ch] [bp-1008h]
  char v10[4100]; // [sp+60h] [bp-1004h] BYREF

  if ( !fan_inited )
  {
    fan_init();
    fan_inited = 1;
  }
  green_led_off();
  red_led_off();
  fan_pwm_set_max();
  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, "Begain %s", "check_fan_valiad");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/miner_util/check_fan.c",
    143,
    "check_fan_valiad",
    16,
    34,
    60,
    v10);
  v0 = 0;
  max_num = fan_get_max_num();
  while ( 1 )
  {
    v2 = ++v0 % 0x14;
    if ( max_num <= 0 )
      break;
    v3 = 0;
    for ( i = 0; i != max_num; ++i )
    {
      v5 = i;
      realtime_speed = fan_get_realtime_speed(v5);
      if ( realtime_speed != -1 && fan_get_check_fan_speed() <= realtime_speed )
        ++v3;
    }
    usleep((__useconds_t)&loc_7A120);
    if ( v2 )
    {
      if ( max_num <= v3 )
        goto LABEL_16;
      goto LABEL_12;
    }
LABEL_15:
    fan_pwm_set_max();
    if ( max_num <= v3 )
      goto LABEL_16;
LABEL_12:
    if ( v0 == 120 * (v0 / 0x78) )
    {
      V_LOCK();
      V_STR(v8, "error", "fan lost");
      logfmt_raw(
        v10,
        0x1000u,
        v0 % 0x78,
        v9,
        v8[0],
        v8[1],
        v8[2],
        v8[3],
        v8[4],
        v8[5],
        v8[6],
        v9,
        "%s fan lost(%d)",
        "check_fan_valiad",
        v3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/check_fan.c",
        143,
        "check_fan_valiad",
        16,
        52,
        100,
        v10);
      power_off();
    }
  }
  usleep((__useconds_t)&loc_7A120);
  if ( !v2 )
  {
    v3 = 0;
    goto LABEL_15;
  }
  v3 = 0;
LABEL_16:
  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, "%s, check_fan_speed ok, fan_num = %d", "check_fan_valiad", v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/miner_util/check_fan.c",
    143,
    "check_fan_valiad",
    16,
    57,
    60,
    v10);
  return fan_pwm_set(0x3Cu);
}
