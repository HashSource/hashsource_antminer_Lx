int __fastcall parameter_update_dash(int a1, char a2, unsigned int a3)
{
  _BYTE v5[4100]; // [sp+20h] [bp+10h] BYREF

  if ( *(_BYTE *)(a1 + 144) != 1 )
  {
    if ( a2 && (int)a3 <= 800 )
    {
      *(_DWORD *)(a1 + 772) = (unsigned int)((double)((int)*(float *)(a1 + 760) * (*(_DWORD *)(a1 + 772) / a3)) * 0.35);
      *(float *)(a1 + 760) = (float)(int)a3;
    }
    else
    {
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, "Update parameter failed, freq:%f", *(float *)(a1 + 760));
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_dash/backend_dash.c",
        85,
        "parameter_update_dash",
        21,
        815,
        60,
        v5);
    }
  }
  return 0;
}
