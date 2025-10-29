__int16 *__fastcall sub_25C8C(__int16 *result, int a2, const char *a3)
{
  __int16 *v5; // r6
  int v6; // r2
  char v7; // r3
  int v8; // r1
  int v9; // r0
  const char *v10; // r11
  int v11; // r10
  const char *v12; // r0
  size_t v13; // r0
  int v14; // r4
  int v15; // r0
  unsigned int v16; // r3
  char v17; // r3
  int v18; // r10
  const char *v19; // r0
  size_t v20; // r0
  int v21; // r4
  int v22; // r0
  int v23; // r4
  int v24; // r0
  int v25; // r4
  __int16 v26; // r3
  size_t v27; // r0
  unsigned __int8 v28[68]; // [sp+10h] [bp-15Ch] BYREF
  int v29; // [sp+54h] [bp-118h]
  _DWORD v30[2]; // [sp+5Ch] [bp-110h] BYREF
  char v31[256]; // [sp+64h] [bp-108h] BYREF

  v5 = result;
  if ( a2 )
  {
    v6 = (unsigned __int8)result & 0x7F;
    if ( *(unsigned __int8 *)(a2 + 73) == v6 )
    {
      v16 = *(unsigned __int8 *)(a2 + 74);
      if ( v16 > 0xE )
        return result;
      v7 = v16 + 1;
    }
    else
    {
      v7 = 1;
    }
    v8 = *(unsigned __int16 *)(a2 + 16);
    v9 = a2 + 16;
    *(_BYTE *)(a2 + 73) = v6;
    *(_BYTE *)(a2 + 74) = v7;
    if ( v8 == 2 && *(_WORD *)(a2 + 20) == 32639 )
      v10 = (const char *)sub_6A02C(v9);
    else
      v10 = (const char *)sub_6BF44(v9);
    v11 = sub_2329C(a2);
    v12 = (const char *)sub_6D014(v5);
    sub_6BCB0(v31, 256, "%s %04x %02x %s", v10, v11, v5, v12);
    if ( a3 )
    {
      v13 = strlen(v31);
      sub_6BCB0(&v31[v13], 256 - v13, " %s", a3);
    }
    if ( (ntp_syslogmask & 0x20) == 0 )
      goto LABEL_11;
    goto LABEL_27;
  }
  if ( (unsigned __int8)byte_B88DE == (unsigned __int8)result )
  {
    if ( (unsigned __int8)byte_B88DF > 0xEu )
      return result;
    v17 = byte_B88DF + 1;
  }
  else
  {
    v17 = 1;
  }
  byte_B88DE = (char)result;
  byte_B88DF = v17;
  v18 = sub_23340();
  v19 = (const char *)sub_6D014(v5);
  sub_6BCB0(v31, 256, "0.0.0.0 %04x %02x %s", v18, v5, v19);
  if ( a3 )
  {
    v20 = strlen(v31);
    sub_6BCB0(&v31[v20], 256 - v20, " %s", a3);
  }
  if ( (ntp_syslogmask & 2) != 0 )
LABEL_27:
    sub_64A18(6, "%s", v31);
LABEL_11:
  result = (__int16 *)sub_42178(v31);
  if ( num_ctl_traps > 0 )
  {
    if ( ((unsigned __int8)v5 & 0x80) == 0 )
    {
      v21 = 1;
      dword_B86A8 = 0;
      byte_B86AD = 0;
      word_B84A2 = 0;
      byte_B86A4 = 7;
      dword_B8498 = (int)&unk_B84A8;
      dword_B86C4 = (int)&unk_B867C;
      byte_B86AC = 1;
      word_B84A0 = __rev16(sub_23340());
      do
      {
        v22 = v21++;
        sub_21628(v22);
      }
      while ( v21 != 20 );
      return sub_1E934(0);
    }
    if ( a2 )
    {
      word_B84A2 = __rev16(*(unsigned __int16 *)(a2 + 60));
      dword_B86C4 = (int)&unk_B867C;
      byte_B86A4 = 7;
      v14 = 1;
      byte_B86AC = 1;
      dword_B8498 = (int)&unk_B84A8;
      dword_B86A8 = 0;
      byte_B86AD = 0;
      word_B84A0 = __rev16(sub_2329C(a2));
      do
      {
        v15 = v14++;
        sub_20594(v15, a2);
      }
      while ( v14 != 51 );
      if ( v5 == (__int16 *)((char *)&dword_88 + 3) )
      {
        v29 = 0;
        sub_3A084(a2 + 16, 0, v28, 0);
        v23 = 1;
        sub_1F7A4("refclockstatus", v28[64] & 0xF | (unsigned __int8)(16 * v28[65]));
        do
        {
          v24 = v23++;
          sub_1FF34(v24, v28, 0);
        }
        while ( v23 != 14 );
        v25 = v29;
        if ( v29 )
        {
          v26 = *(_WORD *)((char *)&dword_0 + v29 + 2);
          if ( (v26 & 0x80) == 0 )
          {
            do
            {
              if ( (v26 & 0x20) != 0 )
              {
                v27 = strlen(*(const char **)(v25 + 4));
                v30[0] = *(_DWORD *)(v25 + 4);
                v30[1] = v27;
                sub_1EC64((char *)v30, 1, 0);
              }
              v25 += 8;
              if ( !v25 )
                break;
              v26 = *(_WORD *)(v25 + 2);
            }
            while ( (v26 & 0x80) == 0 );
            v25 = v29;
          }
        }
        sub_24B90((_WORD *)v25);
      }
      return sub_1E934(0);
    }
  }
  return result;
}
