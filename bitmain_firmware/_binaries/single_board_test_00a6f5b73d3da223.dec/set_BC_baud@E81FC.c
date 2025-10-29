int __fastcall set_BC_baud(char a1)
{
  unsigned int v3; // [sp+Ch] [bp+Ch]

  pthread_mutex_lock(&bc_cmd_acc_mutex);
  usleep(0xC350u);
  v3 = a1 & 0x3F | sub_E8098() & 0xFFFFFFC0;
  sub_E80B4(v3);
  return pthread_mutex_unlock(&bc_cmd_acc_mutex);
}
