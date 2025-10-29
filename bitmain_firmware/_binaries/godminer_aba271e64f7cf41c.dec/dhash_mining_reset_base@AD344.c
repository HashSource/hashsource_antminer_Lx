int __fastcall dhash_mining_reset_base(int a1)
{
  __int64 v1; // r0
  int (**v2)(); // r0
  int (**v3)(); // r0
  int (**v4)(); // r0
  int (**v5)(); // r0
  char v8[44]; // [sp+30h] [bp-102Ch] BYREF
  _DWORD v9[7]; // [sp+1030h] [bp-2Ch] BYREF
  int v10; // [sp+104Ch] [bp-10h]

  V_LOCK();
  sub_AB2BC((int)v9, *(int *)(a1 + 252));
  logfmt_raw(v8, 0x1000u, 0, v10, v9[0], v9[1], v9[2], v9[3], v9[4], v9[5], v9[6], v10, "dhash mining reset!");
  V_UNLOCK();
  v1 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmin"
         "er-origin_godminer-branch1/backend/backend_base.c",
         160,
         "dhash_mining_reset_base",
         23,
         568,
         80,
         v8);
  (*(void (__fastcall **)(int, _DWORD))(a1 + 4))(a1, HIDWORD(v1));
  *(_BYTE *)(a1 + 257) = 0;
  *(_BYTE *)(a1 + 258) = 0;
  v2 = dev_ctrl();
  ((void (__fastcall *)(_DWORD))v2[7])(*(_DWORD *)(a1 + 248));
  sleep(0xAu);
  v3 = dev_ctrl();
  ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))v3[6])(
    *(_DWORD *)(a1 + 248),
    *(_DWORD *)(a1 + 1108),
    *(_DWORD *)(a1 + 1128));
  sleep(1u);
  v4 = dev_ctrl();
  ((void (__fastcall *)(_DWORD))v4[11])(*(_DWORD *)(a1 + 248));
  v5 = dev_ctrl();
  ((void (__fastcall *)(_DWORD))v5[1])(*(_DWORD *)(a1 + 248));
  (*(void (__fastcall **)(int))(a1 + 16))(a1);
  return 0;
}
