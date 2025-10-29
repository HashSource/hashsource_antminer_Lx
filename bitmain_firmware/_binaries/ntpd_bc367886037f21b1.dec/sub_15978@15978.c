void __fastcall sub_15978(int a1)
{
  void *v1; // r8
  _DWORD *v2; // r4
  ssize_t v3; // r0
  int v4; // r5
  unsigned int v5; // r3
  unsigned int v6; // r3
  int v7; // r3
  _DWORD buf[1279]; // [sp+4h] [bp-1408h] BYREF

  v1 = (void *)a1;
  if ( disable_dynamic_updates )
    goto LABEL_16;
  v2 = buf;
  v3 = read(*(_DWORD *)(a1 + 4), buf, 0x1400u);
  v4 = v3;
  if ( v3 < 0 )
  {
    if ( *_errno_location() == 105 )
    {
      sub_64A18(3, "routing socket reports: %m");
      return;
    }
    sub_64A18(3, "routing socket reports: %m - disabling");
    a1 = (int)v1;
LABEL_16:
    sub_158BC(a1);
    free(v1);
    return;
  }
  if ( v3 > 15 && buf[0] > 0xFu && buf[0] <= (unsigned int)v3 )
  {
    do
    {
      v6 = *((unsigned __int16 *)v2 + 2);
      if ( v6 <= 0x19 )
      {
        v7 = 1 << v6;
        if ( (v7 & 0x3330000) != 0 )
        {
          sub_40BDC(current_time + 2);
        }
        else if ( (v7 & 8) != 0 )
        {
          return;
        }
      }
      v5 = (*v2 + 3) & 0xFFFFFFFC;
      v4 -= v5;
      v2 = (_DWORD *)((char *)v2 + v5);
    }
    while ( v4 > 15 && *v2 > 0xFu && (unsigned int)v4 >= *v2 );
  }
}
