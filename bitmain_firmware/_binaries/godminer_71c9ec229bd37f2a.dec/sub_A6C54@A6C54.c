bool __fastcall sub_A6C54(int a1)
{
  unsigned int v2; // r5
  int v3; // r4
  unsigned int v4; // r0

  v2 = *(_DWORD *)(a1 + 204);
  v3 = 3;
  do
  {
    sub_A6850(a1, v2);
    usleep(0x2710u);
    v4 = *(_DWORD *)(a1 + 244);
    if ( v4 >= v2 )
      break;
    --v3;
  }
  while ( v3 );
  return v4 == v2;
}
