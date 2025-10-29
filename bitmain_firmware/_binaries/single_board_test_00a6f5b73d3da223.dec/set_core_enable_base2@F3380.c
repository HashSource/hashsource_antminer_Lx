int __fastcall set_core_enable_base2(int a1, int a2, __useconds_t a3)
{
  int v5; // [sp+4h] [bp-Ch]
  _BYTE v9[24]; // [sp+20h] [bp+10h] BYREF
  int v10; // [sp+1020h] [bp+1010h] BYREF
  int v11; // [sp+102Ch] [bp+101Ch] BYREF
  int v12; // [sp+1030h] [bp+1020h]
  int i; // [sp+1034h] [bp+1024h]

  puts("set_core_enable_base2");
  for ( i = 0; *(unsigned __int8 *)(a2 + 13) > i; ++i )
  {
    if ( (i & 0x1F) == 0 )
      *(_WORD *)(a2 + 10) += i / 32;
    if ( *(unsigned __int8 *)(a2 + 13) > 1u )
      *(_BYTE *)(a2 + 12) = i;
    v12 = (*(int (__fastcall **)(int, int))(a1 + 164))(a1, a2);
    if ( v12 < 0 )
    {
      V_LOCK();
      logfmt_raw(
        v9,
        0x1000u,
        0,
        "%s failed, reg:%02x, core_id:%d",
        "set_core_enable_base2",
        *(unsigned __int16 *)(a2 + 10),
        i);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/chip_reg_io_base.c",
        76,
        "set_core_enable_base2",
        21,
        999,
        100,
        v9);
      return 3;
    }
    usleep(a3);
    v11 = 0;
    (*(void (__fastcall **)(int, int, int, int *, int *, int, int, _DWORD))(a1 + 184))(
      a1,
      a2,
      1,
      &v10,
      &v11,
      v5,
      2000,
      0);
  }
  return 0;
}
