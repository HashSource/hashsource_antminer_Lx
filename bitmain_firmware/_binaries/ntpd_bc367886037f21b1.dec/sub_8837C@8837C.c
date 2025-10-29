int **__fastcall sub_8837C(const char *a1)
{
  int v2; // r9
  int v3; // r0
  char *v4; // r6
  size_t v5; // r0
  int **v6; // r6
  int *v8; // r0
  int v9; // r8
  int *v10; // r7
  _BYTE v11[32]; // [sp+4h] [bp-28h] BYREF

  v2 = dword_B7168[0];
  v3 = sub_8727C((int)a1, 1, 2, (int)v11);
  if ( v3 == -1 )
    return 0;
  v4 = (char *)v3;
  dword_B7168[0] = 0;
  v5 = strlen(a1);
  v6 = sub_81FD4(v4, a1, v5);
  if ( v6 )
  {
    sub_874C8((int)v11);
  }
  else
  {
    v8 = _errno_location();
    v9 = *v8;
    v10 = v8;
    sub_874C8((int)v11);
    *v10 = v9;
  }
  dword_B7168[0] = v2;
  return v6;
}
