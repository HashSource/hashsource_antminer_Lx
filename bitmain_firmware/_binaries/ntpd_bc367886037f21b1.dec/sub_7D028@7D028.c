int __fastcall sub_7D028(char a1, char **a2)
{
  int v2; // r0

  v2 = a1 & 3;
  *a2 = off_B7594[0];
  dword_1062CC = (int)&unk_9EF9C;
  dword_1062D8 = (int)off_B7458[0];
  dword_1062C8 = (int)off_B7460[0];
  dword_1062D0 = (int)off_B745C[0];
  dword_1062EC = (int)&unk_9EF9C;
  dword_1062E0 = (int)off_B7454[0];
  dword_1062DC = (int)"=Mbr";
  dword_106300 = (int)"=Tim";
  dword_1062D4 = (int)"=file";
  dword_1062E4 = (int)"=Cplx";
  dword_1062E8 = (int)"[=arg]";
  dword_1062F0 = (int)"\n%s\n\n";
  dword_1062F4 = (int)"      ";
  dword_1062F8 = (int)"   ";
  if ( v2 == 2 )
  {
    dword_1062FC = (int)"%s";
    *off_B7454[0] = 32;
    *off_B7458[0] = 32;
    *off_B745C[0] = 32;
    *off_B7460[0] = 32;
    dword_1062E8 = (int)" [arg]";
    return 8;
  }
  else if ( v2 == 3 || v2 == 1 )
  {
    dword_1062FC = (int)"--%2$s%1$s";
    return 22;
  }
  else
  {
    dword_1062FC = (int)"%2$s%1$s";
    return 22;
  }
}
