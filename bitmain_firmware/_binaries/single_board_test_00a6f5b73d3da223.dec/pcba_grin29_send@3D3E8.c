int __fastcall pcba_grin29_send(int a1, int *a2)
{
  _DWORD v4[2]; // [sp+8h] [bp+8h] BYREF
  _BYTE v5[8]; // [sp+10h] [bp+10h] BYREF
  __int64 v6; // [sp+18h] [bp+18h]
  _BYTE v7[238]; // [sp+20h] [bp+20h] BYREF
  __int64 v8; // [sp+10Eh] [bp+10Eh]
  __int16 v9; // [sp+116h] [bp+116h]
  __int16 v10; // [sp+118h] [bp+118h]
  __int16 v11; // [sp+11Ah] [bp+11Ah]
  __int16 v12; // [sp+11Ch] [bp+11Ch]
  int *v13; // [sp+120h] [bp+120h]
  int i; // [sp+124h] [bp+124h]

  v13 = a2;
  v6 = *a2;
  memcpy(v7, a2 + 1, sizeof(v7));
  v4[0] = 0;
  v4[1] = 0;
  for ( i = 0; i <= 7; ++i )
    *((_BYTE *)v4 + 7 - i) = *((_BYTE *)v13 + i + 242);
  v8 = sub_3CFEC((unsigned __int8 *)v4);
  v9 = -1;
  v10 = -1;
  v11 = -1;
  v12 = -1;
  return (*(int (__fastcall **)(int, _BYTE *))(a1 + 24))(a1, v5);
}
