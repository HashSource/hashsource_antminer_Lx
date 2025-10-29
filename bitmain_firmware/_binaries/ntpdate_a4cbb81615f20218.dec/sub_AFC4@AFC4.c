char *__fastcall sub_AFC4(int a1)
{
  int v2; // r12
  char *result; // r0
  char v4; // r12
  char v5; // r2
  char v6; // r1
  char v7; // r3
  __int16 v8; // [sp+16h] [bp-Ah] BYREF
  __int16 v9; // [sp+18h] [bp-8h] BYREF
  __int16 v10; // [sp+1Ah] [bp-6h] BYREF
  __int16 v11; // [sp+1Ch] [bp-4h] BYREF
  __int16 v12; // [sp+1Eh] [bp-2h] BYREF
  char v13[4]; // [sp+20h] [bp+0h] BYREF
  int v14; // [sp+24h] [bp+4h]

  v2 = _stack_chk_guard;
  *(_QWORD *)(a1 + 2) = 0;
  *(_WORD *)(a1 + 4) = 257;
  *(_WORD *)a1 = 1970;
  v14 = v2;
  if ( sscanf("19:29:30/Aug 21 2024", "%hu:%hu:%hu/%3s %hu %hu", &v8, &v9, &v10, v13, &v11, &v12) != 6 )
    return 0;
  result = strstr("JanFebMarAprMayJunJulAugSepOctNovDec", v13);
  if ( result )
  {
    v4 = v11;
    *(_WORD *)a1 = v12;
    v5 = v9;
    v6 = v8;
    v7 = v10;
    *(_BYTE *)(a1 + 5) = v4;
    *(_BYTE *)(a1 + 4) = (char)((_BYTE)result - (unsigned __int8)"JanFebMarAprMayJunJulAugSepOctNovDec") / 3 + 1;
    *(_BYTE *)(a1 + 6) = v6;
    *(_BYTE *)(a1 + 7) = v5;
    *(_BYTE *)(a1 + 8) = v7;
    return (_BYTE *)(&dword_0 + 1);
  }
  return result;
}
