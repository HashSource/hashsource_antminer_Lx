size_t __fastcall pipe_pop_eager(_DWORD *a1, void *a2, int a3)
{
  unsigned int v7; // [sp+14h] [bp+14h]

  v7 = sub_FE384((int)a1);
  return sub_FF0EC(a1, a2, v7 * a3) / v7;
}
