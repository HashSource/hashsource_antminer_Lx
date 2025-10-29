int __fastcall sub_475A8(int a1, int a2)
{
  int v4; // r0
  int v5; // r9
  int v6; // r8
  int v7; // r0
  int *v8; // r4
  int v9; // r11
  char v11[20]; // [sp+8h] [bp-1Ch] BYREF

  sub_6BCB0(v11, 20, "/dev/hopfclock%d", a1);
  v4 = sub_39F68(v11, 0xDu, 1);
  v5 = v4;
  if ( v4 <= 0 )
    return 0;
  sub_64A18(5, "hopfSerialClock(%d) fd: %d dev: %s", a1, v4, v11);
  v7 = sub_637E4(0, 24, 0, 1);
  v8 = *(int **)(a2 + 84);
  v8[5] = a2;
  v8[7] = v5;
  v8[3] = (int)sub_473C4;
  v8[6] = 0;
  v9 = v7;
  *v8 = v7;
  v6 = sub_18BA4(v8 + 2);
  if ( v6 )
  {
    v6 = 1;
    v8[11] = (int)"hopf Elektronik serial clock";
    *(_BYTE *)(a2 + 95) = -10;
    v8[191] = *(_DWORD *)"hopf";
    *(_BYTE *)(v9 + 16) = 0;
    *(_WORD *)(v9 + 8) = a1;
  }
  else
  {
    close(v5);
    v8[7] = -1;
    free((void *)v9);
    *v8 = 0;
  }
  return v6;
}
