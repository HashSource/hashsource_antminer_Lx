int sub_41608()
{
  int v1; // [sp+4h] [bp-8h]

  sub_2C4BC((int)statsdir, "peerstats", (int)&dword_BBBEC);
  sub_2C4BC((int)statsdir, "loopstats", (int)&dword_BBC04);
  sub_2C4BC((int)statsdir, "clockstats", (int)&dword_BBC1C);
  sub_2C4BC((int)statsdir, "rawstats", (int)&dword_BBC34);
  sub_2C4BC((int)statsdir, "sysstats", (int)&dword_BBC4C);
  sub_2C4BC((int)statsdir, "protostats", (int)&dword_BBC64);
  sub_2C4BC((int)statsdir, "cryptostats", (int)&dword_BBC7C);
  sub_2C4BC((int)statsdir, "timingstats", (int)&unk_BBC94);
  step_callback = ntpd_time_stepped;
  return v1;
}
