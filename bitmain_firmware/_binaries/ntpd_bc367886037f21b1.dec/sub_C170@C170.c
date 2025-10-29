int __fastcall sub_C170(int a1, char a2, unsigned int a3, __int16 a4)
{
  int v8; // r1
  unsigned int v9; // r9
  unsigned int *v10; // r2
  char v11; // lr
  unsigned int v12; // r3
  unsigned int v13; // r1
  unsigned int v14; // r0
  unsigned int v15; // r1
  unsigned int v16; // r2
  char v17; // r10
  unsigned int v18; // lr
  char v19; // r1
  unsigned int v20; // r0
  unsigned int v21; // r1
  unsigned int v22; // r9
  unsigned int v23; // r2
  int v25; // r10
  int v26; // r10
  int v27; // r0
  int v28; // r3
  size_t n; // r10
  int v30; // r3
  unsigned int v31; // [sp+Ch] [bp-860h] BYREF
  unsigned int v32; // [sp+10h] [bp-85Ch]
  int v33; // [sp+14h] [bp-858h] BYREF
  unsigned int v34; // [sp+18h] [bp-854h]
  char buf; // [sp+1Ch] [bp-850h] BYREF
  char v36; // [sp+1Dh] [bp-84Fh]
  char v37; // [sp+1Eh] [bp-84Eh]
  char v38; // [sp+1Fh] [bp-84Dh]
  unsigned int v39; // [sp+20h] [bp-84Ch]
  unsigned int v40; // [sp+24h] [bp-848h]
  int v41; // [sp+28h] [bp-844h]
  unsigned int v42; // [sp+2Ch] [bp-840h]
  unsigned int v43; // [sp+30h] [bp-83Ch]
  unsigned int v44; // [sp+34h] [bp-838h]
  unsigned int v45; // [sp+38h] [bp-834h]
  unsigned int v46; // [sp+3Ch] [bp-830h]
  unsigned int v47; // [sp+40h] [bp-82Ch]
  unsigned int v48; // [sp+44h] [bp-828h]
  unsigned int v49; // [sp+48h] [bp-824h]

  if ( (*(_DWORD *)(*(_DWORD *)(a1 + 60) + 144) & 0x40) != 0 )
    *(_DWORD *)(a1 + 60) = sub_176E8(a1 + 4);
  v8 = a2;
  v9 = *(unsigned __int8 *)(a1 + 90);
  v10 = (unsigned int *)(a1 + 128);
  v11 = *(_BYTE *)(a1 + 88) & 0x38;
  if ( v9 < (unsigned __int8)ntp_minpoll )
    LOBYTE(v9) = ntp_minpoll;
  if ( (a4 & 0x800) != 0 )
  {
    v12 = ~(v8 << 26);
    v13 = *(_DWORD *)(a1 + 108);
    LOBYTE(v12) = v11 | ~(v12 >> 26);
    v42 = *(_DWORD *)(a1 + 104);
    v43 = v13;
    v14 = *v10;
    v15 = *(_DWORD *)(a1 + 132);
    v16 = *(_DWORD *)(a1 + 96);
    v41 = 1163149650;
    v46 = v14;
    v47 = v15;
    v17 = *(_BYTE *)(a1 + 91);
    v18 = *(_DWORD *)(a1 + 92);
    v37 = v9;
    buf = v12;
    v44 = v14;
    v45 = v15;
    v48 = v14;
    v49 = v15;
    ++sys_kodsent;
    v38 = v17;
    v39 = v18;
    v40 = v16;
    v36 = 0;
  }
  else
  {
    buf = v11 | v8 | (xmt_leap << 6);
    v37 = v9;
    v19 = sys_stratum;
    if ( sys_stratum == 16 )
      v19 = 0;
    v36 = v19;
    v20 = *v10;
    v21 = *(_DWORD *)(a1 + 132);
    v38 = sys_precision;
    v22 = bswap32(*(_DWORD *)(a1 + 72));
    v41 = sys_refid;
    v23 = bswap32(*(_DWORD *)(a1 + 76));
    v39 = bswap32((int)(sys_rootdelay * 65536.0));
    v40 = bswap32((unsigned int)(sys_rootdisp * 65536.0));
    v44 = v20;
    v45 = v21;
    v47 = v23;
    v46 = v22;
    v43 = bswap32(dword_107C0C);
    v42 = bswap32(sys_reftime);
    sub_5F334(&v31);
    v48 = bswap32(v31);
    v49 = bswap32(v32);
  }
  if ( *(_DWORD *)(a1 + 84) == 48 )
    return sub_16874((struct sockaddr *)(a1 + 4), *(_DWORD *)(a1 + 60), 0, &buf, 0x30u);
  if ( a3 >= 0x10000 )
  {
    v26 = sub_2706C(a1 + 4, *(_DWORD *)(a1 + 60) + 24, 0, sys_private, 0);
    v27 = *(_DWORD *)(a1 + 60);
    if ( *(_DWORD *)(a1 + 84) <= 0x48u )
    {
      v28 = v26;
      v25 = 48;
      sub_2706C(v27 + 24, a1 + 4, a3, v28, 2);
    }
    else
    {
      sub_2706C(v27 + 24, a1 + 4, a3, 0, 2);
      *(_DWORD *)(a1 + 136) |= 0x80u;
      v25 = sub_2951C(0, &buf, a1, 48, a1 + 136, v26) + 48;
    }
  }
  else
  {
    v25 = 48;
  }
  sub_5F334(&v31);
  n = v25 + sub_623CC(a3, &buf, v25);
  if ( a3 >= 0x10000 )
    sub_61DF8(a3, 0);
  sub_16874((struct sockaddr *)(a1 + 4), *(_DWORD *)(a1 + 60), 0, &buf, n);
  sub_5F334(&v33);
  v30 = v33 - v31;
  if ( v34 < v32 )
    --v30;
  sys_authdelay = v30;
  dword_107BF4 = v34 - v32;
  return v30;
}
