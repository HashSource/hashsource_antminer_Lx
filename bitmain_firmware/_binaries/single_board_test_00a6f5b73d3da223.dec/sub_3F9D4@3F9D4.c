void *__fastcall sub_3F9D4(int a1, int **a2, int a3)
{
  int *v3; // r3
  char v9; // [sp+17h] [bp+17h]

  sub_3F2C8((_DWORD *)a1);
  v9 = *(_BYTE *)(a1 + 36);
  if ( v9 != 63 && v9 != 42 )
    sub_3F3D0((_DWORD *)a1);
  v3 = (*a2)++;
  if ( *v3 )
  {
    if ( a3 )
      return (void *)sub_3F1D0(*v3);
    else
      return (void *)*v3;
  }
  else if ( v9 == 42 )
  {
    return 0;
  }
  else if ( v9 == 63 )
  {
    return json_null();
  }
  else
  {
    sub_3F404((int *)a1, "<args>", 12, "NULL object");
    *(_DWORD *)(a1 + 76) = 1;
    return 0;
  }
}
