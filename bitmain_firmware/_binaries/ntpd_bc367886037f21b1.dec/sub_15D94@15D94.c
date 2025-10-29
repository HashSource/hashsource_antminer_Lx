int __fastcall sub_15D94(int result, int *a2)
{
  int v2; // r3
  _DWORD *v3; // r1
  int v4; // t1
  int v5; // lr
  int v6; // r12
  int v7; // r1

  *(_QWORD *)result = 0;
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 12) = 0;
  *(_QWORD *)(result + 20) = 0;
  v2 = *a2;
  *(_WORD *)result = *a2;
  if ( v2 == 2 )
  {
    *(_DWORD *)(result + 4) = a2[1];
  }
  else if ( v2 == 10 )
  {
    v4 = a2[1];
    v3 = a2 + 1;
    v5 = v3[1];
    v6 = v3[2];
    v7 = v3[3];
    *(_DWORD *)(result + 8) = v4;
    *(_DWORD *)(result + 12) = v5;
    *(_DWORD *)(result + 16) = v6;
    *(_DWORD *)(result + 20) = v7;
  }
  return result;
}
