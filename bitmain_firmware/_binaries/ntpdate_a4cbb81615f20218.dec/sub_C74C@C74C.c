int sub_C74C()
{
  int v0; // r3
  unsigned __int16 v2[2]; // [sp+0h] [bp-14h] BYREF
  char v3; // [sp+5h] [bp-Fh]

  if ( !sub_AFC4((int)v2) )
    return 25567;
  --v3;
  v0 = sub_BD64(v2) - 693596;
  if ( v0 < 25567 )
    return 25567;
  return v0;
}
