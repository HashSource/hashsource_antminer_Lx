int set_pwm_by_temp()
{
  float v0; // s0
  double v1; // d7
  int v2; // r3
  bool v3; // cf
  int v4; // r7
  float v5; // s14
  signed int v6; // r0
  __int64 v7; // r6
  __int64 v8; // r2
  int result; // r0
  int v10; // r0
  int v11; // r4
  bool v12; // cc
  double v13; // d5
  int v14; // r0
  int v15; // r0

  if ( !byte_168294 )
  {
    clock_gettime(1, &stru_168298);
    byte_168294 = 1;
    v2 = dword_1653F0;
    *(_QWORD *)&dword_1682A8 = 0;
    v3 = dword_1653F0 != 0;
    if ( dword_1653F0 != 1 )
      goto LABEL_3;
    goto LABEL_15;
  }
  clock_gettime(1, (struct timespec *)&dword_1682A0);
  v7 = *(_QWORD *)&dword_1682A8;
  v8 = 1000LL * (dword_1682A0 - stru_168298.tv_sec) + (dword_1682A4 - stru_168298.tv_nsec) / 1000000;
  if ( *(__int64 *)&dword_1682A8 >= 20 )
  {
    result = dword_165410;
    if ( v8 >= dword_165410 )
    {
LABEL_14:
      clock_gettime(1, &stru_168298);
      *(_QWORD *)&dword_1682A8 = v7 + 1;
      v2 = dword_1653F0;
      v3 = dword_1653F0 != 0;
      if ( dword_1653F0 != 1 )
      {
LABEL_3:
        if ( !v3 )
        {
          v15 = sub_4D200();
          if ( v15 <= 18 )
          {
            v11 = 40;
            goto LABEL_23;
          }
          if ( (unsigned int)(v15 - 19) <= 0xE )
          {
            v14 = v15 - 18;
            v13 = 0.666666667;
            v1 = 40.0;
          }
          else
          {
            if ( (unsigned int)(v15 - 34) <= 4 )
            {
              v11 = 50;
              goto LABEL_23;
            }
            if ( (unsigned int)(v15 - 39) <= 9 )
            {
              v11 = (int)((double)(v15 - 38) + 50.0);
              goto LABEL_23;
            }
            if ( (unsigned int)(v15 - 49) > 6 )
            {
              v11 = 100;
              goto LABEL_23;
            }
            v14 = v15 - 48;
            v13 = 5.71428571;
            v1 = 60.0;
          }
          goto LABEL_22;
        }
        if ( v2 == 2 )
        {
          flt_168274 = (float)get_temp(dword_165404);
          v4 = fan_pwm_get();
          sub_4D418();
          if ( get_temp(dword_1653FC) < dword_165400 )
            v5 = (float)((int)v0 + v4);
          else
            v5 = 100.0;
          if ( v5 < flt_16826C )
          {
            if ( flt_16826C <= flt_168268 )
            {
              v6 = (int)flt_16826C;
              return fan_pwm_set(v6);
            }
          }
          else if ( v5 <= flt_168268 )
          {
            v6 = (int)v5;
            return fan_pwm_set(v6);
          }
          v6 = (int)flt_168268;
          return fan_pwm_set(v6);
        }
        v6 = 100;
        return fan_pwm_set(v6);
      }
LABEL_15:
      v10 = sub_4D200();
      if ( v10 <= 13 )
      {
        v11 = 20;
LABEL_23:
        if ( get_temp(dword_1653FC) >= dword_165400 )
          v11 = 100;
        if ( v11 < dword_1653F4 )
          v6 = dword_1653F4;
        else
          v6 = v11;
        if ( v6 >= dword_1653F8 )
          v6 = dword_1653F8;
        return fan_pwm_set(v6);
      }
      v12 = (unsigned int)(v10 - 14) > 0x12;
      if ( (unsigned int)(v10 - 14) > 0x12 )
      {
        v13 = 1.42857143;
        v14 = v10 - 32;
        v1 = 60.0;
      }
      else
      {
        v13 = 2.10526316;
        v14 = v10 - 13;
      }
      if ( !v12 )
        v1 = 20.0;
LABEL_22:
      v11 = (int)(v1 + (double)v14 * v13);
      goto LABEL_23;
    }
  }
  else
  {
    result = dword_16540C;
    if ( v8 >= dword_16540C )
      goto LABEL_14;
  }
  return result;
}
