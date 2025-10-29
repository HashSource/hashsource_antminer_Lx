int __fastcall bitmain_set_voltage_by_n(__int16 a1)
{
  int v2; // r5
  const char *v4; // r2
  _DWORD *v5; // r3
  int v6; // r1
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v8[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( dword_16C554 )
    return sub_B8890(dword_16C550, a1);
  v2 = sub_B8BAC();
  if ( v2 >= 0 )
    return sub_B8890(dword_16C550, a1);
  LOWORD(v4) = 544;
  HIWORD(v4) = (unsigned int)"er_hash_zc category fail" >> 16;
  snprintf(s, 0x800u, v4, "bitmain_set_voltage_by_n");
  V_LOCK();
  logfmt_raw(v8, 0x1000u, 0, s);
  V_UNLOCK();
  LOWORD(v5) = -14756;
  HIWORD(v5) = (unsigned int)&unk_16E68C >> 16;
  LOWORD(v6) = 212;
  HIWORD(v6) = (unsigned int)"start listen on 6060 ..." >> 16;
  zlog(*v5, v6, 166, "bitmain_set_voltage_by_n", 24, 495, 100, v8);
  return v2;
}
