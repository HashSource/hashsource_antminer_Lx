int __fastcall gpio_unreg_callback(int a1, int a2)
{
  int *v2; // lr
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r1
  int v12; // r2
  _DWORD *v13; // r3
  int v14; // r1
  const char *v16; // r2
  _DWORD *v17; // r3
  int v18; // r1
  int *v19; // lr
  int v20; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r1
  int v25; // r2
  int v26; // r3
  _DWORD *v27; // r3
  int v28; // r2
  int v29; // r1
  int *v30; // r2
  int v31; // r0
  int v32; // r1
  int v33; // r2
  int v34; // [sp+14h] [bp-1808h] BYREF
  int s; // [sp+18h] [bp-1804h] BYREF
  int v36; // [sp+1Ch] [bp-1800h]
  int v37; // [sp+20h] [bp-17FCh]
  int v38; // [sp+24h] [bp-17F8h]
  int v39; // [sp+28h] [bp-17F4h]
  int v40; // [sp+2Ch] [bp-17F0h]
  int v41; // [sp+30h] [bp-17ECh]
  int v42; // [sp+34h] [bp-17E8h]
  int v43; // [sp+38h] [bp-17E4h]
  int v44; // [sp+3Ch] [bp-17E0h]
  char v45; // [sp+40h] [bp-17DCh]
  char v46[4100]; // [sp+818h] [bp-1004h] BYREF

  v34 = a1;
  if ( !a2 )
  {
    LOWORD(v30) = -6120;
    HIWORD(v30) = (unsigned int)"tmp/release/build/godminer-origin_master/backend/backend_ltc/chip_reg_io_ltc.c" >> 16;
    v31 = *v30;
    v32 = v30[1];
    v33 = v30[2];
    s = v31;
    v36 = v32;
    LOWORD(v37) = v33;
    BYTE2(v37) = BYTE2(v33);
    V_LOCK();
    logfmt_raw(v46, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v27) = -14756;
    HIWORD(v27) = (unsigned int)&unk_16B55C >> 16;
    v28 = 183;
    goto LABEL_9;
  }
  if ( pthread_mutex_lock(&stru_16C0D0) )
  {
    LOWORD(v19) = -6108;
    HIWORD(v19) = (unsigned int)"build/godminer-origin_master/backend/backend_ltc/chip_reg_io_ltc.c" >> 16;
    v20 = *v19;
    v21 = v19[1];
    v22 = v19[2];
    v23 = v19[3];
    v19 += 4;
    s = v20;
    v36 = v21;
    v37 = v22;
    v38 = v23;
    v24 = v19[1];
    v25 = v19[2];
    v26 = v19[3];
    v39 = *v19;
    v40 = v24;
    v41 = v25;
    LOWORD(v42) = v26;
    V_LOCK();
    logfmt_raw(v46, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v27) = -14756;
    HIWORD(v27) = (unsigned int)&unk_16B55C >> 16;
    v28 = 189;
LABEL_9:
    LOWORD(v29) = -6288;
    HIWORD(v29) = (unsigned int)"low power mode select!" >> 16;
    zlog(*v27, v29, 165, "gpio_unreg_callback", 19, v28, 100, v46);
    return -1;
  }
  if ( exists_c_map((int *)dword_16C0E8, (int)&v34) == (int *)1 )
  {
    LOWORD(v16) = -6012;
    HIWORD(v16) = (unsigned int)"ltc" >> 16;
    snprintf((char *)&s, 0x800u, v16, v34);
    V_LOCK();
    logfmt_raw(v46, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v17) = -14756;
    HIWORD(v17) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v18) = -6288;
    HIWORD(v18) = (unsigned int)"low power mode select!" >> 16;
    zlog(*v17, v18, 165, "gpio_unreg_callback", 19, 195, 20, v46);
    remove_c_map((int *)dword_16C0E8, (int)&v34);
  }
  else
  {
    LOWORD(v2) = -5980;
    HIWORD(v2) = (unsigned int)"ltc" >> 16;
    v3 = *v2;
    v4 = v2[1];
    v5 = v2[2];
    v6 = v2[3];
    v2 += 4;
    s = v3;
    v36 = v4;
    v37 = v5;
    v38 = v6;
    v7 = *v2;
    v8 = v2[1];
    v9 = v2[2];
    v10 = v2[3];
    v2 += 4;
    v39 = v7;
    v40 = v8;
    v41 = v9;
    v42 = v10;
    v11 = v2[1];
    v12 = v2[2];
    v43 = *v2;
    v44 = v11;
    v45 = v12;
    V_LOCK();
    logfmt_raw(v46, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v13) = -14756;
    HIWORD(v13) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v14) = -6288;
    HIWORD(v14) = (unsigned int)"low power mode select!" >> 16;
    zlog(*v13, v14, 165, "gpio_unreg_callback", 19, 200, 80, v46);
  }
  pthread_mutex_unlock(&stru_16C0D0);
  return 0;
}
