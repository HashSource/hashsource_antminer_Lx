void __fastcall sub_59B44(_DWORD *a1)
{
  int v2; // r7
  int v3; // r3
  int v4; // r4
  int v5; // r10
  int v6; // r1
  int v7; // r0
  int v8; // r2
  int v9; // r12
  int v10; // r9
  _DWORD *v11; // r0
  int v12; // r2
  int v13; // r0
  int v14; // lr
  int v15; // r0
  int v16; // r2
  int *v17; // r0
  int *v18; // r0
  void **v19; // [sp+14h] [bp-804h] BYREF
  char s[2048]; // [sp+18h] [bp-800h] BYREF

  v2 = pthread_mutex_lock((pthread_mutex_t *)dword_1AF0E4);
  if ( v2 )
  {
    v17 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v17, "cgminer.c", "clear_pool_work", 7392);
    goto LABEL_37;
  }
  v3 = dword_1AF1B4;
  v19 = (void **)dword_1AF1B4;
  if ( !dword_1AF1B4 )
  {
    if ( !pthread_mutex_unlock((pthread_mutex_t *)dword_1AF0E4) )
    {
      off_9E444();
      return;
    }
    goto LABEL_38;
  }
  v4 = *(_DWORD *)(dword_1AF1B4 + 352);
  if ( *(_DWORD **)(dword_1AF1B4 + 260) == a1 )
    goto LABEL_6;
LABEL_4:
  v19 = (void **)v4;
  if ( v4 )
  {
    while ( 1 )
    {
      v3 = v4;
      v4 = *(_DWORD *)(v4 + 352);
      if ( *(_DWORD **)(v3 + 260) != a1 )
        goto LABEL_4;
LABEL_6:
      v5 = *(_DWORD *)(v3 + 348);
      v6 = dword_1AF1B4;
      v7 = *(_DWORD *)(dword_1AF1B4 + 344);
      if ( v5 )
        break;
      v10 = *(_DWORD *)(v3 + 352);
      if ( v10 )
      {
        v8 = *(_DWORD *)(v7 + 20);
        v9 = v3 + 344;
        if ( v3 != *(_DWORD *)(v7 + 16) - v8 )
          goto LABEL_29;
LABEL_30:
        *(_DWORD *)(v7 + 16) = v5 + v8;
        v5 = *(_DWORD *)(v3 + 348);
        if ( v5 )
        {
          v8 = *(_DWORD *)(*(_DWORD *)(v6 + 344) + 20);
          goto LABEL_8;
        }
        v10 = *(_DWORD *)(v3 + 352);
LABEL_29:
        v6 = v10;
        dword_1AF1B4 = v10;
LABEL_9:
        v11 = *(_DWORD **)(v6 + 344);
        if ( v10 )
        {
          *(_DWORD *)(v10 + v11[5] + 4) = *(_DWORD *)(v3 + 348);
          v11 = *(_DWORD **)(v6 + 344);
        }
        v12 = 3 * ((v11[1] - 1) & *(_DWORD *)(v3 + 372));
        --*(_DWORD *)(*v11 + 4 * v12 + 4);
        v13 = **(_DWORD **)(v6 + 344);
        v14 = *(_DWORD *)(v13 + 4 * v12);
        if ( v14 == v9 )
        {
          v6 = *(_DWORD *)(v3 + 360);
          *(_DWORD *)(v13 + 4 * v12) = v6;
        }
        v15 = *(_DWORD *)(v3 + 356);
        v16 = *(_DWORD *)(v3 + 360);
        if ( v14 == v9 )
          v6 = dword_1AF1B4;
        if ( v15 )
        {
          *(_DWORD *)(v15 + 16) = v16;
          v16 = *(_DWORD *)(v3 + 360);
        }
        if ( v16 )
          *(_DWORD *)(v16 + 12) = *(_DWORD *)(v3 + 356);
        --*(_DWORD *)(*(_DWORD *)(v6 + 344) + 12);
        goto LABEL_20;
      }
      free(*(void **)v7);
      free(*(void **)(dword_1AF1B4 + 344));
      dword_1AF1B4 = 0;
LABEL_20:
      ++v2;
      sub_53084(&v19, "cgminer.c", "clear_pool_work", 7398);
      v19 = (void **)v4;
      if ( !v4 )
        goto LABEL_21;
    }
    v8 = *(_DWORD *)(v7 + 20);
    v9 = v3 + 344;
    if ( v3 == *(_DWORD *)(v7 + 16) - v8 )
      goto LABEL_30;
LABEL_8:
    *(_DWORD *)(v5 + v8 + 8) = *(_DWORD *)(v3 + 352);
    v10 = *(_DWORD *)(v3 + 352);
    goto LABEL_9;
  }
LABEL_21:
  if ( pthread_mutex_unlock((pthread_mutex_t *)dword_1AF0E4) )
  {
LABEL_38:
    v18 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v18, "cgminer.c", "clear_pool_work", 7402);
LABEL_37:
    sub_47AB4(3, s, 1);
    sub_54CCC(1, 1);
  }
  off_9E444();
  if ( v2 && (byte_244080 || byte_1AECC4 || dword_9E320 > 5) )
  {
    snprintf(s, 0x800u, "Cleared %d work items due to stratum disconnect on pool %d", v2, *a1);
    sub_47AB4(6, s, 0);
  }
}
