int __fastcall sub_63A00(int a1, int a2)
{
  double v2; // d0
  int v4; // r4
  size_t v5; // r7
  int v6; // r8
  char v7; // r1
  int v8; // r2
  char *v9; // r0
  char *v10; // r12
  char v11; // r3
  char v12; // r10
  int v13; // t1
  _BYTE *v14; // r3
  _DWORD *v15; // r3
  ssize_t v16; // r0
  int v19; // [sp+10h] [bp-20h] BYREF
  _DWORD v20[2]; // [sp+14h] [bp-1Ch] BYREF
  _BYTE v21[10]; // [sp+1Ch] [bp-14h] BYREF
  char v22; // [sp+26h] [bp-Ah] BYREF

  v4 = a2;
  v19 = 16711423;
  v20[0] = 1504;
  v20[1] = -33751040;
  HIBYTE(v19) = a2;
  if ( a2 == 4 )
  {
    v5 = 11;
    v6 = 11;
  }
  else
  {
    v5 = 12;
    v4 = 5;
    v6 = 12;
  }
  sub_6BCB0(v21, 16, " %10.0f", v2 * 1000000.0);
  v7 = v22;
  if ( v22 == 32 )
  {
    v8 = 0;
  }
  else
  {
    v9 = &v22;
    v8 = 0;
    v10 = (char *)v20 + 1;
    do
    {
      v11 = v7 & 0xF;
      v12 = *(v9 - 1);
      v13 = (unsigned __int8)*(v9 - 2);
      v9 -= 2;
      v7 = v13;
      ++v8;
      *++v10 = v11 | (16 * v12);
    }
    while ( v13 != 32 );
    v14 = (char *)v20 + v8 + 2;
    if ( v4 <= v8 )
      goto LABEL_11;
  }
  v15 = (int *)((char *)&v19 + v8 + 5);
  do
  {
    *((_BYTE *)v15 + 1) = 0;
    v15 = (_DWORD *)((char *)v15 + 1);
  }
  while ( (_DWORD *)((char *)v20 + v4 + 1) != v15 );
  v14 = (char *)v20 + v4 + 2;
LABEL_11:
  *v14 = -3;
  v16 = write(a1, &v19, v5);
  if ( v16 == -1 )
  {
    sub_64A18(3, "icom_freq: write() failed: %m");
    return -1;
  }
  else if ( v16 == v6 )
  {
    return 0;
  }
  else
  {
    sub_64A18(3, "icom_freq: only wrote %d of %d bytes.", v16, v6);
    return 1;
  }
}
