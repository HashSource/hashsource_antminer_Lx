int __fastcall sub_7E7E0(int a1, char a2, char a3, int a4, void *dest)
{
  int v5; // r3
  char v11[72]; // [sp+44h] [bp-1048h] BYREF
  int v12; // [sp+1044h] [bp-48h] BYREF
  _WORD s[8]; // [sp+1048h] [bp-44h] BYREF
  _DWORD v14[7]; // [sp+1058h] [bp-34h] BYREF
  int v15; // [sp+1074h] [bp-18h]
  void *src; // [sp+1078h] [bp-14h]
  int i; // [sp+107Ch] [bp-10h]

  v12 = 0;
  memset(s, 0, sizeof(s));
  LOBYTE(s[4]) = a2;
  HIBYTE(s[4]) = a3;
  s[5] = a4;
  src = malloc(0xCu);
  memset(src, 0, 0xCu);
  (*(void (__fastcall **)(int, _WORD *, int, void *, int *))(a1 + 288))(a1, s, 1, src, &v12);
  for ( i = 0; i < v12; ++i )
  {
    if ( a4 == *((unsigned __int16 *)src + 6 * i + 3) )
    {
      V_LOCK();
      sub_77CE8((int)v14, *(int *)(a1 + 252));
      logfmt_raw(
        v11,
        0x1000u,
        0,
        v15,
        v14[0],
        v14[1],
        v14[2],
        v14[3],
        v14[4],
        v14[5],
        v14[6],
        v15,
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
        "ChipSetting_get_chip_status_rvn_LTC_1491",
        40,
        1308,
        40,
        v11);
    }
  }
  if ( dest )
  {
    v5 = v12;
    if ( v12 >= 1 )
      v5 = 1;
    memcpy(dest, src, 12 * v5);
  }
  free(src);
  return v12;
}
