int __fastcall sub_8B99C(int a1)
{
  int i; // [sp+8h] [bp-Ch]
  int v3; // [sp+Ch] [bp-8h]

  v3 = 0;
  for ( i = 31; i >= 0; --i )
  {
    if ( *(_BYTE *)(a1 + i) )
    {
      if ( *(unsigned __int8 *)(a1 + i) > 1u )
      {
        if ( *(unsigned __int8 *)(a1 + i) > 3u )
        {
          if ( *(unsigned __int8 *)(a1 + i) > 7u )
          {
            if ( *(unsigned __int8 *)(a1 + i) > 0xFu )
            {
              if ( *(unsigned __int8 *)(a1 + i) > 0x1Fu )
              {
                if ( *(unsigned __int8 *)(a1 + i) > 0x3Fu )
                {
                  if ( *(char *)(a1 + i) >= 0 )
                    ++v3;
                }
                else
                {
                  v3 += 2;
                }
              }
              else
              {
                v3 += 3;
              }
            }
            else
            {
              v3 += 4;
            }
          }
          else
          {
            v3 += 5;
          }
        }
        else
        {
          v3 += 6;
        }
      }
      else
      {
        v3 += 7;
      }
      return v3;
    }
    v3 += 8;
  }
  return v3;
}
