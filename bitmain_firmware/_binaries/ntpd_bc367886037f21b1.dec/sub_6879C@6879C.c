void __fastcall sub_6879C(int a1)
{
  int *v1; // r2
  int v2; // r5
  unsigned int v3; // r0

  v1 = (int *)&unk_B6CF8;
  dword_B6CF4 = a1;
  while ( 1 )
  {
    a1 = -2836 * (a1 / 127773) + 16807 * (a1 - (_DWORD)&loc_1F31C * (a1 / 127773));
    if ( a1 <= 0 )
      a1 += 0x7FFFFFFF;
    *v1 = a1;
    if ( &unk_B6D6C == (_UNKNOWN *)v1 )
      break;
    ++v1;
  }
  v2 = 310;
  off_B6D70[0] = &dword_B6D00;
  off_B6D74 = &dword_B6CF4;
  do
  {
    v3 = sub_686F8();
    --v2;
  }
  while ( v2 );
  srand(v3);
}
