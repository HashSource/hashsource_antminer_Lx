void app_config_exit()
{
  int app_config_handle; // r0

  app_config_handle = get_app_config_handle();
  config_free(app_config_handle);
}
