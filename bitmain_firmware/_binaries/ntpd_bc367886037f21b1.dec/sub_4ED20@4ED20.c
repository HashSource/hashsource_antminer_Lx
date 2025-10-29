int __fastcall sub_4ED20(int a1, int a2)
{
  char *v3; // r8
  tcflag_t v4; // r4
  int v6; // r7
  char v7; // r2
  int v9; // r3
  _WORD *v10; // [sp+Ch] [bp-60h]
  struct termios v11; // [sp+14h] [bp-58h] BYREF
  char v12[20]; // [sp+50h] [bp-1Ch] BYREF

  if ( a1 > 0 )
  {
    sub_64A18(3, "leitch_start: unit %d invalid", a1);
    return 0;
  }
  else
  {
    v3 = (char *)word_BC578 + a1;
    v4 = *((unsigned __int8 *)&word_BC578[54] + a1);
    if ( *((_BYTE *)&word_BC578[54] + a1) )
    {
      sub_64A18(3, "leitch_start: unit %d in use", a1);
      return 0;
    }
    else
    {
      sub_6BCB0(v12, 20, "/dev/leitch%d", a1);
      v6 = open64(v12, 2);
      if ( v6 == -1 )
      {
        sub_64A18(3, "leitch_start: open of %s: %m", v12);
        return v4;
      }
      else
      {
        v10 = &word_BC578[54 * a1];
        memset(v10, v4, 0x6Cu);
        if ( tcgetattr(v6, &v11) < 0 )
        {
          sub_64A18(3, "leitch_start: tcgetattr(%s): %m", v12);
        }
        else
        {
          v11.c_oflag = v4;
          v11.c_cflag = 2231;
          v11.c_cc[3] = v4;
          v11.c_cc[2] = v4;
          v11.c_iflag = 261;
          v11.c_lflag = 2;
          if ( tcsetattr(v6, v4, &v11) < 0 )
          {
            sub_64A18(3, "leitch_start: tcsetattr(%s): %m", v12);
          }
          else if ( tcflush(v6, 2) < 0 )
          {
            sub_64A18(3, "leitch_start: tcflush(%s): %m", v12);
          }
          else
          {
            *((_DWORD *)v10 + 5) = v4;
            *(_DWORD *)&word_BC578[54 * a1] = a2;
            *((_DWORD *)v10 + 2) = sub_4E5F4;
            *((_BYTE *)v10 + 36) = a1;
            *((_DWORD *)v10 + 4) = a2;
            *((_DWORD *)v10 + 6) = v6;
            *((_DWORD *)v10 + 13) = 983040;
            if ( sub_18BA4((int *)&word_BC578[54 * a1 + 2]) )
            {
              v7 = v3[116];
              v3[108] = 1;
              v9 = *(_DWORD *)&word_BC578[2 * a1 + 56];
              *(_BYTE *)(a2 + 93) = v7;
              *(_BYTE *)(a2 + 95) = -20;
              *(_DWORD *)(a2 + 112) = v9;
              return 1;
            }
            *((_DWORD *)v10 + 6) = -1;
          }
        }
        close(v6);
        return 0;
      }
    }
  }
}
