_DWORD *__fastcall new_graph29(int a1, int a2)
{
  _DWORD *v4; // r4
  int v5; // r12
  int v6; // r0
  int v7; // r3

  v4 = calloc(1u, 0x78u);
  if ( !v4 )
    puts("graph calloc failed!");
  LOWORD(v5) = -24056;
  LOWORD(v6) = -24152;
  LOWORD(v7) = -24348;
  HIWORD(v5) = (unsigned int)&loc_E80DC >> 16;
  HIWORD(v6) = (unsigned int)&loc_E807C >> 16;
  HIWORD(v7) = (unsigned int)&loc_E7FB8 >> 16;
  v4[24] = v5;
  LOWORD(v5) = -24556;
  v4[25] = v6;
  LOWORD(v6) = -24420;
  v4[29] = v7;
  LOWORD(v7) = -25024;
  HIWORD(v5) = (unsigned int)&loc_E7EE8 >> 16;
  HIWORD(v7) = (unsigned int)&loc_E7D14 >> 16;
  HIWORD(v6) = (unsigned int)&loc_E7F70 >> 16;
  v4[27] = v6;
  v4[26] = v5;
  v4[28] = v7;
  sub_EA208((int)v4, a1, a2);
  return v4;
}
