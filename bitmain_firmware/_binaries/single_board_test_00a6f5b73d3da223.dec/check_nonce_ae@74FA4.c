int __fastcall check_nonce_ae(_DWORD *a1, int a2)
{
  _DWORD *v3; // r0
  int v6; // [sp+3Ch] [bp+Ch] BYREF
  int v7; // [sp+103Ch] [bp+100Ch] BYREF
  _BYTE v8[4]; // [sp+1040h] [bp+1010h] BYREF
  _DWORD v9[3]; // [sp+1044h] [bp+1014h] BYREF
  int dest[20]; // [sp+1050h] [bp+1020h] BYREF
  _DWORD v11[36]; // [sp+10A0h] [bp+1070h] BYREF
  int v12[8]; // [sp+1148h] [bp+1118h] BYREF
  unsigned __int64 v13; // [sp+1168h] [bp+1138h] BYREF
  _DWORD v14[7]; // [sp+1170h] [bp+1140h] BYREF
  int v15; // [sp+118Ch] [bp+115Ch]
  char v16; // [sp+1193h] [bp+1163h]
  int v17; // [sp+1194h] [bp+1164h]
  int v18; // [sp+1198h] [bp+1168h]
  int i; // [sp+119Ch] [bp+116Ch]

  v18 = a2;
  v17 = a1[156];
  v13 = 0;
  memset(v12, 0, sizeof(v12));
  memcpy(dest, (const void *)(80 * *(unsigned __int8 *)(v18 + 48) + 11520 + v17), sizeof(dest));
  LZ4F_writeLE32(&v7, *(_DWORD *)(v17 + 4 * (*(unsigned __int8 *)(v18 + 48) + 1408)));
  sub_7087C(v8, dest[11]);
  base64_encode((int)v9, (int)&v7, 8);
  dest[11] = v9[0];
  dest[12] = v9[1];
  dest[13] = v9[2];
  v16 = sub_74BF0((int)dest, 0x50u, v18 + 87, *(unsigned __int16 *)(v18 + 85), a1[34]);
  if ( v16 != 1 )
  {
    V_LOCK();
    sub_70574((int)v14, (int)a1[35]);
    logfmt_raw(
      &v6,
      0x1000u,
      0,
      v15,
      v14[0],
      v14[1],
      v14[2],
      v14[3],
      v14[4],
      v14[5],
      v14[6],
      v15,
      "wc %d error_nonce %08x",
      *(unsigned __int8 *)(v18 + 48),
      *(_DWORD *)(v18 + 81));
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ae/backend_ae.c",
      81,
      "check_nonce_ae",
      14,
      398,
      20,
      &v6);
    return 2;
  }
  else
  {
    memset(v12, 0, sizeof(v12));
    for ( i = 0; i <= 41; ++i )
      sub_7087C(&v11[i], *(_DWORD *)(4 * (i + 20) + v18 + 7));
    blake2b(v12, (int)v11, 0xA8u);
    sub_707BC(&v13, (int)&v13, v12[0], v12[1]);
    if ( *(_QWORD *)(v17 + 8 * (*(unsigned __int8 *)(v18 + 48) + 768)) >= v13 )
    {
      return 0;
    }
    else
    {
      V_LOCK();
      v3 = (_DWORD *)(v17 + 8 * (*(unsigned __int8 *)(v18 + 48) + 768));
      logfmt_raw(
        &v6,
        0x1000u,
        0,
        "wc %d nonce %08x hw target (%016llx > %016llx) not reach pool\n",
        *(unsigned __int8 *)(v18 + 48),
        *(_DWORD *)(v18 + 81),
        v13,
        *v3,
        v3[1]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ae/backend_ae.c",
        81,
        "check_nonce_ae",
        14,
        410,
        20,
        &v6);
      return 1;
    }
  }
}
