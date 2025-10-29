const json_t *__fastcall json_deep_copy(const json_t *a1)
{
  const json_t *v1; // r3

  if ( !a1 )
    return 0;
  switch ( *(_DWORD *)a1 )
  {
    case 0:
      v1 = (const json_t *)sub_460EC(a1);
      break;
    case 1:
      v1 = sub_46C94(a1);
      break;
    case 2:
      v1 = (const json_t *)sub_47254((int)a1);
      break;
    case 3:
      v1 = (const json_t *)sub_47544((int)a1);
      break;
    case 4:
      v1 = (const json_t *)sub_477A0();
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
