int query_device_num()
{
  int (**v0)(void); // r0

  v0 = (int (**)(void))dev_ctrl();
  return (*v0)();
}
