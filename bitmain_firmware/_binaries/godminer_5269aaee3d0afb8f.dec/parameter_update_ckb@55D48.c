int __fastcall parameter_update_ckb(int a1, char a2, int a3, char a4, int a5)
{
  int v5; // r1
  int result; // r0
  int v8; // r3
  unsigned int v9; // r0
  int v10; // s14

  if ( *(_BYTE *)(a1 + 144) )
    return 0;
  if ( (unsigned int)(a3 - 500) <= 0x12C )
    v5 = a2 & 1;
  else
    v5 = 0;
  if ( v5 )
  {
    v9 = *(_DWORD *)(a1 + 772) / (unsigned int)a3;
    v10 = (int)*(float *)(a1 + 760);
    *(float *)(a1 + 760) = (float)a3;
    *(_DWORD *)(a1 + 772) = v10 * v9;
  }
  result = 0;
  if ( (unsigned int)(a5 - 800) <= 0x32 )
    v8 = a4 & 1;
  else
    v8 = 0;
  if ( v8 )
    *(_DWORD *)(a1 + 764) = a5;
  return result;
}
