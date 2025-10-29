int __fastcall sub_67B50(const char *a1, const char *a2, int *a3, int a4, int a5, int a6, int a7)
{
  unsigned int v10; // r11
  size_t v11; // r8
  size_t v12; // r7
  _DWORD *v13; // r4
  time_t v14; // r0
  _DWORD *v15; // r12
  time_t v16; // r3
  int v17; // r0
  int v18; // r1
  int v19; // r2
  int v20; // r3
  _DWORD *v21; // r5
  _DWORD *v22; // r12
  int v23; // r1
  int v24; // r2
  int v25; // r3
  int v26; // r3
  int *v28; // r0
  size_t v30; // [sp+20h] [bp-14h]
  int v31; // [sp+24h] [bp-10h]

  if ( !a1 )
    sub_6E8F0("ntp_intres.c", 253, 0, "((void *)0) != node");
  if ( a3 )
  {
    if ( a3[4] )
      sub_6E8F0("ntp_intres.c", 255, 0, "0 == hints->ai_addrlen");
    if ( a3[5] )
      sub_6E8F0("ntp_intres.c", 256, 0, "((void *)0) == hints->ai_addr");
    if ( a3[6] )
      sub_6E8F0("ntp_intres.c", 257, a3[5], "((void *)0) == hints->ai_canonname");
    if ( a3[7] )
      sub_6E8F0("ntp_intres.c", 258, 0, "((void *)0) == hints->ai_next");
  }
  v10 = sub_66FF0();
  v31 = *(_DWORD *)(dnschild_contexts + 4 * v10);
  v30 = strlen(a1);
  v11 = v30 + 1;
  v12 = strlen(a2) + 1;
  v13 = sub_637E4(0, v30 + 1 + v12 + 72, 0, 1);
  v13[1] = v10;
  *v13 = v30 + 1 + v12 + 72;
  v14 = time(0);
  v16 = *(_DWORD *)(v31 + 4);
  v13[2] = v14;
  if ( v14 < v16 )
    v14 = v16;
  v13[3] = v14;
  if ( a3 )
    v15 = v13 + 5;
  *(_DWORD *)(v31 + 4) = v14;
  if ( a3 )
  {
    v17 = *a3;
    v18 = a3[1];
    v19 = a3[2];
    v20 = a3[3];
    v21 = a3 + 4;
    *v15 = v17;
    v15[1] = v18;
    v15[2] = v19;
    v15[3] = v20;
    v22 = v15 + 4;
    v23 = v21[1];
    v24 = v21[2];
    v25 = v21[3];
    *v22 = *v21;
    v22[1] = v23;
    v22[2] = v24;
    v22[3] = v25;
  }
  v13[16] = v11;
  v13[17] = v12;
  v13[4] = a4;
  v13[14] = a5;
  v13[15] = a6;
  v13[13] = a7;
  memcpy(v13 + 18, a1, v11);
  memcpy((char *)v13 + v30 + 73, a2, v12);
  v26 = sub_68DA0(1, v13, v11 + v12 + 72, sub_67360, v13);
  if ( v26 )
  {
    sub_64A18(3, "unable to queue getaddrinfo request");
    v28 = _errno_location();
    v26 = -1;
    *v28 = 14;
  }
  return v26;
}
