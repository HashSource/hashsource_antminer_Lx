int __fastcall sub_2A0A4(int a1, int a2, int a3, _DWORD *a4)
{
  unsigned int v4; // r8
  unsigned int i; // r5
  unsigned int v7; // r9
  int *v8; // r11
  bool v9; // cc
  int result; // r0
  unsigned __int8 v11; // r0
  int v12; // r12
  bool v13; // zf
  int v14; // r7
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  v4 = dword_241D70;
  if ( !dword_241D70 )
    return 0;
  for ( i = 1; ; ++i )
  {
    v7 = dword_241D6C + 1;
    v8 = &dword_241D68[2 * dword_241D6C + 2];
    if ( *((unsigned __int8 *)v8 + 10) == a3 )
      break;
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, "Get another register: 0x%X\n", a3);
      sub_47AB4(3, s, 0);
      v7 = dword_241D6C + 1;
    }
    dword_241D6C = v7;
    if ( v7 > 0x1FE )
      dword_241D6C = 0;
    v9 = v4 > i;
    --dword_241D70;
    if ( !v9 )
      return 0;
  }
  v11 = *((_BYTE *)v8 + 9) / *(_BYTE *)(dword_A0D68 + 12954);
  v12 = *((unsigned __int8 *)v8 + 11);
  v13 = v11 == a2;
  if ( v11 == a2 )
    v13 = v12 == a1;
  v14 = v13;
  if ( v13 )
  {
    *a4 = v8[1];
    v7 = dword_241D6C + 1;
  }
  else if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "Get another asic response: chain = %d, asic = %d\n", v12, v11);
    sub_47AB4(3, s, v14);
    v7 = dword_241D6C + 1;
  }
  result = 1;
  dword_241D6C = v7;
  --dword_241D70;
  if ( v7 > 0x1FE )
    dword_241D6C = 0;
  return result;
}
