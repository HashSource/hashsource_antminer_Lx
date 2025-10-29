int __fastcall get_chain_isl_voltage(unsigned __int8 a1, int a2, int a3)
{
  char *v3; // r9
  _DWORD *v4; // r11
  int v5; // r5
  int v6; // r6
  int v7; // t1
  int v9; // [sp+10h] [bp-1038h]
  unsigned __int16 v11; // [sp+1Eh] [bp-102Ah] BYREF
  char v12[4136]; // [sp+20h] [bp-1028h] BYREF

  if ( a3 <= 2 )
    return 0;
  v3 = "QT";
  LOWORD(v4) = -14756;
  v5 = a2 - 2;
  v6 = 80;
  v9 = a2 + 4;
  while ( 1 )
  {
    v11 = 0;
    sub_BCC90(a1, v6, &v11);
    *(_WORD *)(v5 + 2) = v11;
    v5 += 2;
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, 1313424, v6, v11);
    V_UNLOCK();
    HIWORD(v4) = (unsigned int)&unk_16B55C >> 16;
    zlog(
      *v4,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/drv_pic/isl68127.c",
      158,
      "get_chain_isl_voltage",
      21,
      202,
      60,
      v12);
    if ( v5 == v9 )
      break;
    v7 = (unsigned __int8)*v3++;
    v6 = v7;
  }
  return 1;
}
