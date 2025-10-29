int __fastcall scanhash(int a1)
{
  char *v2; // r5
  int v3; // r0
  int v4; // r5
  void *v5; // r8
  char *v6; // r9
  int v7; // r3
  unsigned int v9; // r11
  int v10; // r10
  int v11; // r0
  unsigned int v12; // r0
  int v13; // r1
  _QWORD *v14; // r10
  __int64 v15; // kr08_8
  int v16; // r1
  char v17; // [sp+17h] [bp-100Dh] BYREF
  int v18; // [sp+18h] [bp-100Ch] BYREF
  int v19; // [sp+1Ch] [bp-1008h] BYREF
  char v20[4100]; // [sp+20h] [bp-1004h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  snprintf(v2, 0x40u, "%.10s_%d", "scanhash", *(_DWORD *)(a1 + 136));
  V_LOCK();
  v3 = syscall(224);
  logfmt_raw(v20, 0x1000u, 0, "%s on pid %ld", v2, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_base.c",
    158,
    "scanhash",
    8,
    99,
    60,
    v20);
  prctl(15, v2);
  v4 = *(_DWORD *)(a1 + 656);
  v5 = calloc(1u, *(_DWORD *)(a1 + 632));
  v6 = (char *)calloc(1u, *(_DWORD *)(a1 + 636));
  while ( 1 )
  {
    memset(v20, 0, 0x200u);
    queue_dequeue(v4, v20, 1u);
    if ( *(_BYTE *)(a1 + 684) )
      break;
LABEL_5:
    v7 = (unsigned __int8)v20[0];
    while ( 1 )
    {
      if ( v7 != 170 )
      {
        queue_dequeue(v4, v20, 1u);
        if ( *(_BYTE *)(a1 + 684) )
          goto LABEL_10;
        goto LABEL_5;
      }
      queue_dequeue(v4, &v20[1], 1u);
      if ( *(_BYTE *)(a1 + 684) )
        goto LABEL_10;
      v7 = (unsigned __int8)v20[1];
      if ( v20[1] == 85 )
        break;
      v20[0] = v20[1];
    }
    queue_dequeue(v4, &v20[2], 1u);
    v9 = (*(int (__fastcall **)(_DWORD))(a1 + 120))((unsigned __int8)v20[2]);
    queue_dequeue(v4, &v20[3], v9);
    v10 = *(unsigned __int8 *)(a1 + 684);
    if ( *(_BYTE *)(a1 + 684) )
      break;
    memset(v5, *(unsigned __int8 *)(a1 + 684), *(_DWORD *)(a1 + 632));
    v18 = v10;
    v19 = v10;
    v17 = v10;
    v11 = (*(int (__fastcall **)(int, char *, void *, char *, char *, int *, int *))(a1 + 60))(
            a1,
            v20,
            v5,
            &v17,
            v6,
            &v18,
            &v19);
    if ( v11 == 1 )
    {
      queue_enqueue(*(_DWORD *)(a1 + 664), v20, v9 + 3);
    }
    else if ( v11 )
    {
      if ( v11 == 2 )
        ++*(_QWORD *)(*(_DWORD *)(a1 + 264) + 40);
    }
    else if ( !*(_BYTE *)(a1 + v19 + 336) && v17 && platform_check_repeat_nonce((int *)a1, v18, v6) )
    {
      ++*(_QWORD *)(*(_DWORD *)(a1 + 264) + 48 * v18 + 32);
    }
    else
    {
      v12 = (*(int (__fastcall **)(int, void *))(a1 + 64))(a1, v5);
      if ( v12 <= 5 )
      {
        v13 = v18;
        v14 = (_QWORD *)(*(_DWORD *)(a1 + 264) + 48 * v18 + 8 * v12);
        ++*v14;
        if ( v12 <= 1 )
        {
          v15 = *(_QWORD *)(a1 + 256) + 1LL;
          ++*(_DWORD *)(*(_DWORD *)(a1 + 288) + 4 * v13);
          v16 = v19;
          *(_QWORD *)(a1 + 256) = v15;
          ++*(_QWORD *)(a1 + 8 * v16 + 368);
          if ( !v12 && !*(_BYTE *)(a1 + v16 + 336) )
            queue_enqueue(*(_DWORD *)(*(_DWORD *)(a1 + 668) + 660), (char *)v5, 1);
        }
      }
    }
  }
LABEL_10:
  *(_BYTE *)(a1 + 684) = 0;
  free(v5);
  free(v6);
  return 0;
}
