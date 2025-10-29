int __fastcall sub_106C4(_BYTE *a1)
{
  FILE *v2; // r10
  size_t v3; // r11
  __int64 v4; // r10
  __int64 v5; // r2
  unsigned __int64 v6; // r10
  __int64 v7; // r0
  unsigned __int64 v8; // r0
  const char *v9; // r6
  int v10; // r5
  int v11; // r2
  int v12; // t1
  int v13; // r3
  int v14; // r3
  int v15; // r3
  int v16; // t1
  unsigned __int64 v18; // [sp+0h] [bp-1Ch]
  _QWORD v19[2]; // [sp+8h] [bp-14h]

  if ( dword_21448 )
  {
    v4 = qword_21450;
    v18 = *(_QWORD *)&dword_21458;
LABEL_9:
    v5 = v18 ^ (v18 << 23);
    v6 = v18 ^ (v18 >> 5) ^ v4 ^ (v4 << 23) ^ ((v4 ^ (unsigned __int64)(v4 << 23)) >> 18);
    LODWORD(v7) = v6 ^ (v5 >> 18) ^ v5;
    HIDWORD(v7) = HIDWORD(v6) ^ (HIDWORD(v5) >> 18) ^ HIDWORD(v5);
    qword_21450 = v6;
    v8 = v7 ^ (v6 >> 5);
    v9 = "xxxxxxxxxxxx4xxxyxxxxxxxxxxxxxxx";
    v19[0] = v18 + v6;
    v10 = 0;
    v19[1] = v6 + v8;
    v11 = 120;
    *(_QWORD *)&dword_21458 = v8;
    while ( 1 )
    {
      v13 = *((unsigned __int8 *)v19 + (v10 >> 1));
      v14 = (v10 & 1) != 0 ? v13 >> 4 : v13 & 0xF;
      if ( v11 == 120 )
        break;
      v15 = v14 & 3;
      if ( v11 == 121 )
      {
        ++v10;
        *a1 = a0123456789abcd[v15 + 8];
LABEL_11:
        v12 = *(unsigned __int8 *)++v9;
        v11 = v12;
        ++a1;
        if ( !v12 )
          goto LABEL_18;
      }
      else
      {
        *a1++ = v11;
        v16 = *(unsigned __int8 *)++v9;
        v11 = v16;
        if ( !v16 )
        {
LABEL_18:
          *a1 = v11;
          return v11;
        }
      }
    }
    ++v10;
    *a1 = a0123456789abcd[v14];
    goto LABEL_11;
  }
  while ( 1 )
  {
    v2 = (FILE *)fopen64("/dev/urandom", "rb");
    if ( !v2 )
      return -1;
    v3 = fread(&qword_21450, 1u, 0x10u, v2);
    fclose(v2);
    if ( v3 != 16 )
      return -1;
    v4 = qword_21450;
    v18 = *(_QWORD *)&dword_21458;
    if ( qword_21450 || *(_QWORD *)&dword_21458 )
    {
      dword_21448 = 1;
      goto LABEL_9;
    }
  }
}
