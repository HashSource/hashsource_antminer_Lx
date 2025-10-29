int __fastcall pic1704_update_app_program(char a1)
{
  char *v2; // r3
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r3
  char v9[20]; // [sp+1Ch] [bp+Ch] BYREF
  _BYTE v10[20]; // [sp+81Ch] [bp+80Ch] BYREF
  int v11; // [sp+181Ch] [bp+180Ch] BYREF
  int v12; // [sp+1820h] [bp+1810h]
  int v13; // [sp+1824h] [bp+1814h]
  int v14; // [sp+1828h] [bp+1818h]
  char v15[8]; // [sp+182Ch] [bp+181Ch] BYREF
  char *v16; // [sp+1834h] [bp+1824h]
  FILE *v17; // [sp+1838h] [bp+1828h]
  int v18; // [sp+183Ch] [bp+182Ch]
  unsigned int v19; // [sp+1840h] [bp+1830h]
  unsigned int v20; // [sp+1844h] [bp+1834h]
  unsigned int v21; // [sp+1848h] [bp+1838h]
  unsigned int i; // [sp+184Ch] [bp+183Ch]

  i = 0;
  memset(v15, 0, 7);
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v21 = 0;
  v20 = 3520;
  v19 = 880;
  v18 = 0;
  v17 = fopen("/etc/config/dsPIC33EP16GS202_app.txt", "r");
  if ( v17 )
  {
    v16 = (char *)malloc(0x3700u);
    if ( v16 )
    {
      fseek(v17, 0, 0);
      memset(v16, 0, 0x3700u);
      for ( i = 0; i < v20; ++i )
      {
        fgets(v15, 7, v17);
        v21 = strtoul(v15, 0, 16);
        v16[4 * i] = HIBYTE(v21);
        v16[4 * i + 1] = BYTE2(v21);
        v16[4 * i + 2] = BYTE1(v21);
        v16[4 * i + 3] = v21;
      }
      fclose(v17);
      v18 = pic1704_reset(a1);
      if ( v18 )
      {
        v18 = pic1704_erase_program(a1);
        if ( v18 )
        {
          for ( i = 0; i < v19; ++i )
          {
            v2 = &v16[16 * i];
            v3 = *(_DWORD *)v2;
            v4 = *((_DWORD *)v2 + 1);
            v5 = *((_DWORD *)v2 + 2);
            v6 = *((_DWORD *)v2 + 3);
            v11 = v3;
            v12 = v4;
            v13 = v5;
            v14 = v6;
            v18 = sub_E2E54(a1, (int)&v11);
            if ( !v18 )
            {
              snprintf(
                v9,
                0x800u,
                "%s send data to pic error chain[%d]!",
                "pic1704_update_app_program",
                (unsigned __int8)a1);
              V_LOCK();
              logfmt_raw(v10, 0x1000u, 0, v9);
              V_UNLOCK();
              zlog(
                g_zc,
                "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/drv_pic/pic_1704.c",
                87,
                "pic1704_update_app_program",
                26,
                335,
                20,
                v10);
              free(v16);
              return 0;
            }
          }
          v18 = pic1704_reset(a1);
          if ( v18 )
          {
            free(v16);
            return 1;
          }
          else
          {
            snprintf(
              v9,
              0x800u,
              "%s reset error after program chain[%d]!",
              "pic1704_update_app_program",
              (unsigned __int8)a1);
            V_LOCK();
            logfmt_raw(v10, 0x1000u, 0, v9);
            V_UNLOCK();
            zlog(
              g_zc,
              "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/drv_pic/pic_1704.c",
              87,
              "pic1704_update_app_program",
              26,
              345,
              20,
              v10);
            free(v16);
            return 0;
          }
        }
        else
        {
          snprintf(v9, 0x800u, "%s erase pic error chain[%d]!", "pic1704_update_app_program", (unsigned __int8)a1);
          V_LOCK();
          logfmt_raw(v10, 0x1000u, 0, v9);
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/drv_pic/pic_1704.c",
            87,
            "pic1704_update_app_program",
            26,
            315,
            20,
            v10);
          free(v16);
          return 0;
        }
      }
      else
      {
        snprintf(v9, 0x800u, "%s reset pic error chain[%d]!", "pic1704_update_app_program", (unsigned __int8)a1);
        V_LOCK();
        logfmt_raw(v10, 0x1000u, 0, v9);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/drv_pic/pic_1704.c",
          87,
          "pic1704_update_app_program",
          26,
          306,
          20,
          v10);
        free(v16);
        return 0;
      }
    }
    else
    {
      snprintf(v9, 0x800u, "%s malloc failed chain[%d]!", "pic1704_update_app_program", (unsigned __int8)a1);
      V_LOCK();
      logfmt_raw(v10, 0x1000u, 0, v9);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/drv_pic/pic_1704.c",
        87,
        "pic1704_update_app_program",
        26,
        281,
        20,
        v10);
      return -1;
    }
  }
  else
  {
    snprintf(
      v9,
      0x800u,
      "%s open DSPIC33EP16GS202_PIC_PROGRAM failed chain[%d]!",
      "pic1704_update_app_program",
      (unsigned __int8)a1);
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, v9);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/drv_pic/pic_1704.c",
      87,
      "pic1704_update_app_program",
      26,
      274,
      20,
      v10);
    return -1;
  }
}
