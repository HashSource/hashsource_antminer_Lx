int __fastcall SOC_24G_20210817_update(int a1, int a2, unsigned __int8 a3, int a4)
{
  bool v4; // zf
  int v6; // r12
  int v7; // r0
  int v8; // r1
  int v9; // r3
  int v10; // lr
  int v11; // r0
  int v12; // r10
  int v13; // r1
  int v14; // r3
  int v15; // r12
  int v17; // r2
  int v18; // r0
  int v19; // r10
  int v20; // lr
  int v21; // r3
  int v22; // r1
  int v23; // r12
  int v24; // r9
  int v25; // r8
  int v26; // r7
  int v27; // r6
  int v28; // r11
  int v29; // r3
  _DWORD *v30; // r3
  int v31; // r1
  int v33; // [sp+14h] [bp-1048h]
  int v34; // [sp+18h] [bp-1044h]
  int v35; // [sp+1Ch] [bp-1040h]
  int v36; // [sp+20h] [bp-103Ch]
  int v37; // [sp+24h] [bp-1038h]
  int v38; // [sp+28h] [bp-1034h]
  int v39; // [sp+2Ch] [bp-1030h]
  int v40; // [sp+30h] [bp-102Ch]
  int v41; // [sp+34h] [bp-1028h]
  int v42; // [sp+38h] [bp-1024h]
  int v43; // [sp+3Ch] [bp-1020h]
  int v44; // [sp+40h] [bp-101Ch]
  int v45; // [sp+48h] [bp-1014h]
  int v46; // [sp+4Ch] [bp-1010h]
  int v47; // [sp+50h] [bp-100Ch]
  int v48; // [sp+54h] [bp-1008h]
  char v49[4100]; // [sp+58h] [bp-1004h] BYREF

  v4 = a4 == 8;
  v6 = 61590;
  if ( a4 == 8 )
  {
    v7 = 61535;
  }
  else
  {
    v7 = 95;
    v6 = 150;
  }
  v8 = 61443;
  v9 = 61448;
  if ( !v4 )
  {
    v8 = 3;
    v9 = 8;
  }
  v47 = v7;
  v10 = 61564;
  if ( v4 )
  {
    v11 = 61580;
  }
  else
  {
    v11 = 140;
    v10 = 124;
  }
  v12 = 61579;
  v43 = v6;
  if ( !v4 )
    v12 = 139;
  v42 = v8;
  v41 = v9;
  v13 = 61566;
  v14 = 61622;
  if ( !v4 )
  {
    v13 = 126;
    v14 = 182;
  }
  v15 = 61514;
  if ( !v4 )
    v15 = 74;
  v46 = v11;
  v17 = 61536;
  v18 = 61551;
  if ( !v4 )
  {
    v17 = 96;
    v18 = 111;
  }
  v45 = v12;
  v44 = v10;
  v19 = 61606;
  v20 = 61458;
  if ( !v4 )
  {
    v19 = 166;
    v20 = 18;
  }
  v40 = v14;
  v39 = v13;
  v21 = 61472;
  v22 = 61511;
  if ( !v4 )
  {
    v21 = 32;
    v22 = 71;
  }
  v38 = v15;
  v23 = 61469;
  if ( !v4 )
    v23 = 29;
  v24 = 61441;
  v37 = v20;
  if ( !v4 )
    v24 = 1;
  v33 = v23;
  v25 = 61630;
  v26 = 61442;
  if ( !v4 )
  {
    v25 = 190;
    v26 = 2;
  }
  v27 = 61550;
  v28 = 61466;
  if ( !v4 )
  {
    v27 = 110;
    v28 = 26;
  }
  v48 = v17;
  v36 = v21;
  v35 = v22;
  v34 = v18;
  V_LOCK();
  LOWORD(v29) = -22408;
  HIWORD(v29) = (unsigned int)"0929_update" >> 16;
  logfmt_raw(v49, 0x1000u, 0, v29, "SOC_24G_20210817_update");
  V_UNLOCK();
  LOWORD(v30) = -14756;
  HIWORD(v30) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v31) = -23296;
  HIWORD(v31) = (unsigned int)"zer_tuning_one_lane" >> 16;
  zlog(*v30, v31, 154, "SOC_24G_20210817_update", 23, 4056, 60, v49);
  sub_5E2CC(a1, a3, v24, -536870913);
  sub_5E2CC(a1, a3, v28, 0x20000000);
  sub_5E2CC(a1, a3, v24, -5);
  sub_5E2CC(a1, a3, v33, 0);
  sub_5E2CC(a1, a3, v24, 0x7FFFFFFF);
  sub_5E2CC(a1, a3, v34, 0x80000000);
  sub_5E2CC(a1, a3, v24, -262145);
  sub_5E2CC(a1, a3, v27, 0);
  sub_5E2CC(a1, a3, v24, -5);
  sub_5E2CC(a1, a3, v27, 0);
  sub_5E2CC(a1, a3, v24, 0x7FFFFFFF);
  sub_5E2CC(a1, a3, v28, 0);
  sub_5E2CC(a1, a3, v24, -1025);
  sub_5E2CC(a1, a3, v35, 0);
  sub_5CB80(a1, a3, 144, -7340033);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 0x200000);
  sub_5CB80(a1, a3, 145, -2147450872);
  sub_5CB80(a1, a3, 144, -57345);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 40960);
  sub_5CB80(a1, a3, 145, -2147450871);
  sub_5E2CC(a1, a3, v24, -67108865);
  sub_5E2CC(a1, a3, v36, 0x4000000);
  sub_5CB80(a1, a3, 144, -131073);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 0);
  sub_5CB80(a1, a3, 145, -2147450818);
  sub_5E2CC(a1, a3, v24, -262145);
  sub_5E2CC(a1, a3, v37, 0x40000);
  sub_5E2CC(a1, a3, v24, -1025);
  sub_5E2CC(a1, a3, v38, 1024);
  sub_5E2CC(a1, a3, v24, -8388609);
  sub_5E2CC(a1, a3, v39, 0x800000);
  sub_5E2CC(a1, a3, v24, 0xFFFFFFF);
  sub_5E2CC(a1, a3, v40, 1610612736);
  sub_5CB80(a1, a3, 144, -1009);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 576);
  sub_5CB80(a1, a3, 145, -2147450787);
  sub_5CB80(a1, a3, 144, -258049);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 147456);
  sub_5CB80(a1, a3, 145, -2147450787);
  sub_5CB80(a1, a3, 144, -66060289);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 37748736);
  sub_5CB80(a1, a3, 145, -2147450787);
  sub_5CB80(a1, a3, 144, 0xFFFFFFF);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 0x40000000);
  sub_5CB80(a1, a3, 145, -2147450787);
  sub_5CB80(a1, a3, 144, -4);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 2);
  sub_5CB80(a1, a3, 145, -2147450786);
  sub_5CB80(a1, a3, 144, -1009);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 64);
  sub_5CB80(a1, a3, 145, -2147450786);
  sub_5CB80(a1, a3, 144, -258049);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 0x4000);
  sub_5CB80(a1, a3, 145, -2147450786);
  sub_5CB80(a1, a3, 144, -66060289);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 0x400000);
  sub_5CB80(a1, a3, 145, -2147450786);
  sub_5CB80(a1, a3, 144, 0xFFFFFFF);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 0x40000000);
  sub_5CB80(a1, a3, 145, -2147450786);
  sub_5CB80(a1, a3, 144, -4);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 0);
  sub_5CB80(a1, a3, 145, -2147450785);
  sub_5CB80(a1, a3, 144, -1009);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 64);
  sub_5CB80(a1, a3, 145, -2147450878);
  sub_5E2CC(a1, a3, v24, -196609);
  sub_5E2CC(a1, a3, v26, 0x20000);
  sub_5E2CC(a1, a3, v24, -4);
  sub_5E2CC(a1, a3, v41, 2);
  sub_5E2CC(a1, a3, v24, -196609);
  sub_5E2CC(a1, a3, v41, 196608);
  sub_5E2CC(a1, a3, v24, -196609);
  sub_5E2CC(a1, a3, v42, 196608);
  sub_5CB80(a1, a3, 144, -786433);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 786432);
  sub_5CB80(a1, a3, 145, -2147450818);
  sub_5CB80(a1, a3, 144, -8388609);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 0x800000);
  sub_5CB80(a1, a3, 145, -2147450808);
  sub_5CB80(a1, a3, 144, -805306369);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 805306368);
  sub_5CB80(a1, a3, 145, -2147450804);
  sub_5E2CC(a1, a3, v24, -12289);
  sub_5E2CC(a1, a3, v43, 0x2000);
  sub_5E2CC(a1, a3, v24, -4194305);
  sub_5E2CC(a1, a3, v44, 0x400000);
  sub_5E2CC(a1, a3, v24, -497);
  sub_5E2CC(a1, a3, v25, 384);
  sub_5E2CC(a1, a3, v24, -225);
  sub_5E2CC(a1, a3, v19, 0);
  sub_5E2CC(a1, a3, v24, -61441);
  sub_5E2CC(a1, a3, v25, 0x2000);
  sub_5E2CC(a1, a3, v24, -32769);
  sub_5E2CC(a1, a3, v45, 0x8000);
  sub_5E2CC(a1, a3, v24, -65537);
  sub_5E2CC(a1, a3, v46, 0x10000);
  sub_5E2CC(a1, a3, v24, -131073);
  sub_5E2CC(a1, a3, v46, 0x20000);
  sub_5E2CC(a1, a3, v24, -65521);
  sub_5E2CC(a1, a3, v26, 0x8000);
  sub_5E2CC(a1, a3, v24, 0xFFFFFF);
  sub_5E2CC(a1, a3, v47, -268435456);
  sub_5E2CC(a1, a3, v24, -256);
  sub_5E2CC(a1, a3, v48, 255);
  sub_5E2CC(a1, a3, v24, 0);
  sub_5CB80(a1, a3, 144, 0);
  sub_5CB80(a1, a3, 145, -2147450879);
  return 0;
}
