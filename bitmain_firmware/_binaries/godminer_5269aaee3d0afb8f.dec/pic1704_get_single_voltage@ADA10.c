int __fastcall pic1704_get_single_voltage(char a1, _DWORD *a2)
{
  int v2; // r4
  int result; // r0
  int v5; // r1
  int v6; // r3
  int v7; // r0
  int *v8; // r7
  const char *v9; // r2
  int v10; // r1
  unsigned __int8 *i; // r2
  __int16 v12; // t1
  const char *v13; // r2
  unsigned __int16 v14; // r8
  int v15; // r1
  const char *v16; // r2
  int v17; // r1
  int v18; // [sp+10h] [bp-181Ch] BYREF
  __int16 v19; // [sp+14h] [bp-1818h]
  unsigned __int8 v20[8]; // [sp+18h] [bp-1814h] BYREF
  int v21; // [sp+20h] [bp-180Ch]
  int v22; // [sp+24h] [bp-1808h]
  char v23[2040]; // [sp+28h] [bp-1804h] BYREF
  char v24[4100]; // [sp+828h] [bp-1004h] BYREF

  LOWORD(v2) = 0;
  BYTE2(v21) = 7;
  LOWORD(v21) = 58;
  *(_DWORD *)v20 = 255;
  HIBYTE(v21) = a1;
  v22 = 0;
  v18 = 0;
  *(_DWORD *)&v20[3] = 0;
  v19 = 0;
  result = sub_AD024(v21, 0, (int)&v18, v20);
  if ( result )
  {
    v5 = v20[2];
    v6 = v20[0];
    v7 = v20[1];
    if ( v20[2] == 1 && v20[0] > 3u )
    {
      for ( i = &v20[3]; ; ++i )
      {
        v2 = (unsigned __int16)(v2 + v6);
        LOWORD(v6) = v7;
        if ( i == &v20[v20[0]] )
          break;
        LOWORD(v7) = v5;
        v12 = *i;
        LOWORD(v5) = v12;
      }
      LOWORD(v13) = -8496;
      HIWORD(v13) = (unsigned int)"dump packet %s" >> 16;
      LOWORD(v8) = -14756;
      v14 = __rev16(*(unsigned __int16 *)&v20[v20[0] - 2]);
      HIWORD(v8) = (unsigned int)&unk_16B55C >> 16;
      snprintf(v23, 0x800u, v13, v2, v14);
      V_LOCK();
      logfmt_raw(v24, 0x1000u, 0, v23);
      V_UNLOCK();
      LOWORD(v15) = -9036;
      HIWORD(v15) = (unsigned int)"et_KDA" >> 16;
      zlog(*v8, v15, 158, "check_pic_crc", 13, 397, 20, v24);
      if ( v2 == v14 )
      {
        LOWORD(v16) = -8424;
        HIWORD(v16) = (unsigned int)"te diff %d ans diff %d TICKET_MASK_KDA %d" >> 16;
        *a2 = (unsigned __int16)__rev16(*(unsigned __int16 *)&v20[3]);
        snprintf(v23, 0x800u, v16);
        V_LOCK();
        logfmt_raw(v24, 0x1000u, 0, v23);
        V_UNLOCK();
        LOWORD(v17) = -9036;
        HIWORD(v17) = (unsigned int)"et_KDA" >> 16;
        zlog(*v8, v17, 158, "pic1704_get_single_voltage", 26, 484, 20, v24);
        return 1;
      }
      v6 = v20[0];
      v5 = v20[2];
      v7 = v20[1];
    }
    else
    {
      v8 = &g_zc;
    }
    LOWORD(v9) = -8476;
    HIWORD(v9) = (unsigned int)"dump work jobid %s, work count %d" >> 16;
    snprintf(v23, 0x800u, v9, v6, v7, v5);
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, v23);
    V_UNLOCK();
    LOWORD(v10) = -9036;
    HIWORD(v10) = (unsigned int)"et_KDA" >> 16;
    zlog(*v8, v10, 158, "pic1704_get_single_voltage", 26, 480, 20, v24);
    return 1;
  }
  return result;
}
