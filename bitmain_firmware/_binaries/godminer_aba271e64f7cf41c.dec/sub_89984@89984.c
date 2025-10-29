int __fastcall sub_89984(__int64 a1)
{
  __int64 src; // [sp+0h] [bp-34h] BYREF
  _BYTE v3[24]; // [sp+Ch] [bp-28h] BYREF
  _BYTE v4[8]; // [sp+24h] [bp-10h] BYREF

  src = a1;
  memset(v3, 0, sizeof(v3));
  memcpy(v4, &src, sizeof(v4));
  return (unsigned __int8)sub_897E8((int)v3);
}
