int __fastcall sub_79000(int a1, unsigned __int8 a2, int a3)
{
  char v7[68]; // [sp+40h] [bp-1044h] BYREF
  _DWORD s[4]; // [sp+1040h] [bp-44h] BYREF
  _DWORD v9[7]; // [sp+1050h] [bp-34h] BYREF
  int v10; // [sp+106Ch] [bp-18h]
  int v11; // [sp+1070h] [bp-14h]
  unsigned __int8 v12; // [sp+1077h] [bp-Dh]

  v11 = 0;
  v12 = 0;
  if ( a2 <= *(int *)(a1 + 336) )
    v12 = *(_BYTE *)(*(_DWORD *)(a1 + 492) + a2);
  else
    v12 = 0;
  memset(s, 0, sizeof(s));
  LOBYTE(s[2]) = 0;
  BYTE1(s[2]) = v12;
  HIWORD(s[2]) = 48;
  s[0] = a3;
  V_LOCK();
  sub_77CE8((int)v9, *(int *)(a1 + 252));
  logfmt_raw(
    v7,
    0x1000u,
    0,
    v10,
    v9[0],
    v9[1],
    v9[2],
    v9[3],
    v9[4],
    v9[5],
    v9[6],
    v10,
    "chip_id %02x, chip_addr %02x, set io drive strengh %08x",
    a2,
    v12,
    s[0]);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/./backend/chip_setting.c",
    162,
    "ChipSetting_io_drive_strenth_LTC_1491",
    37,
    215,
    40,
    v7);
  v11 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 268))(a1, s);
  usleep(0x2710u);
  return v11;
}
