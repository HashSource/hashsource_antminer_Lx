int __fastcall sub_3345C(int a1)
{
  char v4[16]; // [sp+1Ch] [bp-1010h] BYREF
  int v5; // [sp+101Ch] [bp-10h]
  int i; // [sp+1020h] [bp-Ch]
  int v7; // [sp+1024h] [bp-8h]

  v7 = 0;
  for ( i = 0; i < total_pools; ++i )
  {
    v5 = *(_DWORD *)(pools + 4 * i);
    if ( a1 == *(_DWORD *)(v5 + 4) )
    {
      v7 = v5;
      break;
    }
  }
  if ( v7 )
    return v7;
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "WTF No pool %d found!", a1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/pool.c",
    144,
    "priority_pool",
    13,
    254,
    100,
    v4);
  return *(_DWORD *)(pools + 4 * a1);
}
