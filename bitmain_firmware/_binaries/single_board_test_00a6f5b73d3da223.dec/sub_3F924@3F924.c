_DWORD *__fastcall sub_3F924(int a1, char ***a2)
{
  _BOOL4 v2; // r3
  int v7; // [sp+14h] [bp+Ch] BYREF
  size_t v8; // [sp+18h] [bp+10h] BYREF
  char *v9; // [sp+1Ch] [bp+14h]
  _BOOL4 v10; // [sp+20h] [bp+18h]
  char v11; // [sp+27h] [bp+1Fh]

  sub_3F2C8((_DWORD *)a1);
  v11 = *(_BYTE *)(a1 + 36);
  v2 = v11 == 63 || v11 == 42;
  v10 = v2;
  if ( !v2 )
    sub_3F3D0((_DWORD *)a1);
  v9 = sub_3F454(a1, a2, (int)"string", &v8, &v7, v10);
  if ( v9 )
  {
    if ( *(_DWORD *)(a1 + 76) )
    {
      return 0;
    }
    else if ( v7 )
    {
      return jsonp_stringn_nocheck_own(v9, v8);
    }
    else
    {
      return json_stringn_nocheck(v9, v8);
    }
  }
  else if ( v11 != 63 || *(_DWORD *)(a1 + 76) )
  {
    return 0;
  }
  else
  {
    return json_null();
  }
}
