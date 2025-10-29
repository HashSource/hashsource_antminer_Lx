unsigned int __fastcall sub_88A18(unsigned int result, int a2)
{
  int v3; // r5
  char *v4; // r0
  int *v5; // r0
  int *v6; // r4
  int v7; // r7
  int v8; // r9
  int v9; // r3
  int v10; // r10
  const char *v11; // r3
  int v12; // r4
  bool v13; // cc
  int v14; // r4
  unsigned int v15; // r7
  void **v16; // r11
  int v17; // r3
  int v18; // r3
  const void *v19; // r4
  char *dest; // [sp+4h] [bp-A0h]
  void **v21[4]; // [sp+Ch] [bp-98h] BYREF
  char v22[128]; // [sp+1Ch] [bp-88h] BYREF

  if ( (*(_DWORD *)(result + 12) & 0x100) != 0 )
  {
    v3 = result;
    v4 = getenv(*(const char **)(result + 32));
    if ( v4 )
    {
      v5 = sub_885B8(v4);
      v6 = v5;
      if ( v5 )
      {
        v7 = *(_DWORD *)(v3 + 12);
        v8 = *(_DWORD *)(v3 + 4);
        v9 = *v5 + 1;
        v10 = *(_DWORD *)(v3 + 8);
        *(_DWORD *)(v3 + 12) = v7 & 0xFFFFFFFB;
        *(_DWORD *)(v3 + 4) = v9;
        *(_DWORD *)(v3 + 8) = v5;
        *(_DWORD *)(v3 + 16) = 1;
        *(_DWORD *)(v3 + 20) = 0;
        if ( a2 == 1 )
        {
          sub_86698(v3);
        }
        else
        {
          if ( a2 != 2 )
          {
            sub_86698(v3);
            *(_DWORD *)(v3 + 20) = 0;
            *(_DWORD *)(v3 + 16) = 1;
          }
          sub_86568(v3);
        }
        free(v6);
        *(_DWORD *)(v3 + 4) = v8;
        *(_DWORD *)(v3 + 8) = v10;
        *(_DWORD *)(v3 + 12) = v7;
      }
    }
    v11 = *(const char **)(v3 + 32);
    v12 = *(_DWORD *)(v3 + 104);
    v21[0] = *(void ***)(v3 + 68);
    result = sub_6BCB0((int)v22, 0x80u, "%s_", v11);
    v13 = v12 <= 0;
    v14 = v12 - 1;
    v15 = 127 - result;
    dest = &v22[result];
    if ( !v13 )
    {
      v16 = v21[0];
      do
      {
        if ( ((unsigned int)v16[4] & 0x100) == 0 && *((unsigned __int16 *)v16 + 4) == 0x8000 )
        {
          result = strlen((const char *)v16[12]);
          if ( v15 >= result + 1 )
          {
            memcpy(dest, v16[12], result + 1);
            result = (unsigned int)sub_86D50(v21, v22, v3, a2);
            v16 = v21[0];
          }
        }
        --v14;
        v16 += 16;
        v21[0] = v16;
      }
      while ( v14 != -1 );
    }
    v17 = *(unsigned __int16 *)(v3 + 94);
    if ( (v17 & 0x7FFF) != 0 )
    {
      v18 = *(_DWORD *)(v3 + 68) + ((v17 + 1) << 6);
      v21[0] = (void **)v18;
      v19 = *(const void **)(v18 + 48);
      if ( v19 )
      {
        result = strlen(*(const char **)(v18 + 48));
        if ( v15 >= result + 1 )
        {
          memcpy(dest, v19, result + 1);
          return (unsigned int)sub_86D50(v21, v22, v3, a2);
        }
      }
    }
  }
  return result;
}
