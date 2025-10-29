int __fastcall set_BC_nullen(int a1, char a2)
{
  unsigned int v5; // [sp+Ch] [bp+Ch]
  int v6; // [sp+Ch] [bp+Ch]

  pthread_mutex_lock(&bc_cmd_acc_mutex);
  v5 = sub_E8098() & 0xFFF0FFFF | (a1 << 16) | 0x800000;
  if ( a2 )
    v6 = v5 | 0x400000;
  else
    v6 = v5 & 0xFFBFFFFF;
  sub_E80B4(v6);
  return pthread_mutex_unlock(&bc_cmd_acc_mutex);
}
