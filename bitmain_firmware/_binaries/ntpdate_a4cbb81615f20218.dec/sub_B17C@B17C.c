_QWORD *__fastcall sub_B17C(time_t a1, int a2, time_t *timer)
{
  _QWORD *v3; // r6
  __int64 v5; // r8
  unsigned int v6; // r3

  v3 = (_QWORD *)a1;
  if ( timer )
    a1 = *timer;
  if ( !timer )
    a1 = off_31048(0);
  LODWORD(v5) = a1 + 0x80000000;
  v6 = a2 + 2085978496 - (a1 + 0x80000000);
  HIDWORD(v5) = (a1 >> 31) - !__CFADD__(a1, 0x80000000);
  *v3 = v5 + v6;
  return v3;
}
