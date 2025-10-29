int __fastcall get_miner_working_status(int result)
{
  int v1; // r1
  char v2; // r3

  if ( !byte_165284 )
  {
    byte_165288 = 0;
    byte_165289 = 0;
    byte_16528A = 0;
    byte_16528B = 0;
    byte_16528C = 0;
    byte_16528D = 0;
    byte_16528E = 0;
    byte_16528F = 0;
    byte_165290 = 0;
    byte_165284 = 1;
  }
  v1 = *(_DWORD *)&byte_16528C;
  v2 = byte_165290;
  *(_DWORD *)result = *(_DWORD *)&byte_165288;
  *(_DWORD *)(result + 4) = v1;
  *(_BYTE *)(result + 8) = v2;
  return result;
}
