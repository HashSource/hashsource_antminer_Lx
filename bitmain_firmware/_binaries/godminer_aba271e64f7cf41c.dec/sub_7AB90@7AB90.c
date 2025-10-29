int __fastcall sub_7AB90(int a1, int a2, char a3)
{
  char v7[16]; // [sp+44h] [bp-1050h] BYREF
  int v8; // [sp+1044h] [bp-50h]
  _DWORD s[4]; // [sp+1048h] [bp-4Ch] BYREF
  _DWORD v10[7]; // [sp+1058h] [bp-3Ch] BYREF
  int v11; // [sp+1074h] [bp-20h]
  int v12; // [sp+1078h] [bp-1Ch]
  int v13; // [sp+107Ch] [bp-18h]
  int v14; // [sp+1080h] [bp-14h]
  int v15; // [sp+1084h] [bp-10h]

  v14 = 26;
  v15 = 0;
  v13 = 0;
  memset(s, 0, sizeof(s));
  s[2] = 6291457;
  if ( a2 == 1500000 )
    goto LABEL_21;
  if ( a2 > 1500000 )
  {
    if ( a2 == 3125000 )
      goto LABEL_20;
    if ( a2 > 3125000 )
    {
      if ( a2 == 6250000 )
      {
        v15 = 1;
        v14 = 1;
        goto LABEL_27;
      }
      if ( a2 == 12500000 )
      {
        v15 = 1;
        v14 = 0;
        goto LABEL_27;
      }
      goto LABEL_26;
    }
    if ( a2 != 1562500 )
    {
      if ( a2 != 3000000 )
        goto LABEL_26;
LABEL_20:
      v14 = 0;
      goto LABEL_27;
    }
LABEL_21:
    v14 = 1;
    goto LABEL_27;
  }
  if ( a2 == 460800 )
  {
    v14 = 6;
    goto LABEL_27;
  }
  if ( a2 > 460800 )
  {
    if ( a2 == 921600 || (_UNKNOWN *)a2 == &unk_FE502 )
    {
      v14 = 2;
      goto LABEL_27;
    }
  }
  else
  {
    if ( a2 == 38400 )
    {
      v14 = 80;
      goto LABEL_27;
    }
    if ( (__int16 *)a2 == &word_1C200 )
    {
      v14 = 26;
      goto LABEL_27;
    }
  }
LABEL_26:
  v14 = 26;
LABEL_27:
  if ( v15 )
    (*(void (__fastcall **)(int, int))(a1 + 192))(a1, 1);
  v8 = (v14 << 8) & 0x1FF00 | (16 * a3) & 0x30 | v15 & 1;
  s[0] = v8;
  V_LOCK();
  sub_77CE8((int)v10, *(int *)(a1 + 252));
  logfmt_raw(
    v7,
    0x1000u,
    0,
    v11,
    v10[0],
    v10[1],
    v10[2],
    v10[3],
    v10[4],
    v10[5],
    v10[6],
    v11,
    "set fuart cfg value %08x/%d",
    s[0],
    a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/./backend/chip_setting.c",
    162,
    "ChipSetting_fuart_cfg_LTC_1491",
    30,
    528,
    40,
    v7);
  v12 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 268))(a1, s);
  usleep(0x2710u);
  return v12;
}
