int __fastcall sub_13FCC(int result)
{
  _DWORD *v1; // r4
  int v2; // r0
  char *v3; // r3
  int optval; // [sp+Ch] [bp-Ch] BYREF

  optval = result;
  v1 = (_DWORD *)ep_list;
  if ( ep_list )
  {
    do
    {
      if ( (v1[36] & 0x80) == 0 )
      {
        result = v1[3];
        if ( result != -1 )
        {
          result = setsockopt(result, 1, 2, &optval, 4u);
          if ( result )
          {
            v2 = sub_6BF44(v1 + 6);
            if ( optval )
              v3 = "on";
            else
              v3 = "off";
            result = sub_64A18(3, "set_reuseaddr: setsockopt(%s, SO_REUSEADDR, %s) failed: %m", v2, v3);
          }
        }
      }
      v1 = (_DWORD *)*v1;
    }
    while ( v1 );
  }
  return result;
}
