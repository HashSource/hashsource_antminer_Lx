unsigned int __fastcall eth_get_works_from_txt(const char *a1, list_head *a2, int a3, unsigned int a4)
{
  size_t v5; // r0
  size_t v6; // r0
  size_t v7; // r0
  char v13[68]; // [sp+24h] [bp+14h] BYREF
  char v14[20]; // [sp+68h] [bp+58h] BYREF
  char v15[68]; // [sp+7Ch] [bp+6Ch] BYREF
  int v16; // [sp+C0h] [bp+B0h] BYREF
  int v17; // [sp+C4h] [bp+B4h] BYREF
  int v18; // [sp+C8h] [bp+B8h] BYREF
  char s[512]; // [sp+CCh] [bp+BCh] BYREF
  list_head *v20; // [sp+2CCh] [bp+2BCh]
  int v21; // [sp+2D0h] [bp+2C0h]
  FILE *stream; // [sp+2D4h] [bp+2C4h]
  int v23; // [sp+2D8h] [bp+2C8h]
  unsigned int v24; // [sp+2DCh] [bp+2CCh]

  stream = 0;
  memset(s, 0, sizeof(s));
  v24 = 0;
  v23 = 0;
  stream = fopen(a1, "r");
  if ( stream )
  {
    while ( fgets(s, 512, stream) && v24 <= a4 )
    {
      v18 = 0;
      v17 = 0;
      v16 = 0;
      v21 = 0;
      memset(v15, 0, 0x41u);
      memset(v14, 0, 0x11u);
      memset(v13, 0, 0x41u);
      if ( !strstr(s, "header") || !strstr(s, "nonce") || !strstr(s, "mixhash") )
      {
        puts("error! failed to get work from pattern file");
        return 0;
      }
      v20 = (list_head *)malloc(0x64u);
      v21 = _isoc99_sscanf(s, "asic %d core %d pe %d header %s nonce %s mixhash %s\n", &v18, &v17, &v16, v15, v14, v13);
      if ( v21 != 6 )
      {
        printf("failed to get data from pattern file!");
        return 0;
      }
      *((_DWORD *)v20 + 3) = v18;
      *((_DWORD *)v20 + 4) = v17;
      *((_DWORD *)v20 + 5) = v16;
      v5 = strlen(v15);
      s2hex((unsigned __int8 *)v20 + 24, v15, v5);
      v6 = strlen(v14);
      s2hex((unsigned __int8 *)v20 + 56, v14, v6);
      v7 = strlen(v13);
      s2hex((unsigned __int8 *)v20 + 64, v13, v7);
      *((_BYTE *)v20 + 96) = 0;
      *((_DWORD *)v20 + 2) = (*((_DWORD *)v20 + 3) << 12)
                           | (*((_DWORD *)v20 + 4) << 8)
                           | (16 * *((_DWORD *)v20 + 5))
                           | v23++;
      if ( a3 - 1 < v23 )
        v23 = 0;
      list_add_tail(v20, a2);
      ++v24;
    }
    fclose(stream);
    return v24;
  }
  else
  {
    perror("failed to open pattern file!");
    return -1;
  }
}
