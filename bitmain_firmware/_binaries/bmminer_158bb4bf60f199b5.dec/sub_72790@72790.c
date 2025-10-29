int __fastcall sub_72790(unsigned int a1, const char *a2)
{
  int v4; // r4
  int v5; // r5
  FILE *v6; // r0
  FILE *v7; // r6
  _BYTE *v8; // r4
  __int16 v9; // r0
  int v10; // r4
  int *v11; // r3
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r3
  _BYTE *v16; // r0
  char *v17; // r2
  __int16 v18; // r3
  __int16 v19; // t1
  __int16 v21; // [sp+Ch] [bp-1BC4h] BYREF
  char v22[4]; // [sp+10h] [bp-1BC0h] BYREF
  char v23; // [sp+14h] [bp-1BBCh]
  char v24; // [sp+17h] [bp-1BB9h] BYREF
  int v25; // [sp+18h] [bp-1BB8h]
  int v26; // [sp+1Ch] [bp-1BB4h]
  int v27; // [sp+20h] [bp-1BB0h]
  int v28; // [sp+24h] [bp-1BACh] BYREF
  int v29; // [sp+28h] [bp-1BA8h] BYREF
  _DWORD v30[4]; // [sp+2Ch] [bp-1BA4h] BYREF
  char v31; // [sp+3Ch] [bp-1B94h]
  char v32; // [sp+3Dh] [bp-1B93h]
  int v33; // [sp+3Eh] [bp-1B92h]
  int v34; // [sp+42h] [bp-1B8Eh]
  __int16 v35; // [sp+46h] [bp-1B8Ah]
  char s[8]; // [sp+48h] [bp-1B88h] BYREF
  _BYTE v37[5000]; // [sp+848h] [bp-1388h] BYREF

  if ( a1 > 0xF )
  {
    v10 = -2147483135;
    snprintf(v37, 0x800u, "%s: Bad pic param, input chain is %d\n", "upgrade_pic", a1);
    sub_47AB4(0, v37, 0);
    return v10;
  }
  if ( !dword_246410[2 * a1 + 1] )
  {
    v4 = sub_7104C(a1);
    if ( v4 < 0 )
    {
      snprintf(v37, 0x800u, "%s: auto exec open_pic, but chain %d open eeprom failed\n", "upgrade_pic", a1);
      sub_47AB4(0, v37, 0);
      return v4;
    }
  }
  memset(v37, 0, sizeof(v37));
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v5 = dword_246410[2 * a1];
  v25 = 0;
  *(_DWORD *)v22 = 0;
  v23 = 0;
  snprintf(s, 0x800u, "%s\n", "_update_pic_app_program_1704");
  sub_47AB4(2, s, 0);
  v6 = (FILE *)fopen64(a2, "r");
  v7 = v6;
  if ( !v6 )
  {
    snprintf(s, 0x800u, "%s: open %s failed\n", "_update_pic_app_program_1704", a2);
    v10 = -2147483136;
    sub_47AB4(0, s, 0);
    return v10;
  }
  fseek(v6, 0, 0);
  v8 = v37;
  memset(v37, 0, sizeof(v37));
  snprintf(s, 0x800u, "%s: pic_flash_length = %d\n", "_update_pic_app_program_1704", 2432);
  sub_47AB4(2, s, 0);
  do
  {
    v8 += 2;
    fgets(v22, 1023, v7);
    v9 = strtoul(v22, 0, 16);
    *(v8 - 1) = v9;
    *(v8 - 2) = HIBYTE(v9);
  }
  while ( &v37[4864] != v8 );
  fclose(v7);
  v10 = sub_713A4(a1);
  if ( v10 )
  {
LABEL_30:
    snprintf(s, 0x800u, aSResetPicError, "_update_pic_app_program_1704");
LABEL_32:
    sub_47AB4(0, s, 0);
    return v10;
  }
  v10 = sub_71CC8(v5);
  if ( v10 )
  {
    snprintf(s, 0x800u, "%s set 1704 flash pointer err\n", "_erase_pic_app");
    sub_47AB4(0, s, 0);
    snprintf(s, 0x800u, "%s: erase app flash error!\n\n", "_update_pic_app_program_1704");
    goto LABEL_32;
  }
  pthread_mutex_lock(&stru_1B147C);
  v29 = 67414613;
  LOWORD(v30[0]) = 2048;
  v21 = 0;
  if ( sub_738FC(v5, (int)&v29, 6) != 6 )
  {
    snprintf(s, 0x800u, "%s write iic err\n", "_bitmain_pic_erase_1704");
    goto LABEL_41;
  }
  usleep(0x30D40u);
  if ( sub_73874(v5, &v21, 2) != 2 )
  {
    snprintf(s, 0x800u, "%s read iic err\n", "_bitmain_pic_erase_1704");
    goto LABEL_41;
  }
  usleep(0x30D40u);
  if ( (unsigned __int8)v21 != 4 || HIBYTE(v21) != 1 )
  {
    snprintf(
      s,
      0x800u,
      "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
      "_bitmain_pic_erase_1704",
      (unsigned __int8)v21,
      HIBYTE(v21));
LABEL_41:
    sub_47AB4(0, s, 0);
  }
  pthread_mutex_unlock(&stru_1B147C);
  v10 = sub_71CC8(v5);
  if ( v10 )
  {
    snprintf(s, 0x800u, aSSet1704FlashP_0, "_update_pic_app_program_1704");
    goto LABEL_32;
  }
  do
  {
    v11 = (int *)&v37[16 * v10];
    v12 = *v11;
    v13 = v11[1];
    v14 = v11[2];
    v15 = v11[3];
    v25 = v12;
    v26 = v13;
    v27 = v14;
    v28 = v15;
    snprintf(s, 0x800u, "send pic program time: %d", v10);
    sub_47AB4(2, s, 0);
    pthread_mutex_lock(&stru_1B147C);
    v16 = v30;
    v17 = &v24;
    v18 = 22;
    v33 = 0;
    v21 = 0;
    v34 = 0;
    v35 = 0;
    memset(v30, 0, sizeof(v30));
    v29 = 34908757;
    do
    {
      v19 = (unsigned __int8)*++v17;
      v18 += v19;
      *v16++ = v19;
    }
    while ( (char *)&v28 + 3 != v17 );
    v31 = HIBYTE(v18);
    v32 = v18;
    if ( sub_738FC(v5, (int)&v29, 22) == 22 )
    {
      usleep(0x30D40u);
      if ( sub_73874(v5, &v21, 2) == 2 )
      {
        if ( (unsigned __int8)v21 == 2 && HIBYTE(v21) == 1 )
        {
          v29 = 84191829;
          LOWORD(v30[0]) = 2304;
          if ( sub_738FC(v5, (int)&v29, 6) == 6 )
          {
            usleep(0x30D40u);
            if ( sub_73874(v5, &v21, 2) == 2 )
            {
              if ( (unsigned __int8)v21 == 5 && HIBYTE(v21) == 1 )
              {
                snprintf(s, 0x800u, "%s  success write to pic flash\n", "_bitmain_pic_write_1704");
                sub_47AB4(2, s, 0);
                goto LABEL_28;
              }
              snprintf(
                s,
                0x800u,
                "%s failed 2! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
                "_bitmain_pic_write_1704",
                (unsigned __int8)v21,
                HIBYTE(v21));
            }
            else
            {
              snprintf(s, 0x800u, "%s read iic 2 err\n", "_bitmain_pic_write_1704");
            }
          }
          else
          {
            snprintf(s, 0x800u, "%s write iic 2 err\n", "_bitmain_pic_write_1704");
          }
        }
        else
        {
          snprintf(
            s,
            0x800u,
            "%s failed 1! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
            "_bitmain_pic_write_1704",
            (unsigned __int8)v21,
            HIBYTE(v21));
        }
      }
      else
      {
        snprintf(s, 0x800u, "%s read iic 1 err\n", "_bitmain_pic_write_1704");
      }
    }
    else
    {
      snprintf(s, 0x800u, "%s write iic 1 err\n", "_bitmain_pic_write_1704");
    }
    sub_47AB4(0, s, 0);
LABEL_28:
    ++v10;
    pthread_mutex_unlock(&stru_1B147C);
  }
  while ( v10 != 304 );
  v10 = sub_713A4(a1);
  if ( v10 )
    goto LABEL_30;
  return v10;
}
