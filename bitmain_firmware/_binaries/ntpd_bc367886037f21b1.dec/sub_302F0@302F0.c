__int16 *__fastcall sub_302F0(__int16 *result)
{
  int v1; // r12
  double v2; // d0
  double v3; // d16
  int v4; // r1
  _QWORD *v5; // r0
  _QWORD *v6; // r3

  v4 = (int)result - 1;
  switch ( (unsigned int)result )
  {
    case 1u:
      if ( !mode_ntpdate )
      {
        sub_2EC7C();
        sub_2EEE0();
        if ( freq_set )
        {
          result = (_WORD *)(&dword_0 + 2);
          dbl_B8B20 = 0.0;
          state = 2;
          last_offset = 0.0;
          dword_B8B28 = current_time;
        }
        else
        {
          result = (__int16 *)sub_2E448((__int16 *)((char *)&dword_0 + 1));
        }
        dword_B8E6C = 1;
      }
      break;
    case 2u:
      return result;
    case 3u:
      clock_max_back = v2;
      clock_max_fwd = v2;
      if ( v2 == 0.0 || v2 > 0.5 )
        goto LABEL_10;
      break;
    case 4u:
      clock_max_back = v2;
      if ( v2 == 0.0 || v2 > 0.5 || clock_max_fwd == 0.0 || clock_max_fwd > 0.5 )
        goto LABEL_10;
      break;
    case 5u:
      clock_max_fwd = v2;
      if ( clock_max_back == 0.0 || clock_max_back > 0.5 || v2 == 0.0 || v2 > 0.5 )
LABEL_10:
        result = sub_300F4(0);
      break;
    case 6u:
      clock_panic = v2;
      break;
    case 7u:
      clock_phi = v2 / 1000000.0;
      break;
    case 8u:
      if ( v2 >= 300.0 )
        clock_minstep = v2;
      else
        clock_minstep = 300.0;
      break;
    case 0xAu:
      allan_xpt = (unsigned int)v2;
      break;
    case 0xBu:
      if ( v2 < 900.0 )
      {
        v4 = 1;
        v1 = 1;
      }
      else
      {
        v3 = v2 / 900.0;
      }
      if ( v2 >= 900.0 )
      {
        v1 = (int)v3;
        v4 = (int)v3;
      }
      dword_B8E70 = v1;
      v5 = (_QWORD *)sub_638A8(0, v4, 8);
      dword_B8E58 = (int)v5;
      if ( dword_B8E70 > 0 )
      {
        v6 = &v5[dword_B8E70];
        do
          *v5++ = 0x41CDCD6500000000LL;
        while ( v6 != v5 );
      }
      dbl_B8E60 = 1000000000.0;
      result = 0;
      break;
    case 0xCu:
      dbl_B8E78 = v2;
      ++freq_set;
      break;
    case 0xDu:
      clock_codec = v2 / 1000000.0;
      break;
    case 0xFu:
      result = (__int16 *)sub_38398();
      break;
    default:
      result = (__int16 *)sub_64A18(5, "loop_config: unsupported option %d", result);
      break;
  }
  return result;
}
