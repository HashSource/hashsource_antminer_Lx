int __fastcall sub_44AD4(unsigned __int8 *a1, unsigned int a2, int a3)
{
  int v3; // r3
  unsigned int v5; // [sp+8h] [bp+8h]
  unsigned __int8 *v6; // [sp+18h] [bp+18h]
  unsigned __int16 *v7; // [sp+1Ch] [bp+1Ch]
  unsigned __int8 *v8; // [sp+20h] [bp+20h]
  int v9; // [sp+24h] [bp+24h]
  int v10; // [sp+24h] [bp+24h]
  int v11; // [sp+24h] [bp+24h]
  int v12; // [sp+24h] [bp+24h]
  int v13; // [sp+24h] [bp+24h]
  int v14; // [sp+24h] [bp+24h]
  int v15; // [sp+24h] [bp+24h]
  int v16; // [sp+24h] [bp+24h]
  int v17; // [sp+24h] [bp+24h]
  int v18; // [sp+24h] [bp+24h]
  int v19; // [sp+24h] [bp+24h]
  int v20; // [sp+24h] [bp+24h]
  int v21; // [sp+24h] [bp+24h]
  int v22; // [sp+24h] [bp+24h]
  int v23; // [sp+24h] [bp+24h]
  int v24; // [sp+28h] [bp+28h]
  int v25; // [sp+28h] [bp+28h]
  int v26; // [sp+28h] [bp+28h]
  int v27; // [sp+28h] [bp+28h]
  int v28; // [sp+28h] [bp+28h]
  int v29; // [sp+28h] [bp+28h]
  int v30; // [sp+28h] [bp+28h]
  int v31; // [sp+28h] [bp+28h]
  int v32; // [sp+28h] [bp+28h]
  int v33; // [sp+28h] [bp+28h]
  int v34; // [sp+28h] [bp+28h]
  int v35; // [sp+28h] [bp+28h]
  int v36; // [sp+28h] [bp+28h]
  int v37; // [sp+28h] [bp+28h]
  int v38; // [sp+28h] [bp+28h]
  int v39; // [sp+2Ch] [bp+2Ch]
  int v40; // [sp+2Ch] [bp+2Ch]
  int v41; // [sp+2Ch] [bp+2Ch]
  int v42; // [sp+2Ch] [bp+2Ch]
  int v43; // [sp+2Ch] [bp+2Ch]
  int v44; // [sp+2Ch] [bp+2Ch]
  int v45; // [sp+2Ch] [bp+2Ch]
  int v46; // [sp+2Ch] [bp+2Ch]
  int v47; // [sp+2Ch] [bp+2Ch]
  int v48; // [sp+2Ch] [bp+2Ch]
  int v49; // [sp+2Ch] [bp+2Ch]
  int v50; // [sp+2Ch] [bp+2Ch]
  int v51; // [sp+2Ch] [bp+2Ch]

  v5 = a2;
  v9 = a2 + a3 - 559038737;
  v24 = v9;
  v39 = v9;
  if ( ((unsigned __int8)a1 & 3) != 0 )
  {
    if ( ((unsigned __int8)a1 & 1) != 0 )
    {
      v6 = a1;
      while ( v5 > 0xC )
      {
        v33 = (v6[7] << 24) + (v6[6] << 16) + (v6[5] << 8) + v24 + v6[4];
        v18 = (v6[11] << 24) + (v6[10] << 16) + (v6[9] << 8) + v9 + v6[8];
        v47 = __ROR4__(v18, 28) ^ ((v6[3] << 24) + (v6[2] << 16) + (v6[1] << 8) + v39 + *v6 - v18);
        v19 = v33 + v18;
        v34 = __ROR4__(v47, 26) ^ (v33 - v47);
        v48 = v19 + v47;
        v20 = __ROR4__(v34, 24) ^ (v19 - v34);
        v35 = v48 + v34;
        v49 = __ROR4__(v20, 16) ^ (v48 - v20);
        v21 = v35 + v20;
        v36 = __ROR4__(v49, 13) ^ (v35 - v49);
        v39 = v21 + v49;
        v9 = __ROR4__(v36, 28) ^ (v21 - v36);
        v24 = v39 + v36;
        v5 -= 12;
        v6 += 12;
      }
      switch ( v5 )
      {
        case 0u:
          return v9;
        case 1u:
          goto LABEL_52;
        case 2u:
          goto LABEL_51;
        case 3u:
          goto LABEL_50;
        case 4u:
          goto LABEL_49;
        case 5u:
          goto LABEL_48;
        case 6u:
          goto LABEL_47;
        case 7u:
          goto LABEL_46;
        case 8u:
          goto LABEL_45;
        case 9u:
          goto LABEL_44;
        case 0xAu:
          goto LABEL_43;
        case 0xBu:
          goto LABEL_42;
        case 0xCu:
          v9 += v6[11] << 24;
LABEL_42:
          v9 += v6[10] << 16;
LABEL_43:
          v9 += v6[9] << 8;
LABEL_44:
          v9 += v6[8];
LABEL_45:
          v24 += v6[7] << 24;
LABEL_46:
          v24 += v6[6] << 16;
LABEL_47:
          v24 += v6[5] << 8;
LABEL_48:
          v24 += v6[4];
LABEL_49:
          v39 += v6[3] << 24;
LABEL_50:
          v39 += v6[2] << 16;
LABEL_51:
          v39 += v6[1] << 8;
LABEL_52:
          v43 = v39 + *v6;
          break;
      }
    }
    else
    {
      v7 = (unsigned __int16 *)a1;
      while ( v5 > 0xC )
      {
        v29 = (v7[3] << 16) + v7[2] + v24;
        v14 = (v7[5] << 16) + v7[4] + v9;
        v44 = __ROR4__(v14, 28) ^ ((v7[1] << 16) + *v7 + v39 - v14);
        v15 = v29 + v14;
        v30 = __ROR4__(v44, 26) ^ (v29 - v44);
        v45 = v15 + v44;
        v16 = __ROR4__(v30, 24) ^ (v15 - v30);
        v31 = v45 + v30;
        v46 = __ROR4__(v16, 16) ^ (v45 - v16);
        v17 = v31 + v16;
        v32 = __ROR4__(v46, 13) ^ (v31 - v46);
        v39 = v17 + v46;
        v9 = __ROR4__(v32, 28) ^ (v17 - v32);
        v24 = v39 + v32;
        v5 -= 12;
        v7 += 6;
      }
      switch ( v5 )
      {
        case 0u:
          return v9;
        case 1u:
          v43 = v39 + *(unsigned __int8 *)v7;
          break;
        case 2u:
          goto LABEL_34;
        case 3u:
          v39 += *((unsigned __int8 *)v7 + 2) << 16;
LABEL_34:
          v43 = v39 + *v7;
          break;
        case 4u:
          goto LABEL_32;
        case 5u:
          v24 += *((unsigned __int8 *)v7 + 4);
LABEL_32:
          v43 = (v7[1] << 16) + *v7 + v39;
          break;
        case 6u:
          goto LABEL_30;
        case 7u:
          v24 += *((unsigned __int8 *)v7 + 6) << 16;
LABEL_30:
          v24 += v7[2];
          v43 = (v7[1] << 16) + *v7 + v39;
          break;
        case 8u:
          goto LABEL_28;
        case 9u:
          v9 += *((unsigned __int8 *)v7 + 8);
LABEL_28:
          v24 += (v7[3] << 16) + v7[2];
          v43 = (v7[1] << 16) + *v7 + v39;
          break;
        case 0xAu:
          goto LABEL_26;
        case 0xBu:
          v9 += *((unsigned __int8 *)v7 + 10) << 16;
LABEL_26:
          v9 += v7[4];
          v24 += (v7[3] << 16) + v7[2];
          v43 = (v7[1] << 16) + *v7 + v39;
          break;
        case 0xCu:
          v9 += (v7[5] << 16) + v7[4];
          v24 += (v7[3] << 16) + v7[2];
          v43 = (v7[1] << 16) + *v7 + v39;
          break;
      }
    }
LABEL_54:
    v22 = (v24 ^ v9) - __ROR4__(v24, 18);
    v50 = (v22 ^ v43) - __ROR4__(v22, 21);
    v37 = (v50 ^ v24) - __ROR4__(v50, 7);
    v23 = (v37 ^ v22) - __ROR4__(v37, 16);
    v51 = (v23 ^ v50) - __ROR4__(v23, 28);
    v38 = (v51 ^ v37) - __ROR4__(v51, 18);
    return (v38 ^ v23) - __ROR4__(v38, 8);
  }
  else
  {
    v8 = a1;
    while ( v5 > 0xC )
    {
      v25 = *((_DWORD *)v8 + 1) + v24;
      v10 = *((_DWORD *)v8 + 2) + v9;
      v40 = __ROR4__(v10, 28) ^ (*(_DWORD *)v8 + v39 - v10);
      v11 = v25 + v10;
      v26 = __ROR4__(v40, 26) ^ (v25 - v40);
      v41 = v11 + v40;
      v12 = __ROR4__(v26, 24) ^ (v11 - v26);
      v27 = v41 + v26;
      v42 = __ROR4__(v12, 16) ^ (v41 - v12);
      v13 = v27 + v12;
      v28 = __ROR4__(v42, 13) ^ (v27 - v42);
      v39 = v13 + v42;
      v9 = __ROR4__(v28, 28) ^ (v13 - v28);
      v24 = v39 + v28;
      v5 -= 12;
      v8 += 12;
    }
    switch ( v5 )
    {
      case 0u:
        v3 = v9;
        break;
      case 1u:
        v43 = (unsigned __int8)*(_DWORD *)v8 + v39;
        goto LABEL_54;
      case 2u:
        v43 = (unsigned __int16)*(_DWORD *)v8 + v39;
        goto LABEL_54;
      case 3u:
        v43 = (*(_DWORD *)v8 & 0xFFFFFF) + v39;
        goto LABEL_54;
      case 4u:
        v43 = *(_DWORD *)v8 + v39;
        goto LABEL_54;
      case 5u:
        v24 += (unsigned __int8)*((_DWORD *)v8 + 1);
        v43 = *(_DWORD *)v8 + v39;
        goto LABEL_54;
      case 6u:
        v24 += (unsigned __int16)*((_DWORD *)v8 + 1);
        v43 = *(_DWORD *)v8 + v39;
        goto LABEL_54;
      case 7u:
        v24 += *((_DWORD *)v8 + 1) & 0xFFFFFF;
        v43 = *(_DWORD *)v8 + v39;
        goto LABEL_54;
      case 8u:
        v24 += *((_DWORD *)v8 + 1);
        v43 = *(_DWORD *)v8 + v39;
        goto LABEL_54;
      case 9u:
        v9 += (unsigned __int8)*((_DWORD *)v8 + 2);
        v24 += *((_DWORD *)v8 + 1);
        v43 = *(_DWORD *)v8 + v39;
        goto LABEL_54;
      case 0xAu:
        v9 += (unsigned __int16)*((_DWORD *)v8 + 2);
        v24 += *((_DWORD *)v8 + 1);
        v43 = *(_DWORD *)v8 + v39;
        goto LABEL_54;
      case 0xBu:
        v9 += *((_DWORD *)v8 + 2) & 0xFFFFFF;
        v24 += *((_DWORD *)v8 + 1);
        v43 = *(_DWORD *)v8 + v39;
        goto LABEL_54;
      case 0xCu:
        v9 += *((_DWORD *)v8 + 2);
        v24 += *((_DWORD *)v8 + 1);
        v43 = *(_DWORD *)v8 + v39;
        goto LABEL_54;
    }
  }
  return v3;
}
