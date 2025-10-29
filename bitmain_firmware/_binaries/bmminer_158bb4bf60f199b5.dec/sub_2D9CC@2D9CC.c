void __fastcall sub_2D9CC(int a1, unsigned int *a2)
{
  if ( a1 )
  {
    switch ( a1 )
    {
      case 1:
        sub_2BEC8(a2);
        break;
      case 2:
        sub_2C050(a2);
        break;
      case 3:
        sub_2C144(a2);
        break;
      case 4:
        sub_2C2CC(a2);
        break;
      case 5:
        sub_2C414(a2);
        break;
      case 6:
        sub_2C508(a2);
        break;
      case 7:
        sub_2C5FC(a2);
        break;
      default:
        sub_2D5F0(a1, a2);
        break;
    }
  }
  else
  {
    sub_2BC80(a2);
  }
}
