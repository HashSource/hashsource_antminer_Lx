_DWORD *__fastcall pipe_push(_DWORD *a1, char *a2, int a3)
{
  return _pipe_push(a1, a2, *a1 * a3);
}
