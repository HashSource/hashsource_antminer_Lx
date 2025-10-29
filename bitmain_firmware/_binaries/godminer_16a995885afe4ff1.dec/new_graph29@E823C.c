_DWORD *__fastcall new_graph29(int a1, int a2)
{
  _DWORD *v4; // r4

  v4 = calloc(1u, 0x78u);
  if ( !v4 )
    puts("graph calloc failed!");
  v4[24] = sub_E80DC;
  v4[25] = sub_E807C;
  v4[29] = sub_E7FB8;
  v4[27] = sub_E7F70;
  v4[26] = sub_E7EE8;
  v4[28] = sub_E7D14;
  sub_E80DC((int)v4, a1, a2);
  return v4;
}
