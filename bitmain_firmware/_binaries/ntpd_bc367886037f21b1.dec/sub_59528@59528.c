int __fastcall sub_59528(int a1, int a2)
{
  int v4; // r0
  int v5; // r8
  int v6; // r9
  _QWORD *v7; // r0
  _QWORD *v8; // r7
  int v9; // r4
  char v11[20]; // [sp+8h] [bp-18h] BYREF

  sub_6BCB0(v11, 20, "/dev/zyfer%d", a1);
  v4 = sub_39F68(v11, 0xDu, 32);
  v5 = v4;
  if ( v4 <= 0 )
    return 0;
  sub_64A18(5, "zyfer(%d) fd: %d dev <%s>", a1, v4, v11);
  v7 = (_QWORD *)sub_637E4(0, 48, 0, 0);
  *v7 = 0;
  v7[1] = 0;
  v8 = v7;
  v7[2] = 0;
  v7[3] = 0;
  v7[4] = 0;
  v7[5] = 0;
  v9 = *(_DWORD *)(a2 + 84);
  *(_DWORD *)(v9 + 20) = a2;
  *(_DWORD *)(v9 + 28) = v5;
  *(_DWORD *)(v9 + 12) = sub_59694;
  *(_DWORD *)(v9 + 24) = 0;
  v6 = sub_18BA4((int *)(v9 + 8));
  if ( v6 )
  {
    v6 = 1;
    *(_DWORD *)v9 = v8;
    *(_BYTE *)(a2 + 95) = -20;
    *(_DWORD *)(v9 + 44) = "Zyfer GPStarplus";
    strcpy((char *)(v9 + 764), "GPS");
    *((_BYTE *)v8 + 30) = 0;
    *((_DWORD *)v8 + 8) = 2;
  }
  else
  {
    close(v5);
    *(_DWORD *)(v9 + 28) = -1;
    free(v8);
  }
  return v6;
}
