__int64 __fastcall sub_93CF0(int a1, int a2, unsigned int a3)
{
  char v4; // [sp+10h] [bp-102Ch] BYREF
  unsigned int v5; // [sp+14h] [bp-1028h]
  int v6; // [sp+18h] [bp-1024h]
  int v7; // [sp+1Ch] [bp-1020h]
  char v8[24]; // [sp+24h] [bp-1018h] BYREF
  char *v9; // [sp+1024h] [bp-18h]
  unsigned int i; // [sp+1028h] [bp-14h]
  unsigned int v11; // [sp+102Ch] [bp-10h]

  v7 = a1;
  v6 = a2;
  v5 = a3;
  v11 = 2 * a3;
  v9 = &v4;
  for ( i = 0; i < v5; ++i )
    sprintf(&v9[2 * i], "%02x", *(unsigned __int8 *)(v6 + i));
  V_LOCK();
  logfmt_raw(v8, 0x1000u, 0, "%s[%d]=%s", v7, v5, v9);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godm"
           "iner-origin_godminer-branch1/backend/device/hal/drv_pic/mps2973.c",
           174,
           "hex_dump",
           8,
           78,
           20,
           v8);
}
