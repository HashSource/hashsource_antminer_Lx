int __fastcall sub_BE0AC(int a1, int a2, int *a3)
{
  int v3; // r0
  char file[512]; // [sp+14h] [bp-2C8h] BYREF
  char s[188]; // [sp+214h] [bp-C8h] BYREF
  int v11; // [sp+2D0h] [bp-Ch]
  int v12; // [sp+2D4h] [bp-8h]

  memset(s, 0, 0x80u);
  v12 = (int)&word_1C200;
  v11 = sub_BDFBC(*a3);
  switch ( v11 )
  {
    case 4098:
      v12 = (int)&word_1C200;
      break;
    case 4104:
      v12 = (int)&unk_F4240;
      break;
    case 4106:
      v12 = 1500000;
      break;
    case 4109:
      v12 = 3125000;
      break;
  }
  close(a2);
  v3 = sub_BD558(a1);
  snprintf(file, 0x200u, "/dev/ttyS%d", v3);
  sprintf(s, "echo %d > /proc/tty/driver/serial && echo 5555555555 > %s", v12, file);
  if ( !system(s) )
    return open(file, 2306, 0);
  puts("UART_BAUD CMD ERROR");
  return -2;
}
