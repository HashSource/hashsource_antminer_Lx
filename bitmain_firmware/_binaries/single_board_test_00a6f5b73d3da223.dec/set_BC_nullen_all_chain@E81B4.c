int set_BC_nullen_all_chain()
{
  pthread_mutex_lock(&bc_cmd_acc_mutex);
  sub_E8098();
  return pthread_mutex_unlock(&bc_cmd_acc_mutex);
}
