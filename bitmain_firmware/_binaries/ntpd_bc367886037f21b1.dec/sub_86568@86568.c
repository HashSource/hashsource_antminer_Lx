int __fastcall sub_86568(int a1)
{
  int v1; // r7
  int v3; // r0
  void **v5[2]; // [sp+4h] [bp-18h] BYREF
  int v6; // [sp+Ch] [bp-10h]
  int v7; // [sp+10h] [bp-Ch]

  LOWORD(v1) = (unsigned __int16)&loc_40020;
  HIWORD(v1) = 64;
  while ( 1 )
  {
    v5[0] = 0;
    v5[1] = 0;
    v7 = 0;
    v6 = 4;
    v3 = sub_86388((_DWORD *)a1, (int *)v5);
    if ( !v3 )
      v3 = sub_7ED80((_DWORD *)a1, v5);
    if ( v3 == -1 )
      break;
    if ( v3 == 1 )
      return 0;
    if ( (v6 & (unsigned int)&loc_20020) == 0 || (v6 & (unsigned int)&loc_40020) == 0x20 )
      goto LABEL_11;
    if ( (v6 & v1) == 0x400000 || (~v6 & 0x800020) == 0 )
    {
      --*(_WORD *)((char *)v5[0] + (unsigned int)&byte_9[5]);
LABEL_11:
      if ( sub_7D860(a1, v5) )
        break;
    }
  }
  if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
    (*(void (__fastcall **)(int, int))(a1 + 84))(a1, 1);
  return -1;
}
