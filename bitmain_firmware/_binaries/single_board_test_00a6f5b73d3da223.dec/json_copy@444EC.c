json_t *__fastcall json_copy(json_t *a1)
{
  json_t *v1; // r3

  if ( !a1 )
    return 0;
  switch ( *(_DWORD *)a1 )
  {
    case 0:
      v1 = sub_4359C(a1);
      break;
    case 1:
      v1 = sub_43C44(a1);
      break;
    case 2:
      v1 = (json_t *)sub_43FEC((int)a1);
      break;
    case 3:
      v1 = (json_t *)sub_441BC(a1);
      break;
    case 4:
      v1 = (json_t *)sub_4431C(a1);
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
