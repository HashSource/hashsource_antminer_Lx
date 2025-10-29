int __fastcall sub_FA148(int result, int a2)
{
  int i; // [sp+2Ch] [bp+2Ch]

  for ( i = 0; i <= 2; ++i )
  {
    *(_WORD *)(result + 8 * i) = *(_QWORD *)(a2 + 8 * i);
    *(_BYTE *)(result + 8 * i + 2) = BYTE2(*(_DWORD *)(a2 + 8 * i));
    *(_BYTE *)(result + 8 * i + 3) = HIBYTE(*(_DWORD *)(a2 + 8 * i));
    *(_BYTE *)(result + 8 * i + 4) = *(_DWORD *)(a2 + 8 * i + 4);
    *(_BYTE *)(result + 8 * i + 5) = BYTE1(*(_DWORD *)(a2 + 8 * i + 4));
    *(_BYTE *)(result + 8 * i + 6) = BYTE2(*(_DWORD *)(a2 + 8 * i + 4));
    *(_BYTE *)(result + 8 * i + 7) = HIBYTE(*(_DWORD *)(a2 + 8 * i + 4));
  }
  return result;
}
