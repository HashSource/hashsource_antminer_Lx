int __fastcall sub_41A54(int a1, int a2)
{
  int v3; // r3
  size_t v7; // [sp+14h] [bp+Ch]
  int v8; // [sp+18h] [bp+10h]
  int v9; // [sp+18h] [bp+10h]
  unsigned int i; // [sp+1Ch] [bp+14h]

  if ( *(_DWORD *)(a1 + 20) )
    return *(_DWORD *)(a1 + 20);
  if ( !*(_BYTE *)(*(_DWORD *)(a1 + 16) + a1 + 8) )
  {
    v8 = (*(int (__fastcall **)(_DWORD))a1)(*(_DWORD *)(a1 + 4));
    if ( v8 == -1 )
    {
      *(_DWORD *)(a1 + 20) = -1;
      return -1;
    }
    *(_BYTE *)(a1 + 8) = v8;
    *(_DWORD *)(a1 + 16) = 0;
    if ( v8 <= 127 || v8 > 255 )
    {
      *(_BYTE *)(a1 + 9) = 0;
    }
    else
    {
      v7 = utf8_check_first(v8);
      if ( !v7 )
        goto LABEL_20;
      for ( i = 1; i < v7; ++i )
        *(_BYTE *)(i + a1 + 8) = (*(int (__fastcall **)(_DWORD))a1)(*(_DWORD *)(a1 + 4));
      if ( !utf8_check_full((const char *)(a1 + 8), v7, 0) )
      {
LABEL_20:
        *(_DWORD *)(a1 + 20) = -2;
        sub_4188C(a2, (_DWORD *)a1, 5, "unable to decode byte 0x%x", v8);
        return -2;
      }
      *(_BYTE *)(v7 + a1 + 8) = 0;
    }
  }
  v3 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 16) = v3 + 1;
  v9 = *(unsigned __int8 *)(v3 + a1 + 8);
  ++*(_DWORD *)(a1 + 36);
  if ( v9 == 10 )
  {
    ++*(_DWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 28);
    *(_DWORD *)(a1 + 28) = 0;
  }
  else if ( utf8_check_first(v9) )
  {
    ++*(_DWORD *)(a1 + 28);
  }
  return v9;
}
