int sub_31660()
{
  int result; // r0
  int v1; // r6
  int *v2; // r1

  result = 1952;
  dword_BADC8 = (int)&dword_BB0D0;
  dword_BAAC0 = (int)&dword_BADC8;
  dword_BA7B8 = (int)&dword_BAAC0;
  dword_BA4B0 = (int)&dword_BA7B8;
  dword_BA1A8 = (int)&dword_BA4B0;
  v1 = dword_B9E98;
  dword_B9EA0 = (int)&dword_BA1A8;
  dword_B9E98 = (int)&dword_B9EA0;
  dword_BB3D8 = v1;
  dword_BB0D0 = (int)&dword_BB3D8;
  v2 = &total_peer_structs;
  total_peer_structs = 8;
  peer_free_count = 8;
  do
  {
    result = (unsigned __int16)sub_686F8(result, v2);
    word_B9E9C = result;
  }
  while ( !(_WORD)result );
  word_B9E9E = result;
  return result;
}
