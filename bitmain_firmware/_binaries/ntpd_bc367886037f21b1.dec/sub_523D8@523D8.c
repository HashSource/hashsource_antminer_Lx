int __fastcall sub_523D8(int a1, int a2)
{
  int v4; // r0
  int v5; // r6
  int v6; // r4
  int v7; // r0
  int v8; // r3
  _DWORD *v9; // r9
  int v10; // r11
  int v11; // r3
  int v12; // r3
  __int16 v14; // [sp+Ch] [bp-60h] BYREF
  void *ptr; // [sp+10h] [bp-5Ch]
  struct termios v16; // [sp+14h] [bp-58h] BYREF
  char v17[20]; // [sp+50h] [bp-1Ch] BYREF

  sub_6BCB0(v17, 20, "/dev/palisade%d", a1);
  v4 = sub_39F68(v17, 0xDu, 32);
  v5 = v4;
  if ( v4 <= 0 )
    return 0;
  sub_64A18(5, "Palisade(%d) fd: %d dev: %s", a1, v4, v17);
  if ( tcgetattr(v5, &v16) < 0 )
  {
    v6 = 0;
    sub_64A18(3, "Palisade(%d) tcgetattr(fd, &tio): %m", a1);
    close(v5);
  }
  else
  {
    v16.c_cflag |= 0x300u;
    v16.c_iflag &= ~0x100u;
    v7 = sub_637E4(0, 148, 0, 1);
    v8 = *(_DWORD *)(a2 + 76) & 0x7F;
    v9 = (_DWORD *)v7;
    *(_DWORD *)(v7 + 140) = v8;
    switch ( v8 )
    {
      case 0:
        break;
      case 1:
        sub_64A18(5, "Palisade(%d) Praecis mode enabled", a1);
        break;
      case 2:
        sub_64A18(5, "Palisade(%d) Thunderbolt mode enabled", a1);
        v16.c_cflag = 2224;
        break;
      case 3:
        sub_64A18(5, "Palisade(%d) Acutime Gold mode enabled", a1);
        break;
      default:
        sub_64A18(5, "Palisade(%d) mode unknown", a1);
        break;
    }
    if ( tcsetattr(v5, 0, &v16) == -1 )
    {
      v6 = 0;
      sub_64A18(3, "Palisade(%d) tcsetattr(fd, &tio): %m", a1);
      close(v5);
      free(v9);
    }
    else
    {
      v10 = *(_DWORD *)(a2 + 84);
      *(_DWORD *)(v10 + 20) = a2;
      *(_DWORD *)(v10 + 28) = v5;
      *(_DWORD *)(v10 + 12) = sub_52EDC;
      *(_DWORD *)(v10 + 24) = 0;
      v6 = sub_18BA4((int *)(v10 + 8));
      if ( v6 )
      {
        *(_DWORD *)v10 = v9;
        *(_DWORD *)(v10 + 44) = "Trimble Palisade GPS";
        *(_BYTE *)(a2 + 95) = -20;
        *(_BYTE *)(a2 + 90) = 4;
        *(_BYTE *)(a2 + 65) = 4;
        *(_BYTE *)(a2 + 66) = 5;
        strcpy((char *)(v10 + 764), "GPS");
        v11 = v9[35];
        *(_WORD *)v9 = a1;
        v9[2] = 0;
        if ( v11 == 2 )
        {
          ptr = (void *)sub_637E4(0, 100, 0, 0);
          *(_BYTE *)ptr = 16;
          *((_BYTE *)ptr + 1) = -114;
          *((_BYTE *)ptr + 2) = -94;
          v14 = 4;
          *((_BYTE *)ptr + 3) = 3;
          sub_52168(&v14, v5);
          *(_BYTE *)ptr = 16;
          *((_BYTE *)ptr + 1) = -114;
          *((_BYTE *)ptr + 2) = -91;
          *((_BYTE *)ptr + 3) = 0;
          v14 = 5;
          *((_BYTE *)ptr + 4) = 5;
          sub_52168(&v14, v5);
          free(ptr);
          v11 = v9[35];
        }
        if ( v11 == 3 )
        {
          v14 = 0;
          v6 = 1;
          ptr = (void *)sub_637E4(0, 100, 0, 0);
          *(_BYTE *)ptr = 16;
          *((_BYTE *)ptr + 1) = -114;
          *((_BYTE *)ptr + 2) = -91;
          *((_BYTE *)ptr + 3) = 2;
          *((_BYTE *)ptr + 4) = 0;
          v14 = 6;
          *((_BYTE *)ptr + 5) = 0;
          v12 = v14++;
          *((_BYTE *)ptr + v12) = 0;
          sub_52168(&v14, v5);
          free(ptr);
        }
        else
        {
          return 1;
        }
      }
      else
      {
        close(v5);
        *(_DWORD *)(v10 + 28) = -1;
        free(v9);
      }
    }
  }
  return v6;
}
