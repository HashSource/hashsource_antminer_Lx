int __fastcall sub_23ADC(int result, int a2)
{
  char v2; // [sp+Fh] [bp+Fh]
  int i; // [sp+10h] [bp+10h]
  int v4; // [sp+14h] [bp+14h]

  v4 = 0;
  for ( i = a2 - 1; v4 < i; --i )
  {
    v2 = *(_BYTE *)(v4 + result);
    *(_BYTE *)(v4 + result) = *(_BYTE *)(i + result);
    *(_BYTE *)(i + result) = v2;
    ++v4;
  }
  return result;
}
