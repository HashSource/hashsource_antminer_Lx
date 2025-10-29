bool __fastcall sub_40ACC(_DWORD *a1, const char **a2, void (*a3)(const char *, ...))
{
  int v6; // r0
  int v8; // [sp+4h] [bp-8h] BYREF

  dword_76868 = (int)*a2;
  v8 = 0;
  do
    v6 = sub_40C38(a1, a2, &v8, a3);
  while ( v6 == 1 );
  return v6 == 0;
}
