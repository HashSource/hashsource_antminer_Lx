int get_power_voltage_calibration_data()
{
  _BYTE v2[16]; // [sp+10h] [bp+0h] BYREF
  uint8_t v3[30]; // [sp+1010h] [bp+1000h] BYREF
  unsigned __int16 v4; // [sp+102Eh] [bp+101Eh]
  unsigned __int16 v5; // [sp+1032h] [bp+1022h]
  unsigned __int8 v6; // [sp+1035h] [bp+1025h]
  uint16_t v7; // [sp+1036h] [bp+1026h]
  _DWORD *v8; // [sp+1038h] [bp+1028h]
  int i; // [sp+103Ch] [bp+102Ch]
  _BYTE v10[4]; // [sp+1040h] [bp+1030h] BYREF

  v8 = &unk_47B8D0;
  bitmain_power_read(0x40u, (int)v3, 0x20u);
  v4 = HIBYTE(v4) | (v4 << 8);
  v7 = CRC16(v3, 0x1Eu);
  if ( v7 == v4 )
  {
    v8[24] = 0;
    for ( i = 0; i <= 9 && (v10[3 * i - 48] || v10[3 * i - 47] || v10[3 * i - 46]); ++i )
    {
      v6 = v10[3 * i - 47] >> 2;
      v5 = v10[3 * i - 47] & 3;
      v5 <<= 8;
      v5 |= (unsigned __int8)v10[3 * i - 46];
      *(double *)&v8[2 * i + 4] = (double)v6 + (double)v5 / 1000.0;
      *((_BYTE *)v8 + i) = v10[3 * i - 48];
      ++v8[24];
      V_LOCK();
      logfmt_raw(v2, 0x1000u, 0, "vol %f N %d", v8[2 * i + 4], v8[2 * i + 5], *((unsigned __int8 *)v8 + i));
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/power/bitmain_power_APW9.c",
        95,
        "get_power_voltage_calibration_data",
        34,
        697,
        60,
        v2);
    }
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, "%s error!", "get_power_voltage_calibration_data");
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/power/bitmain_power_APW9.c",
      95,
      "get_power_voltage_calibration_data",
      34,
      680,
      100,
      v2);
    return -1;
  }
}
