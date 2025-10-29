int __fastcall POWER_CRC16(int a1, int a2)
{
  int v2; // r3
  int v3; // r1
  int v4; // r2
  int v5; // r12
  int v6; // t1
  int v7; // r0

  if ( !a2 )
    return 0xFFFF;
  v2 = 255;
  v3 = a1 + (unsigned __int16)(a2 - 1);
  v4 = a1 - 1;
  v5 = 255;
  do
  {
    v6 = *(unsigned __int8 *)++v4;
    v7 = (v2 ^ v6) + 1317312;
    v2 = chCRCHTalbe[v2 ^ v6] ^ v5;
    v5 = *(unsigned __int8 *)(v7 + 768);
  }
  while ( v3 != v4 );
  return v2 | (v5 << 8);
}
