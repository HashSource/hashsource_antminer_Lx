int __fastcall get_mac_stats(int a1)
{
  int v2; // r7
  unsigned int *v3; // r4
  int v4; // r0
  unsigned int v5; // r5
  unsigned int *v7; // [sp+3Ch] [bp-1048h]
  _DWORD *j; // [sp+48h] [bp-103Ch]
  char i; // [sp+4Ch] [bp-1038h]
  unsigned int *ptr; // [sp+54h] [bp-1030h]
  int v11; // [sp+5Ch] [bp-1028h] BYREF
  _DWORD v12[7]; // [sp+60h] [bp-1024h] BYREF
  int v13; // [sp+7Ch] [bp-1008h]
  char v14[4100]; // [sp+80h] [bp-1004h] BYREF

  v11 = -1734895979;
  ptr = (unsigned int *)malloc(0x600u);
  for ( i = 0; i != 8; ++i )
  {
    v2 = 149;
    for ( j = (int *)((char *)&v11 + 1); ; j = (_DWORD *)((char *)j + 1) )
    {
      v3 = ptr;
      v4 = sub_5C1F4(a1, i, 255, v2, ptr);
      if ( v4 > 0 )
      {
        v7 = &ptr[3 * v4];
        do
        {
          v5 = *v3;
          V_LOCK();
          v3 += 3;
          V_INT((int)v12, "chain", *(int *)(a1 + 140));
          logfmt_raw(
            v14,
            0x1000u,
            0,
            v13,
            v12[0],
            v12[1],
            v12[2],
            v12[3],
            v12[4],
            v12[5],
            v12[6],
            v13,
            "[MAC STATS]chip %02x core %02x addr %04x, %08x",
            *((unsigned __int8 *)v3 - 8),
            *((unsigned __int8 *)v3 - 4),
            v2,
            bswap32(v5));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "get_mac_stats",
            13,
            368,
            60,
            v14);
        }
        while ( v3 != v7 );
      }
      if ( v12 == j )
        break;
      v2 = *(unsigned __int8 *)j;
    }
  }
  free(ptr);
  return 0;
}
