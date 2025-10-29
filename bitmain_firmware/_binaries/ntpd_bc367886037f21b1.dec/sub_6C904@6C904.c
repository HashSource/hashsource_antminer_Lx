_BYTE *__fastcall sub_6C904(int a1, const char *a2, int *a3, int a4)
{
  int *v7; // r4
  _BYTE *v8; // r9
  int v9; // r6
  int *v10; // r7
  _BYTE *v11; // r10
  int v12; // r6
  const char *v13; // r3
  const char *v14; // r2
  unsigned int v15; // r0
  const char *v17; // r3
  int *v19; // [sp+14h] [bp-18h]
  int v20; // [sp+18h] [bp-14h]

  v7 = a3;
  v19 = _errno_location();
  v20 = *v19;
  v8 = &lib_stringbuf[128 * lib_nextbuf];
  v9 = ((_BYTE)lib_nextbuf + 1) & 0xF;
  memset(v8, 0, 0x80u);
  v10 = &a3[3 * a4];
  v11 = v8 + 128;
  lib_nextbuf = v9;
  v12 = (int)v8;
  v13 = byte_97B44;
  while ( 1 )
  {
    v14 = (const char *)v7[1];
    if ( (a1 & *v7) == 0 )
      v14 = (const char *)v7[2];
    if ( !v14 )
      goto LABEL_7;
    v15 = sub_6BCB0(v12, (unsigned int)&v11[-v12], "%s%s", v13, v14);
    if ( v15 >= (unsigned int)&v11[-v12] )
      break;
    v12 += v15;
    v13 = a2;
LABEL_7:
    v7 += 3;
    if ( v10 == v7 )
      return v8;
  }
  if ( a3 == &off_B3C48 )
  {
    v17 = "peer_st";
  }
  else if ( a3 == (int *)&unk_B3C84 )
  {
    v17 = "kern_st";
  }
  else
  {
    v17 = byte_97B44;
  }
  sub_6BCB0((int)v8, 0x80u, "decode_bitflags(%s) can't decode 0x%x in %d bytes", v17, a1, 128);
  *v19 = v20;
  return v8;
}
