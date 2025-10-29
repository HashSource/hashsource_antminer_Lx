int __fastcall sync_unblocked_get_msg_x7(int a1, int a2, int a3, int a4, int a5, int *a6)
{
  int v7; // r3
  char v13[36]; // [sp+20h] [bp-1224h] BYREF
  _DWORD v14[2]; // [sp+1020h] [bp-224h] BYREF
  _WORD src[262]; // [sp+1028h] [bp-21Ch] BYREF
  __int16 v16; // [sp+1234h] [bp-10h]
  __int16 v17; // [sp+1236h] [bp-Eh]
  int v18; // [sp+1238h] [bp-Ch]
  int v19; // [sp+123Ch] [bp-8h]

  if ( *(_BYTE *)(a1 + 256) != 1 )
    return 4;
  wait_x7_chip_setting_not_pending(a1);
  v19 = 0;
  v18 = 0;
  v14[1] = 100000000;
  while ( v19 < a3 )
  {
    if ( !queue_try_dequeue(*(_DWORD *)(a1 + 876), (char *)src, 0xCu) )
    {
      v18 = 0;
      break;
    }
    if ( LOBYTE(src[0]) != 170 || HIBYTE(src[0]) != 85 )
    {
      v18 = 1;
      break;
    }
    if ( queue_dequeue_for(*(_DWORD *)(a1 + 876), (char *)&src[6], LOBYTE(src[3]), v14) == 110 )
    {
      v18 = 3;
      break;
    }
    if ( a2 == LOBYTE(src[1]) )
    {
      if ( LOBYTE(src[3]) != a5 - 12 )
      {
        v18 = 1;
        break;
      }
      v17 = src[4];
      src[4] = 0;
      v16 = BM_CRC16((char *)src, a5);
      if ( v17 != v16 )
      {
        v18 = 2;
        break;
      }
      v7 = v19++;
      memcpy((void *)(a4 + 524 * v7), src, 0x20Cu);
    }
    else
    {
      V_LOCK();
      logfmt_raw(v13, 0x1000u, 0, "received unexpected response package, cmd %d", LOBYTE(src[1]));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/backend_x7_2044/chip_setting_x7_2044.c",
        184,
        "sync_unblocked_get_msg_x7",
        25,
        377,
        20,
        v13);
    }
  }
  *a6 = v19;
  return v18;
}
