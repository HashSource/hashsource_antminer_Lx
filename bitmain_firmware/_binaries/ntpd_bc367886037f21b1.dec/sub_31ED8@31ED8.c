int __fastcall sub_31ED8(
        int a1,
        const char *a2,
        char *a3,
        int a4,
        unsigned __int8 a5,
        char a6,
        unsigned __int8 a7,
        unsigned __int8 a8,
        int a9,
        unsigned __int8 a10,
        int a11,
        unsigned int a12,
        int a13)
{
  int v16; // r10
  int v17; // r0
  int v18; // r2
  char *v19; // r3
  int v20; // r0
  char *v21; // r0
  __int16 v23; // r3
  int v24; // r1
  int v25; // r2
  int v26; // r3
  int v27; // r1
  int v28; // r2
  char *v29; // r0
  unsigned int v30; // r3
  unsigned int v31; // r2
  int v32; // r0
  int v33; // r3
  int v34; // r0
  int v35; // r2
  int v36; // r3
  char v37; // r0
  int v38; // r3
  int v39; // r12
  int *v40; // r0
  char *v41; // [sp+Ch] [bp-38h]
  int v42; // [sp+10h] [bp-34h]
  int v44; // [sp+38h] [bp-Ch] BYREF

  v44 = 0;
  v16 = crypto_flags;
  if ( !crypto_flags )
  {
    if ( a12 >= 0x10000 )
      return 0;
    if ( (a9 & 0x800) != 0 )
    {
      sub_64A18(3, "Autokey not configured");
      return v16;
    }
  }
  if ( a2 && (a10 & 8) == 0 )
    sub_6E8F0("ntp_peer.c", 801, 2, "((void *)0) == hostname || (0x08 & cast_flags)");
  if ( !a3 )
  {
    if ( !sub_31748((unsigned __int16 *)a1, a2, 0, a5, a10, &v44) )
      goto LABEL_21;
    return 0;
  }
  v17 = sub_31748((unsigned __int16 *)a1, a2, 0, a5, a10, &v44);
  v18 = v17;
  if ( v17 )
  {
    v19 = *(char **)(v17 + 56);
    if ( a3 != v19 )
    {
      while ( 1 )
      {
        if ( (a10 & 0x20) != 0 && (*(_BYTE *)(v18 + 72) & 0x20) != 0 )
          return 0;
        if ( *(_WORD *)a1 == 2 )
        {
          if ( (char *)any_interface == a3 )
          {
LABEL_17:
            v42 = v18;
            v41 = v19;
            v21 = sub_176E8((const struct sockaddr *)a1);
            v18 = v42;
            if ( v41 == v21 )
              return 0;
          }
        }
        else if ( (char *)any6_interface == a3 )
        {
          goto LABEL_17;
        }
        v20 = sub_31748((unsigned __int16 *)a1, a2, (int *)v18, a5, a10, &v44);
        v18 = v20;
        if ( !v20 )
          goto LABEL_21;
        v19 = *(char **)(v20 + 56);
        if ( v19 == a3 )
          return 0;
      }
    }
    return 0;
  }
LABEL_21:
  if ( a4 >= 0 && v44 >= a4 )
    return 0;
  if ( peer_free_count )
  {
    v16 = dword_B9E98;
    if ( !dword_B9E98 )
      sub_6E8F0("ntp_peer.c", 878, 2, "peer != ((void *)0)");
  }
  else
  {
    v16 = sub_638A8(0, 4, 776);
    *(_DWORD *)(v16 + 2328) = dword_B9E98;
    *(_DWORD *)(v16 + 1552) = v16 + 2328;
    *(_DWORD *)(v16 + 776) = v16 + 1552;
    *(_DWORD *)v16 = v16 + 776;
    peer_free_count += 4;
    total_peer_structs += 4;
  }
  dword_B9E98 = *(_DWORD *)v16;
  --peer_free_count;
  ++peer_associations;
  if ( (a9 & 2) != 0 )
    ++peer_preempt;
  v23 = word_B9E9C + 1;
  *(_WORD *)(v16 + 60) = word_B9E9C;
  if ( !v23 )
    v23 = 1;
  word_B9E9C = v23;
  v24 = *(_DWORD *)(a1 + 4);
  v25 = *(_DWORD *)(a1 + 8);
  v26 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(v16 + 16) = *(_DWORD *)a1;
  *(_DWORD *)(v16 + 20) = v24;
  *(_DWORD *)(v16 + 24) = v25;
  *(_DWORD *)(v16 + 28) = v26;
  v27 = *(_DWORD *)(a1 + 20);
  v28 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(v16 + 32) = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(v16 + 36) = v27;
  *(_DWORD *)(v16 + 40) = v28;
  if ( a2 )
    *(_DWORD *)(v16 + 44) = sub_63948(a2);
  *(_BYTE *)(v16 + 63) = a5;
  *(_BYTE *)(v16 + 72) = a10;
  *(_BYTE *)(v16 + 62) = a6;
  *(_DWORD *)(v16 + 68) = a9;
  v29 = sub_189DC(v16, a1, a3);
  sub_31B58(v16, (int)v29);
  if ( a7 )
  {
    v30 = a7;
    if ( a7 >= 0x11u )
      v30 = 17;
    *(_BYTE *)(v16 + 65) = v30;
  }
  else
  {
    v30 = 6;
    *(_BYTE *)(v16 + 65) = 6;
  }
  if ( a8 )
  {
    v31 = a8;
    if ( a8 < 3u )
      v31 = 3;
    *(_BYTE *)(v16 + 66) = v31;
  }
  else
  {
    v31 = 10;
    *(_BYTE *)(v16 + 66) = 10;
  }
  v32 = *(_DWORD *)(v16 + 56);
  if ( v30 > v31 )
    *(_BYTE *)(v16 + 65) = v31;
  v33 = (a10 >> 2) & 1;
  if ( !v32 )
    v33 = 0;
  if ( v33 )
    sub_15E30(v32, (unsigned __int16 *)a1);
  if ( (a10 & 2) != 0 )
  {
    v34 = *(_DWORD *)(v16 + 56);
    if ( v34 )
      sub_15ED4(v34, (unsigned __int16 *)a1);
  }
  if ( a12 >= 0x10000 )
    *(_DWORD *)(v16 + 68) |= 0x800u;
  *(_DWORD *)(v16 + 76) = a11;
  *(_DWORD *)(v16 + 124) = a12;
  if ( a13 )
    *(_DWORD *)(v16 + 80) = sub_63948(a13);
  *(_BYTE *)(v16 + 64) = *(_BYTE *)(v16 + 65);
  *(_BYTE *)(v16 + 95) = sys_precision;
  if ( (a10 & 0x10) != 0 )
  {
    sub_35EE4(v16, "ACST");
  }
  else if ( (a10 & 8) != 0 )
  {
    sub_35EE4(v16, "POOL");
  }
  else if ( (a10 & 2) != 0 )
  {
    sub_35EE4(v16, "MCST");
  }
  else if ( (a10 & 4) != 0 )
  {
    sub_35EE4(v16, "BCST");
  }
  else
  {
    sub_35EE4(v16, "INIT");
  }
  if ( mode_ntpdate )
    ++peer_ntpdate;
  v35 = *(unsigned __int16 *)(v16 + 16);
  v36 = current_time;
  *(_DWORD *)(v16 + 724) = current_time;
  *(_DWORD *)(v16 + 736) = v36;
  *(_DWORD *)(v16 + 732) = v36;
  if ( v35 != 2 || *(_WORD *)(v16 + 20) != 32639 )
    goto LABEL_65;
  if ( !a8 )
    *(_BYTE *)(v16 + 66) = *(_BYTE *)(v16 + 65);
  if ( !sub_393C4(v16) )
  {
    sub_31B58(v16, 0);
    v40 = (int *)v16;
    v16 = 0;
    sub_3133C(v40, 0);
  }
  else
  {
LABEL_65:
    v37 = sub_6C1C4(v16 + 16);
    v38 = *(_WORD *)(v16 + 60) & 0x7F;
    v39 = v37 & 0x7F;
    *(_DWORD *)(v16 + 4) = peer_hash[v39];
    peer_hash[v39] = v16;
    ++peer_hash_count[v39];
    *(_DWORD *)(v16 + 8) = assoc_hash[v38];
    assoc_hash[v38] = v16;
    ++assoc_hash_count[v38];
    *(_DWORD *)v16 = peer_list;
    peer_list = v16;
    sub_40598(v16 + 16, 0, 0);
    sub_26094((__int16 *)((char *)&dword_80 + 1), v16, (int)"assoc %d", *(unsigned __int16 *)(v16 + 60));
  }
  return v16;
}
