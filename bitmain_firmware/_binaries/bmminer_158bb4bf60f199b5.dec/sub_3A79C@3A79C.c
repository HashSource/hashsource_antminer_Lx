void __fastcall sub_3A79C(int a1, int a2, int a3)
{
  int v5; // r11
  bool v6; // zf
  _BOOL4 v7; // r4
  unsigned int v8; // r1
  unsigned int v9; // r4
  int i; // [sp+8h] [bp-81Ch]
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  if ( (unsigned int)dword_9E31C > 4 )
  {
    snprintf(s, 0x800u, "[DEBUG] Dump freq table, chain = %d.\n", a1);
    sub_47AB4(4, s, 0);
  }
  v5 = 78 * a1;
  for ( i = 0; i != 16; ++i )
  {
    if ( *(_DWORD *)(dword_A0D68 + 4 * i + 4) == 1 )
    {
      v6 = a1 == 255;
      if ( a1 != 255 )
        v6 = a1 == i;
      v7 = !v6;
      if ( v6 )
      {
        v8 = dword_9E31C;
        if ( (unsigned int)dword_9E31C > 3 )
        {
          snprintf(s, 0x800u, "chain = %d\n", i);
          sub_47EC8(3, s, v7);
          v8 = dword_9E31C;
        }
        v9 = 0;
        while ( v8 > 3 )
        {
          snprintf(s, 0x800u, "[%3d]:%-3d", v9, *(_DWORD *)(a2 + 312 * i + 4 * v9));
          sub_47EC8(3, s, 0);
          if ( a3 )
          {
            v8 = dword_9E31C;
            if ( (unsigned int)*(unsigned __int8 *)(*(_DWORD *)dword_1AEA80 + v5 + v9 + 740) <= *(_DWORD *)(dword_1AEA80 + 4 * (a1 + 2512) + 4) )
              goto LABEL_18;
            if ( (unsigned int)dword_9E31C <= 3 )
              goto LABEL_19;
            strcpy(s, "+  ");
            sub_47EC8(3, s, 0);
            v8 = dword_9E31C;
LABEL_26:
            ++v9;
            if ( v9 != 6 * (v9 / 6) || v8 <= 3 )
              goto LABEL_20;
            strcpy(s, "\n");
            sub_47EC8(3, s, v9 % 6);
            v8 = dword_9E31C;
            if ( v9 == 78 )
            {
LABEL_29:
              if ( v8 > 3 )
              {
                strcpy(s, "\n");
                sub_47EC8(3, s, 0);
              }
              goto LABEL_4;
            }
          }
          else
          {
            v8 = dword_9E31C;
            if ( (unsigned int)dword_9E31C > 3 )
            {
              *(_DWORD *)s = &unk_202020;
              sub_47EC8(3, s, 0);
              v8 = dword_9E31C;
              goto LABEL_26;
            }
LABEL_19:
            ++v9;
LABEL_20:
            if ( v9 == 78 )
              goto LABEL_29;
          }
        }
        if ( !a3
          || (unsigned int)*(unsigned __int8 *)(*(_DWORD *)dword_1AEA80 + v5 + v9 + 740) > *(_DWORD *)(dword_1AEA80 + 4 * (a1 + 2512) + 4) )
        {
          goto LABEL_19;
        }
LABEL_18:
        if ( v8 > 3 )
        {
          strcpy(s, "=  ");
          sub_47EC8(3, s, 0);
          v8 = dword_9E31C;
          goto LABEL_26;
        }
        goto LABEL_19;
      }
    }
LABEL_4:
    ;
  }
}
