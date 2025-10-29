unsigned int __fastcall sub_14700(int a1)
{
  __int64 v1; // r2
  int v2; // r1

  if ( !a1 || *(_DWORD *)a1 != 1114990113 )
    sub_10788();
  v1 = *(_QWORD *)(a1 + 12);
  if ( (unsigned int)(v1 - HIDWORD(v1)) <= 5 )
    sub_10788();
  v2 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 16) = HIDWORD(v1) + 6;
  return _byteswap_ulong(*(_DWORD *)(v2 + HIDWORD(v1) + 2));
}
