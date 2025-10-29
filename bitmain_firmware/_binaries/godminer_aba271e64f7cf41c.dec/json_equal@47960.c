int __fastcall json_equal(const json_t *a1, const json_t *a2)
{
  int v2; // r3

  if ( !a1 || !a2 )
    return 0;
  if ( *(_DWORD *)a1 != *(_DWORD *)a2 )
    return 0;
  if ( a1 == a2 )
    return 1;
  switch ( *(_DWORD *)a1 )
  {
    case 0:
      v2 = sub_45F3C(a1, a2);
      break;
    case 1:
      v2 = sub_46B54(a1, a2);
      break;
    case 2:
      v2 = sub_471D4((int)a1, (int)a2);
      break;
    case 3:
      v2 = sub_474F0((int)a1, (int)a2);
      break;
    case 4:
      v2 = sub_4774C();
      break;
    default:
      v2 = 0;
      break;
  }
  return v2;
}
