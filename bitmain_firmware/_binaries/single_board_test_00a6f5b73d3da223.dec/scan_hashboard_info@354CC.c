int __fastcall scan_hashboard_info(char a1, _BYTE *a2, const char *a3, _BYTE *a4, _BYTE *a5, int a6)
{
  char s[12]; // [sp+1Ch] [bp+14h] BYREF
  char *v12; // [sp+28h] [bp+20h]
  char *v13; // [sp+2Ch] [bp+24h]
  char *v14; // [sp+30h] [bp+28h]
  char *src; // [sp+34h] [bp+2Ch]

  src = 0;
  v14 = 0;
  v13 = 0;
  v12 = 0;
  if ( a1 != 3 )
  {
    printf("%s scanner chain number is wrong!!!\n", "scan_hashboard_info");
    return -1;
  }
  while ( 1 )
  {
    memset(s, 0, 0xAu);
    if ( recv_scan_data(s, 9) > 0 )
      break;
    a6 -= 10;
    usleep(0x2710u);
LABEL_21:
    usleep(0x1388u);
    a6 -= 5;
    if ( a6 <= 0 )
      goto LABEL_22;
  }
  v12 = strstr(s, "\r\n");
  v14 = strchr(s, 10);
  v13 = strchr(s, 13);
  if ( !v12 && !v14 && !v13 )
  {
    if ( strlen(s) > dword_1ED16C )
    {
      memset(byte_1F0D88, 0, sizeof(byte_1F0D88));
      dword_1F0D84 = 0;
    }
    strcpy(&byte_1F0D88[dword_1F0D84], s);
    goto LABEL_20;
  }
  if ( v12 )
  {
    *v12 = 0;
    src = v12 + 2;
  }
  else if ( v13 )
  {
    *v13 = 0;
    src = v13 + 1;
  }
  else
  {
    *v14 = 0;
    src = v14 + 1;
  }
  if ( strlen(s) > dword_1ED16C
    || (strcpy(&byte_1F0D88[dword_1F0D84], s), sub_3516C(byte_1F0D88, a2, a4, a3, a5), !*a4)
    || !*a5 )
  {
    memset(byte_1F0D88, 0, sizeof(byte_1F0D88));
    strcpy(byte_1F0D88, src);
LABEL_20:
    dword_1F0D84 = strlen(byte_1F0D88);
    dword_1ED16C = 255 - strlen(byte_1F0D88);
    goto LABEL_21;
  }
LABEL_22:
  if ( *a4 && *a5 )
    return 0;
  else
    return -1;
}
