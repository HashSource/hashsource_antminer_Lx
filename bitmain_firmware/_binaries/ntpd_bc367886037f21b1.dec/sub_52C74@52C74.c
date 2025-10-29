int __fastcall sub_52C74(int a1)
{
  __int16 *v2; // r6
  int v3; // r2
  int v4; // r0
  int v6; // [sp+0h] [bp-Ch] BYREF

  v2 = *(__int16 **)a1;
  if ( ioctl(*(_DWORD *)(a1 + 28), 0x5415u, &v6) < 0 )
  {
    sub_64A18(3, "Palisade(%d) HW_poll: ioctl(fd,GET): %m", *v2);
    return -1;
  }
  else
  {
    v3 = *((_DWORD *)v2 + 35);
    v4 = *(_DWORD *)(a1 + 28);
    v6 |= 4u;
    if ( v3 == 3 )
    {
      write(v4, byte_97B44, 1u);
      v4 = *(_DWORD *)(a1 + 28);
    }
    if ( ioctl(v4, 0x5418u, &v6) < 0 )
    {
      sub_64A18(3, "Palisade(%d) HW_poll: ioctl(fd, SET, RTS_on): %m", *v2);
      return -1;
    }
    else
    {
      v6 &= ~4u;
      sub_5F334(a1 + 232);
      if ( ioctl(*(_DWORD *)(a1 + 28), 0x5418u, &v6) == -1 )
      {
        sub_64A18(3, "Palisade(%d) HW_poll: ioctl(fd, UNSET, RTS_off): %m", *v2);
        return -1;
      }
      else
      {
        return 0;
      }
    }
  }
}
