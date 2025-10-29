int __fastcall enable_one_lane(int a1, int a2)
{
  int v2; // r5
  int v5; // r3
  _DWORD *v6; // r2
  int v7; // r1
  char v9[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v2) = -30632;
  HIWORD(v2) = (unsigned int)"dump work: %s" >> 16;
  V_LOCK();
  LOWORD(v5) = -22480;
  HIWORD(v5) = (unsigned int)"11" >> 16;
  logfmt_raw(v9, 0x1000u, 0, v5, v2 + 1128, a2);
  V_UNLOCK();
  LOWORD(v6) = -14756;
  HIWORD(v6) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v7) = -23296;
  HIWORD(v7) = (unsigned int)"zer_tuning_one_lane" >> 16;
  zlog(*v6, v7, 154, v2 + 1144, 15, 500, 20, v9);
  sub_5CBD4(a1, 0, 0xFFu, 197, 0);
  sub_5CB80(a1, 0, 199, (int)&loc_7FFFC + 3);
  sub_5CB80(a1, 1u, 199, 2097103);
  sub_5CB80(a1, 2u, 199, (int)&loc_7FFFC + 3);
  sub_5CB80(a1, 5u, 199, (int)&loc_7FFFC + 3);
  sub_5CB80(a1, 6u, 199, (int)&loc_7FFFC + 3);
  sub_5CB80(a1, 7u, 199, 2097103);
  sub_5CB80(a1, 0xFu, 199, (int)&loc_7FFFC + 3);
  sub_5CB80(a1, 8u, 199, 2097103);
  sub_5CB80(a1, 0, 159, 29360576);
  sub_5CB80(a1, 1u, 159, 25297282);
  sub_5CB80(a1, 2u, 159, 29360576);
  sub_5CB80(a1, 5u, 159, 29360576);
  sub_5CB80(a1, 6u, 159, 29360576);
  sub_5CB80(a1, 7u, 159, 25297282);
  sub_5CB80(a1, 0xFu, 159, 29360576);
  sub_5CB80(a1, 8u, 159, 25297282);
  return 0;
}
