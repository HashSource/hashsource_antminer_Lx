int __fastcall sub_4F024(int a1, int a2)
{
  bool v3; // zf
  int v4; // r5
  int v5; // r0
  int v6; // r1
  int result; // r0

  v3 = sys_peer == a2;
  if ( sys_peer != a2 )
    v3 = sys_peer == 0;
  if ( v3 )
  {
    v4 = *(_DWORD *)(a2 + 84);
    ++*(_DWORD *)(v4 + 776);
    sub_39754((_DWORD *)v4, *(_DWORD *)(v4 + 232), *(_DWORD *)(v4 + 236));
    *(_BYTE *)(v4 + 40) = 0;
    v5 = *(_DWORD *)(v4 + 232);
    v6 = *(_DWORD *)(v4 + 236);
    *(_QWORD *)(v4 + 256) = 0;
    *(_QWORD *)(v4 + 248) = 0x3F847AE147AE147BLL;
    *(_DWORD *)(v4 + 224) = v5;
    *(_DWORD *)(v4 + 228) = v6;
    return sub_39A1C(a2);
  }
  return result;
}
