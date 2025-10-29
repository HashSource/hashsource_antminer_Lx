int __fastcall send_BC_command(int *a1, int a2)
{
  unsigned int v5; // [sp+Ch] [bp+Ch]

  pthread_mutex_lock(&bc_cmd_acc_mutex);
  sub_E803C(a1);
  v5 = sub_E8098() & 0xFFF0FFFF | (a2 << 16) | 0x80800000;
  sub_E80B4(v5);
  return pthread_mutex_unlock(&bc_cmd_acc_mutex);
}
