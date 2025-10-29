int __fastcall sub_ED0C8(int a1, _DWORD *a2, _DWORD *a3)
{
  char v4[4]; // [sp+24h] [bp+14h] BYREF
  int v5; // [sp+824h] [bp+814h] BYREF
  int v6; // [sp+1824h] [bp+1814h]

  v6 = 0;
  switch ( a1 )
  {
    case 0:
      *a2 = 528;
      *a3 = 532;
      break;
    case 1:
      *a2 = 536;
      *a3 = 540;
      break;
    case 2:
      *a2 = 544;
      *a3 = 548;
      break;
    case 3:
      *a2 = 552;
      *a3 = 556;
      break;
    case 4:
      *a2 = 560;
      *a3 = 564;
      break;
    case 5:
      *a2 = 568;
      *a3 = 572;
      break;
    case 6:
      *a2 = 576;
      *a3 = 580;
      break;
    case 7:
      *a2 = 584;
      *a3 = 588;
      break;
    case 8:
      *a2 = 592;
      *a3 = 596;
      break;
    case 9:
      *a2 = 600;
      *a3 = 604;
      break;
    case 10:
      *a2 = 656;
      *a3 = 660;
      break;
    case 11:
      *a2 = 664;
      *a3 = 668;
      break;
    case 12:
      *a2 = 672;
      *a3 = 676;
      break;
    case 13:
      *a2 = 680;
      *a3 = 684;
      break;
    default:
      snprintf(v4, 0x800u, "%s: The uart%d is not supported!!!\n", "get_read_address_info", a1);
      V_LOCK();
      logfmt_raw(&v5, 0x1000u, 0, v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_uart.c",
        94,
        "get_read_address_info",
        21,
        207,
        100,
        &v5);
      v6 = -1;
      break;
  }
  return v6;
}
