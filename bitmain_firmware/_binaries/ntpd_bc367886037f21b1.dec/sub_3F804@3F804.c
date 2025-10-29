int __fastcall sub_3F804(int a1, int a2)
{
  bool v3; // zf
  int *v4; // r2
  int *v5; // r0
  int *v6; // r3
  int *v7; // r3
  int v9; // [sp+4h] [bp-Ch]
  int v10; // [sp+Ch] [bp-4h]

  v3 = (*(_WORD *)(a1 + 8) & 0x40) == 0;
  --dword_BBB3C;
  if ( !v3 && !--dword_BBB40 )
  {
    v9 = a2;
    sub_30AEC(2u);
    a2 = v9;
  }
  if ( a2 )
    v4 = &restrictlist6;
  else
    v4 = &restrictlist4;
  v5 = (int *)*v4;
  if ( a1 == *v4 )
  {
    v6 = (int *)a1;
  }
  else
  {
    if ( !v5 || (v6 = (int *)*v5) == 0 )
LABEL_21:
      sub_6E8F0("ntp_restrict.c", 306, 2, "unlinked == res");
    while ( v6 != (int *)a1 )
    {
      v5 = v6;
      if ( !*v6 )
        goto LABEL_21;
      v6 = (int *)*v6;
    }
    v4 = v5;
  }
  *v4 = *v6;
  if ( (int *)a1 != v6 )
    goto LABEL_21;
  if ( a2 )
  {
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    v7 = &dword_BBB34;
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 44) = 0;
  }
  else
  {
    v7 = &dword_BBB38;
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 12) = 0;
    *(_QWORD *)(a1 + 20) = 0;
  }
  *(_DWORD *)a1 = *v7;
  *v7 = a1;
  return v10;
}
