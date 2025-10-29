int __fastcall sub_55134(int a1, int a2)
{
  int v3; // r9
  int v4; // r7
  _QWORD *v5; // r0
  void *v6; // r8
  _DWORD *v7; // r4
  char v9[20]; // [sp+0h] [bp-1Ch] BYREF

  sub_6BCB0(v9, 20, "/dev/wwvb%d", a1);
  v3 = sub_39F68(v9, 0xDu, 1);
  if ( v3 <= 0 )
    return 0;
  v5 = (_QWORD *)sub_637E4(0, 12, 0, 0);
  *v5 = 0;
  v6 = v5;
  *(_QWORD *)((char *)v5 + 4) = 0;
  v7 = *(_DWORD **)(a2 + 84);
  v7[5] = a2;
  v7[7] = v3;
  v7[3] = sub_54CF8;
  v7[6] = 0;
  v4 = sub_18BA4(v7 + 2);
  if ( v4 )
  {
    v4 = 1;
    *v7 = v6;
    *(_BYTE *)(a2 + 95) = -10;
    v7[11] = "Ultralink WWVB Receiver";
    v7[191] = *(_DWORD *)"WWVB";
  }
  else
  {
    close(v3);
    v7[7] = -1;
    free(v6);
  }
  return v4;
}
