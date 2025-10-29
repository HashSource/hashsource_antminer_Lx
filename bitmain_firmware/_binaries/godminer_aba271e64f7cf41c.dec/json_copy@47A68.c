json_t *__fastcall json_copy(json_t *a1)
{
  json_t *v1; // r3

  if ( !a1 )
    return 0;
  switch ( *(_DWORD *)a1 )
  {
    case 0:
      v1 = (json_t *)sub_4602C(a1);
      break;
    case 1:
      v1 = sub_46C0C(a1);
      break;
    case 2:
      v1 = (json_t *)sub_47254((int)a1);
      break;
    case 3:
      v1 = (json_t *)sub_47544((int)a1);
      break;
    case 4:
      v1 = (json_t *)sub_477A0();
      break;
    case 5:
    case 6:
    case 7:
      v1 = a1;
      break;
    default:
      v1 = 0;
      break;
  }
  return v1;
}
