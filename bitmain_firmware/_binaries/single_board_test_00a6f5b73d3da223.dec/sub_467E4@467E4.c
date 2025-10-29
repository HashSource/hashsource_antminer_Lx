int sub_467E4()
{
  int v0; // r4
  char v3[2048]; // [sp+10h] [bp+0h] BYREF
  _BYTE v4[8]; // [sp+810h] [bp+800h] BYREF
  int v5; // [sp+1810h] [bp+1800h]
  unsigned __int8 i; // [sp+1817h] [bp+1807h]

  if ( dword_479E64 || (dword_479E64 = (int)calloc(1u, 0x54u)) != 0 )
  {
    for ( i = 0; i < dword_479EA8; ++i )
    {
      v5 = dword_479E68[i];
      if ( !*(_DWORD *)(dword_479E64 + 4 * v5) )
      {
        v0 = dword_479E64;
        *(_DWORD *)(v0 + 4 * v5) = calloc(1u, 0x3Fu);
        if ( !*(_DWORD *)(dword_479E64 + 4 * v5) )
        {
          snprintf(v3, 0x800u, "No memory for configuraion for chain %d.\n", v5);
          V_LOCK();
          logfmt_raw(v4, 0x1000u, 0, v3);
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
            92,
            "_alloc_memory",
            13,
            215,
            100,
            v4);
          goto LABEL_11;
        }
      }
    }
    return 0;
  }
  else
  {
    strcpy(v3, "No memory for configuraion.\n");
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, v3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
      92,
      "_alloc_memory",
      13,
      202,
      100,
      v4);
LABEL_11:
    sub_46740();
    return -1;
  }
}
