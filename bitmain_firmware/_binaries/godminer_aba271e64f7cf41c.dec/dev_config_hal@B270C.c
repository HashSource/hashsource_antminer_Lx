int __fastcall dev_config_hal(__int16 *a1)
{
  int v3; // [sp+Ch] [bp-18h] BYREF
  int v4; // [sp+10h] [bp-14h] BYREF
  _DWORD *all_created_runtime; // [sp+14h] [bp-10h]
  int i; // [sp+18h] [bp-Ch]
  int v7; // [sp+1Ch] [bp-8h]

  all_created_runtime = get_all_created_runtime(&v3);
  if ( a1 == (__int16 *)1562500 )
    goto LABEL_21;
  if ( (int)a1 <= 1562500 )
  {
    if ( a1 == (__int16 *)&loc_70800 )
    {
      v7 = 6;
      goto LABEL_26;
    }
    if ( (int)a1 <= 460800 )
    {
      if ( a1 != &word_1C200 )
        goto LABEL_25;
      v7 = 26;
      goto LABEL_26;
    }
    if ( a1 == word_E1000 )
    {
      v7 = 2;
      goto LABEL_26;
    }
    if ( a1 != (__int16 *)1500000 )
      goto LABEL_25;
LABEL_21:
    v7 = 1;
    goto LABEL_26;
  }
  if ( a1 == (__int16 *)6250000 )
  {
    v7 = 3;
  }
  else if ( (int)a1 > 6250000 )
  {
    if ( a1 == (__int16 *)12500000 )
    {
      v7 = 4;
    }
    else
    {
      if ( a1 != (__int16 *)25000000 )
      {
LABEL_25:
        v7 = 26;
        goto LABEL_26;
      }
      v7 = 5;
    }
  }
  else
  {
    if ( a1 != (__int16 *)3000000 && a1 != (__int16 *)3125000 )
      goto LABEL_25;
    v7 = 0;
  }
LABEL_26:
  printf("%s: set zynq bt8d %d\n", "dev_config_hal", v7);
  v4 = v7;
  for ( i = 0; i < v3; ++i )
    uart_set_config(*(_DWORD *)(all_created_runtime[i] + 252), 0, &v4, 4u);
  usleep((__useconds_t)"time");
  return 0;
}
