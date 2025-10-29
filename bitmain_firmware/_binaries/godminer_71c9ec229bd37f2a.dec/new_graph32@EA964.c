_DWORD *__fastcall new_graph32(int a1, int a2)
{
  _DWORD *v4; // r4

  v4 = calloc(1u, 0x78u);
  if ( !v4 )
    puts("graph calloc failed!");
  v4[24] = sub_EA804;
  v4[25] = sub_EA7A4;
  v4[29] = sub_EA478;
  v4[27] = sub_EA764;
  v4[26] = sub_EA6B0;
  v4[28] = sub_EA4D4;
  sub_EA804((int)v4, a1, a2);
  return v4;
}
