int __fastcall sub_576D0(int a1, int a2, int a3, int a4)
{
  int v5; // [sp+14h] [bp-8h]

  v5 = 0;
  if ( a3 >= a4 || dword_14E904 > 120 )
    dword_14E904 = 0;
  if ( a3 < a4 && dword_14E904 && a2 )
  {
    v5 = 10 * (20 * (a4 - a3) / 100);
    ++dword_14E904;
  }
  if ( a2 <= 0 && dword_14E904 )
  {
    v5 = 20;
    ++dword_14E904;
  }
  return v5;
}
