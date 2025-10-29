int __fastcall sub_3D1F4(struct sockaddr *a1, int a2, int a3)
{
  unsigned int v5; // r4
  unsigned int v6; // r7
  unsigned int v7; // r4
  unsigned int v8; // r3
  unsigned int v9; // r3
  __int64 v10; // r0
  unsigned int v11; // r2
  unsigned int v13; // r3
  unsigned int v14; // r3
  signed __int64 v15; // r2
  double v16; // r0
  double v17; // d0
  int v18; // r2
  signed __int64 v19; // r2
  double v20; // r0
  double v21; // d0
  int v22; // r2
  double v23; // r0
  double v24; // d0
  int v25; // r2
  double v26; // r0
  double v27; // d0
  int v28; // r2
  double s[9]; // [sp+20h] [bp-6Ch] BYREF
  unsigned __int64 v31; // [sp+68h] [bp-24h] BYREF
  int v32; // [sp+70h] [bp-1Ch]
  __int64 v33; // [sp+74h] [bp-18h]
  __int64 v34; // [sp+7Ch] [bp-10h]

  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  memset(s, 0, sizeof(s));
  v5 = __rev16(*(unsigned __int16 *)(a3 + 4)) & 0xFFF;
  if ( !v5 )
    return sub_3AA2C(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 0);
  v6 = bswap32(*(_DWORD *)(a3 + 8)) & 0xFFFF0000;
  v7 = v5 - 1;
  HIDWORD(v31) = *(_DWORD *)(a3 + 8);
  LODWORD(v31) = 2063597570;
  if ( v6 == 2139029504 )
  {
    while ( 2 )
    {
      if ( sub_31748((unsigned __int16 *)&v31, 0, 0, -1, 0, 0) )
      {
        switch ( bswap32(*(_DWORD *)(a3 + 12)) )
        {
          case 1u:
            v19 = _byteswap_uint64(*(_QWORD *)(a3 + 16));
            if ( v19 < 0 )
            {
              v23 = COERCE_DOUBLE(sub_8BA5C(-(int)v19, (unsigned __int64)-v19 >> 32));
              v24 = v23;
              LODWORD(v23) = -32;
              ldexp(v23, v25);
              v21 = -v24;
            }
            else
            {
              v20 = COERCE_DOUBLE(sub_8BA5C(v19, HIDWORD(v19)));
              v21 = v20;
              LODWORD(v20) = -32;
              ldexp(v20, v22);
            }
            v9 = 1;
            s[5] = v21;
            BYTE2(s[0]) = 1;
            goto LABEL_6;
          case 2u:
            v15 = _byteswap_uint64(*(_QWORD *)(a3 + 16));
            if ( v15 < 0 )
            {
              v26 = COERCE_DOUBLE(sub_8BA5C(-(int)v15, (unsigned __int64)-v15 >> 32));
              v27 = v26;
              LODWORD(v26) = -32;
              ldexp(v26, v28);
              v17 = -v27;
            }
            else
            {
              v16 = COERCE_DOUBLE(sub_8BA5C(v15, HIDWORD(v15)));
              v17 = v16;
              LODWORD(v16) = -32;
              ldexp(v16, v18);
            }
            v9 = 2;
            s[6] = v17;
            BYTE2(s[0]) = 2;
            goto LABEL_6;
          case 3u:
            v14 = *(_DWORD *)(a3 + 24);
            BYTE2(s[0]) = 4;
            v9 = bswap32(v14);
            LODWORD(s[7]) = v9;
            goto LABEL_6;
          case 4u:
            v13 = *(_DWORD *)(a3 + 24);
            BYTE2(s[0]) = 8;
            v9 = bswap32(v13);
            HIDWORD(s[7]) = v9;
            goto LABEL_6;
          case 5u:
            v8 = *(_DWORD *)(a3 + 24);
            BYTE2(s[0]) = -16;
            v9 = bswap32(v8) & 0xF;
            BYTE1(s[0]) = v9;
LABEL_6:
            --v7;
            HIDWORD(v10) = s;
            LODWORD(v10) = &v31;
            sub_3A084(v10, 0, v9);
            if ( v7 == -1 )
              return sub_3AA2C(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 0);
            v11 = *(_DWORD *)(a3 + 8);
            v31 = __PAIR64__(v11, 2063597570);
            if ( (bswap32(v11) & 0xFFFF0000) != v6 )
              return sub_3AA2C(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 4);
            continue;
          default:
            sub_64A18(3, "set_clock_fudge: default!");
            return sub_3AA2C(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 3);
        }
      }
      break;
    }
  }
  return sub_3AA2C(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 4);
}
