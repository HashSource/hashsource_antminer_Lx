int __fastcall sub_1A06C(_DWORD *a1)
{
  DIR *v2; // r0
  int result; // r0

  if ( !a1 || *a1 != 1145655850 || (v2 = (DIR *)a1[322]) == 0 )
    sub_10788();
  result = closedir(v2);
  a1[322] = 0;
  return result;
}
