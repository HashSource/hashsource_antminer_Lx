unsigned int __fastcall sub_85F5C(unsigned int result, int a2)
{
  int v2; // r3
  int v3; // r4
  char *v4; // r8
  unsigned int v5; // r3
  void **v6[2]; // [sp+4h] [bp-14h] BYREF
  int v7; // [sp+Ch] [bp-Ch]
  int v8; // [sp+10h] [bp-8h]

  v6[0] = 0;
  v6[1] = 0;
  v8 = 0;
  v7 = 2;
  if ( result > 0xF )
  {
    v2 = *(_DWORD *)(a2 + 16);
    if ( (v2 & 8) == 0 )
    {
      v3 = result;
      v4 = *(char **)(a2 + 24);
      if ( (v2 & 0x8000) == 0 )
        v7 = 4;
      if ( (*(_DWORD *)(result + 12) & 0x40000) == 0
        || sub_85654(result, v4, (int *)v6)
        || (result = sub_7DFCC((_DWORD *)v3, v6)) != 0 )
      {
        fprintf(stderr, off_B74D0[0], *(_DWORD *)(v3 + 28), v4);
        (*(void (__fastcall **)(int, int))(v3 + 84))(v3, 1);
        exit(1);
      }
      v5 = (unsigned int)&loc_20020 & v7;
      if ( (*(_DWORD *)(v3 + 12) & 0x8000) == 0 )
      {
        if ( v5 && (v7 & 0x40020) != 0x20 && (v7 & 0x400020) != 0x400000 && (~v7 & 0x800020) != 0 )
          return result;
        return sub_7D860(v3, v6);
      }
      if ( v5 == 0x20000 || (~v7 & 0x40020) == 0 )
        return sub_7D860(v3, v6);
    }
  }
  return result;
}
