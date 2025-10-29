int __fastcall sub_8727C(int a1, int a2, int a3, int a4)
{
  int v5; // r12
  int v6; // lr
  int v7; // r0
  int v8; // r2
  int v9; // r5
  int v10; // r3
  int v11; // r0
  int v12; // r1
  int v13; // r3
  int v14; // r0
  int v15; // r3
  int v16; // r3
  int v17; // r0
  int v18; // r0
  int v19; // r5
  int v20; // r0
  int *v21; // r0
  int v23; // r3
  int v24; // r0
  int *v25; // r0
  int *v26; // r0
  int v27; // [sp+4h] [bp-7Ch]
  _BYTE v28[16]; // [sp+10h] [bp-70h] BYREF
  int v29; // [sp+20h] [bp-60h]
  int v30; // [sp+40h] [bp-40h]
  int v31; // [sp+7Ch] [bp-4h]

  v5 = a2 & 2;
  v6 = _stack_chk_guard;
  *(_QWORD *)a4 = 0;
  *(_QWORD *)(a4 + 8) = 0;
  v31 = v6;
  *(_QWORD *)(a4 + 16) = 0;
  *(_DWORD *)(a4 + 24) = a2;
  *(_DWORD *)(a4 + 28) = a3;
  *(_DWORD *)(a4 + 12) = -1;
  if ( (a2 & 2) != 0 )
  {
    if ( (a3 & 3) == 1 )
    {
      if ( (a3 & 1) != 0 )
        v5 = 2;
      else
        v5 = 130;
    }
    else if ( (a3 & 1) != 0 )
    {
      v5 = 0;
    }
    else
    {
      v5 = 128;
    }
  }
  v7 = open64(a1, v5);
  *(_DWORD *)(a4 + 12) = v7;
  if ( v7 < 0 )
  {
    v9 = *_errno_location();
    *(_DWORD *)(a4 + 12) = -1;
    *(_DWORD *)(a4 + 20) = v9;
    goto LABEL_22;
  }
  if ( _fxstat64(3, v7, v28) )
  {
    v23 = *_errno_location();
    v24 = *(_DWORD *)(a4 + 12);
    *(_DWORD *)(a4 + 20) = v23;
    close(v24);
  }
  else
  {
    if ( (v29 & 0xF000) == 0x8000 )
    {
      v8 = *(_DWORD *)(a4 + 12);
      *(_DWORD *)(a4 + 4) = v30;
      if ( v8 != -1 )
        goto LABEL_10;
      v26 = _errno_location();
      v9 = *v26;
      *(_DWORD *)(a4 + 20) = *v26;
LABEL_22:
      if ( v9 )
        return -1;
      goto LABEL_12;
    }
    *_errno_location() = 22;
    *(_DWORD *)(a4 + 20) = 22;
    close(*(_DWORD *)(a4 + 12));
  }
LABEL_10:
  v9 = *(_DWORD *)(a4 + 20);
  if ( v9 )
    return -1;
LABEL_12:
  v11 = sysconf(30);
  v12 = *(_DWORD *)(a4 + 4);
  v13 = -v11;
  v14 = v11 + v12;
  v15 = v13 & v14;
  *(_DWORD *)(a4 + 8) = v15;
  if ( v14 == v15 )
  {
    v17 = ((int (__fastcall *)(int, int, int, int, int))mmap64)(v9, v14, 3, 34, -1);
    if ( v17 == -1 )
      goto LABEL_31;
    v12 = *(_DWORD *)(a4 + 4);
    v16 = *(_DWORD *)(a4 + 28) | 0x10;
    *(_DWORD *)(a4 + 28) = v16;
  }
  else
  {
    v16 = *(_DWORD *)(a4 + 28);
    v17 = v9;
  }
  v18 = mmap64(v17, v12, *(_DWORD *)(a4 + 24), v16, *(_DWORD *)(a4 + 12), v27, 0, 0);
  *(_DWORD *)a4 = v18;
  if ( v18 != -1 )
  {
    v19 = *(_DWORD *)(a4 + 20);
    goto LABEL_16;
  }
LABEL_31:
  v25 = _errno_location();
  v19 = *v25;
  *(_DWORD *)(a4 + 20) = *v25;
LABEL_16:
  if ( !v19 )
    return *(_DWORD *)a4;
  v20 = *(_DWORD *)(a4 + 12);
  if ( v20 != -1 )
  {
    close(v20);
    v19 = *(_DWORD *)(a4 + 20);
    *(_DWORD *)(a4 + 12) = -1;
  }
  v21 = _errno_location();
  v10 = -1;
  *v21 = v19;
  *(_DWORD *)a4 = -1;
  return v10;
}
