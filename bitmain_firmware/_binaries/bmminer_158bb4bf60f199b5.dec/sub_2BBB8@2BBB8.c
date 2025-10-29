void __fastcall sub_2BBB8(int a1, unsigned int *a2)
{
  if ( a1 )
  {
    switch ( a1 )
    {
      case 4:
        sub_270B8(a2);
        break;
      case 8:
        sub_271F8(a2);
        break;
      case 12:
        sub_27578(a2);
        break;
      case 16:
        sub_276F8((int *)a2);
        break;
      case 20:
        sub_277E4(a2);
        break;
      case 24:
        sub_279A4(a2);
        break;
      case 36:
        sub_27EE4(a2);
        break;
      default:
        sub_2A3B8(a1, (int)a2);
        break;
    }
  }
  else
  {
    sub_26F38(a2);
  }
}
