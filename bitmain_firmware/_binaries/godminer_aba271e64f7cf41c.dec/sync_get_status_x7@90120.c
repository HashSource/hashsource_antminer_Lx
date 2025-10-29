int __fastcall sync_get_status_x7(int a1, int a2, int a3, int a4, int a5, int *a6, unsigned __int64 a7, char a8)
{
  int v9; // r2
  int v10; // r3
  char v16[36]; // [sp+20h] [bp-1224h] BYREF
  _DWORD v17[2]; // [sp+1020h] [bp-224h] BYREF
  _WORD src[262]; // [sp+1028h] [bp-21Ch] BYREF
  __int16 v19; // [sp+1234h] [bp-10h]
  __int16 v20; // [sp+1236h] [bp-Eh]
  int v21; // [sp+1238h] [bp-Ch]
  int v22; // [sp+123Ch] [bp-8h]

  if ( *(_BYTE *)(a1 + 256) != 1 )
    return 4;
  wait_x7_chip_setting_not_pending(a1);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 1024));
  if ( a8 )
    queue_clear(*(_DWORD *)(a1 + 868));
  v22 = 0;
  v21 = 0;
  sub_CCDFC(a7, 0x3E8u);
  v17[1] = (_DWORD)&unk_F4240 * v9;
  v17[0] = sub_CCDFC(a7, 0x3E8u);
  while ( v22 < a3 )
  {
    if ( queue_dequeue_for(*(_DWORD *)(a1 + 868), (char *)src, 0xCu, v17) == 110 )
    {
      v21 = 3;
      break;
    }
    if ( LOBYTE(src[0]) != 170 || HIBYTE(src[0]) != 85 )
    {
      v21 = 1;
      break;
    }
    if ( queue_dequeue_for(*(_DWORD *)(a1 + 868), (char *)&src[6], LOBYTE(src[3]), v17) == 110 )
    {
      v21 = 3;
      break;
    }
    if ( a2 == LOBYTE(src[1]) )
    {
      if ( LOBYTE(src[3]) != a5 - 12 )
      {
        v21 = 1;
        break;
      }
      v20 = src[4];
      src[4] = 0;
      v19 = BM_CRC16((char *)src, a5);
      if ( v20 != v19 )
      {
        v21 = 2;
        break;
      }
      v10 = v22++;
      memcpy((void *)(a4 + 524 * v10), src, 0x20Cu);
    }
    else
    {
      V_LOCK();
      logfmt_raw(v16, 0x1000u, 0, "received unexpected response package, cmd %d", LOBYTE(src[1]));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/backend_x7_2044/chip_setting_x7_2044.c",
        184,
        "sync_get_status_x7",
        18,
        126,
        20,
        v16);
    }
  }
  *a6 = v22;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 1024));
  return v21;
}
