int __fastcall sub_3F220(int result, int a2)
{
  struct sockaddr *v2; // r6
  unsigned int v3; // r2
  int v4; // r7
  const char *v5; // r0
  unsigned int v6; // r3
  char v7; // lr
  int v8; // r4
  int v9; // r8
  int v10; // r9
  unsigned int v11; // r2
  int v12; // r11
  int v13; // r3
  int v14; // r10
  __int16 *i; // r7
  bool v16; // zf
  char v17; // r2
  int v18; // r10
  int v19; // r0
  unsigned int v20; // r9
  int v21; // r9
  unsigned int v22; // r7
  unsigned int v23; // r8
  char v24; // r2
  unsigned int v25; // lr
  unsigned int v26; // r1
  signed int v27; // r12
  unsigned __int64 v28; // r0
  double v29; // r0
  double v30; // d0
  int v31; // r2
  int v32; // [sp+8h] [bp-1Ch]
  __int16 *v33; // [sp+Ch] [bp-18h]
  int v34; // [sp+10h] [bp-14h]
  int v35; // [sp+10h] [bp-14h]

  v2 = (struct sockaddr *)(result + 4);
  v3 = *(unsigned __int8 *)(result + 88);
  if ( v3 >> 7 )
  {
    v4 = 1;
    goto LABEL_5;
  }
  if ( (v3 & 0x40) != 0 )
  {
    v4 = 2;
    goto LABEL_5;
  }
  v6 = (v3 >> 3) & 7;
  if ( v6 > 4 )
  {
    v4 = 3;
  }
  else if ( v6 )
  {
    v7 = *(_BYTE *)(result + 89);
    v8 = result;
    if ( (v7 & 0x7F) != 0 )
    {
      v4 = 5;
    }
    else
    {
      result = (unsigned __int16)__rev16(*(unsigned __int16 *)(result + 92));
      if ( (unsigned __int16)result >> 12 )
      {
        v4 = 6;
      }
      else
      {
        LOWORD(v9) = __rev16(*(unsigned __int16 *)(v8 + 94));
        v10 = (unsigned __int16)v9;
        if ( !((unsigned __int16)v9 >> 12) )
        {
          v11 = *(_DWORD *)(v8 + 84);
          if ( (int)v11 <= 7 )
          {
            v4 = 8;
            goto LABEL_5;
          }
          v12 = *(unsigned __int8 *)(v8 + 90);
          v32 = *(_DWORD *)(v8 + 60);
          dword_BB920 = v6;
          v13 = *(unsigned __int8 *)(v8 + 91);
          if ( !v12 )
            return sub_3AA2C(v2, v32, v12, v13, 2);
          if ( (unsigned int)(v12 - 2) > 1 )
            return sub_3AA2C(v2, v32, v12, v13, 1);
          if ( *(_BYTE *)(v8 + 91) )
          {
            v14 = 1;
            for ( i = (__int16 *)&unk_B34F0; ; v14 = i[6] )
            {
              i += 6;
              if ( v14 == -1 )
                break;
              if ( v14 == v13 )
              {
                v33 = i;
                v9 = (__int16)v9;
                v34 = i[2];
                if ( (__int16)v9 == v34 || i[3] == (__int16)v9 )
                  goto LABEL_37;
                goto LABEL_31;
              }
            }
            return sub_3AA2C(v2, v32, v12, v13, 2);
          }
          v9 = (__int16)v9;
          if ( (_WORD)v9 )
          {
            v34 = *(unsigned __int8 *)(v8 + 91);
            v33 = (__int16 *)&unk_B34F0;
LABEL_31:
            v16 = v9 == 16;
            if ( v9 == 16 )
              v16 = *(unsigned __int16 *)(v8 + 90) == 2563;
            if ( !v16 )
              goto LABEL_34;
            v9 = 16;
LABEL_37:
            if ( v34 && (unsigned int)(unsigned __int16)result * v9 > v11 - 8 )
              goto LABEL_34;
          }
          else
          {
            v33 = (__int16 *)&unk_B34F0;
          }
          dword_BBB2C = v12 == 3;
          v18 = v8 + 88;
          if ( !v33[1] || !sys_authenticate )
            return (*((int (__fastcall **)(struct sockaddr *, int, int))v33 + 2))(v2, v32, v8 + 88);
          v19 = (unsigned __int16)result * v10;
          if ( v19 + 36 <= v11 )
          {
            v20 = (v19 + 19) & 0xFFFFFFFC;
            if ( v20 + 24 < v11 )
              v21 = 20;
            else
              v21 = v11 - v20;
            v22 = v11 - v21;
            v23 = v18 + v11 - v21 - 8;
            v35 = v11 - v21 - 8;
            if ( (v7 & 0x80) == 0 || !info_auth_keyid || info_auth_keyid != bswap32(*(_DWORD *)(v18 + v11 - v21)) )
            {
              v24 = v12;
              return sub_3AA2C(v2, v32, v24, v13, 7);
            }
            if ( v11 <= 0xD8 )
            {
              if ( !a2 )
              {
                ++sys_restricted;
LABEL_57:
                v24 = *(_BYTE *)(v8 + 90);
                return sub_3AA2C(v2, v32, v24, v13, 7);
              }
              if ( !sub_61C88() )
              {
                LOBYTE(v13) = *(_BYTE *)(v8 + 91);
                goto LABEL_57;
              }
              v25 = bswap32(*(_DWORD *)(v23 + 4));
              v26 = *(_DWORD *)(v8 + 76);
              v27 = bswap32(*(_DWORD *)(v18 + v35)) - *(_DWORD *)(v8 + 72);
              if ( v25 < v26 )
                --v27;
              v28 = __PAIR64__(v27, 0) + v25 - v26;
              if ( v27 < 0 )
                v28 = -(__int64)v28;
              v29 = COERCE_DOUBLE(sub_8BA5C(v28, HIDWORD(v28)));
              v30 = v29;
              LODWORD(v29) = -32;
              ldexp(v29, v31);
              if ( v30 > 10.0 || !sub_62494(info_auth_keyid, v8 + 88, v22, v21) )
                return sub_3AA2C(v2, v32, *(_BYTE *)(v8 + 90), *(_BYTE *)(v8 + 91), 7);
              return (*((int (__fastcall **)(struct sockaddr *, int, int))v33 + 2))(v2, v32, v8 + 88);
            }
            sub_64A18(3, "process_private: bad pkt length %zu", v11);
            LOBYTE(v13) = *(_BYTE *)(v8 + 91);
            v17 = *(_BYTE *)(v8 + 90);
            return sub_3AA2C(v2, v32, v17, v13, 3);
          }
LABEL_34:
          v17 = v12;
          return sub_3AA2C(v2, v32, v17, v13, 3);
        }
        v4 = 7;
      }
    }
  }
  else
  {
    v4 = 4;
  }
LABEL_5:
  if ( (ntp_syslogmask & 2) != 0 && current_time >= (unsigned int)dword_BBB30 )
  {
    v5 = (const char *)sub_6BF44(v2);
    result = sub_64A18(3, "process_private: drop test %d failed, pkt from %s", v4, v5);
    dword_BBB30 = current_time + 60;
  }
  return result;
}
