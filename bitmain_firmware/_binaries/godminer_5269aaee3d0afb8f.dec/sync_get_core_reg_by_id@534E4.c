int __fastcall sync_get_core_reg_by_id(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r4
  int *all_created_runtime; // r0
  int fake_regio_runtime; // r5
  int v12; // t1
  int result; // r0
  int v14; // r4
  pthread_t v15; // r0
  void *(*v16)(void *); // r2
  int v17; // [sp+14h] [bp-8h] BYREF

  v5 = 0;
  v17 = 0;
  all_created_runtime = (int *)get_all_created_runtime(&v17);
  if ( v17 <= 0 )
  {
LABEL_6:
    fake_regio_runtime = get_fake_regio_runtime(a1);
    goto LABEL_7;
  }
  fake_regio_runtime = *all_created_runtime;
  if ( a1 != *(_DWORD *)(*all_created_runtime + 136) )
  {
    while ( ++v5 != v17 )
    {
      v12 = all_created_runtime[1];
      ++all_created_runtime;
      fake_regio_runtime = v12;
      if ( a1 == *(_DWORD *)(v12 + 136) )
        goto LABEL_7;
    }
    goto LABEL_6;
  }
LABEL_7:
  if ( *(_DWORD *)(fake_regio_runtime + 656) == *(_DWORD *)(fake_regio_runtime + 664) )
  {
    LOWORD(v16) = -25488;
    HIWORD(v16) = (unsigned int)&loc_B8A50 >> 16;
    pthread_create((pthread_t *)(fake_regio_runtime + 676), 0, v16, (void *)fake_regio_runtime);
  }
  result = (*(int (__fastcall **)(int, int, int, int, int))(fake_regio_runtime + 184))(
             fake_regio_runtime,
             a2,
             a3,
             a4,
             a5);
  v14 = result;
  if ( *(_DWORD *)(fake_regio_runtime + 656) == *(_DWORD *)(fake_regio_runtime + 664) )
  {
    v15 = *(_DWORD *)(fake_regio_runtime + 676);
    *(_BYTE *)(fake_regio_runtime + 685) = 1;
    pthread_join(v15, 0);
    return v14;
  }
  return result;
}
