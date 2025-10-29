int __fastcall scanhash(int a1)
{
  char *v2; // r5
  int v3; // r0
  int v4; // r3
  _DWORD *v5; // r3
  int v6; // r5
  void *v7; // r8
  char *v8; // r9
  int v9; // r3
  unsigned int v11; // r11
  int v12; // r10
  int v13; // r0
  unsigned int v14; // r0
  int v15; // r1
  _QWORD *v16; // r10
  __int64 v17; // kr08_8
  int v18; // r1
  char v19; // [sp+17h] [bp-100Dh] BYREF
  int v20; // [sp+18h] [bp-100Ch] BYREF
  int v21; // [sp+1Ch] [bp-1008h] BYREF
  char v22[4100]; // [sp+20h] [bp-1004h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  snprintf(v2, 0x40u, "%.10s_%d", "scanhash", *(_DWORD *)(a1 + 136));
  V_LOCK();
  v3 = syscall(224);
  LOWORD(v4) = -2016;
  HIWORD(v4) = (unsigned int)"STATS" >> 16;
  logfmt_raw(v22, 0x1000u, 0, v4, v2, v3);
  V_UNLOCK();
  LOWORD(v5) = -14756;
  HIWORD(v5) = (unsigned int)&unk_16B55C >> 16;
  zlog(
    *v5,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_base.c",
    143,
    "scanhash",
    8,
    99,
    60,
    v22);
  prctl(15, v2);
  v6 = *(_DWORD *)(a1 + 656);
  v7 = calloc(1u, *(_DWORD *)(a1 + 632));
  v8 = (char *)calloc(1u, *(_DWORD *)(a1 + 636));
  while ( 1 )
  {
    memset(v22, 0, 0x200u);
    queue_dequeue(v6, v22, 1u);
    if ( *(_BYTE *)(a1 + 684) )
      break;
LABEL_5:
    v9 = (unsigned __int8)v22[0];
    while ( 1 )
    {
      if ( v9 != 170 )
      {
        queue_dequeue(v6, v22, 1u);
        if ( *(_BYTE *)(a1 + 684) )
          goto LABEL_10;
        goto LABEL_5;
      }
      queue_dequeue(v6, &v22[1], 1u);
      if ( *(_BYTE *)(a1 + 684) )
        goto LABEL_10;
      v9 = (unsigned __int8)v22[1];
      if ( v22[1] == 85 )
        break;
      v22[0] = v22[1];
    }
    queue_dequeue(v6, &v22[2], 1u);
    v11 = (*(int (__fastcall **)(_DWORD))(a1 + 120))((unsigned __int8)v22[2]);
    queue_dequeue(v6, &v22[3], v11);
    v12 = *(unsigned __int8 *)(a1 + 684);
    if ( *(_BYTE *)(a1 + 684) )
      break;
    memset(v7, *(unsigned __int8 *)(a1 + 684), *(_DWORD *)(a1 + 632));
    v20 = v12;
    v21 = v12;
    v19 = v12;
    v13 = (*(int (__fastcall **)(int, char *, void *, char *, char *, int *, int *))(a1 + 60))(
            a1,
            v22,
            v7,
            &v19,
            v8,
            &v20,
            &v21);
    if ( v13 == 1 )
    {
      queue_enqueue(*(_DWORD *)(a1 + 664), v22, v11 + 3);
    }
    else if ( v13 )
    {
      if ( v13 == 2 )
        ++*(_QWORD *)(*(_DWORD *)(a1 + 264) + 40);
    }
    else if ( !*(_BYTE *)(a1 + v21 + 336) && v19 && platform_check_repeat_nonce((int *)a1, v20, v8) )
    {
      ++*(_QWORD *)(*(_DWORD *)(a1 + 264) + 48 * v20 + 32);
    }
    else
    {
      v14 = (*(int (__fastcall **)(int, void *))(a1 + 64))(a1, v7);
      if ( v14 <= 5 )
      {
        v15 = v20;
        v16 = (_QWORD *)(*(_DWORD *)(a1 + 264) + 48 * v20 + 8 * v14);
        ++*v16;
        if ( v14 <= 1 )
        {
          v17 = *(_QWORD *)(a1 + 256) + 1LL;
          ++*(_DWORD *)(*(_DWORD *)(a1 + 288) + 4 * v15);
          v18 = v21;
          *(_QWORD *)(a1 + 256) = v17;
          ++*(_QWORD *)(a1 + 8 * v18 + 368);
          if ( !v14 && !*(_BYTE *)(a1 + v18 + 336) )
            queue_enqueue(*(_DWORD *)(*(_DWORD *)(a1 + 668) + 660), (char *)v7, 1);
        }
      }
    }
  }
LABEL_10:
  *(_BYTE *)(a1 + 684) = 0;
  free(v7);
  free(v8);
  return 0;
}
