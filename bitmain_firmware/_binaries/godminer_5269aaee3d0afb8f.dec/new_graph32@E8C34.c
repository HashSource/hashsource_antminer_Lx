_DWORD *__fastcall new_graph32(int a1, int a2)
{
  _DWORD *v4; // r4

  v4 = calloc(1u, 0x78u);
  if ( !v4 )
    puts("graph calloc failed!");
  v4[24] = sub_E8AD4;
  v4[25] = sub_E8A74;
  v4[29] = sub_E8748;
  v4[27] = sub_E8A34;
  v4[26] = sub_E8980;
  v4[28] = sub_E87A4;
  sub_E8AD4((int)v4, a1, a2);
  return v4;
}
