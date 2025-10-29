int __fastcall bitmain_power_read(unsigned __int8 a1, int a2, unsigned __int8 a3)
{
  int v4; // r3
  char v9[2048]; // [sp+1Ch] [bp+Ch] BYREF
  _BYTE v10[12]; // [sp+81Ch] [bp+80Ch] BYREF
  unsigned __int8 v11[52]; // [sp+181Ch] [bp+180Ch] BYREF
  int v12; // [sp+1850h] [bp+1840h] BYREF
  unsigned __int8 v13; // [sp+1854h] [bp+1844h]
  unsigned __int8 v14; // [sp+1855h] [bp+1845h]
  __int16 v15; // [sp+1856h] [bp+1846h]
  __int16 v16; // [sp+1858h] [bp+1848h]
  char v17; // [sp+185Ah] [bp+184Ah]
  char v18; // [sp+185Bh] [bp+184Bh]
  int v19; // [sp+185Ch] [bp+184Ch]
  unsigned __int8 i; // [sp+1863h] [bp+1853h]
  int v21; // [sp+1864h] [bp+1854h]
  _DWORD savedregs[4]; // [sp+1868h] [bp+1858h] BYREF

  v21 = 0;
  v18 = 6;
  v17 = 6;
  v12 = 101100117;
  memset(v11, 0, 0x32u);
  v19 = 5;
  v16 = a3 + a1 + 12;
  v13 = a1;
  v14 = a3;
  v15 = v16;
  i = 8;
  if ( dword_47B8C4 || (v21 = bitmain_power_open(), v21 >= 0) )
  {
    if ( sub_EF2B0(dword_47B8C0, (unsigned __int8 *)&v12, 8u, v11, a3 + 7) )
    {
      strcpy(v9, "set DA conversion N failed\n");
      V_LOCK();
      logfmt_raw(v10, 0x1000u, 0, v9);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/power/bitmain_power_APW9.c",
        95,
        "bitmain_power_read",
        18,
        649,
        100,
        v10);
      return -2147482880;
    }
    else
    {
      for ( i = 0; i < (unsigned int)a3; ++i )
      {
        v4 = v19++;
        *(_BYTE *)(i + a2) = *((_BYTE *)&savedregs[-19] + v4);
      }
      return v21;
    }
  }
  else
  {
    snprintf(v9, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_power_read");
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, v9);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/power/bitmain_power_APW9.c",
      95,
      "bitmain_power_read",
      18,
      639,
      100,
      v10);
    return v21;
  }
}
