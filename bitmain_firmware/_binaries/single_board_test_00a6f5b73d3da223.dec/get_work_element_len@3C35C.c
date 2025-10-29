int __fastcall get_work_element_len(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  unsigned __int8 v5; // [sp+17h] [bp+17h]

  v5 = 1;
  switch ( a1 )
  {
    case 0:
      *a2 = 246;
      *a3 = 4;
      *a4 = 168;
      break;
    case 1:
      *a2 = 64;
      *a3 = 4;
      *a4 = 0;
      break;
    case 2:
      *a2 = 48;
      *a3 = 5;
      *a4 = 0;
      break;
    case 5:
      *a2 = 32;
      *a3 = 8;
      *a4 = 32;
      break;
    case 6:
      *a2 = 80;
      *a3 = 4;
      *a4 = 0;
      break;
    case 7:
      *a2 = 80;
      *a3 = 4;
      *a4 = 0;
      break;
    default:
      v5 = 0;
      printf("%s, algo type error!\n", "get_work_element_len");
      break;
  }
  return v5;
}
