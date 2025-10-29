_DWORD *__fastcall new_graph32(int a1, int a2)
{
  _DWORD *v5; // [sp+Ch] [bp+Ch]

  v5 = calloc(1u, 0x78u);
  if ( !v5 )
    puts("graph calloc failed!");
  v5[24] = 1032833;
  v5[25] = 1033257;
  v5[29] = 1033369;
  v5[26] = 1033805;
  v5[27] = 1034049;
  v5[28] = 1034117;
  ((void (__fastcall *)(_DWORD *, int, int))v5[24])(v5, a1, a2);
  return v5;
}
