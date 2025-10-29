int __fastcall sub_3C3C0(struct sockaddr *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r12
  int sa_family; // r0
  bool v9; // cc
  int v10; // r6
  int v11; // r2
  int *v12; // r3
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  char *v17; // lr
  bool v18; // zf
  int *v19; // r3
  __int16 v20; // r3
  int v21; // r0
  int v22; // r12
  _BYTE v24[28]; // [sp+8h] [bp-24h] BYREF

  v5 = elf_hash_bucket + 1648;
  sa_family = a1->sa_family;
  v9 = (__rev16(*(unsigned __int16 *)(a3 + 4)) & 0xFFF) > 1;
  v10 = a2;
  memset(&v24[4], 0, 24);
  *(_WORD *)v24 = sa_family;
  v11 = 31488;
  *(_WORD *)&v24[2] = 31488;
  if ( v9 )
  {
    sub_64A18(3, "do_setclr_trap: err_nitems > 1");
    return sub_3AA2C(a1, v10, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 3);
  }
  else
  {
    v12 = *(int **)(a3 + 8);
    if ( v12 )
    {
      if ( sa_family == 2 )
      {
        *(_DWORD *)&v24[4] = *(_DWORD *)(a3 + 8);
      }
      else
      {
        v12 = (int *)(a3 + 24);
        v5 = &v24[8];
      }
      if ( sa_family != 2 )
      {
        v13 = *v12;
        v14 = v12[1];
        v15 = v12[2];
        v16 = v12[3];
        *v5 = v13;
        v5[1] = v14;
        v5[2] = v15;
        v5[3] = v16;
      }
      v17 = sub_176E8((const struct sockaddr *)v24);
      if ( !v17 )
        return sub_3AA2C(a1, v10, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 4);
      sa_family = *(unsigned __int16 *)v24;
    }
    else
    {
      v17 = (char *)any_interface;
    }
    v18 = sa_family == 2;
    if ( sa_family == 2 )
    {
      v19 = *(int **)(a3 + 12);
    }
    else
    {
      v19 = (int *)(a3 + 40);
      v5 = &v24[8];
    }
    if ( sa_family == 2 )
    {
      *(_DWORD *)&v24[4] = v19;
    }
    else
    {
      sa_family = *v19;
      a2 = v19[1];
      v11 = v19[2];
      v19 = (int *)v19[3];
    }
    if ( !v18 )
    {
      *v5 = sa_family;
      v5[1] = a2;
      v5[2] = v11;
      v5[3] = v19;
    }
    v20 = *(_WORD *)(a3 + 16);
    if ( !v20 )
      v20 = 3912;
    *(_WORD *)&v24[2] = v20;
    if ( a4 )
      v21 = sub_23B44((unsigned __int16 *)v24, (int)v17, 0, (*(_BYTE *)a3 >> 3) & 7);
    else
      v21 = sub_23E6C((unsigned __int16 *)v24, (int)v17, 0);
    if ( v21 )
      v22 = 0;
    else
      v22 = 4;
    return sub_3AA2C(a1, v10, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), v22);
  }
}
