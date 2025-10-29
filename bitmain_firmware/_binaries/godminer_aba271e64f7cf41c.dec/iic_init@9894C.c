int __fastcall iic_init(int a1)
{
  char v4[2048]; // [sp+18h] [bp-180Ch] BYREF
  char v5[12]; // [sp+818h] [bp-100Ch] BYREF
  int v6; // [sp+1818h] [bp-Ch]
  int v7; // [sp+181Ch] [bp-8h]

  v7 = 0;
  v6 = 0;
  if ( pthread_mutex_lock(&stru_15F97C) )
  {
    strcpy(v4, "failed to iic lock\n");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_iic.c",
      185,
      "iic_init",
      8,
      32,
      100,
      v5);
    return -4;
  }
  else if ( a1 )
  {
    if ( *(_DWORD *)a1 || *(_WORD *)(a1 + 4) != 1 || *(_BYTE *)(a1 + 6) != 2 || *(_BYTE *)(a1 + 7) )
    {
      v6 = i2c_init("/dev/i2c-0");
      if ( v6 >= 0 )
      {
        if ( i2c_ioctl(v6, 1795, (16 * *(unsigned __int8 *)(a1 + 6)) | (2 * *(unsigned __int8 *)(a1 + 7))) )
        {
          strcpy(v4, "failed to i2c_ioctl\n");
          V_LOCK();
          logfmt_raw(v5, 0x1000u, 0, v4);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_iic.c",
            185,
            "iic_init",
            8,
            68,
            100,
            v5);
          v7 = -1;
        }
        else
        {
          v7 = v6;
          snprintf(
            v4,
            0x800u,
            "i2c chain = %d, master = 0x%x, slave = 0x%x\n",
            *(_DWORD *)a1,
            *(unsigned __int16 *)(a1 + 4),
            (8 * *(unsigned __int8 *)(a1 + 6)) | *(unsigned __int8 *)(a1 + 7));
          V_LOCK();
          logfmt_raw(v5, 0x1000u, 0, v4);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_iic.c",
            185,
            "iic_init",
            8,
            74,
            20,
            v5);
        }
      }
      else
      {
        strcpy(v4, "failed to i2c_init\n");
        V_LOCK();
        logfmt_raw(v5, 0x1000u, 0, v4);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_iic.c",
          185,
          "iic_init",
          8,
          61,
          100,
          v5);
        v7 = -1;
      }
    }
    else
    {
      v6 = i2c_sim_init();
      if ( v6 < 0 )
      {
        strcpy(v4, "failed to i2c_sim_init\n");
        V_LOCK();
        logfmt_raw(v5, 0x1000u, 0, v4);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_iic.c",
          185,
          "iic_init",
          8,
          51,
          100,
          v5);
        v7 = -1;
      }
      v7 = v6;
    }
    pthread_mutex_unlock(&stru_15F97C);
    return v7;
  }
  else
  {
    pthread_mutex_unlock(&stru_15F97C);
    strcpy(v4, "bad param\n");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_iic.c",
      185,
      "iic_init",
      8,
      39,
      100,
      v5);
    v7 = -3;
    return -3;
  }
}
