int __fastcall pic_operation_to_hal(int a1, int a2, unsigned int a3, void *a4)
{
  int flash; // r4
  int v7; // r6
  _DWORD *v8; // r3
  int v9; // r2
  int v10; // r6
  char v11[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( a2 == 51 )
  {
    LOWORD(v10) = -11196;
    HIWORD(v10) = (unsigned int)&unk_16C33C >> 16;
    flash = pic1704_write_flash(*(_BYTE *)(v10 + 8 * a1), a4, a3, HIWORD(a3));
    if ( flash == 1 )
      return flash;
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, 1312840, *(_DWORD *)(v10 + 8 * a1));
    V_UNLOCK();
    LOWORD(v8) = -14756;
    HIWORD(v8) = (unsigned int)&unk_16B55C >> 16;
    v9 = 430;
  }
  else
  {
    if ( a2 != 52 )
      return -1;
    LOWORD(v7) = -11196;
    HIWORD(v7) = (unsigned int)&unk_16C33C >> 16;
    flash = pic1704_read_flash(*(_BYTE *)(v7 + 8 * a1), a4, a3, HIWORD(a3));
    if ( flash == 1 )
      return flash;
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, 1312880, *(_DWORD *)(v7 + 8 * a1));
    V_UNLOCK();
    LOWORD(v8) = -14756;
    HIWORD(v8) = (unsigned int)&unk_16B55C >> 16;
    v9 = 438;
  }
  zlog(
    *v8,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/platform_device_hal.c",
    157,
    "pic_operation_to_hal",
    20,
    v9,
    100,
    v11);
  return flash;
}
