int __fastcall uart_receive(int a1, int a2, unsigned int a3)
{
  int v8; // [sp+18h] [bp+18h]
  unsigned int v9; // [sp+1Ch] [bp+1Ch]

  pthread_mutex_lock(&stru_47B724[a1]);
  v9 = sub_ED388(a1);
  if ( v9 > a3 )
    v9 = a3;
  if ( v9 )
  {
    v8 = sub_ED668(a1, a2, v9);
    pthread_mutex_unlock(&stru_47B724[a1]);
    return v8;
  }
  else
  {
    pthread_mutex_unlock(&stru_47B724[a1]);
    return 0;
  }
}
