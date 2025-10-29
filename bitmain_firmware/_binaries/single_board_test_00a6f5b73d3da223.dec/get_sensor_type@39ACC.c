int __fastcall get_sensor_type(int a1)
{
  if ( !strcmp((const char *)(a1 + 96), "TMP451") )
  {
    printf("sensor type is TMP451");
    return 1;
  }
  else if ( !strcmp((const char *)(a1 + 96), "NCT218") )
  {
    printf("sensor type is NCT218");
    return 5;
  }
  else if ( !strcmp((const char *)(a1 + 96), "LM75A") )
  {
    printf("sensor type is LM75A");
    return 10;
  }
  else if ( !strcmp((const char *)(a1 + 96), "TMP75A") )
  {
    printf("sensor type is TMP75A");
    return 11;
  }
  else if ( !strcmp((const char *)(a1 + 96), "DS75S") )
  {
    printf("sensor type is DS75S");
    return 12;
  }
  else if ( !strcmp((const char *)(a1 + 96), "GM452") )
  {
    printf("sensor type is GM452");
    return 13;
  }
  else if ( !strcmp((const char *)(a1 + 96), "CT75") )
  {
    printf("sensor type is CT75");
    return 14;
  }
  else
  {
    printf("Can't get sensor type. temp_sensor_type: %s", (const char *)(a1 + 96));
    return 0;
  }
}
