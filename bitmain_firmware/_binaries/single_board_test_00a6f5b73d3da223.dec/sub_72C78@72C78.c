int __fastcall sub_72C78(int a1, unsigned int *a2, _DWORD *a3, int a4)
{
  int v8; // [sp+20h] [bp+10h] BYREF
  unsigned int s; // [sp+24h] [bp+14h] BYREF
  int v10; // [sp+28h] [bp+18h]
  unsigned int v11; // [sp+2Ch] [bp+1Ch]

  v10 = 0;
  v10 = sub_72ABC(a1, 0, a4, 0, &s, &v8, 1u);
  if ( v10 == 1 )
  {
    v11 = HIBYTE(s);
    if ( *(_DWORD *)(a1 + 320) == 1 )
      v11 -= 64;
    *a2 = v11;
    *a3 = v8;
  }
  return v10;
}
