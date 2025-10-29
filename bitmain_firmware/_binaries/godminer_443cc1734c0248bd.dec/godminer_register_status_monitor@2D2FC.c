int godminer_register_status_monitor()
{
  add_chip_status_observer((int)godminer_chip_status_monitor);
  add_heartbeat_observer((int)godminer_heartbeat_monitor);
  return add_fanspeed_observer((int)godminer_fan_monitor);
}
