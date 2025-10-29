int __fastcall chip_temp_ltc_1491(int a1, int a2)
{
  float v2; // s15
  char v7[24]; // [sp+3Ch] [bp-3058h] BYREF
  int v8; // [sp+103Ch] [bp-2058h] BYREF
  int v9; // [sp+1040h] [bp-2054h]
  char v10[4096]; // [sp+1044h] [bp-2050h] BYREF
  char v11[4096]; // [sp+2044h] [bp-1050h] BYREF
  int v12; // [sp+3044h] [bp-50h] BYREF
  _DWORD s[4]; // [sp+3048h] [bp-4Ch] BYREF
  _DWORD v14[7]; // [sp+3058h] [bp-3Ch] BYREF
  int v15; // [sp+3074h] [bp-20h]
  void *ptr; // [sp+3078h] [bp-1Ch]
  int v17; // [sp+307Ch] [bp-18h]
  float v18; // [sp+3080h] [bp-14h]
  int i; // [sp+3084h] [bp-10h]

  v12 = 0;
  memset(v11, 0, sizeof(v11));
  memset(v10, 0, sizeof(v10));
  v18 = 0.0;
  v9 = 285212672;
  memset(s, 0, sizeof(s));
  s[2] = 9175041;
  s[0] = 285212672;
  v17 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 268))(a1, s);
  usleep(0x2710u);
  v9 = 285343744;
  memset(s, 0, sizeof(s));
  s[2] = 9175041;
  s[0] = 285343744;
  v17 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 268))(a1, s);
  usleep(0x2710u);
  memset(s, 0, sizeof(s));
  s[2] = 9437185;
  ptr = malloc(12 * *(_DWORD *)(a1 + 336));
  memset(ptr, 0, 12 * *(_DWORD *)(a1 + 336));
  (*(void (__fastcall **)(int, _DWORD *, _DWORD, void *, int *))(a1 + 288))(a1, s, *(_DWORD *)(a1 + 336), ptr, &v12);
  for ( i = 0; i < v12; ++i )
  {
    if ( *((_WORD *)ptr + 6 * i + 3) != 144 || (*((_DWORD *)ptr + 3 * i) & 0x80) == 0 )
    {
      free(ptr);
      return 306;
    }
    V_LOCK();
    sub_77CE8((int)v14, *(int *)(a1 + 252));
    logfmt_raw(
      v7,
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
      "[MISC CTRL] asic %02x, reg %02x state %08x",
      *((unsigned __int8 *)ptr + 12 * i + 4),
      *((unsigned __int16 *)ptr + 6 * i + 3),
      *((_DWORD *)ptr + 3 * i));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/backend_ltc_1491/backend_ltc_1491.c",
      181,
      "chip_temp_ltc_1491",
      18,
      1149,
      20,
      v7);
    v8 = 0;
    sub_78038(&v8, *((_DWORD *)ptr + 3 * i));
    v2 = ((double)(unsigned __int16)v8 - 0.5) * 662.88 / 4096.0 - 287.48;
    v18 = v2;
    *(float *)(a2 + 4 * (*((_BYTE *)ptr + 12 * i + 4) >> 1)) = v2;
    sprintf(v10, "%.1f ", v18);
    strcat(v11, v10);
  }
  printf("line:\n%s\n", v11);
  free(ptr);
  return 0;
}
