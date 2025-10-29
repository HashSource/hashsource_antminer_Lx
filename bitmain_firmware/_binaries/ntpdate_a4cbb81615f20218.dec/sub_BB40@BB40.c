int __fastcall sub_BB40(int a1, int a2, int a3)
{
  unsigned int v4; // r0
  unsigned int v7; // r0
  _DWORD v8[2]; // [sp+4h] [bp-Ch] BYREF

  if ( a2 )
  {
    sub_BA90(v8, a2);
    v7 = sub_BA3C(a1 + v8[0]);
    v4 = v7 + v8[1];
  }
  else
  {
    v4 = sub_BA3C(a1);
  }
  return v4 + a3;
}
