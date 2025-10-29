_DWORD *__fastcall new_graph29(int a1, int a2)
{
  _DWORD *v5; // [sp+Ch] [bp+Ch]

  v5 = calloc(1u, 0x78u);
  if ( !v5 )
    puts("graph calloc failed!");
  v5[24] = 1031017;
  v5[25] = 1031449;
  v5[29] = 1031561;
  v5[26] = 1032149;
  v5[27] = 1032321;
  v5[28] = 1032397;
  ((void (__fastcall *)(_DWORD *, int, int))v5[24])(v5, a1, a2);
  return v5;
}
