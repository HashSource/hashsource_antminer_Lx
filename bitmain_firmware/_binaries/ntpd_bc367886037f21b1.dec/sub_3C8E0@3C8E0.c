int __fastcall sub_3C8E0(struct sockaddr *a1, int a2, int a3, int a4)
{
  unsigned int v4; // r5
  int v5; // r8
  bool v6; // zf
  unsigned int v7; // r4
  int v8; // r6
  int v9; // r7
  int v10; // r2
  unsigned __int16 v12; // r7
  __int64 v17; // [sp+30h] [bp-74h] BYREF
  int v18; // [sp+38h] [bp-6Ch]
  __int64 v19; // [sp+3Ch] [bp-68h]
  __int64 v20; // [sp+44h] [bp-60h]
  __int64 v21; // [sp+4Ch] [bp-58h] BYREF
  int v22; // [sp+54h] [bp-50h]
  __int64 v23; // [sp+58h] [bp-4Ch]
  __int64 v24; // [sp+60h] [bp-44h]
  int v25; // [sp+68h] [bp-3Ch] BYREF
  int v26; // [sp+6Ch] [bp-38h]
  unsigned __int16 v27; // [sp+70h] [bp-34h]
  unsigned __int16 v28; // [sp+72h] [bp-32h]
  unsigned __int16 v29; // [sp+74h] [bp-30h]
  int v30; // [sp+78h] [bp-2Ch]
  int v31; // [sp+7Ch] [bp-28h]
  __int64 v32; // [sp+80h] [bp-24h]
  int v33; // [sp+88h] [bp-1Ch]
  int v34; // [sp+8Ch] [bp-18h]
  __int64 v35; // [sp+90h] [bp-14h]
  int v36; // [sp+98h] [bp-Ch]

  v4 = __rev16(*(unsigned __int16 *)(a3 + 6)) & 0xFFF;
  if ( v4 > 0x34 )
    return sub_3AA2C(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 3);
  v5 = a3 + 8;
  v7 = __rev16(*(unsigned __int16 *)(a3 + 4)) & 0xFFF;
  v6 = v7 == 0;
  LOWORD(v7) = v7 - 1;
  if ( v6 )
  {
    v17 = 0;
    v18 = 0;
    v21 = 0;
    v22 = 0;
    v19 = 0;
    v20 = 0;
    v23 = 0;
    v24 = 0;
  }
  else
  {
    LOWORD(v8) = v7;
    v9 = a3 + 8;
    while ( 1 )
    {
      _memcpy_chk(&v25, v9);
      v29 = __rev16(v29);
      v28 = __rev16(v28);
      v10 = (v29 & 0xDFFF) != 0;
      if ( (v28 & 0x8000) != 0 )
        v10 |= 2u;
      if ( v26 )
      {
        if ( dword_BBB2C && v30 )
        {
          if ( !v31 && !(_DWORD)v32 && !HIDWORD(v32) && !v33 )
          {
            v10 |= 4u;
LABEL_16:
            sub_64A18(3, "do_restrict: bad = %#x", v10);
            return sub_3AA2C(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 3);
          }
        }
        else if ( !v25 )
        {
          v10 |= 8u;
          goto LABEL_16;
        }
      }
      v9 += v4;
      v8 = (unsigned __int16)(v8 - 1);
      if ( v8 == 0xFFFF )
        break;
      if ( v10 )
        goto LABEL_16;
    }
    if ( v10 )
      goto LABEL_16;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    do
    {
      _memcpy_chk(&v25, v5);
      v28 = __rev16(v28);
      v27 = __rev16(v27);
      v12 = __rev16(v29);
      v29 = v12;
      if ( dword_BBB2C && v30 )
      {
        LOWORD(v17) = 10;
        LOWORD(v21) = 10;
        v18 = v31;
        v19 = v32;
        LODWORD(v20) = v33;
        v22 = v34;
        v23 = v35;
        LODWORD(v24) = v36;
      }
      else
      {
        LOWORD(v17) = 2;
        LOWORD(v21) = 2;
        HIDWORD(v17) = v25;
        HIDWORD(v21) = v26;
      }
      v7 = (unsigned __int16)(v7 - 1);
      v5 += v4;
      sub_3FF90(a4, &v17, &v21, (__int16)v12, v27, v28, 0);
    }
    while ( v7 != 0xFFFF );
  }
  return sub_3AA2C(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 0);
}
