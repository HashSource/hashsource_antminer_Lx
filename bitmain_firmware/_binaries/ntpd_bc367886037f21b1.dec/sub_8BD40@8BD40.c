int __fastcall sub_8BD40(void (*a1)(void *))
{
  _UNKNOWN **v1; // r2

  v1 = &off_B5004;
  if ( &off_B5004 )
    v1 = (_UNKNOWN **)off_B5004;
  return sub_B508(a1, 0, v1);
}
