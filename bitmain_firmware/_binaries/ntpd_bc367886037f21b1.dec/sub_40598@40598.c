unsigned int __fastcall sub_40598(unsigned __int16 *a1, int a2, int a3)
{
  unsigned int result; // r0
  int v6; // r7
  int v7; // r0
  int v8; // r8
  unsigned int v9; // r3
  int v10; // r0
  __int64 v11; // r0
  __int64 v12; // r0
  __int16 v13; // [sp+10h] [bp-20h] BYREF
  _BYTE v14[26]; // [sp+12h] [bp-1Eh] BYREF

  result = (unsigned int)&dword_BBB34;
  if ( !dword_BBBC0 )
    return result;
  v6 = *a1;
  if ( v6 != 2 )
  {
    if ( !*((_DWORD *)a1 + 2) && !*((_DWORD *)a1 + 3) && !*((_DWORD *)a1 + 4) && !*((_DWORD *)a1 + 5)
      || *((unsigned __int8 *)a1 + 8) == 255 )
    {
      return result;
    }
    if ( v6 != 10 )
      sub_6E8F0("ntp_restrict.c", 760, 0, "2 == ((addr)->sa.sa_family) || 10 == ((addr)->sa.sa_family)");
    v13 = 10;
    *(_QWORD *)v14 = 0;
    *(_DWORD *)&v14[22] = 0;
    memset(&v14[6], 255, 16);
    if ( !a2 )
    {
      v7 = sub_3FA80((int)(a1 + 4), (unsigned __int16)__rev16(a1[1]));
      v8 = v7;
      if ( !v7 )
        sub_6E8F0("ntp_restrict.c", 786, 2, "res != ((void *)0)");
      result = memcmp((const void *)(v7 + 36), &v14[6], 0x10u) == 0;
      goto LABEL_13;
    }
LABEL_25:
    HIDWORD(v11) = a1;
    LODWORD(v11) = 3;
    return sub_3FF90(v11, (int)&v13, -2, 0, 0, 0);
  }
  result = *((_DWORD *)a1 + 1);
  if ( !result )
    return result;
  result = bswap32(result);
  if ( (result & 0xF0000000) == 0xE0000000 || HIWORD(result) << 16 == 2139029504 )
    return result;
  v13 = 2;
  *(_QWORD *)v14 = 0xFFFFFFFF0000LL;
  memset(&v14[8], 0, 18);
  if ( a2 )
    goto LABEL_25;
  v10 = sub_3F9A0(result, (unsigned __int16)__rev16(a1[1]));
  v8 = v10;
  if ( !v10 )
    sub_6E8F0("ntp_restrict.c", 781, 2, "res != ((void *)0)");
  result = *(_DWORD *)(v10 + 24) == bswap32(*(unsigned int *)&v14[2]);
LABEL_13:
  if ( a3 )
    v9 = 0;
  else
    v9 = result;
  if ( v9 )
  {
    if ( *(_DWORD *)(v8 + 16) )
    {
      sub_3F804(v8, *a1 == 10);
LABEL_27:
      HIDWORD(v12) = a1;
      LODWORD(v12) = 1;
      return sub_3FF90(v12, (int)&v13, word_BBBBC, word_BBBBA, word_BBBB8, a3);
    }
  }
  else if ( !result )
  {
    goto LABEL_27;
  }
  return result;
}
