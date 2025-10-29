int __fastcall sub_E289C(int a1, int a2, _BYTE *a3, unsigned __int8 *a4)
{
  unsigned int v5; // r3
  char v10[4]; // [sp+24h] [bp+14h] BYREF
  int v11; // [sp+824h] [bp+814h] BYREF
  unsigned __int8 v12; // [sp+1827h] [bp+1817h]

  v12 = 0;
  sub_E2754(a3, a1, a2, BYTE1(a1));
  do
  {
    sub_E282C(HIBYTE(a1), (int)a3, BYTE1(a1) + 6, (int)a4, BYTE2(a1));
    if ( BYTE2(a1) == 2 )
    {
      if ( *a4 == (unsigned __int8)a1 && a4[1] == 1 )
      {
        snprintf(v10, 0x800u, "PICCMD %d passed on Chain[%d]!", (unsigned __int8)a1, HIBYTE(a1));
        V_LOCK();
        logfmt_raw(&v11, 0x1000u, 0, v10);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/drv_pic/pic_1704.c",
          87,
          "pic_process_cmd",
          15,
          98,
          20,
          &v11);
        return 1;
      }
      snprintf(v10, 0x800u, "PICCMD %d failed on Chain[%d]!", (unsigned __int8)a1, HIBYTE(a1));
      V_LOCK();
      logfmt_raw(&v11, 0x1000u, 0, v10);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/drv_pic/pic_1704.c",
        87,
        "pic_process_cmd",
        15,
        103,
        20,
        &v11);
      sleep(1u);
    }
    else if ( BYTE2(a1) <= 2u )
    {
      snprintf(v10, 0x800u, "ret_len = %d should never happen!!", BYTE2(a1));
      V_LOCK();
      logfmt_raw(&v11, 0x1000u, 0, v10);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/drv_pic/pic_1704.c",
        87,
        "pic_process_cmd",
        15,
        121,
        20,
        &v11);
    }
    else
    {
      if ( __PAIR64__(a4[1], *a4) == __PAIR64__((unsigned __int8)a1, BYTE2(a1)) )
      {
        snprintf(v10, 0x800u, "PICCMD %d passed on Chain[%d]!", (unsigned __int8)a1, HIBYTE(a1));
        V_LOCK();
        logfmt_raw(&v11, 0x1000u, 0, v10);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/drv_pic/pic_1704.c",
          87,
          "pic_process_cmd",
          15,
          111,
          20,
          &v11);
        return 1;
      }
      snprintf(v10, 0x800u, "PICCMD %d failed on Chain[%d]!", (unsigned __int8)a1, HIBYTE(a1));
      V_LOCK();
      logfmt_raw(&v11, 0x1000u, 0, v10);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/drv_pic/pic_1704.c",
        87,
        "pic_process_cmd",
        15,
        116,
        20,
        &v11);
      sleep(1u);
    }
    v5 = v12++;
  }
  while ( v5 <= 2 );
  return 0;
}
