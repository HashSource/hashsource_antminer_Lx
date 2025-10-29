size_t __fastcall sub_20594(int a1, int a2)
{
  size_t result; // r0
  int v4; // r1
  int v5; // r0
  int digestbyname; // r0
  int v7; // r0
  const char *v8; // r5
  size_t v9; // r0
  int *v10; // r6
  int v11; // r5
  size_t v12; // r0
  int v13; // r5
  size_t v14; // r0
  int v15; // r1
  int v16; // r5
  size_t v17; // r0
  __int16 v18; // r3
  char *v19; // r5
  char *v20; // r7
  char *v21; // r6
  const char *v22; // r11
  size_t v23; // r2
  char *v24; // r0
  int v25; // r3
  int v26; // r1
  unsigned int v27; // r1
  int v28; // r2
  int v29; // r1
  int v30; // r2
  _DWORD v31[2]; // [sp+0h] [bp-1E4h] BYREF
  char v32[468]; // [sp+8h] [bp-1DCh] BYREF
  _DWORD v33[2]; // [sp+1DCh] [bp-8h] BYREF

  result = a1 - 1;
  switch ( result )
  {
    case 0u:
      result = (size_t)sub_1F8EC("config", ((*(_DWORD *)(a2 + 68) ^ 2u) >> 1) & 1);
      break;
    case 1u:
      result = (size_t)sub_1F8EC("authenable", *(_DWORD *)(a2 + 124) == 0);
      break;
    case 2u:
      result = (size_t)sub_1F8EC("authentic", (*(_DWORD *)(a2 + 68) >> 2) & 1);
      break;
    case 3u:
      result = (size_t)sub_1EF28("srcadr", 0, a2 + 16);
      break;
    case 4u:
      result = (size_t)sub_1F8EC("srcport", (unsigned __int16)__rev16(*(unsigned __int16 *)(a2 + 18)));
      break;
    case 5u:
      v30 = *(_DWORD *)(a2 + 56);
      if ( v30 )
        v30 += 24;
      result = (size_t)sub_1EF28("dstadr", 0, v30);
      break;
    case 6u:
      v4 = *(_DWORD *)(a2 + 56);
      if ( v4 )
        v4 = (unsigned __int16)__rev16(*(unsigned __int16 *)(v4 + 26));
      result = (size_t)sub_1F8EC("dstport", v4);
      break;
    case 7u:
      result = (size_t)sub_1F8EC("leap", *(unsigned __int8 *)(a2 + 91));
      break;
    case 8u:
      result = (size_t)sub_1F8EC("hmode", *(unsigned __int8 *)(a2 + 63));
      break;
    case 9u:
      result = (size_t)sub_1F8EC("stratum", *(unsigned __int8 *)(a2 + 93));
      break;
    case 0xAu:
      result = (size_t)sub_1F8EC("ppoll", *(unsigned __int8 *)(a2 + 94));
      break;
    case 0xBu:
      result = (size_t)sub_1F8EC("hpoll", *(unsigned __int8 *)(a2 + 64));
      break;
    case 0xCu:
      result = (size_t)sub_1F848("precision", *(char *)(a2 + 95));
      break;
    case 0xDu:
      result = (size_t)sub_1FE70("rootdelay", 1, 3);
      break;
    case 0xEu:
      result = (size_t)sub_1FE70("rootdisp", 1, 3);
      break;
    case 0xFu:
      v28 = *(_DWORD *)(a2 + 68);
      v29 = *(_DWORD *)(a2 + 112);
      if ( (v28 & 8) != 0 || (unsigned int)*(unsigned __int8 *)(a2 + 93) - 2 > 0xD )
        result = (size_t)sub_1EFAC("refid", v29);
      else
        result = (size_t)sub_1EF28("refid", v29, 0);
      break;
    case 0x10u:
      result = (size_t)sub_1FA74("reftime", (_DWORD *)(a2 + 116));
      break;
    case 0x11u:
      result = (size_t)sub_1FA74("org", (_DWORD *)(a2 + 584));
      break;
    case 0x12u:
      result = (size_t)sub_1FA74("rec", (_DWORD *)(a2 + 576));
      break;
    case 0x13u:
      if ( *(double *)(a2 + 640) != 0.0 )
        result = (size_t)sub_1FE70("xleave", 1, 3);
      break;
    case 0x14u:
      result = (size_t)sub_1F7A4("reach", *(unsigned __int8 *)(a2 + 298));
      break;
    case 0x15u:
      result = (size_t)sub_1F8EC("unreach", *(_DWORD *)(a2 + 708));
      break;
    case 0x16u:
      result = (size_t)sub_1F8EC("timer", *(_DWORD *)(a2 + 720) - current_time);
      break;
    case 0x17u:
      result = (size_t)sub_1FE70("delay", 1, 3);
      break;
    case 0x18u:
      result = (size_t)sub_1FE70("offset", 1, 3);
      break;
    case 0x19u:
      result = (size_t)sub_1FE70("jitter", 1, 3);
      break;
    case 0x1Au:
      result = (size_t)sub_1FE70("dispersion", 1, 3);
      break;
    case 0x1Bu:
      v27 = *(_DWORD *)(a2 + 124);
      if ( v27 < 0x10000 )
        result = (size_t)sub_1F8EC("keyid", v27);
      else
        result = (size_t)sub_1F7A4("keyid", v27);
      break;
    case 0x1Cu:
      result = (size_t)sub_20390("filtdelay", a2 + 328, *(_DWORD *)(a2 + 320));
      break;
    case 0x1Du:
      result = (size_t)sub_20390("filtoffset", a2 + 392, *(_DWORD *)(a2 + 320));
      break;
    case 0x1Eu:
      result = (size_t)sub_1F8EC("pmode", *(unsigned __int8 *)(a2 + 92));
      break;
    case 0x1Fu:
      result = (size_t)sub_1F8EC("received", *(_DWORD *)(a2 + 744));
      break;
    case 0x20u:
      result = (size_t)sub_1F8EC("sent", *(_DWORD *)(a2 + 740));
      break;
    case 0x21u:
      result = (size_t)sub_20390("filtdisp", a2 + 456, *(_DWORD *)(a2 + 320));
      break;
    case 0x22u:
      result = (size_t)sub_1F7A4("flash", *(_DWORD *)(a2 + 300));
      break;
    case 0x23u:
      v25 = *(_DWORD *)(a2 + 68);
      v26 = *(_DWORD *)(a2 + 76);
      if ( (v25 & 8) != 0 )
      {
        result = (size_t)sub_1F8EC("ttl", v26);
      }
      else if ( (unsigned int)(v26 - 1) <= 6 )
      {
        result = (size_t)sub_1F848("ttl", (unsigned __int8)sys_ttl[v26]);
      }
      break;
    case 0x24u:
      sub_6BCB0(v32, 468, "%s=\"", "peer_var_list");
      result = strlen(v32);
      LOBYTE(v18) = 1;
      v19 = (char *)&unk_B2F68;
      v20 = &v32[result];
      v21 = &v32[result];
      while ( 1 )
      {
        v19 += 8;
        if ( (v18 & 0x80) != 0 )
          break;
        if ( (v18 & 0x40) == 0 )
        {
          v22 = (const char *)*((_DWORD *)v19 + 1);
          result = strlen(v22);
          v23 = result;
          if ( v33 <= (_DWORD *)&v21[result + 1] )
            break;
          if ( v21 == v20 )
          {
            v24 = v20;
          }
          else
          {
            *v21 = 44;
            v24 = v21 + 1;
          }
          v21 = &v24[v23];
          result = (size_t)memcpy(v24, v22, v23);
        }
        v18 = *((_WORD *)v19 + 5);
      }
      if ( v33 > (_DWORD *)(v21 + 2) )
      {
        *v21 = 34;
        v21[1] = 0;
        v31[0] = v32;
        v31[1] = v21 + 1 - v32;
        result = (size_t)sub_1EC64((char *)v31, 1, 0);
      }
      break;
    case 0x25u:
      if ( *(double *)(a2 + 672) > 0.0 )
        result = (size_t)sub_1FE70("in", 1, 3);
      break;
    case 0x26u:
      if ( *(double *)(a2 + 696) > 0.0 )
        result = (size_t)sub_1FE70("out", 1, 3);
      break;
    case 0x27u:
      result = (size_t)sub_1F8EC("headway", *(_DWORD *)(a2 + 712));
      break;
    case 0x28u:
      if ( *(double *)(a2 + 648) != 0.0 )
        result = (size_t)sub_1FE70("bias", 1, 3);
      break;
    case 0x29u:
      v16 = *(_DWORD *)(a2 + 44);
      if ( v16 )
      {
        v17 = strlen(*(const char **)(a2 + 44));
        result = (size_t)sub_1F060("srchost", v16, v17);
      }
      break;
    case 0x2Au:
      result = (size_t)sub_1F8EC("timerec", current_time - *(_DWORD *)(a2 + 732));
      break;
    case 0x2Bu:
      result = (size_t)sub_1F8EC("timereach", current_time - *(_DWORD *)(a2 + 736));
      break;
    case 0x2Cu:
      result = (size_t)sub_1F8EC("badauth", *(_DWORD *)(a2 + 752));
      break;
    case 0x2Du:
      result = (size_t)sub_1F8EC("bogusorg", *(_DWORD *)(a2 + 760));
      break;
    case 0x2Eu:
      result = (size_t)sub_1F8EC("oldpkt", *(_DWORD *)(a2 + 764));
      break;
    case 0x2Fu:
      result = (size_t)sub_1F8EC("seldisp", *(_DWORD *)(a2 + 768));
      break;
    case 0x30u:
      result = (size_t)sub_1F8EC("selbroken", *(_DWORD *)(a2 + 772));
      break;
    case 0x31u:
      result = (size_t)sub_1F8EC("candidate", *(unsigned __int8 *)(a2 + 296));
      break;
    case 0x32u:
      v15 = *(_DWORD *)(a2 + 136);
      if ( v15 )
        result = (size_t)sub_1F7A4("flags", v15);
      break;
    case 0x33u:
      v13 = *(_DWORD *)(a2 + 148);
      if ( v13 )
      {
        v14 = strlen(*(const char **)(a2 + 148));
        result = (size_t)sub_1F060("host", v13, v14);
      }
      break;
    case 0x35u:
      v10 = *(int **)(a2 + 220);
      if ( v10 )
      {
        sub_1F848("initsequence", v10[1]);
        sub_1F7A4("initkey", *v10);
        result = (size_t)sub_204A4("timestamp", bswap32(*(_DWORD *)(a2 + 208)));
      }
      break;
    case 0x38u:
      result = *(_DWORD *)(a2 + 136);
      if ( result )
      {
        v5 = OBJ_nid2sn(HIWORD(result));
        digestbyname = EVP_get_digestbyname(v5);
        v7 = EVP_MD_pkey_type(digestbyname);
        v8 = (const char *)OBJ_nid2ln(v7);
        v9 = strlen(v8);
        result = (size_t)sub_1F060("signature", (int)v8, v9);
      }
      break;
    case 0x39u:
      v11 = *(_DWORD *)(a2 + 80);
      if ( v11 )
      {
        v12 = strlen(*(const char **)(a2 + 80));
        result = (size_t)sub_1F060("ident", v11, v12);
      }
      break;
    default:
      return result;
  }
  return result;
}
