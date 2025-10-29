int __fastcall sub_7D5A8(int a1, unsigned int *a2, _DWORD *a3, int a4)
{
  int v8; // [sp+20h] [bp-14h] BYREF
  unsigned int s; // [sp+24h] [bp-10h] BYREF
  int v10; // [sp+28h] [bp-Ch]
  unsigned int v11; // [sp+2Ch] [bp-8h]

  v10 = 0;
  *a3 = 0;
  *a2 = -64;
  v10 = sub_7D274(a1, 0, a4, 0, &s, &v8, 1);
  if ( v10 == 1 )
  {
    v11 = HIBYTE(s);
    if ( *(_DWORD *)(a1 + 512) == 1 )
      v11 -= 64;
    *a2 = v11;
    *a3 = v8;
  }
  return v10;
}
