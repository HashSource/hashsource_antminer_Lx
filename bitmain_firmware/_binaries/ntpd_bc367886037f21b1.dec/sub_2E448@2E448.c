int __fastcall sub_2E448(__int16 *a1)
{
  double v1; // d0

  if ( (__int16 *)state != a1 )
    sub_25C8C(a1, 0, 0);
  state = (int)a1;
  dbl_B8B20 = v1;
  last_offset = v1;
  dword_B8B28 = current_time;
  return _stack_chk_guard;
}
