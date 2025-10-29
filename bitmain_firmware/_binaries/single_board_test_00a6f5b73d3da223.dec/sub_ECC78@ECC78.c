int __fastcall sub_ECC78(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  char v6[4]; // [sp+24h] [bp+14h] BYREF
  int v7; // [sp+824h] [bp+814h] BYREF
  int v8; // [sp+1824h] [bp+1814h]

  v8 = 0;
  switch ( a1 )
  {
    case 0:
      *a2 = 24;
      *a3 = 384;
      *a4 = 400;
      *a5 = 404;
      break;
    case 1:
      *a2 = 16;
      *a3 = 384;
      *a4 = 408;
      *a5 = 412;
      break;
    case 2:
      *a2 = 8;
      *a3 = 384;
      *a4 = 416;
      *a5 = 420;
      break;
    case 3:
      *a2 = 0;
      *a3 = 384;
      *a4 = 424;
      *a5 = 428;
      break;
    case 4:
      *a2 = 24;
      *a3 = 388;
      *a4 = 432;
      *a5 = 436;
      break;
    case 5:
      *a2 = 16;
      *a3 = 388;
      *a4 = 440;
      *a5 = 444;
      break;
    case 6:
      *a2 = 8;
      *a3 = 388;
      *a4 = 448;
      *a5 = 452;
      break;
    case 7:
      *a2 = 0;
      *a3 = 388;
      *a4 = 456;
      *a5 = 460;
      break;
    case 8:
      *a2 = 24;
      *a3 = 392;
      *a4 = 464;
      *a5 = 468;
      break;
    case 9:
      *a2 = 16;
      *a3 = 392;
      *a4 = 472;
      *a5 = 476;
      break;
    case 10:
      *a2 = 8;
      *a3 = 392;
      *a4 = 608;
      *a5 = 612;
      break;
    case 11:
      *a2 = 0;
      *a3 = 392;
      *a4 = 616;
      *a5 = 620;
      break;
    case 12:
      *a2 = 24;
      *a3 = 396;
      *a4 = 624;
      *a5 = 628;
      break;
    case 13:
      *a2 = 16;
      *a3 = 396;
      *a4 = 632;
      *a5 = 636;
      break;
    default:
      snprintf(v6, 0x800u, "%s: The uart %d is not supported!!!\n", "get_send_address_info", a1);
      V_LOCK();
      logfmt_raw(&v7, 0x1000u, 0, v6);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_uart.c",
        94,
        "get_send_address_info",
        21,
        121,
        100,
        &v7);
      v8 = -1;
      break;
  }
  return v8;
}
