int __fastcall sub_40258(int a1)
{
  unsigned __int8 v3; // [sp+Fh] [bp-Dh]
  int v4; // [sp+10h] [bp-Ch]
  int v5; // [sp+10h] [bp-Ch]
  int i; // [sp+14h] [bp-8h]

  v4 = 0;
  for ( i = 1; i <= 4; ++i )
  {
    v3 = *(_BYTE *)(a1 + i);
    v5 = 16 * v4;
    if ( v3 <= 0x2Fu || v3 > 0x39u )
    {
      if ( v3 <= 0x60u || v3 > 0x7Au )
      {
        if ( v3 <= 0x40u || v3 > 0x5Au )
          return -1;
        v4 = v5 + v3 - 55;
      }
      else
      {
        v4 = v5 + v3 - 87;
      }
    }
    else
    {
      v4 = v5 + v3 - 48;
    }
  }
  return v4;
}
