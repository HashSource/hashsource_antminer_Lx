int __fastcall sync_unblocked_get_seed_status_x7(int a1, int a2, int a3, int a4, int *a5)
{
  int v6; // r3
  char v12[40]; // [sp+24h] [bp-1228h] BYREF
  _DWORD v13[2]; // [sp+1024h] [bp-228h] BYREF
  _WORD src[262]; // [sp+102Ch] [bp-220h] BYREF
  __int16 v15; // [sp+1238h] [bp-14h]
  __int16 v16; // [sp+123Ah] [bp-12h]
  int v17; // [sp+123Ch] [bp-10h]
  int v18; // [sp+1240h] [bp-Ch]
  int v19; // [sp+1244h] [bp-8h]

  v17 = 44;
  if ( *(_BYTE *)(a1 + 256) != 1 )
    return 4;
  wait_x7_chip_setting_not_pending(a1);
  v19 = 0;
  v18 = 0;
  v13[1] = 100000000;
  while ( v19 < a3 )
  {
    if ( !queue_try_dequeue(*(_DWORD *)(a1 + 880), (char *)src, 0xCu) )
    {
      v18 = 0;
      break;
    }
    if ( LOBYTE(src[0]) != 170 || HIBYTE(src[0]) != 85 )
    {
      v18 = 1;
      break;
    }
    if ( queue_dequeue_for(*(_DWORD *)(a1 + 880), (char *)&src[6], LOBYTE(src[3]), v13) == 110 )
    {
      v18 = 3;
      break;
    }
    if ( a2 == LOBYTE(src[1]) )
    {
      if ( LOBYTE(src[3]) != v17 - 12 )
      {
        v18 = 1;
        break;
      }
      v16 = src[4];
      src[4] = 0;
      v15 = BM_CRC16((char *)src, v17);
      if ( v16 != v15 )
      {
        v18 = 2;
        break;
      }
      v6 = v19++;
      memcpy((void *)(a4 + 524 * v6), src, 0x20Cu);
    }
    else
    {
      V_LOCK();
      logfmt_raw(v12, 0x1000u, 0, "received unexpected response package, cmd %d", LOBYTE(src[1]));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/backend_x7_2044/chip_setting_x7_2044.c",
        184,
        "sync_unblocked_get_seed_status_x7",
        33,
        503,
        20,
        v12);
    }
  }
  *a5 = v19;
  return v18;
}
