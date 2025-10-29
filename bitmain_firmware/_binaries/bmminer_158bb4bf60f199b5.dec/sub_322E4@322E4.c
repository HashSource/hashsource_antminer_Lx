void __fastcall sub_322E4(int a1)
{
  int v1; // r12
  unsigned int v2; // r1
  _BOOL4 v3; // r3
  int v4; // r3

  v1 = *(_BYTE *)a1 & 0xF;
  v2 = *(_BYTE *)(a1 + 2) / 3u;
  v3 = v2 <= 0x4D;
  if ( !*(_DWORD *)(dword_A0D68 + 4 * v1 + 4) )
    v3 = 0;
  if ( !v3 )
    goto LABEL_4;
  v4 = *(unsigned __int8 *)(a1 + 1);
  if ( v4 == 144 )
  {
    if ( (*(_DWORD *)(a1 + 4) & 0x88) != 0 )
      *(_BYTE *)(*(_DWORD *)(dword_1AEA64 + 4) + 78 * v1 + v2) = 1;
  }
  else
  {
    if ( v4 != 224 )
    {
LABEL_4:
      sub_3762C((char *)a1);
      return;
    }
    sub_321E0(*(_BYTE *)a1 & 0xF, v2, *(_DWORD *)(a1 + 4), dword_1AEA64 + 8);
  }
}
