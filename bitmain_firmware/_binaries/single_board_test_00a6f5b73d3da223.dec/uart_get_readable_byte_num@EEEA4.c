int __fastcall uart_get_readable_byte_num(int a1)
{
  int v3; // [sp+Ch] [bp+Ch]

  pthread_mutex_lock(&stru_47B724[a1]);
  v3 = sub_ED388(a1);
  pthread_mutex_unlock(&stru_47B724[a1]);
  return v3;
}
