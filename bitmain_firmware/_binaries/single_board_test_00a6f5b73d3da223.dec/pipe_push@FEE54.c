int __fastcall pipe_push(_DWORD *a1, char *a2, int a3)
{
  int v3; // r0

  v3 = sub_FE384((int)a1);
  return _pipe_push(a1, a2, v3 * a3);
}
