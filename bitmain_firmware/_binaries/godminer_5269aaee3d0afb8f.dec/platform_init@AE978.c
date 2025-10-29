int platform_init()
{
  int v0; // r5
  int *v2; // r3
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r3
  _DWORD *v7; // r8
  int v8; // r1
  int v9; // r1
  int *v10; // r12
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r12
  int v16; // r0
  int v17; // r3
  int v18; // r1
  int *v19; // r12
  int v20; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r12
  int v25; // [sp+14h] [bp-1804h] BYREF
  int s; // [sp+18h] [bp-1800h] BYREF
  int v27; // [sp+1Ch] [bp-17FCh]
  int v28; // [sp+20h] [bp-17F8h]
  int v29; // [sp+24h] [bp-17F4h]
  __int16 v30; // [sp+28h] [bp-17F0h]
  char v31[4096]; // [sp+818h] [bp-1000h] BYREF

  if ( platform_inited )
    return 0;
  LOWORD(v2) = -7544;
  HIWORD(v2) = (unsigned int)"ux_LTC" >> 16;
  v3 = *v2;
  v4 = v2[1];
  v5 = v2[2];
  v6 = v2[3];
  LOWORD(v7) = -14756;
  HIWORD(v7) = (unsigned int)&unk_16B55C >> 16;
  s = v3;
  v27 = v4;
  v28 = v5;
  LOWORD(v29) = v6;
  BYTE2(v29) = BYTE2(v6);
  V_LOCK();
  logfmt_raw(v31, 0x1000u, 0, &s);
  V_UNLOCK();
  LOWORD(v8) = -7736;
  HIWORD(v8) = (unsigned int)"ing_get_addr_LTC" >> 16;
  zlog(*v7, v8, 167, "platform_init", 13, 63, 60, v31);
  if ( fpga_init() )
  {
    LOWORD(v10) = -7528;
    HIWORD(v10) = (unsigned int)&off_13CCB8 >> 16;
    v0 = -1;
    v11 = *v10;
    v12 = v10[1];
    v13 = v10[2];
    v14 = v10[3];
    v15 = v10[4];
    s = v11;
    v27 = v12;
    v28 = v13;
    v29 = v14;
    v30 = v15;
    V_LOCK();
    logfmt_raw(v31, 0x1000u, 0, &s);
    V_UNLOCK();
    v16 = *v7;
    v17 = 67;
LABEL_9:
    LOWORD(v18) = -7736;
    HIWORD(v18) = (unsigned int)"ing_get_addr_LTC" >> 16;
    zlog(v16, v18, 167, "platform_init", 13, v17, 100, v31);
    return v0;
  }
  if ( gpio_init() )
  {
    LOWORD(v19) = -7508;
    HIWORD(v19) = (unsigned int)off_13CCCC >> 16;
    v0 = -2;
    v20 = *v19;
    v21 = v19[1];
    v22 = v19[2];
    v23 = v19[3];
    v24 = v19[4];
    s = v20;
    v27 = v21;
    v28 = v22;
    v29 = v23;
    v30 = v24;
    V_LOCK();
    logfmt_raw(v31, 0x1000u, 0, &s);
    V_UNLOCK();
    v16 = *v7;
    v17 = 73;
    goto LABEL_9;
  }
  memset(&unk_16BF68, 0, 0x124u);
  v25 = 0;
  fpga_read(0, &v25);
  v25 |= 0x20000000u;
  snprintf((char *)&s, 0x800u, "HARDWARE_VERSION = 0x%x\n", v25);
  V_LOCK();
  logfmt_raw(v31, 0x1000u, 0, &s);
  V_UNLOCK();
  LOWORD(v9) = -7736;
  HIWORD(v9) = (unsigned int)"ing_get_addr_LTC" >> 16;
  zlog(*v7, v9, 167, "platform_init", 13, 86, 40, v31);
  fpga_write(0, v25);
  platform_inited = 1;
  fan_init();
  uart_init();
  return 0;
}
