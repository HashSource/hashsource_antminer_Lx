int __fastcall sub_4303C(int a1, int a2)
{
  int v4; // r8
  int *v5; // r4
  int *v6; // r7
  int v7; // r2
  int v8; // r8
  int v9; // r3
  struct termios v11; // [sp+0h] [bp-44h] BYREF

  v4 = open64("/dev/datum", 2);
  if ( v4 < 0 )
  {
    v8 = 0;
    sub_64A18(3, "Datum_PTS: open(\"%s\", O_RDWR) failed: %m", "/dev/datum");
  }
  else
  {
    v5 = (int *)sub_637E4(0, 96, 0, 1);
    v5[2] = a1;
    v5[1] = v4;
    *((_QWORD *)v5 + 10) = 0;
    v5[8] = 0;
    if ( fcntl(v4, 4, 0) == -1 )
      sub_64A18(3, "MSF_ARCRON(%d): fcntl(F_SETFL, 0): %m.", a1);
    *(_QWORD *)&v11.c_cc[3] = 1966080;
    v11.c_oflag = 0;
    *(_QWORD *)&v11.c_lflag = 0;
    v11.c_cflag = 2493;
    memset(&v11.c_cc[11], 0, 32);
    v11.c_iflag = 1;
    if ( tcsetattr(v5[1], 0, &v11) < 0 )
    {
      v8 = 0;
      sub_64A18(3, "Datum_PTS: tcsetattr(\"%s\") failed: %m", "/dev/datum");
      close(v5[1]);
      free(v5);
    }
    else
    {
      v6 = *(int **)(a2 + 84);
      v7 = v5[1];
      *v5 = a2;
      v6[5] = a2;
      v6[3] = (int)sub_42D48;
      v6[6] = 0;
      v6[7] = v7;
      v8 = sub_18BA4(v6 + 2);
      if ( v8 )
      {
        v8 = 1;
        v9 = dword_BBD58;
        **(_DWORD **)(a2 + 84) = v5;
        dword_BBD58 = v9 + 1;
      }
      else
      {
        v6[7] = -1;
        sub_64A18(3, "Datum_PTS: Problem adding clock");
        close(v5[1]);
        free(v5);
      }
    }
  }
  return v8;
}
