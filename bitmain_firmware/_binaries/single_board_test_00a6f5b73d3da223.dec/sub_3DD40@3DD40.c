int __fastcall sub_3DD40(int a1, int a2)
{
  _BYTE v6[12]; // [sp+1Ch] [bp+Ch] BYREF
  int v7; // [sp+101Ch] [bp+100Ch]
  double v8; // [sp+1020h] [bp+1010h]

  v8 = (double)a1 / 100.0;
  v7 = bitmain_set_voltage();
  if ( v7 >= 0 )
  {
    usleep(0x7A120u);
    *(_DWORD *)(a2 + 28) = a1;
    *(_DWORD *)(a2 + 32) = *(_DWORD *)(a2 + 28);
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, "bitmain_set_voltage failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/miner_util/power_api.c",
      72,
      "set_voltage_without_feedback",
      28,
      121,
      100,
      v6);
    return -1;
  }
}
