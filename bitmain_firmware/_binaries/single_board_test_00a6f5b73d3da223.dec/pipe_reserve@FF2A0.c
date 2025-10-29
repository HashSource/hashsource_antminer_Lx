int __fastcall pipe_reserve(_DWORD *a1, int a2)
{
  _DWORD v3[6]; // [sp+8h] [bp+0h] BYREF
  unsigned int v4; // [sp+20h] [bp+18h]
  _DWORD *v5; // [sp+24h] [bp+1Ch]
  int v6[6]; // [sp+2Ch] [bp+24h] BYREF
  _DWORD *v7; // [sp+44h] [bp+3Ch]

  v5 = a1;
  v7 = a1;
  v4 = sub_FE384((int)a1) * a2;
  if ( !v4 )
    v4 = 32;
  v6[5] = v7[2];
  sub_FE5C0((int)v7);
  sub_FE3B4(v6, v7);
  if ( sub_FE450(v6[0], v6[1], v6[2], v6[3], v6[4]) < v4 )
    sub_FEA04(v3, (int)v7, v4);
  return sub_FE5EC((int)v7);
}
