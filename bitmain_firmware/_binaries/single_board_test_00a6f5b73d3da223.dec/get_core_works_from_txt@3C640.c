int __fastcall get_core_works_from_txt(int a1, const char *a2, int a3, int a4)
{
  char s[512]; // [sp+10h] [bp+10h] BYREF
  int v11; // [sp+210h] [bp+210h]
  FILE *stream; // [sp+214h] [bp+214h]
  int i; // [sp+218h] [bp+218h]
  char *v14; // [sp+21Ch] [bp+21Ch]

  memset(s, 0, sizeof(s));
  i = 0;
  stream = fopen(a2, "r");
  for ( i = 0; i < a4; ++i )
  {
    v11 = 104 * i + a3;
    get_work_element_len(a1, (_DWORD *)(v11 + 88), (_DWORD *)(v11 + 92), (_DWORD *)(v11 + 96));
    *(_DWORD *)(v11 + 100) = 0;
    *(_DWORD *)v11 = i;
    fgets(s, 512, stream);
    v14 = strstr(s, "work");
    if ( !v14 )
    {
      puts("get work from pattern file error");
      return 0;
    }
    for ( v14 += 4; *v14 == 32; ++v14 )
      ;
    s2hex((unsigned __int8 *)(v11 + 4), v14, 2 * *(_DWORD *)(v11 + 88));
    v14 = strstr(s, "nonce");
    if ( !v14 )
    {
      puts("get nonce from pattern file error");
      return 0;
    }
    for ( v14 += 5; *v14 == 32; ++v14 )
      ;
    s2hex((unsigned __int8 *)(v11 + 84), v14, 2 * *(_DWORD *)(v11 + 92));
  }
  fclose(stream);
  return i;
}
