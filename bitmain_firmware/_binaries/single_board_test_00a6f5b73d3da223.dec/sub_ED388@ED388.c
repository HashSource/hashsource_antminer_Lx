int __fastcall sub_ED388(unsigned __int8 a1)
{
  int v1; // r3
  char v3[4]; // [sp+1Ch] [bp+Ch] BYREF
  int v4; // [sp+81Ch] [bp+80Ch] BYREF
  unsigned int v5; // [sp+181Ch] [bp+180Ch] BYREF

  v5 = 0;
  switch ( a1 )
  {
    case 0u:
      fpga_read(0x1F0u, &v5);
      v1 = HIWORD(v5) & 0x3FF;
      break;
    case 1u:
      fpga_read(0x1F0u, &v5);
      v1 = v5 & 0x3FF;
      break;
    case 2u:
      fpga_read(0x1F4u, &v5);
      v1 = HIWORD(v5) & 0x3FF;
      break;
    case 3u:
      fpga_read(0x1F4u, &v5);
      v1 = v5 & 0x3FF;
      break;
    case 4u:
      fpga_read(0x1F8u, &v5);
      v1 = HIWORD(v5) & 0x3FF;
      break;
    case 5u:
      fpga_read(0x1F8u, &v5);
      v1 = v5 & 0x3FF;
      break;
    case 6u:
      fpga_read(0x1FCu, &v5);
      v1 = HIWORD(v5) & 0x3FF;
      break;
    case 7u:
      fpga_read(0x1FCu, &v5);
      v1 = v5 & 0x3FF;
      break;
    case 8u:
      fpga_read(0x200u, &v5);
      v1 = HIWORD(v5) & 0x3FF;
      break;
    case 9u:
      fpga_read(0x200u, &v5);
      v1 = v5 & 0x3FF;
      break;
    case 0xAu:
      fpga_read(0x204u, &v5);
      v1 = HIWORD(v5) & 0x3FF;
      break;
    case 0xBu:
      fpga_read(0x204u, &v5);
      v1 = v5 & 0x3FF;
      break;
    case 0xCu:
      fpga_read(0x208u, &v5);
      v1 = HIWORD(v5) & 0x3FF;
      break;
    case 0xDu:
      fpga_read(0x208u, &v5);
      v1 = v5 & 0x3FF;
      break;
    default:
      snprintf(v3, 0x800u, "%s: The uart%d is not supported!!!\n", "check_how_many_uart_data_in_fpga", a1);
      V_LOCK();
      logfmt_raw(&v4, 0x1000u, 0, v3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_uart.c",
        94,
        "check_how_many_uart_data_in_fpga",
        32,
        273,
        100,
        &v4);
      v1 = 0;
      break;
  }
  return v1;
}
