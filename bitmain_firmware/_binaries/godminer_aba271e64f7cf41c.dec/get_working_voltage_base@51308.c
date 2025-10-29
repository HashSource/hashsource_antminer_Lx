int __fastcall get_working_voltage_base(int a1)
{
  int v1; // r0
  int v2; // r3
  char v5[24]; // [sp+20h] [bp-1024h] BYREF
  int v6; // [sp+38h] [bp-100Ch]
  int v7; // [sp+1020h] [bp-24h]
  signed int v8; // [sp+1024h] [bp-20h]
  signed int temp; // [sp+1028h] [bp-1Ch]
  int working_voltage; // [sp+102Ch] [bp-18h]
  int v11; // [sp+1030h] [bp-14h]
  int v12; // [sp+1034h] [bp-10h]

  v12 = 0;
  v11 = 0;
  temp = get_temp(1);
  v8 = get_temp(2);
  working_voltage = get_working_voltage();
  if ( temp != -64 )
  {
    if ( dword_14E700 - temp <= 5 )
    {
      dword_1523F0 = 0;
      v12 = 0;
    }
    else if ( ++dword_1523F0 > 1 )
    {
      v12 = 20;
    }
    dword_14E700 = temp;
    v11 = (*(int (__fastcall **)(int, signed int))a1)(a1, temp);
    v7 = 65;
    platform_get_fan_control_info((int)v5);
    v7 = v6;
    v1 = (*(int (__fastcall **)(int, signed int, signed int, int))(a1 + 4))(a1, temp, v8, v6);
    v12 += v1;
  }
  V_LOCK();
  logfmt_raw(
    v5,
    0x1000u,
    0,
    "pcb_temp_min:%d, chip_temp_max:%d, working_voltage:%d, compensate:%d, bias:%d",
    temp,
    v8,
    working_voltage,
    v11,
    v12);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/machine_runtime/machine_runtime_base.c",
    176,
    "get_working_voltage_base",
    24,
    330,
    20,
    v5);
  v2 = *(_DWORD *)(a1 + 104);
  if ( working_voltage + v11 + v12 < v2 )
    return working_voltage + v11 + v12;
  return v2;
}
