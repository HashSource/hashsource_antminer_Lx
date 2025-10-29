int __fastcall sub_3FD24(int a1, const json_t *a2, char ***a3)
{
  int v4; // r3
  char **v5; // r3
  void *v6; // r0
  size_t v7; // r0
  void *v8; // r0
  size_t v9; // r0
  void *v10; // r0
  void *v11; // r0
  void *v12; // r0
  _BYTE v17[12]; // [sp+18h] [bp+10h] BYREF
  _DWORD v18[7]; // [sp+24h] [bp+1Ch] BYREF
  char *v20; // [sp+44h] [bp+3Ch]
  int v21; // [sp+48h] [bp+40h]
  int appended; // [sp+4Ch] [bp+44h]
  char *s; // [sp+50h] [bp+48h]
  int v24; // [sp+54h] [bp+4Ch]
  const json_t *v25; // [sp+58h] [bp+50h]
  int v26; // [sp+5Ch] [bp+54h]
  _BOOL4 v27; // [sp+60h] [bp+58h]
  int v28; // [sp+64h] [bp+5Ch]

  v28 = -1;
  v27 = 0;
  v26 = 0;
  if ( hashtable_init((int)v18) )
  {
    sub_3F404((int *)a1, "<internal>", 1, "Out of memory");
    return -1;
  }
  else
  {
    if ( a2 && *(_DWORD *)a2 )
    {
      sub_3F404((int *)a1, "<validation>", 10, "Expected object, got %s");
    }
    else
    {
      sub_3F2C8((_DWORD *)a1);
      while ( *(_BYTE *)(a1 + 36) != 125 )
      {
        v24 = 0;
        if ( v27 )
        {
          sub_3F404((int *)a1, "<format>", 9, "Expected '}' after '%c', got '%c'");
          goto LABEL_53;
        }
        switch ( *(_BYTE *)(a1 + 36) )
        {
          case 0:
            sub_3F404((int *)a1, "<format>", 9, "Unexpected end of format string");
            goto LABEL_53;
          case 0x21:
          case 0x2A:
            if ( *(_BYTE *)(a1 + 36) == 33 )
              v4 = 1;
            else
              v4 = -1;
            v27 = v4;
            sub_3F2C8((_DWORD *)a1);
            break;
          case 0x73:
            v5 = (*a3)++;
            v20 = *v5;
            if ( !v20 )
            {
              sub_3F404((int *)a1, "<args>", 12, "NULL object key");
              goto LABEL_53;
            }
            sub_3F2C8((_DWORD *)a1);
            if ( *(_BYTE *)(a1 + 36) == 63 )
            {
              v26 = 1;
              v24 = 1;
              sub_3F2C8((_DWORD *)a1);
            }
            if ( a2 )
            {
              v25 = json_object_get(a2, v20);
              if ( !v25 && !v24 )
              {
                sub_3F404((int *)a1, "<validation>", 16, "Object item not found: %s");
                goto LABEL_53;
              }
            }
            else
            {
              v25 = 0;
            }
            if ( sub_40294(a1, v25, a3) )
              goto LABEL_53;
            v6 = json_null();
            hashtable_set((int)v18, v20, (int)v6);
            sub_3F2C8((_DWORD *)a1);
            break;
          default:
            sub_3F404((int *)a1, "<format>", 9, "Expected format 's', got '%c'");
            goto LABEL_53;
        }
      }
      if ( !v27 )
        v27 = (*(_DWORD *)(a1 + 60) & 2) != 0;
      if ( !a2 || !v27 )
        goto LABEL_52;
      appended = 1;
      v21 = 0;
      if ( v26 || (v7 = json_object_size(a2), v7 != v18[0]) )
      {
        v8 = json_object_iter(a2);
        for ( s = (char *)json_object_iter_key(v8); s; s = (char *)json_object_iter_key(v11) )
        {
          v12 = json_object_key_to_iter(s);
          if ( !json_object_iter_value((int)v12) )
            break;
          if ( !hashtable_get((hashtable_t *)v18, s) )
          {
            ++v21;
            if ( appended == 1 )
            {
              appended = strbuffer_init((strbuffer_t *)v17);
            }
            else if ( !appended )
            {
              appended = strbuffer_append_bytes((int)v17, ", ", 2u);
            }
            if ( !appended )
            {
              v9 = strlen(s);
              appended = strbuffer_append_bytes((int)v17, s, v9);
            }
          }
          v10 = json_object_key_to_iter(s);
          v11 = json_object_iter_next(a2, v10);
        }
      }
      if ( v21 )
      {
        if ( !appended )
          strbuffer_value((int)v17);
        sub_3F404((int *)a1, "<validation>", 7, "%li object item(s) left unpacked: %s");
        strbuffer_close((strbuffer_t *)v17);
      }
      else
      {
LABEL_52:
        v28 = 0;
      }
    }
LABEL_53:
    hashtable_close((hashtable_t *)v18);
    return v28;
  }
}
