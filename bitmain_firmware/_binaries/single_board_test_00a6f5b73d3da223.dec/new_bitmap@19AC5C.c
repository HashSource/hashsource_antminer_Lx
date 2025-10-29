_DWORD *__fastcall new_bitmap(int a1)
{
  _DWORD *v3; // [sp+Ch] [bp+Ch]

  v3 = calloc(1u, 0x24u);
  if ( !v3 )
    puts("bitmap calloc failed!");
  v3[3] = visited_init;
  v3[8] = visited_exit;
  v3[7] = visited_clear;
  v3[5] = visited_set;
  v3[6] = visited_test;
  v3[4] = visited_reset;
  ((void (__fastcall *)(_DWORD *, int))v3[3])(v3, a1);
  ((void (__fastcall *)(_DWORD *))v3[7])(v3);
  return v3;
}
