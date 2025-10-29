int __fastcall pcba_eth_send(int a1, int a2)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r1
  int v6; // r2
  int v7; // r3
  _BYTE s[89]; // [sp+Ch] [bp+Ch] BYREF
  unsigned __int64 v11; // [sp+68h] [bp+68h]
  int v12; // [sp+74h] [bp+74h]

  v12 = a2;
  v11 = 0;
  memset(s, 0, sizeof(s));
  v11 = sub_34A64((unsigned __int64 *)(v12 + 56));
  *(_QWORD *)&s[80] = v11;
  v2 = *(_DWORD *)(v12 + 28);
  v3 = *(_DWORD *)(v12 + 32);
  v4 = *(_DWORD *)(v12 + 36);
  *(_DWORD *)&s[16] = *(_DWORD *)(v12 + 24);
  *(_DWORD *)&s[20] = v2;
  *(_DWORD *)&s[24] = v3;
  *(_DWORD *)&s[28] = v4;
  v5 = *(_DWORD *)(v12 + 44);
  v6 = *(_DWORD *)(v12 + 48);
  v7 = *(_DWORD *)(v12 + 52);
  *(_DWORD *)&s[32] = *(_DWORD *)(v12 + 40);
  *(_DWORD *)&s[36] = v5;
  *(_DWORD *)&s[40] = v6;
  *(_DWORD *)&s[44] = v7;
  return (*(int (__fastcall **)(int, _BYTE *))(a1 + 24))(a1, s);
}
