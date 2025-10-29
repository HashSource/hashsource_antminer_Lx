int __fastcall sub_19B26C(int a1)
{
  __int64 v1; // r0
  __int64 v2; // r0
  __int64 v3; // r0
  __int64 v4; // r0

  LODWORD(v1) = sub_19AD10(*(_DWORD *)a1, *(_DWORD *)(a1 + 4));
  sub_1A3C0C(v1);
  LODWORD(v2) = sub_19AD10(*(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12));
  sub_1A3C0C(v2);
  LODWORD(v3) = sub_19AD10(*(_DWORD *)(a1 + 16), *(_DWORD *)(a1 + 20));
  sub_1A3C0C(v3);
  LODWORD(v4) = sub_19AD10(*(_DWORD *)(a1 + 24), *(_DWORD *)(a1 + 28));
  return sub_1A3C0C(v4);
}
