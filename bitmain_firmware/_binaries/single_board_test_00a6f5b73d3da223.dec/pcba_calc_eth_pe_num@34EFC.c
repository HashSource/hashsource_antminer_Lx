int __fastcall pcba_calc_eth_pe_num(int result, int *a2, int *a3)
{
  int v5; // [sp+10h] [bp+10h]
  int v6; // [sp+14h] [bp+14h]

  v6 = 0;
  v5 = 0;
  switch ( result )
  {
    case 0:
    case 1:
    case 2:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 13:
    case 14:
    case 15:
      v6 = 0;
      v5 = 6;
      break;
    case 3:
      v6 = 4;
      v5 = 6;
      break;
    case 4:
    case 12:
      v6 = 15;
      v5 = 0;
      break;
    default:
      result = puts("error! wrong pe id");
      break;
  }
  *a2 = v6;
  *a3 = v5;
  return result;
}
