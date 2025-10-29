int __fastcall get_miner_working_status(int result)
{
  int v1; // r1
  char v2; // r3

  if ( !byte_16629C )
  {
    byte_1662A0 = 0;
    byte_1662A1 = 0;
    byte_1662A2 = 0;
    byte_1662A3 = 0;
    byte_1662A4 = 0;
    byte_1662A5 = 0;
    byte_1662A6 = 0;
    byte_1662A7 = 0;
    byte_1662A8 = 0;
    byte_16629C = 1;
  }
  v1 = *(_DWORD *)&byte_1662A4;
  v2 = byte_1662A8;
  *(_DWORD *)result = *(_DWORD *)&byte_1662A0;
  *(_DWORD *)(result + 4) = v1;
  *(_BYTE *)(result + 8) = v2;
  return result;
}
