json_t *__fastcall sub_43068(int a1, int **a2)
{
  json_t *v2; // r3
  int *v3; // r3
  int *v4; // r3
  unsigned int v5; // r3

  switch ( *(_BYTE *)(a1 + 36) )
  {
    case 'I':
      v5 = ((unsigned int)*a2 + 7) & 0xFFFFFFF8;
      *a2 = (int *)(v5 + 8);
      v2 = (json_t *)sub_42F48((int *)a1, *(_QWORD *)v5);
      break;
    case 'O':
      v2 = (json_t *)sub_42E4C(a1, a2, 1);
      break;
    case '[':
      v2 = sub_42BB8(a1, a2);
      break;
    case 'b':
      v3 = (*a2)++;
      if ( *v3 )
        v2 = json_true();
      else
        v2 = (json_t *)json_false();
      break;
    case 'f':
      *a2 = (int *)((((unsigned int)*a2 + 7) & 0xFFFFFFF8) + 8);
      v2 = (json_t *)sub_42FAC((int *)a1);
      break;
    case 'i':
      v4 = (*a2)++;
      v2 = (json_t *)sub_42F48((int *)a1, *v4);
      break;
    case 'n':
      v2 = (json_t *)json_null();
      break;
    case 'o':
      v2 = (json_t *)sub_42E4C(a1, a2, 0);
      break;
    case 's':
      v2 = sub_42D20(a1, (char ***)a2);
      break;
    case '{':
      v2 = sub_42988(a1, (char ***)a2);
      break;
    default:
      sub_4250C((int *)a1, "<format>", 9, "Unexpected format character '%c'", *(unsigned __int8 *)(a1 + 36));
      *(_DWORD *)(a1 + 76) = 1;
      v2 = 0;
      break;
  }
  return v2;
}
