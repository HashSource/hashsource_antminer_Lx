_DWORD *__fastcall get_miner_working_status(_DWORD *a1)
{
  int v1; // r1
  int v2; // r2
  int v3; // r3

  if ( byte_1524AC != 1 )
  {
    sub_64C80();
    byte_1524AC = 1;
    byte_15249E = pools_active != 1;
  }
  v1 = *(_DWORD *)&byte_15249C;
  v2 = *(_DWORD *)&byte_1524A0;
  v3 = *(_DWORD *)&algn_1524A1[3];
  *a1 = *(_DWORD *)&byte_152498;
  a1[1] = v1;
  a1[2] = v2;
  a1[3] = v3;
  a1[4] = dword_1524A8;
  return a1;
}
