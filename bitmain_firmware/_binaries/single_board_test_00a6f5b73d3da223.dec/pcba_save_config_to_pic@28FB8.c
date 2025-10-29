int __fastcall pcba_save_config_to_pic(int a1)
{
  _BYTE s[32]; // [sp+Ch] [bp+Ch] BYREF
  _WORD v4[2]; // [sp+2Ch] [bp+2Ch] BYREF
  char v5; // [sp+30h] [bp+30h]
  char v6; // [sp+31h] [bp+31h]
  int v7; // [sp+34h] [bp+34h]
  _WORD *v8; // [sp+38h] [bp+38h]
  int v9; // [sp+3Ch] [bp+3Ch]
  unsigned int j; // [sp+40h] [bp+40h]
  unsigned int i; // [sp+44h] [bp+44h]

  v4[0] = *(_DWORD *)(4 * a1 + *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 24));
  v4[1] = *(_DWORD *)(4 * a1 + *(_DWORD *)(g_config_info + 48));
  v5 = (char)(int)(*(double *)(8 * a1 + *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 36)) * 100.0) / 100;
  v6 = (int)(*(double *)(8 * a1 + *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 36)) * 100.0) % 100;
  v9 = 393216;
  v8 = v4;
  for ( i = 0; i <= 5; ++i )
    printf("%02x ", *((unsigned __int8 *)v8 + i));
  puts("--- wbuf pic");
  v7 = (*(int (__fastcall **)(_DWORD, int, int, _WORD *))(dword_1F0C90 + 76))(
         *(_DWORD *)(dword_1F0C8C + 136),
         51,
         v9,
         v8);
  if ( v7 )
  {
    puts("save voltage failed");
    return -1;
  }
  else
  {
    memset(s, 0, sizeof(s));
    v7 = (*(int (__fastcall **)(_DWORD, int, int, _BYTE *))(dword_1F0C90 + 76))(
           *(_DWORD *)(dword_1F0C8C + 136),
           52,
           v9,
           s);
    if ( v7 )
    {
      puts("get voltage failed");
      return -1;
    }
    else
    {
      for ( j = 0; j <= 5; ++j )
        printf("%02x ", (unsigned __int8)s[j]);
      puts("--- rbuf pic");
      return 0;
    }
  }
}
