bool __fastcall sub_94624(int a1, char a2, unsigned __int8 a3)
{
  char v3; // r0
  char v5; // r0
  _BYTE v10[8]; // [sp+10h] [bp-Ch] BYREF

  v10[0] = a3;
  v3 = sub_93C84(a2);
  if ( !sub_944F0(a1, v3, 0, v10, 1u) )
    return 0;
  v5 = sub_93C84(a2);
  return sub_94594(a1, v5, 0, v10, 1u) && a3 == v10[0];
}
