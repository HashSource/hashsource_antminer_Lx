void __fastcall sub_2D5F0(int a1, unsigned int *a2)
{
  char v2[2052]; // [sp+0h] [bp-804h] BYREF

  switch ( a1 )
  {
    case 8:
      sub_2C844(a2);
      break;
    case 9:
      sub_2CA8C(a2);
      break;
    case 10:
      sub_2CBD4(a2);
      break;
    case 11:
      sub_2CD1C(a2);
      break;
    case 12:
      sub_2CE10(a2);
      break;
    case 13:
      sub_2CF58(a2);
      break;
    case 14:
      sub_2D0E0(a2);
      break;
    case 15:
      sub_2D2E8(a2);
      break;
    default:
      if ( (unsigned int)dword_9E31C > 3 )
      {
        snprintf(v2, 0x800u, "Unknown reg: %d\n", a1);
        sub_47AB4(3, v2, 0);
      }
      break;
  }
}
