void __fastcall sub_2D7C8(int a1, char a2, char a3, int a4)
{
  int v4; // r12

  if ( a1 )
  {
    *(_DWORD *)a1 = 0;
    *(_BYTE *)a1 = 65;
    *(_BYTE *)(a1 + 1) = 9;
    v4 = dword_A0D68;
    *(_DWORD *)(a1 + 4) = 0;
    *(_BYTE *)(a1 + 8) = 0;
    LOBYTE(v4) = *(_BYTE *)(v4 + 12954);
    *(_BYTE *)(a1 + 7) = a4;
    *(_BYTE *)(a1 + 3) = a3;
    *(_BYTE *)(a1 + 4) = HIBYTE(a4);
    *(_BYTE *)(a1 + 5) = BYTE2(a4);
    *(_BYTE *)(a1 + 6) = BYTE1(a4);
    *(_BYTE *)(a1 + 2) = v4 * a2;
    *(_BYTE *)(a1 + 8) = *(_BYTE *)(a1 + 8) & 0xE0 | sub_51554((_BYTE *)a1, 0x40u) & 0x1F;
  }
  else if ( (unsigned int)dword_9E31C > 3 )
  {
    sub_2BC3C();
  }
}
