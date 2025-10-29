_QWORD *__fastcall sub_654FC(_QWORD *a1, int a2, time_t *timer)
{
  __int64 v5; // d16

  if ( timer )
    v5 = vshrd_n_s64(vdup_n_s32(*timer).n64_i64[0], 0x20u);
  else
    v5 = vshrd_n_s64(vdup_n_s32(off_B6CE8(0)).n64_i64[0], 0x20u);
  *a1 = v5 + loc_655A0 + (unsigned int)(a2 - (v5 + loc_655A0));
  return a1;
}
