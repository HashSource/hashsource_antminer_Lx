int __fastcall sub_72E84(int a1, unsigned __int8 *a2, unsigned int a3, unsigned __int8 *a4)
{
  unsigned int v7; // r4
  unsigned int v8; // r3
  unsigned __int8 *v9; // r4
  int v10; // r3
  unsigned __int8 *v11; // r1
  int v12; // r3
  __int16 v13; // t1
  int v14; // r4
  unsigned __int8 *v15; // r7
  int v16; // t1
  int v17; // r3
  int v18; // r4
  int v20; // [sp+0h] [bp-834h]
  int v22; // [sp+10h] [bp-824h]
  unsigned __int8 *v24; // [sp+18h] [bp-81Ch]
  unsigned __int8 *v25; // [sp+1Ch] [bp-818h]
  unsigned __int8 *v26; // [sp+20h] [bp-814h]
  unsigned __int8 v27; // [sp+2Fh] [bp-805h] BYREF
  char s[2048]; // [sp+30h] [bp-804h] BYREF

  v27 = 17;
  v26 = a4 + 8;
  v24 = a4 + 1;
  pthread_mutex_lock(&stru_1B1494);
  v25 = a4 + 5;
  v22 = 0;
  while ( 1 )
  {
    LOBYTE(v7) = 0;
    v8 = 0;
    do
    {
      v7 = (unsigned __int8)(v7 + 1);
      sub_73A24(a1, &v27, 1, (int)&a2[v8], 1);
      v8 = v7;
    }
    while ( v7 < a3 );
    v9 = a4;
    usleep((__useconds_t)&loc_61A80);
    do
    {
      v10 = (int)v9++;
      sub_73984(a1, &v27, 1, v10, 1);
    }
    while ( v26 != v9 );
    usleep(0x186A0u);
    v11 = v24;
    LOWORD(v12) = 0;
    do
    {
      v13 = *++v11;
      v12 = (unsigned __int16)(v12 + v13);
    }
    while ( v11 != v25 );
    if ( v12 != (unsigned __int16)(a4[6] + (a4[7] << 8)) )
    {
      snprintf(
        s,
        0x800u,
        "power reply the bad crc, crc = 0x%04x, crc_read = 0x%04x\n",
        v12,
        (unsigned __int16)(a4[6] + (a4[7] << 8)));
      sub_47AB4(0, s, 0);
      goto LABEL_10;
    }
    if ( *a2 == *a4 && a2[1] == a4[1] && a2[3] == a4[3] && a4[2] == 6 )
      break;
    strcpy(s, "power reply the bad data\n");
    sub_47AB4(0, s, 0);
LABEL_10:
    v14 = 0;
    v15 = a4 - 1;
    do
    {
      v16 = *++v15;
      v17 = v14++;
      snprintf(s, 0x800u, "read_back_data[%d] = 0x%02x", v17, v16);
      sub_47AB4(0, s, 0);
    }
    while ( v14 != 8 );
    v20 = v22++;
    snprintf(s, 0x800u, "Send power cmd(0x%02x) failed, retry %d\n", a2[3], v20);
    sub_47AB4(0, s, 0);
    if ( v22 == 3 )
    {
      v18 = -2147482880;
      goto LABEL_14;
    }
  }
  v18 = 0;
LABEL_14:
  pthread_mutex_unlock(&stru_1B1494);
  return v18;
}
