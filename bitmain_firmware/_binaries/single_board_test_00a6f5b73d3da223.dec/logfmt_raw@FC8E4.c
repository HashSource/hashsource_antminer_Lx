int logfmt_raw(void *a1, size_t a2, int a3, ...)
{
  unsigned int v3; // r2
  int result; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  const char *v8; // r3
  int v9; // r0
  int v10; // r0
  const char *v12; // [sp+10h] [bp+8h]
  double v13; // [sp+20h] [bp+18h]
  const char **v14; // [sp+30h] [bp+28h]
  char v15[4096]; // [sp+34h] [bp+2Ch] BYREF
  const char *v16; // [sp+1034h] [bp+102Ch]
  int v17; // [sp+1038h] [bp+1030h]
  int v18; // [sp+103Ch] [bp+1034h]
  va_list varg_r3; // [sp+1054h] [bp+104Ch] BYREF

  va_start(varg_r3, a3);
  v18 = 0;
  memset(a1, 0, a2);
  memset(v15, 0, sizeof(v15));
  va_copy(v14, varg_r3);
  v17 = 0;
  while ( 2 )
  {
    if ( v17 < dword_47BE10 )
    {
      v3 = ((unsigned int)v14 + 7) & 0xFFFFFFF8;
      v14 = (const char **)(v3 + 32);
      v12 = *(const char **)v3;
      result = *(_DWORD *)(v3 + 16);
      v13 = *(double *)(v3 + 16);
      switch ( *(_DWORD *)(v3 + 8) )
      {
        case 0:
          if ( strchr((const char *)LODWORD(v13), 32)
            || !strcmp((const char *)LODWORD(v13), "true") && strlen((const char *)LODWORD(v13)) == 4 )
          {
            v5 = sprintf((char *)a1 + v18, "%s=\"%s\" ", v12, (const char *)LODWORD(v13));
            v18 += v5;
          }
          else
          {
            v6 = sprintf((char *)a1 + v18, "%s=%s ", v12, (const char *)LODWORD(v13));
            v18 += v6;
          }
          goto LABEL_14;
        case 1:
          v7 = sprintf((char *)a1 + v18, "%s=%lf ", v12, v13);
          v18 += v7;
          goto LABEL_14;
        case 2:
          if ( LOBYTE(v13) )
            v8 = "true";
          else
            v8 = "false";
          v9 = sprintf((char *)a1 + v18, "%s=%s ", v12, v8);
          v18 += v9;
          goto LABEL_14;
        case 3:
          v10 = sprintf((char *)a1 + v18, "%s=%lld ", v12, v13);
          v18 += v10;
LABEL_14:
          ++v17;
          continue;
        default:
          return result;
      }
    }
    break;
  }
  v16 = *v14;
  vsprintf(v15, v16, v14 + 1);
  if ( strchr(v15, 32) )
    result = sprintf((char *)a1 + v18, "msg=\"%s\"", v15);
  else
    result = sprintf((char *)a1 + v18, "msg=%s", v15);
  dword_47BE10 = 0;
  return result;
}
