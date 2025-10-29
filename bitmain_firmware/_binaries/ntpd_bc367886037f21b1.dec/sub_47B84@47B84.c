int __fastcall sub_47B84(int a1, int a2)
{
  speed_t v3; // r1
  int v4; // r3
  __int16 v5; // r2
  int v6; // r9
  int v7; // r6
  int v8; // r0
  int v9; // r4
  _DWORD *v10; // r8
  int v11; // r0
  char v13[20]; // [sp+0h] [bp-18h] BYREF

  sub_6BCB0(v13, 20, "/dev/hpgps%d", a1);
  v4 = *(_DWORD *)(a2 + 76);
  v5 = 257;
  if ( v4 == 1 )
    v3 = 14;
  else
    v5 = 1;
  if ( v4 != 1 )
    v3 = 13;
  v6 = sub_39F68(v13, v3, v5);
  if ( v6 <= 0 )
    return 0;
  v8 = sub_637E4(0, 1864, 0, 1);
  v9 = *(_DWORD *)(a2 + 84);
  *(_DWORD *)(v9 + 20) = a2;
  *(_DWORD *)(v9 + 28) = v6;
  *(_DWORD *)(v9 + 12) = sub_47D04;
  *(_DWORD *)(v9 + 24) = 0;
  v10 = (_DWORD *)v8;
  v7 = sub_18BA4((int *)(v9 + 8));
  if ( v7 )
  {
    *(_DWORD *)v9 = v10;
    *(_BYTE *)(a2 + 95) = -10;
    *(_DWORD *)(v9 + 44) = "HP 58503A GPS Time and Frequency Reference Receiver";
    v7 = 1;
    strcpy((char *)(v9 + 764), "GPS");
    v10[1] = 0;
    v10[2] = 0;
    *((_BYTE *)v10 + 20) = 0;
    *v10 = 2;
    v11 = *(_DWORD *)(v9 + 28);
    v10[4] = v10 + 5;
    v10[3] = 1;
    if ( write(v11, "*IDN?\r:PTIME:TZONE?\r", 0x14u) != 20 )
      sub_3918C((__int16 *)a2, 3);
  }
  else
  {
    close(v6);
    *(_DWORD *)(v9 + 28) = -1;
    free(v10);
  }
  return v7;
}
