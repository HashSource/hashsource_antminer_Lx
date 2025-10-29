int __fastcall sub_6E174(int a1, size_t *a2, const void *a3)
{
  size_t v5; // r1
  size_t v7; // r9
  _DWORD *v8; // r0
  size_t v9; // r3
  const void *v10; // r1
  size_t v11; // lr
  size_t v12; // r7
  int v13; // r5
  size_t v14; // r12

  if ( !a2 )
    sub_6E8F0("work_thread.c", 302, 0, "hdr != ((void *)0)");
  if ( !a3 )
    sub_6E8F0("work_thread.c", 303, 0, "data != ((void *)0)");
  v5 = *a2;
  if ( *a2 <= 0x18 )
    return 1;
  v7 = v5 - 24;
  if ( !*(_DWORD *)(a1 + 8) )
  {
    if ( !dword_10622C )
      dword_10622C = (int)sub_6DE9C(&stru_106230, 1u);
    *(_DWORD *)(a1 + 4) = sub_6DE9C((sem_t *)(a1 + 76), 1u);
    *(_DWORD *)(a1 + 28) = sub_6DE9C((sem_t *)(a1 + 92), 0);
    *(_DWORD *)(a1 + 48) = sub_6DE9C((sem_t *)(a1 + 108), 0);
    sub_6D9C4((pthread_t *)a1);
    v5 = *a2;
  }
  v8 = sub_637E4(0, v5, 0, 0);
  v9 = a2[1];
  v10 = a3;
  v11 = a2[3];
  v12 = a2[2];
  v13 = (int)v8;
  *v8 = *a2;
  v8[1] = v9;
  v8[2] = v12;
  v8[3] = v11;
  v14 = a2[4];
  v8[5] = a2[5];
  v8[4] = v14;
  memcpy(v8 + 6, v10, v7);
  return sub_6DD58(a1, v13);
}
