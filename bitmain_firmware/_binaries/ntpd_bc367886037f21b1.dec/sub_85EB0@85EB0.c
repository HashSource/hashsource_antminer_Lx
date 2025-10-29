void __fastcall sub_85EB0(int a1, char *s)
{
  int v3; // r6
  int v5; // r2
  char *v6; // r0
  char *v7; // r8
  int v8[6]; // [sp+Ch] [bp-18h] BYREF

  v3 = *(_DWORD *)(a1 + 12);
  v5 = _stack_chk_guard;
  *(_DWORD *)(a1 + 12) = v3 & 0xFFFFFFFB;
  v8[0] = 0;
  v8[1] = 0;
  v8[3] = 0;
  v8[4] = v5;
  v8[2] = 1;
  v6 = _strdup(s);
  v7 = v6;
  if ( !v6 )
    sub_7E214(s);
  sub_85B00(a1, v8, v6, 0, 0);
  free(v7);
  *(_DWORD *)(a1 + 12) = v3;
}
