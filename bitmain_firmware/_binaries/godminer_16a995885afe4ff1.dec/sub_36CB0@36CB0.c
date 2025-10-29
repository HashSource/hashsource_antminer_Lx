const char *__fastcall sub_36CB0(int a1, size_t **a2, const char *a3, size_t *a4, _DWORD *a5, int a6)
{
  _DWORD *v6; // r5
  _DWORD *v8; // r7
  _DWORD *v10; // r6
  int v11; // r1
  int v12; // r2
  int v13; // r3
  const char *v14; // lr
  bool v15; // zf
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r12
  int v20; // r12
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r1
  int v25; // r2
  int v26; // r3
  size_t v27; // r2
  char **v28; // r3
  char *v29; // r9
  int v30; // r3
  int v31; // r1
  int v32; // r2
  int v33; // r3
  int v34; // r12
  int v35; // r1
  int v36; // r2
  int v37; // r3
  const char **v39; // r3
  size_t v40; // r6
  char *v41; // r3
  char *v42; // r1
  char v43; // r2
  const char *v44; // r5
  const char *v45; // [sp+0h] [bp-2Ch]
  int v48; // [sp+1Ch] [bp-10h] BYREF
  unsigned int v49; // [sp+20h] [bp-Ch]

  v6 = (_DWORD *)(a1 + 24);
  v8 = (_DWORD *)(a1 + 40);
  v10 = (_DWORD *)(a1 + 8);
  sub_36B80((_DWORD *)a1);
  v11 = v6[1];
  v12 = v6[2];
  v13 = v6[3];
  v14 = (const char *)*(unsigned __int8 *)(a1 + 36);
  *v8 = *v6;
  v8[1] = v11;
  v8[2] = v12;
  v8[3] = v13;
  v15 = ((unsigned __int8)v14 & 0xF7) == 35;
  if ( ((unsigned __int8)v14 & 0xF7) != 0x23 )
    v15 = v14 == (const char *)37;
  v16 = v10[1];
  v17 = v10[2];
  v18 = v10[3];
  v19 = !v15;
  *v6 = *v10;
  v6[1] = v16;
  v6[2] = v17;
  v6[3] = v18;
  *a5 = 0;
  if ( v15 )
  {
    if ( a6 )
    {
      v41 = "Cannot use '%c' on optional strings";
      v42 = "<format>";
      v43 = 9;
      v45 = v14;
      goto LABEL_37;
    }
    if ( strbuffer_init(&v48) )
    {
      sub_36B20((int *)a1, "<internal>", 1, "Out of memory");
      *(_DWORD *)(a1 + 76) = 1;
    }
    while ( 1 )
    {
      v28 = (char **)(*a2)++;
      v29 = *v28;
      if ( !*v28 )
      {
        sub_36B20((int *)a1, "<args>", 12, "NULL %s", a3);
        *(_DWORD *)(a1 + 76) = 1;
      }
      sub_36B80((_DWORD *)a1);
      v30 = *(unsigned __int8 *)(a1 + 36);
      if ( v30 == 35 )
        break;
      v20 = *(_DWORD *)(a1 + 76);
      if ( v30 == 37 )
      {
        v27 = *(*a2)++;
LABEL_21:
        if ( !v20 )
          goto LABEL_14;
        goto LABEL_16;
      }
      v21 = v6[1];
      v22 = v6[2];
      v23 = v6[3];
      *v8 = *v6;
      v8[1] = v21;
      v8[2] = v22;
      v8[3] = v23;
      v24 = v10[1];
      v25 = v10[2];
      v26 = v10[3];
      *v6 = *v10;
      v6[1] = v24;
      v6[2] = v25;
      v6[3] = v26;
      if ( !v20 )
      {
        v27 = strlen(v29);
LABEL_14:
        if ( strbuffer_append_bytes((const void **)&v48, v29, v27) == -1 )
        {
          sub_36B20((int *)a1, "<internal>", 1, "Out of memory");
          *(_DWORD *)(a1 + 76) = 1;
        }
      }
LABEL_16:
      sub_36B80((_DWORD *)a1);
      if ( *(_BYTE *)(a1 + 36) != 43 )
      {
        v31 = v6[1];
        v32 = v6[2];
        v33 = v6[3];
        v34 = *(_DWORD *)(a1 + 76);
        *v8 = *v6;
        v8[1] = v31;
        v8[2] = v32;
        v8[3] = v33;
        v35 = v10[1];
        v36 = v10[2];
        v37 = v10[3];
        *v6 = *v10;
        v6[1] = v35;
        v6[2] = v36;
        v6[3] = v37;
        if ( v34 )
        {
          v44 = 0;
          strbuffer_close((int)&v48);
        }
        else
        {
          v44 = (const char *)utf8_check_string(v48, v49);
          if ( v44 )
          {
            *a4 = v49;
            *a5 = 1;
            return (const char *)strbuffer_steal_value(&v48);
          }
          else
          {
            sub_36B20((int *)a1, "<args>", 5, "Invalid UTF-8 %s", a3);
            strbuffer_close((int)&v48);
            *(_DWORD *)(a1 + 76) = 1;
          }
        }
        return v44;
      }
    }
    v20 = *(_DWORD *)(a1 + 76);
    v27 = *(*a2)++;
    goto LABEL_21;
  }
  v39 = (const char **)(*a2)++;
  v44 = *v39;
  if ( *v39 )
  {
    v40 = strlen(*v39);
    v19 = utf8_check_string((int)v44, v40);
    if ( v19 )
    {
      *a4 = v40;
      return v44;
    }
    v41 = "Invalid UTF-8 %s";
    v42 = "<args>";
    v45 = a3;
    v43 = 5;
LABEL_37:
    v44 = (const char *)v19;
    sub_36B20((int *)a1, v42, v43, v41, v45);
    *(_DWORD *)(a1 + 76) = 1;
    return v44;
  }
  if ( !a6 )
  {
    sub_36B20((int *)a1, "<args>", 12, "NULL %s", a3);
    *(_DWORD *)(a1 + 76) = 1;
  }
  return v44;
}
