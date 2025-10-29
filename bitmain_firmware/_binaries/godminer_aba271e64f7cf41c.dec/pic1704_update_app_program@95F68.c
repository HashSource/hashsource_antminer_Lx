int __fastcall pic1704_update_app_program(char a1)
{
  __int64 *v2; // r3
  __int64 v3; // r0
  __int64 v4; // r2
  char v7[56]; // [sp+1Ch] [bp-1838h] BYREF
  char v8[56]; // [sp+81Ch] [bp-1038h] BYREF
  __int64 v9; // [sp+181Ch] [bp-38h] BYREF
  __int64 v10; // [sp+1824h] [bp-30h]
  char nptr[8]; // [sp+182Ch] [bp-28h] BYREF
  unsigned int v12; // [sp+1834h] [bp-20h]
  unsigned int v13; // [sp+1838h] [bp-1Ch]
  unsigned int v14; // [sp+183Ch] [bp-18h]
  void *s; // [sp+1840h] [bp-14h]
  FILE *stream; // [sp+1844h] [bp-10h]
  unsigned int i; // [sp+1848h] [bp-Ch]
  int v18; // [sp+184Ch] [bp-8h]

  i = 0;
  *(_DWORD *)nptr = 0;
  *(_DWORD *)&nptr[3] = 0;
  v9 = 0;
  v10 = 0;
  v14 = 0;
  v13 = 3520;
  v12 = 880;
  v18 = 0;
  stream = fopen("/etc/config/dsPIC33EP16GS202_app.txt", "r");
  if ( stream )
  {
    s = malloc(0x3700u);
    if ( s )
    {
      fseek(stream, 0, 0);
      memset(s, 0, 0x3700u);
      for ( i = 0; i < v13; ++i )
      {
        fgets(nptr, 7, stream);
        v14 = strtoul(nptr, 0, 16);
        *((_BYTE *)s + 4 * i) = HIBYTE(v14);
        *((_BYTE *)s + 4 * i + 1) = BYTE2(v14);
        *((_BYTE *)s + 4 * i + 2) = BYTE1(v14);
        *((_BYTE *)s + 4 * i + 3) = v14;
      }
      fclose(stream);
      v18 = pic1704_reset(a1);
      if ( v18 )
      {
        v18 = pic1704_erase_program(a1);
        if ( v18 )
        {
          for ( i = 0; i < v12; ++i )
          {
            v2 = (__int64 *)((char *)s + 16 * i);
            v3 = *v2;
            v4 = v2[1];
            v9 = v3;
            v10 = v4;
            v18 = sub_95ED8(a1, (int)&v9);
            if ( !v18 )
            {
              snprintf(
                v7,
                0x800u,
                "%s send data to pic error chain[%d]!",
                "pic1704_update_app_program",
                (unsigned __int8)a1);
              V_LOCK();
              logfmt_raw(v8, 0x1000u, 0, v7);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build"
                "/godminer-origin_godminer-branch1/backend/device/hal/drv_pic/pic_1704.c",
                175,
                "pic1704_update_app_program",
                26,
                338,
                20,
                v8);
              free(s);
              return 0;
            }
          }
          v18 = pic1704_reset(a1);
          if ( v18 )
          {
            free(s);
            return 1;
          }
          else
          {
            snprintf(
              v7,
              0x800u,
              "%s reset error after program chain[%d]!",
              "pic1704_update_app_program",
              (unsigned __int8)a1);
            V_LOCK();
            logfmt_raw(v8, 0x1000u, 0, v7);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/g"
              "odminer-origin_godminer-branch1/backend/device/hal/drv_pic/pic_1704.c",
              175,
              "pic1704_update_app_program",
              26,
              348,
              20,
              v8);
            V_LOCK();
            logfmt_raw(v8, 0x1000u, 0, "Sweep error string = J%d:5.", (unsigned __int8)a1);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/g"
              "odminer-origin_godminer-branch1/backend/device/hal/drv_pic/pic_1704.c",
              175,
              "pic1704_update_app_program",
              26,
              349,
              100,
              v8);
            free(s);
            return 0;
          }
        }
        else
        {
          snprintf(v7, 0x800u, "%s erase pic error chain[%d]!", "pic1704_update_app_program", (unsigned __int8)a1);
          V_LOCK();
          logfmt_raw(v8, 0x1000u, 0, v7);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/backend/device/hal/drv_pic/pic_1704.c",
            175,
            "pic1704_update_app_program",
            26,
            318,
            20,
            v8);
          free(s);
          return 0;
        }
      }
      else
      {
        snprintf(v7, 0x800u, "%s reset pic error chain[%d]!", "pic1704_update_app_program", (unsigned __int8)a1);
        V_LOCK();
        logfmt_raw(v8, 0x1000u, 0, v7);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/device/hal/drv_pic/pic_1704.c",
          175,
          "pic1704_update_app_program",
          26,
          308,
          20,
          v8);
        V_LOCK();
        logfmt_raw(v8, 0x1000u, 0, "Sweep error string = J%d:5.", (unsigned __int8)a1);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/device/hal/drv_pic/pic_1704.c",
          175,
          "pic1704_update_app_program",
          26,
          309,
          100,
          v8);
        free(s);
        return 0;
      }
    }
    else
    {
      snprintf(v7, 0x800u, "%s malloc failed chain[%d]!", "pic1704_update_app_program", (unsigned __int8)a1);
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, v7);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/drv_pic/pic_1704.c",
        175,
        "pic1704_update_app_program",
        26,
        282,
        20,
        v8);
      set_miner_6060info_malloc_failed_err(1);
      return -1;
    }
  }
  else
  {
    snprintf(
      v7,
      0x800u,
      "%s open DSPIC33EP16GS202_PIC_PROGRAM failed chain[%d]!",
      "pic1704_update_app_program",
      (unsigned __int8)a1);
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, v7);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/drv_pic/pic_1704.c",
      175,
      "pic1704_update_app_program",
      26,
      275,
      20,
      v8);
    return -1;
  }
}
