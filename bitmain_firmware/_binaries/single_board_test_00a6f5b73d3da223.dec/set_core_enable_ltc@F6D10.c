int __fastcall set_core_enable_ltc(int a1, int a2, __useconds_t a3)
{
  _BYTE v8[8]; // [sp+20h] [bp+10h] BYREF
  int v9; // [sp+1020h] [bp+1010h]
  int i; // [sp+1024h] [bp+1014h]

  for ( i = 0; *(unsigned __int8 *)(a2 + 13) > i; ++i )
  {
    *(_DWORD *)a2 = 34047;
    *(_WORD *)(a2 + 10) = 0;
    *(_BYTE *)(a2 + 12) = i;
    *(_BYTE *)(a2 + 14) = 0;
    *(_BYTE *)(a2 + 15) = 0;
    v9 = (*(int (__fastcall **)(int, int))(a1 + 164))(a1, a2);
    if ( v9 )
    {
      V_LOCK();
      logfmt_raw(
        v8,
        0x1000u,
        0,
        "%s failed, reg:%02x, core_id:%d",
        "set_core_enable_ltc",
        *(unsigned __int16 *)(a2 + 10),
        i);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ltc/chip_reg_io_ltc.c",
        87,
        "set_core_enable_ltc",
        19,
        408,
        100,
        v8);
      return v9;
    }
    usleep(a3);
  }
  return 0;
}
