unsigned int __fastcall sub_7E534(int a1, int a2, void *a3)
{
  unsigned int v3; // r3
  char v8[72]; // [sp+44h] [bp-1048h] BYREF
  unsigned int v9; // [sp+1044h] [bp-48h] BYREF
  _WORD s[8]; // [sp+1048h] [bp-44h] BYREF
  _DWORD v11[7]; // [sp+1058h] [bp-34h] BYREF
  int v12; // [sp+1074h] [bp-18h]
  void *src; // [sp+1078h] [bp-14h]
  int i; // [sp+107Ch] [bp-10h]

  v9 = 0;
  memset(s, 0, sizeof(s));
  s[4] = 1;
  s[5] = a2;
  src = malloc(0x528u);
  memset(src, 0, 0x528u);
  (*(void (__fastcall **)(int, _WORD *, int, void *, unsigned int *))(a1 + 288))(a1, s, 110, src, &v9);
  for ( i = 0; i < (int)v9; ++i )
  {
    if ( a2 == *((unsigned __int16 *)src + 6 * i + 3) )
    {
      V_LOCK();
      sub_77CE8((int)v11, *(int *)(a1 + 252));
      logfmt_raw(
        v8,
        0x1000u,
        0,
        v12,
        v11[0],
        v11[1],
        v11[2],
        v11[3],
        v11[4],
        v11[5],
        v11[6],
        v12,
        "[Chip status] asic %02x, reg %02x state %08x",
        *((unsigned __int8 *)src + 12 * i + 4),
        *((unsigned __int16 *)src + 6 * i + 3),
        *((_DWORD *)src + 3 * i));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/./backend/chip_setting.c",
        162,
        "ChipSetting_get_chip_status_LTC_1491",
        36,
        1276,
        20,
        v8);
    }
  }
  if ( a3 )
  {
    v3 = *(_DWORD *)(a1 + 424);
    if ( v3 >= v9 )
      v3 = v9;
    memcpy(a3, src, 12 * v3);
  }
  free(src);
  return v9;
}
