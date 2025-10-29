int __fastcall sub_7EBE4(int a1)
{
  int v2; // r4
  int v3; // r5
  const char *v4; // r0
  int v5; // r3
  int v6; // r1
  bool v7; // zf
  int v8; // r2
  char *v9; // r0
  int v10; // r3
  FILE **v12; // [sp+0h] [bp-1Ch]

  v2 = *(_DWORD *)(a1 + 68);
  v3 = *(_DWORD *)(a1 + 100);
  v12 = &stdout;
  fwrite("        case \"${OPT_CODE}\" in\n", (size_t)&dword_0 + 1, 0x1Eu, stdout);
  do
  {
    if ( (*(_DWORD *)(v2 + 16) & 0x280000) == 0 )
    {
      sub_7EA20(*(const char **)(v2 + 52), (_DWORD *)v2, (_DWORD *)(a1 + 68), (int *)(a1 + 100));
      sub_7E6B0((const char **)(a1 + 32), v2);
      v4 = *(const char **)(v2 + 56);
      if ( v4 )
      {
        sub_7EA20(v4, (_DWORD *)v2, (_DWORD *)(a1 + 68), (int *)(a1 + 100));
        if ( *(int (**)())(v2 + 40) == optionLoadOpt )
        {
          printf("            %s\n", "echo 'Warning:  Cannot suppress the loading of options files' >&2");
        }
        else
        {
          v5 = *(unsigned __int16 *)(v2 + 12);
          v6 = *(_DWORD *)(a1 + 32);
          v7 = v5 == 1;
          v8 = *(_DWORD *)(v2 + 48);
          if ( v5 == 1 )
            v9 = "ME='%2$s'\n";
          else
            v9 = " ;;\n    esac\n";
          v10 = *(_DWORD *)(v2 + 60);
          if ( v7 )
            printf(v9 + 11, v6, v8, v10, v12);
          else
            printf(v9 + 14, v6, v8, v10, v12);
        }
        printf("            %s\n", "OPT_ARG_NEEDED=NO");
        fwrite("            ;;\n\n", 1u, 0x10u, *v12);
      }
    }
    --v3;
    v2 += 64;
  }
  while ( v3 > 0 );
  return printf(
           "        * )\n"
           "            echo Unknown %s: \"${OPT_CODE}\" >&2\n"
           "            echo \"$%s_USAGE_TEXT\" >&2\n"
           "            exit 1\n"
           "            ;;\n"
           "        esac\n",
           "option",
           *(const char **)(a1 + 32));
}
