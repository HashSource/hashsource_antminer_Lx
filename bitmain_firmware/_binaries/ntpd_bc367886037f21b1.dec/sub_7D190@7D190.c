int __fastcall sub_7D190(char a1, char **a2)
{
  int result; // r0

  dword_1062C8 = (int)"Str";
  dword_1062CC = (int)"YES";
  dword_1062D0 = (int)"Num";
  dword_1062D8 = (int)"KWd";
  dword_1062DC = (int)"Mbr";
  dword_106300 = (int)"Tim";
  dword_1062D4 = (int)"Fil";
  dword_1062E0 = (int)"T/F";
  dword_1062E4 = (int)"Cpx";
  dword_1062E8 = (int)"opt";
  dword_1062EC = (int)"no ";
  dword_1062F0 = (int)"\n%s\n\n%s";
  dword_1062F4 = (int)"     ";
  dword_1062F8 = (int)"  ";
  switch ( a1 & 0x12 )
  {
    case 0:
      result = 24;
      *a2 = off_B75E8[0];
      dword_1062FC = (int)" %3s %-14s %s";
      break;
    case 2:
      result = 24;
      *a2 = off_B75EC[0];
      dword_1062FC = (int)" %3s %-14s %s";
      break;
    case 0x10:
      result = 19;
      *a2 = off_B7590[0];
      dword_1062FC = (int)off_B7598[0];
      break;
    case 0x12:
      result = 19;
      *a2 = off_B7594[0];
      dword_1062FC = (int)off_B7598[0];
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
