int set_pwm_by_temp()
{
  __int64 v0; // r0
  __int64 v2; // [sp+10h] [bp-1Ch]
  unsigned int v3; // [sp+1Ch] [bp-10h]
  unsigned int v4; // [sp+1Ch] [bp-10h]
  unsigned int v5; // [sp+1Ch] [bp-10h]

  if ( byte_15247C != 1 )
  {
    clock_gettime(1, (struct timespec *)&dword_152480);
    dbl_152490 = 0.0;
    byte_15247C = 1;
    goto LABEL_8;
  }
  clock_gettime(1, (struct timespec *)&dword_152488);
  v0 = (dword_15248C - dword_152484) / 1000000;
  v2 = v0
     + vshld_n_s64(
         4 * (vshld_n_s64(dword_152488 - dword_152480, 5u) - (dword_152488 - dword_152480))
       + dword_152488
       - dword_152480,
         3u);
  if ( *(__int64 *)&dbl_152490 < 20 && (LODWORD(v0) = v2, v2 >= dword_14F3EC)
    || *(__int64 *)&dbl_152490 >= 20 && (LODWORD(v0) = v2, v2 >= dword_14F3F0) )
  {
    clock_gettime(1, (struct timespec *)&dword_152480);
    ++*(_QWORD *)&dbl_152490;
LABEL_8:
    if ( dword_14F3D0 == 1 )
    {
      v4 = sub_62C30();
      LODWORD(v0) = fan_pwm_set(v4);
    }
    else if ( dword_14F3D0 )
    {
      if ( dword_14F3D0 == 2 )
      {
        v5 = sub_62EC8(*(_QWORD *)&dbl_152490 < 21LL);
        LODWORD(v0) = fan_pwm_set(v5);
      }
      else
      {
        LODWORD(v0) = fan_pwm_set(0x64u);
      }
    }
    else
    {
      v3 = sub_62A34();
      LODWORD(v0) = fan_pwm_set(v3);
    }
  }
  return v0;
}
