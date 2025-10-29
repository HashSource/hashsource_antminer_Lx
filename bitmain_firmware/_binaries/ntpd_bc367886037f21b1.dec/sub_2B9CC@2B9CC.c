int __fastcall sub_2B9CC(int a1, const char *a2)
{
  int result; // r0

  result = a1 - 1;
  switch ( result )
  {
    case 0:
      if ( dword_B88F4 )
        free((void *)dword_B88F4);
      result = sub_63948(a2);
      dword_B88F4 = result;
      break;
    case 1:
      if ( dword_B88FC )
        free((void *)dword_B88FC);
      result = sub_63948(a2);
      dword_B88FC = result;
      break;
    case 3:
      if ( dword_B88F0 )
        free((void *)dword_B88F0);
      result = sub_63948(a2);
      dword_B88F0 = result;
      break;
    case 7:
      if ( dword_B88F8 )
        free((void *)dword_B88F8);
      result = sub_63948(a2);
      dword_B88F8 = result;
      break;
    case 8:
      result = OBJ_sn2nid(a2);
      if ( result )
        crypto_nid = result;
      else
        result = sub_64A18(3, "crypto_config: invalid digest name %s", a2);
      break;
    default:
      return result;
  }
  return result;
}
