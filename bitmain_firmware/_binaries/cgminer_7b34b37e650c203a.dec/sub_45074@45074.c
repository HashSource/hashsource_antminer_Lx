_BYTE *__fastcall sub_45074(_DWORD *a1, int a2)
{
  _BYTE *v4; // r4
  const char *v6; // r0
  _DWORD v7[3]; // [sp+4h] [bp-Ch] BYREF

  v4 = (_BYTE *)sub_47820(v7);
  if ( v4 )
    return 0;
  if ( !sub_44FFC(a1, (int (__fastcall *)(__int16 *, int, int))sub_443B4, (int)v7, a2) )
  {
    v6 = (const char *)sub_47894((int)v7);
    v4 = sub_477C8(v6);
  }
  sub_47854((int)v7);
  return v4;
}
