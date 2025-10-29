int __fastcall scanhash(int *a1)
{
  int v1; // r0
  _BYTE v3[12]; // [sp+1Ch] [bp+Ch] BYREF
  char v4; // [sp+101Fh] [bp+100Fh] BYREF
  int v5; // [sp+1020h] [bp+1010h] BYREF
  int v6; // [sp+1024h] [bp+1014h] BYREF
  char v7[512]; // [sp+1028h] [bp+1018h] BYREF
  unsigned int v8; // [sp+1228h] [bp+1218h]
  int v9; // [sp+122Ch] [bp+121Ch]
  unsigned int v10; // [sp+1230h] [bp+1220h]
  unsigned __int8 *v11; // [sp+1234h] [bp+1224h]
  void *v12; // [sp+1238h] [bp+1228h]
  int v13; // [sp+123Ch] [bp+122Ch]
  char *v14; // [sp+1240h] [bp+1230h]
  int *v15; // [sp+1244h] [bp+1234h]

  v15 = a1;
  v14 = (char *)calloc(1u, 0x40u);
  snprintf(v14, 0x40u, "%.10s_%d", "scanhash", v15[34]);
  V_LOCK();
  v1 = syscall(224);
  logfmt_raw(v3, 0x1000u, 0, "%s on pid %ld", v14, v1);
  V_UNLOCK();
  zlog(g_zc, "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_base.c", 72, "scanhash", 8, 99, 60, v3);
  prctl(15, v14);
  v13 = v15[164];
  memset(v7, 0, sizeof(v7));
  v12 = calloc(1u, v15[158]);
  v11 = (unsigned __int8 *)calloc(1u, v15[159]);
  while ( 1 )
  {
    memset(v7, 0, sizeof(v7));
    queue_dequeue(v13, v7, 1u);
    if ( *((_BYTE *)v15 + 684) )
    {
      *((_BYTE *)v15 + 684) = 0;
      goto LABEL_26;
    }
    while ( 1 )
    {
      while ( (unsigned __int8)v7[0] != 170 )
      {
        queue_dequeue(v13, v7, 1u);
        if ( *((_BYTE *)v15 + 684) )
        {
          *((_BYTE *)v15 + 684) = 0;
          goto LABEL_26;
        }
      }
      queue_dequeue(v13, &v7[1], 1u);
      if ( *((_BYTE *)v15 + 684) )
      {
        *((_BYTE *)v15 + 684) = 0;
        goto LABEL_26;
      }
      if ( v7[1] == 85 )
        break;
      v7[0] = v7[1];
    }
    queue_dequeue(v13, &v7[2], 1u);
    v10 = ((int (__fastcall *)(_DWORD))v15[30])((unsigned __int8)v7[2]);
    queue_dequeue(v13, &v7[3], v10);
    if ( *((_BYTE *)v15 + 684) )
      break;
    memset(v12, 0, v15[158]);
    v6 = 0;
    v5 = 0;
    v4 = 0;
    v9 = ((int (__fastcall *)(int *, char *, void *, char *, unsigned __int8 *, int *, int *))v15[15])(
           v15,
           v7,
           v12,
           &v4,
           v11,
           &v6,
           &v5);
    switch ( v9 )
    {
      case 0:
        if ( *((_BYTE *)v15 + v5 + 336) != 1 && v4 && platform_check_repeat_nonce(v15, v6, v11) )
        {
          ++*(_QWORD *)(v15[66] + 48 * v6 + 32);
        }
        else
        {
          v8 = ((int (__fastcall *)(int *, void *))v15[16])(v15, v12);
          if ( v8 <= 5 )
          {
            *(_QWORD *)(v15[66] + 48 * v6 + 8 * v8) = *(_QWORD *)(8 * v8 + v15[66] + 48 * v6) + 1LL;
            if ( v8 <= 1 )
            {
              ++*(_DWORD *)(4 * v6 + v15[72]);
              ++*((_QWORD *)v15 + 32);
              ++*(_QWORD *)&v15[2 * v5 + 92];
              if ( !v8 && *((_BYTE *)v15 + v5 + 336) != 1 )
                queue_enqueue(*(_DWORD *)(v15[167] + 660), (char *)v12, 1);
            }
          }
        }
        break;
      case 1:
        queue_enqueue(v15[166], v7, v10 + 3);
        break;
      case 2:
        ++*(_QWORD *)(v15[66] + 40);
        break;
      default:
        continue;
    }
  }
  *((_BYTE *)v15 + 684) = 0;
LABEL_26:
  free(v12);
  free(v11);
  return 0;
}
