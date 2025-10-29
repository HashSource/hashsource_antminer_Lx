int __fastcall update_str_and_flag(unsigned __int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // d17
  unsigned __int64 v3; // kr00_8
  int i; // [sp+28h] [bp-Ch]
  _BYTE *v6; // [sp+2Ch] [bp-8h]

  v3 = a1;
  *(_DWORD *)(HIDWORD(a1) + 72) = 0;
  v6 = *(_BYTE **)(HIDWORD(a1) + 76);
  for ( i = 0; i < *(_DWORD *)(v3 + 336); ++i )
  {
    switch ( *(_DWORD *)(*(_DWORD *)(v3 + 528) + 44 * i + 16) )
    {
      case 0:
        ++*(_DWORD *)(HIDWORD(v3) + 72);
        *v6++ = 111;
        break;
      case 1:
        *v6++ = 35;
        LODWORD(v2) = 0;
        a1 = vshld_u64(1u, v2) | *a2;
        *a2 = a1;
        break;
      case 2:
        *v6++ = 88;
        LODWORD(v2) = 1;
        a1 = vshld_u64(1u, v2) | *a2;
        *a2 = a1;
        break;
      case 3:
        *v6++ = 120;
        LODWORD(v2) = 2;
        a1 = vshld_u64(1u, v2) | *a2;
        *a2 = a1;
        break;
      default:
        *v6++ = 42;
        break;
    }
    if ( i && (i & 7) == 0 )
      *v6++ = 32;
  }
  *v6 = 0;
  return a1;
}
