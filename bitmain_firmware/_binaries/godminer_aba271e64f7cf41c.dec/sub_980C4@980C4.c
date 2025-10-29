int sub_980C4()
{
  int v0; // r0
  int v1; // r4
  int v2; // r4
  int v3; // r4
  int v4; // r4
  int v5; // r4
  int v6; // r4
  int v7; // r4
  int v8; // r3
  char v10[48]; // [sp+1Ch] [bp-1870h] BYREF
  char v11[48]; // [sp+81Ch] [bp-1070h] BYREF
  _QWORD v12[4]; // [sp+181Ch] [bp-70h] BYREF
  _DWORD s[16]; // [sp+183Ch] [bp-50h] BYREF
  unsigned __int8 i; // [sp+187Fh] [bp-Dh]

  memset(s, 0, sizeof(s));
  memset(v12, 0, sizeof(v12));
  for ( i = 0; ; ++i )
  {
    v2 = i;
    if ( v2 >= hal_fan_number() )
      break;
    do
    {
      memset(s, 0, sizeof(s));
      v0 = hal_fan_addr(i);
      snprintf((char *)s, 0x40u, "/sys/class/pwm/pwmchip12/pwm%d/capture", v0);
      v1 = i;
      *((_DWORD *)v12 + v1) = fopen((const char *)s, "r");
      if ( !*((_DWORD *)v12 + i) )
      {
        snprintf(v10, 0x800u, "fail to open %s", (const char *)s);
        V_LOCK();
        logfmt_raw(v11, 0x1000u, 0, v10);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_fan.c",
          185,
          "fan_thread_function",
          19,
          62,
          100,
          v11);
        usleep(0x2DC6C0u);
      }
    }
    while ( !*((_DWORD *)v12 + i) && dword_15F938 == 1 );
    snprintf(v10, 0x800u, "%s open successfully", (const char *)s);
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_fan.c",
      185,
      "fan_thread_function",
      19,
      67,
      20,
      v11);
  }
  while ( dword_15F938 )
  {
    for ( i = 0; ; ++i )
    {
      v6 = i;
      if ( v6 >= hal_fan_number() )
        break;
      fflush(*((FILE **)v12 + i));
      fseek(*((FILE **)v12 + i), 0, 0);
      memset(s, 0, sizeof(s));
      fread(s, 1u, 0x40u, *((FILE **)v12 + i));
      v3 = i;
      dword_15F95C[v3] = sub_97FB0(i, (const char *)s);
      dword_1505A8[i] = dword_15F95C[i];
      v4 = dword_1505A8[i];
      if ( v4 > QMap<tagE_LEVEL,MFaultLabel::FaultType>::empty(i) )
      {
        v5 = i;
        dword_1505A8[v5] = QMap<tagE_LEVEL,MFaultLabel::FaultType>::empty(i);
      }
    }
    usleep(0x64u);
  }
  for ( i = 0; ; ++i )
  {
    v7 = i;
    if ( v7 >= hal_fan_number() )
      break;
    fclose(*((FILE **)v12 + i));
  }
  strcpy(v10, "fan thread exit\n");
  V_LOCK();
  logfmt_raw(v11, 0x1000u, 0, v10);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_fan.c",
    185,
    "fan_thread_function",
    19,
    94,
    20,
    v11);
  return v8;
}
