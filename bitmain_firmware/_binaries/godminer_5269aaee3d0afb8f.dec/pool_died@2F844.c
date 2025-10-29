int __fastcall pool_died(int *a1)
{
  pthread_mutex_t *v1; // r5
  int v3; // r6
  int result; // r0
  int v5; // r5
  int *v6; // r7
  int v7; // r4
  _DWORD *v8; // r3
  int v9; // r1
  int v10; // r2
  int v11; // r4
  _DWORD *v12; // r3
  int v13; // r1
  _DWORD v14[7]; // [sp+28h] [bp-1044h] BYREF
  int v15; // [sp+44h] [bp-1028h]
  _DWORD v16[7]; // [sp+48h] [bp-1024h] BYREF
  int v17; // [sp+64h] [bp-1008h]
  char v18[4100]; // [sp+68h] [bp-1004h] BYREF

  v1 = (pthread_mutex_t *)(a1 + 498);
  pthread_mutex_lock((pthread_mutex_t *)a1 + 83);
  v3 = *((unsigned __int8 *)a1 + 2072);
  *((_BYTE *)a1 + 2072) = 1;
  result = pthread_mutex_unlock(v1);
  if ( !v3 )
  {
    LOWORD(v5) = 21224;
    HIWORD(v5) = (unsigned int)&unk_167300 >> 16;
    cgtime((struct timeval *)(a1 + 519));
    sub_2EF20(a1, 1);
    pthread_mutex_lock((pthread_mutex_t *)(v5 + 4));
    v6 = *(int **)(v5 + 0x1C);
    pthread_mutex_unlock((pthread_mutex_t *)(v5 + 4));
    V_LOCK();
    if ( a1 == v6 )
    {
      v10 = *a1;
      LOWORD(v11) = 2196;
      V_INT((int)v14, "poolno", v10);
      HIWORD(v11) = (unsigned int)"\":[\"%s\",\"%s\"]}" >> 16;
      logfmt_raw(v18, 0x1000u, 0, v15, v14[0], v14[1], v14[2], v14[3], v14[4], v14[5], v14[6], v15, v11);
      V_UNLOCK();
      LOWORD(v12) = -14756;
      HIWORD(v12) = (unsigned int)&unk_16E68C >> 16;
      LOWORD(v13) = 1840;
      HIWORD(v13) = (unsigned int)"\"params\": [\"ckbminer-v1.0.0\", null]}" >> 16;
      zlog(*v12, v13, 127, "pool_died", 9, 399, 80, v18);
      return switch_pools();
    }
    else
    {
      V_INT((int)v16, "poolno", *a1);
      LOWORD(v7) = 2212;
      HIWORD(v7) = (unsigned int)"Stratum authentication failed, req_id=%d" >> 16;
      logfmt_raw(v18, 0x1000u, 0, v17, v16[0], v16[1], v16[2], v16[3], v16[4], v16[5], v16[6], v17, v7);
      V_UNLOCK();
      LOWORD(v8) = -14756;
      HIWORD(v8) = (unsigned int)&unk_16E68C >> 16;
      LOWORD(v9) = 1840;
      HIWORD(v9) = (unsigned int)"\"params\": [\"ckbminer-v1.0.0\", null]}" >> 16;
      return zlog(*v8, v9, 127, "pool_died", 9, 402, 20, v18);
    }
  }
  return result;
}
