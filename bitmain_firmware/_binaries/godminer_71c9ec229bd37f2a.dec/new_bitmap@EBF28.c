_DWORD *__fastcall new_bitmap(unsigned int a1)
{
  _DWORD *v2; // r4
  int v3; // r2
  int v4; // r3
  int v5; // r12
  int v6; // r0

  v2 = calloc(1u, 0x24u);
  if ( !v2 )
    puts("bitmap calloc failed!");
  LOWORD(v3) = -16724;
  LOWORD(v4) = -16680;
  HIWORD(v3) = (unsigned int)&loc_E9D84 >> 16;
  HIWORD(v4) = (unsigned int)&loc_E9DB0 >> 16;
  v2[3] = v3;
  LOWORD(v5) = -16664;
  v2[8] = v4;
  LOWORD(v6) = -16852;
  LOWORD(v3) = -16764;
  LOWORD(v4) = -16808;
  HIWORD(v5) = (unsigned int)&loc_E9DC0 >> 16;
  HIWORD(v3) = (unsigned int)&loc_E9D5C >> 16;
  HIWORD(v4) = (unsigned int)&loc_E9D30 >> 16;
  HIWORD(v6) = (unsigned int)&loc_E9D04 >> 16;
  v2[7] = v5;
  v2[5] = v6;
  v2[6] = v3;
  v2[4] = v4;
  visited_init(v2, a1);
  ((void (__fastcall *)(_DWORD *))v2[7])(v2);
  return v2;
}
