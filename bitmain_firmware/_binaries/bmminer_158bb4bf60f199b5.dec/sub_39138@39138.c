void __fastcall sub_39138(int a1)
{
  int v2; // r0
  int v3; // r2
  int v4; // r3
  int i; // r5
  int v6; // r6
  int v7; // r6
  int v8; // r3
  int v9; // r12
  unsigned int v10; // r0
  unsigned int v11; // r8
  int v12; // r7
  __int64 v13; // r2
  int v14; // t1
  bool v15; // zf
  int v16; // r12
  _DWORD *v17; // r1
  int v18; // r3
  unsigned int v19; // [sp+4h] [bp-850h]
  int v20; // [sp+8h] [bp-84Ch]
  int v21; // [sp+1Ch] [bp-838h]
  int v22; // [sp+24h] [bp-830h]
  int v23; // [sp+28h] [bp-82Ch]
  struct timeval v24; // [sp+40h] [bp-814h] BYREF
  struct timeval v25; // [sp+48h] [bp-80Ch] BYREF
  char v26[2052]; // [sp+50h] [bp-804h] BYREF

  if ( dword_1AEA78 && *(_DWORD *)(dword_1AEA78 + 4) )
  {
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy(v26, "Pattern test start...\n");
      sub_47AB4(3, v26, 0);
    }
    sub_4A60C(&v24);
    sub_37E60();
    v2 = sub_702AC();
    sub_702CC(v2 | 0x10000);
    v3 = *(_DWORD *)dword_1AEA78;
    *(_DWORD *)(dword_1AEA78 + 232) = 1;
    if ( v3 == 161 )
      sub_36F78(a1);
    else
      sub_3702C(a1);
    v4 = dword_1AEA78;
    for ( i = 0; i != 16; ++i )
    {
      while ( *(_DWORD *)(dword_A0D68 + 4 * i + 4) != 1 || *(_DWORD *)(v4 + 4 * (i + 2)) != 1 )
      {
        if ( ++i == 16 )
          goto LABEL_15;
      }
      v6 = 3;
      do
      {
        if ( sub_37B2C(i) )
          break;
        usleep((__useconds_t)&loc_186A0);
        --v6;
      }
      while ( v6 );
      v4 = dword_1AEA78;
    }
LABEL_15:
    *(_DWORD *)(v4 + 232) = 0;
    v7 = sub_37770();
    v21 = 0;
    v23 = dword_1AEA78;
    v22 = dword_A0D68;
    do
    {
      v8 = *(_DWORD *)(v22 + 4);
      v22 += 4;
      if ( v8 == 1 && *(_DWORD *)(v23 + 4 * v21 + 8) == 1 )
      {
        v19 = 0;
        v20 = v7 - 4 + (_DWORD)&loc_1D2C8 * v21;
        do
        {
          v9 = v20;
          v10 = 0;
          v11 = 4 * (13 * v21 + v19 / 6);
          v12 = *(_DWORD *)(v7 + v11 + 1940288);
          do
          {
            v13 = 2863311531LL * v10;
            v14 = *(_DWORD *)(v9 + 4);
            v9 += 4;
            ++v10;
            v12 += v14;
            HIDWORD(v13) >>= 6;
            *(_DWORD *)(v7 + 4 * (4 * (78 * v21 + v19) + HIDWORD(v13)) + 1916992) += v14;
            *(_DWORD *)(v7 + 4 * (HIDWORD(v13) + v11) + 1936960) += v14;
            ++*(_DWORD *)(v7 + 4 * (702 * v21 + 9 * v19 + v14) + 3853572);
          }
          while ( v10 != 383 );
          v15 = v19++ == 77;
          *(_DWORD *)(v7 + v11 + 1940288) = v12;
          v20 += 1532;
        }
        while ( !v15 );
        v16 = v7 + 3853572 + 2808 * v21;
        do
        {
          v17 = (_DWORD *)v16;
          do
          {
            v17[1] += *v17;
            ++v17;
          }
          while ( v17 != (_DWORD *)(v16 + 32) );
          v16 += 36;
        }
        while ( v16 != v7 + 3856380 + 2808 * v21 );
      }
      ++v21;
    }
    while ( v21 != 16 );
    sub_4A60C(&v25);
    v18 = v25.tv_sec - v24.tv_sec;
    if ( v25.tv_usec - v24.tv_usec < 0 )
      --v18;
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(v26, 0x800u, "Pattern test done, time cost %lds\n", v18);
      sub_47AB4(3, v26, 0);
    }
  }
  else if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy(v26, "Handle is NULL.\n");
    sub_47AB4(3, v26, 0);
  }
}
