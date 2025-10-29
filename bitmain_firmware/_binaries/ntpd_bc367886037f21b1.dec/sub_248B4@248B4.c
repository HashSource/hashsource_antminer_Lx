__int16 *sub_248B4()
{
  const char **v0; // r0
  const char **v1; // r4
  __int16 v2; // r3
  int v3; // r10
  const char **v4; // r0
  size_t v6; // r10
  size_t v7; // r0
  char *v8; // r0
  const char *v9; // r2
  int v10; // r3
  bool v11; // zf
  char *v12; // r5
  int v13; // t1
  bool v14; // zf
  void *v15; // r10
  size_t v16; // r0
  size_t v17; // r0
  char *s; // [sp+4h] [bp-10h] BYREF
  int v19; // [sp+8h] [bp-Ch] BYREF

  v19 = 0;
  if ( word_B86C8 )
    return (__int16 *)sub_1F270(1);
  word_B84A0 = __rev16(sub_23340());
  while ( 1 )
  {
    v0 = (const char **)sub_1E5B0((int)&unk_B3148, &s);
    v1 = v0;
    if ( !v0 )
      return sub_1E934(0);
    v2 = *((_WORD *)v0 + 1);
    v3 = v2 & 0x80;
    if ( (v2 & 0x80) != 0 )
    {
      v4 = (const char **)sub_1E5B0(dword_B88D8, &s);
      v1 = v4;
      if ( !v4 )
        return sub_1E934(0);
      v2 = *((_WORD *)v4 + 1);
      if ( (v2 & 0x80) != 0 )
        return (__int16 *)sub_1F270(5);
      v3 = 1;
    }
    if ( (v2 & 2) == 0 )
      return (__int16 *)sub_1F270(1);
    if ( !s )
      return (__int16 *)sub_1F270(2);
    if ( !v3 )
      break;
    v6 = strlen(v1[1]);
    v7 = strlen(s);
    v8 = (char *)sub_637E4(0, v6 + v7 + 2, 0, 0);
    v9 = v1[1];
    v10 = *(unsigned __int8 *)v9;
    v11 = v10 == 0;
    if ( *v9 )
      v11 = v10 == 61;
    v12 = v8;
    if ( !v11 )
    {
      do
      {
        *v8++ = v10;
        v13 = *(unsigned __int8 *)++v9;
        v10 = v13;
        v14 = v13 == 0;
        if ( v13 )
          v14 = v10 == 61;
      }
      while ( !v14 );
    }
    *v8 = 61;
    v15 = v8 + 1;
    v16 = strlen(s);
    memcpy(v15, s, v16 + 1);
    v17 = strlen(v12);
    sub_24370((unsigned __int8 *)v12, v17 + 1, *((_WORD *)v1 + 1));
    free(v12);
  }
  if ( !*s || !sub_6056C(s, &v19) )
    return (__int16 *)sub_1F270(2);
  if ( (v19 & 0xFFFFFFFC) != 0 )
    return (__int16 *)sub_1F270(6);
  else
    return (__int16 *)sub_1F270(0);
}
