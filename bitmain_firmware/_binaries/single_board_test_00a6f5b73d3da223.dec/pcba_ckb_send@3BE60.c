int __fastcall pcba_ckb_send(int a1, int a2)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r6
  _DWORD *v4; // lr
  int v5; // r1
  int v6; // r2
  int v7; // r3
  char v8; // r1
  _BYTE s[132]; // [sp+8h] [bp+8h] BYREF
  int v12; // [sp+8Ch] [bp+8Ch]

  v12 = a2;
  memset(s, 0, 0x80u);
  v2 = (_DWORD *)(v12 + 4);
  v3 = &s[40];
  v4 = (_DWORD *)(v12 + 52);
  do
  {
    v5 = v2[1];
    v6 = v2[2];
    v7 = v2[3];
    *v3 = *v2;
    v3[1] = v5;
    v3[2] = v6;
    v3[3] = v7;
    v2 += 4;
    v3 += 4;
  }
  while ( v2 != v4 );
  sub_1A363C(s[83], *(_DWORD *)(a1 + 240));
  s[83] = v8;
  memset(&s[92], 255, 0x20u);
  return (*(int (__fastcall **)(int, _BYTE *))(a1 + 24))(a1, s);
}
