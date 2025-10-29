int __fastcall get_miner_working_status(int result)
{
  _BYTE *v1; // r3
  int v2; // r1
  char v3; // r3

  LOWORD(v1) = 25244;
  HIWORD(v1) = (unsigned int)&g_miner_version[188] >> 16;
  if ( !*v1 )
  {
    v1[4] = 0;
    v1[5] = 0;
    v1[6] = 0;
    v1[7] = 0;
    v1[8] = 0;
    v1[9] = 0;
    v1[10] = 0;
    v1[11] = 0;
    v1[12] = 0;
    *v1 = 1;
  }
  v2 = *(_DWORD *)&byte_1662A4;
  v3 = byte_1662A8;
  *(_DWORD *)result = *(_DWORD *)&byte_1662A0;
  *(_DWORD *)(result + 4) = v2;
  *(_BYTE *)(result + 8) = v3;
  return result;
}
