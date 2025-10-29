unsigned int __fastcall base64_decode(unsigned int result, int a2, int a3)
{
  int v3; // r3
  char v4; // r3
  int v5; // r3
  char v6; // r3
  int v7; // r3
  char v8; // r3
  int v9; // r3
  char v10; // r3
  int v11; // r3
  unsigned int v14; // [sp+Ch] [bp+Ch]
  int v15; // [sp+14h] [bp+14h]
  char v16; // [sp+1Ch] [bp+1Ch]
  char v17; // [sp+20h] [bp+20h]
  char v18; // [sp+24h] [bp+24h]
  int v19; // [sp+28h] [bp+28h]
  int v20; // [sp+2Ch] [bp+2Ch]

  v14 = result;
  v20 = 0;
  v19 = 0;
  while ( a3 - 1 > v20 )
  {
    if ( v20 >= a3 )
    {
      v4 = 0;
    }
    else
    {
      v3 = v20++;
      result = sub_104420(*(_BYTE *)(a2 + v3));
      v4 = result;
    }
    v18 = v4;
    if ( v20 >= a3 )
    {
      v6 = 0;
    }
    else
    {
      v5 = v20++;
      result = sub_104420(*(_BYTE *)(a2 + v5));
      v6 = result;
    }
    v17 = v6;
    if ( v20 >= a3 )
    {
      v8 = 0;
    }
    else
    {
      v7 = v20++;
      result = sub_104420(*(_BYTE *)(a2 + v7));
      v8 = result;
    }
    v16 = v8;
    if ( v20 >= a3 )
    {
      v10 = 0;
    }
    else
    {
      v9 = v20++;
      result = sub_104420(*(_BYTE *)(a2 + v9));
      v10 = result;
    }
    v15 = (v10 & 0x3F) + ((v18 & 0x3F) << 18) + ((v17 & 0x3F) << 12) + ((v16 & 0x3F) << 6);
    *(_BYTE *)(v14 + v19) = BYTE2(v15);
    *(_BYTE *)(v14 + v19 + 1) = (unsigned __int16)((v10 & 0x3F) + ((v17 & 0x3F) << 12) + ((v16 & 0x3F) << 6)) >> 8;
    v11 = v19 + 2;
    v19 += 3;
    *(_BYTE *)(v14 + v11) = v15;
  }
  return result;
}
