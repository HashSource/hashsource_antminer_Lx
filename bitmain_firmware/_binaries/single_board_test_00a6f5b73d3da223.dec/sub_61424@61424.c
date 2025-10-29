int __fastcall sub_61424(int a1, int a2)
{
  int v6; // [sp+1Ch] [bp+Ch] BYREF
  int i; // [sp+101Ch] [bp+100Ch]

  for ( i = 31; i >= 0; --i )
  {
    V_LOCK();
    logfmt_raw(&v6, 0x1000u, 0, "%02x Vs %02x", *(unsigned __int8 *)(a1 + i), *(unsigned __int8 *)(a2 + i));
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_dcr/backend_dcr.c",
      83,
      "fulltest_dcr",
      12,
      306,
      60,
      &v6);
    if ( *(unsigned __int8 *)(a1 + i) < (unsigned int)*(unsigned __int8 *)(a2 + i) )
      return 1;
    if ( *(unsigned __int8 *)(a1 + i) > (unsigned int)*(unsigned __int8 *)(a2 + i) )
      return 0;
  }
  return 1;
}
