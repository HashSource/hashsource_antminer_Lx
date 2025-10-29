int __fastcall sub_41D58(int a1)
{
  unsigned __int8 v3; // [sp+Fh] [bp+Fh]
  int v4; // [sp+10h] [bp+10h]
  int v5; // [sp+10h] [bp+10h]
  int i; // [sp+14h] [bp+14h]

  v4 = 0;
  for ( i = 1; i <= 4; ++i )
  {
    v3 = *(_BYTE *)(i + a1);
    v5 = 16 * v4;
    if ( v3 <= 0x2Fu || v3 > 0x39u )
    {
      if ( v3 <= 0x60u || v3 > 0x7Au )
      {
        if ( v3 <= 0x40u || v3 > 0x5Au )
          return -1;
        v4 = v3 - 55 + v5;
      }
      else
      {
        v4 = v3 - 87 + v5;
      }
    }
    else
    {
      v4 = v3 - 48 + v5;
    }
  }
  return v4;
}
