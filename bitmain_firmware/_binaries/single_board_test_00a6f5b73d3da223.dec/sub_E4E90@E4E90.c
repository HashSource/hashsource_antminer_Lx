int __fastcall sub_E4E90(int a1, char a2)
{
  int result; // r0
  char v5[8]; // [sp+18h] [bp+8h] BYREF
  _BYTE v6[8]; // [sp+818h] [bp+808h] BYREF
  int v7; // [sp+1818h] [bp+1808h]
  int i; // [sp+181Ch] [bp+180Ch]

  result = sub_E4E50(a1);
  v7 = result;
  if ( result == 259 )
  {
    snprintf(v5, 0x800u, "gpio port %d is not a supported key\n", a1);
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, v5);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_ui.c",
             92,
             "gpio_key_callback",
             17,
             134,
             80,
             v6);
  }
  else
  {
    for ( i = 0; i <= 4; ++i )
    {
      if ( dword_47B350[i] )
        result = dword_47B350[i](v7, a2 != 0);
    }
  }
  return result;
}
