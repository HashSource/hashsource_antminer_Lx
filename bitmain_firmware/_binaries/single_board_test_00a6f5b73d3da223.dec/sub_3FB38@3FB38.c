void *__fastcall sub_3FB38(double a1)
{
  double v1; // kr08_8
  void *v2; // r3
  _DWORD *v3; // r3
  int *v4; // r3
  __int64 *v5; // r3

  v1 = a1;
  switch ( *(_BYTE *)(LODWORD(a1) + 36) )
  {
    case 'I':
      v5 = (__int64 *)((*(_DWORD *)HIDWORD(a1) + 7) & 0xFFFFFFF8);
      *(_DWORD *)HIDWORD(a1) = v5 + 1;
      v2 = sub_3FA68((int *)LODWORD(a1), *v5);
      break;
    case 'O':
      v2 = sub_3F9D4(SLODWORD(a1), (int **)HIDWORD(a1), 1);
      break;
    case '[':
      v2 = sub_3F840(LODWORD(a1), HIDWORD(a1));
      break;
    case 'b':
      v3 = (_DWORD *)*(_DWORD *)HIDWORD(a1);
      *(_DWORD *)HIDWORD(a1) += 4;
      if ( *v3 )
        v2 = json_true();
      else
        v2 = json_false();
      break;
    case 'f':
      HIDWORD(a1) = ((*(_DWORD *)HIDWORD(a1) + 7) & 0xFFFFFFF8) + 8;
      *(_DWORD *)HIDWORD(v1) = HIDWORD(a1);
      v2 = sub_3FAAC(a1);
      break;
    case 'i':
      v4 = (int *)*(_DWORD *)HIDWORD(a1);
      *(_DWORD *)HIDWORD(a1) += 4;
      v2 = sub_3FA68((int *)LODWORD(a1), *v4);
      break;
    case 'n':
      v2 = json_null();
      break;
    case 'o':
      v2 = sub_3F9D4(SLODWORD(a1), (int **)HIDWORD(a1), 0);
      break;
    case 's':
      v2 = sub_3F924(SLODWORD(a1), (char ***)HIDWORD(a1));
      break;
    case '{':
      v2 = sub_3F6D0(LODWORD(a1), (char ***)HIDWORD(a1));
      break;
    default:
      sub_3F404((int *)LODWORD(a1), "<format>", 9, "Unexpected format character '%c'");
      *(_DWORD *)(LODWORD(v1) + 76) = 1;
      v2 = 0;
      break;
  }
  return v2;
}
