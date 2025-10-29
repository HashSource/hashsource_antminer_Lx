int __fastcall get_response(int a1)
{
  int v1; // r0
  _UNKNOWN **v2; // r0
  __useconds_t v3; // r3
  _BYTE v5[20]; // [sp+1Ch] [bp+Ch] BYREF
  char v6[256]; // [sp+101Ch] [bp+100Ch] BYREF
  int v7; // [sp+111Ch] [bp+110Ch]
  __useconds_t v8; // [sp+1120h] [bp+1110h]
  char *v9; // [sp+1124h] [bp+1114h]
  int v10; // [sp+1128h] [bp+1118h]
  __useconds_t v11; // [sp+112Ch] [bp+111Ch]

  v10 = a1;
  v9 = (char *)calloc(1u, 0x40u);
  snprintf(v9, 0x40u, "%.10s_%d", "get_response", *(_DWORD *)(v10 + 136));
  V_LOCK();
  v1 = syscall(224);
  logfmt_raw(v5, 0x1000u, 0, "%s on pid %ld", v9, v1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_base.c",
    72,
    "get_response",
    12,
    186,
    60,
    v5);
  prctl(15, v9);
  memset(v6, 0, sizeof(v6));
  v8 = 64;
  v11 = 64;
  while ( 1 )
  {
    v2 = dev_ctrl();
    v7 = ((int (__fastcall *)(_DWORD, char *, int))v2[13])(*(_DWORD *)(v10 + 136), v6, 256);
    if ( *(_BYTE *)(v10 + 685) )
      break;
    if ( v7 <= 0 )
    {
      usleep(v11);
      v11 *= 2;
      v3 = v11;
      if ( v11 >= 0x3E8 )
        v3 = 1000;
      v11 = v3;
    }
    else
    {
      queue_enqueue(*(_DWORD *)(v10 + 656), v6, v7);
      v11 = v8;
      memset(v6, 0, v7);
    }
  }
  *(_BYTE *)(v10 + 685) = 0;
  return 0;
}
