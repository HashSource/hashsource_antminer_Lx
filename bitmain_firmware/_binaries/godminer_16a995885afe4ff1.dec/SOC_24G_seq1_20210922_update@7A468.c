int __fastcall SOC_24G_seq1_20210922_update(int a1, int a2, unsigned __int8 a3, int a4)
{
  int v7; // r11
  int v8; // r10
  int v9; // r9
  int v10; // r6
  int v11; // r7
  bool v12; // zf
  int v13; // r12
  int v14; // lr
  int v15; // r12
  int v16; // r12
  int v17; // r12
  int v18; // r12
  int v19; // lr
  int v20; // lr
  int v21; // r12
  int v22; // lr
  int v23; // lr
  int v24; // lr
  int v25; // r12
  int v26; // lr
  int v27; // lr
  int v28; // r12
  int v29; // lr
  int v30; // r12
  int v31; // lr
  int v32; // r12
  int v33; // lr
  int v34; // r12
  int v35; // r12
  int v36; // lr
  int v37; // lr
  int v38; // r12
  int v39; // lr
  int v40; // r3
  int v41; // r12
  int v42; // lr
  int v43; // lr
  int v44; // r12
  int v45; // lr
  int v46; // r12
  int v47; // lr
  int v48; // lr
  int v49; // r12
  int v50; // r8
  int v52; // [sp+2Ch] [bp-10C8h]
  int v53; // [sp+30h] [bp-10C4h]
  int v54; // [sp+34h] [bp-10C0h]
  int v55; // [sp+38h] [bp-10BCh]
  int v56; // [sp+3Ch] [bp-10B8h]
  int v57; // [sp+40h] [bp-10B4h]
  int v58; // [sp+44h] [bp-10B0h]
  int v59; // [sp+48h] [bp-10ACh]
  int v60; // [sp+4Ch] [bp-10A8h]
  int v61; // [sp+50h] [bp-10A4h]
  int v62; // [sp+54h] [bp-10A0h]
  int v63; // [sp+58h] [bp-109Ch]
  int v64; // [sp+5Ch] [bp-1098h]
  int v65; // [sp+60h] [bp-1094h]
  int v66; // [sp+64h] [bp-1090h]
  int v67; // [sp+68h] [bp-108Ch]
  int v68; // [sp+6Ch] [bp-1088h]
  int v69; // [sp+70h] [bp-1084h]
  int v70; // [sp+74h] [bp-1080h]
  int v71; // [sp+78h] [bp-107Ch]
  int v72; // [sp+7Ch] [bp-1078h]
  int v73; // [sp+80h] [bp-1074h]
  int v74; // [sp+84h] [bp-1070h]
  int v75; // [sp+88h] [bp-106Ch]
  int v76; // [sp+8Ch] [bp-1068h]
  int v77; // [sp+90h] [bp-1064h]
  int v78; // [sp+94h] [bp-1060h]
  int v79; // [sp+98h] [bp-105Ch]
  int v80; // [sp+9Ch] [bp-1058h]
  int v81; // [sp+A0h] [bp-1054h]
  int v82; // [sp+A4h] [bp-1050h]
  int v83; // [sp+A8h] [bp-104Ch]
  int v84; // [sp+ACh] [bp-1048h]
  int v85; // [sp+B0h] [bp-1044h]
  int v86; // [sp+B4h] [bp-1040h]
  int v87; // [sp+B8h] [bp-103Ch]
  int v88; // [sp+BCh] [bp-1038h]
  int v89; // [sp+C0h] [bp-1034h]
  int v90; // [sp+C4h] [bp-1030h]
  int v91; // [sp+C8h] [bp-102Ch]
  int v92; // [sp+CCh] [bp-1028h]
  _DWORD v93[7]; // [sp+D0h] [bp-1024h] BYREF
  int v94; // [sp+ECh] [bp-1008h]
  char v95[4100]; // [sp+F0h] [bp-1004h] BYREF

  V_LOCK();
  v7 = 61511;
  v8 = 61496;
  V_INT((int)v93, "chain", *(int *)(a1 + 140));
  v9 = 61512;
  logfmt_raw(
    v95,
    0x1000u,
    0,
    v94,
    v93[0],
    v93[1],
    v93[2],
    v93[3],
    v93[4],
    v93[5],
    v93[6],
    v94,
    "%s...",
    "SOC_24G_seq1_20210922_update");
  V_UNLOCK();
  v10 = 61441;
  v11 = 61630;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_eth/backend_eth.c",
    169,
    "SOC_24G_seq1_20210922_update",
    28,
    5062,
    60,
    v95);
  v12 = a4 == 8;
  v13 = 61497;
  if ( a4 != 8 )
    v13 = 57;
  v14 = 61447;
  v92 = v13;
  v15 = 61495;
  if ( a4 != 8 )
  {
    v15 = 55;
    v14 = 7;
  }
  v91 = v15;
  v16 = 61542;
  if ( a4 != 8 )
    v16 = 102;
  v88 = v14;
  v90 = v16;
  v17 = 61541;
  if ( a4 != 8 )
  {
    v17 = 101;
    v14 = 54;
  }
  v89 = v17;
  v18 = 61494;
  if ( a4 == 8 )
    v14 = 61494;
  else
    v18 = 53;
  v87 = v14;
  if ( a4 == 8 )
    v18 = 61493;
  v19 = 61492;
  if ( a4 != 8 )
    v19 = 52;
  v86 = v18;
  v85 = v19;
  v20 = 61490;
  if ( a4 != 8 )
    v20 = 50;
  v21 = 61484;
  v84 = v20;
  v22 = 61446;
  if ( a4 != 8 )
  {
    v22 = 6;
    v21 = 44;
  }
  v83 = v22;
  v82 = v21;
  if ( a4 == 8 )
    v21 = 61483;
  v23 = 61481;
  if ( a4 != 8 )
  {
    v23 = 41;
    v21 = 43;
  }
  v80 = v23;
  v24 = 61480;
  if ( a4 != 8 )
    v24 = 40;
  v81 = v21;
  v25 = 61479;
  v79 = v24;
  if ( a4 != 8 )
    v25 = 39;
  v78 = v25;
  if ( a4 == 8 )
    v25 = 61510;
  v26 = 61556;
  if ( a4 != 8 )
  {
    v26 = 116;
    v25 = 70;
  }
  v77 = v26;
  v27 = 61474;
  if ( a4 != 8 )
    v27 = 34;
  v54 = v25;
  v76 = v27;
  v28 = 61545;
  v29 = 61580;
  if ( a4 != 8 )
  {
    v28 = 105;
    v29 = 140;
  }
  v75 = v28;
  v74 = v29;
  v30 = 61579;
  v31 = 61606;
  if ( a4 != 8 )
  {
    v30 = 139;
    v31 = 166;
  }
  v73 = v30;
  v72 = v31;
  v32 = 61564;
  v33 = 61590;
  if ( a4 != 8 )
  {
    v32 = 124;
    v33 = 150;
  }
  v71 = v32;
  v70 = v33;
  v34 = 61443;
  if ( a4 != 8 )
    v34 = 3;
  v69 = v34;
  if ( a4 == 8 )
    v35 = 61448;
  else
    v35 = 8;
  v59 = v35;
  if ( a4 == 8 )
    v35 = 61442;
  v36 = 61622;
  if ( a4 != 8 )
    v36 = 182;
  v68 = v36;
  v37 = 61566;
  if ( a4 != 8 )
  {
    v37 = 126;
    v35 = 2;
  }
  v67 = v37;
  v53 = v35;
  if ( a4 == 8 )
    v38 = 61514;
  else
    v38 = 74;
  v39 = 61458;
  if ( a4 != 8 )
    v39 = 18;
  v40 = 61550;
  v58 = v38;
  if ( a4 != 8 )
    v40 = 110;
  v66 = v39;
  v41 = 61469;
  v42 = 61472;
  if ( a4 != 8 )
  {
    v41 = 29;
    v42 = 32;
  }
  v52 = v40;
  v65 = v42;
  v43 = 61466;
  v64 = v41;
  if ( a4 != 8 )
    v43 = 26;
  v44 = 61467;
  if ( a4 != 8 )
    v44 = 27;
  v57 = v43;
  v45 = 61465;
  v63 = v44;
  if ( a4 != 8 )
    v45 = 25;
  v46 = 61488;
  if ( a4 != 8 )
  {
    v46 = 48;
    v10 = 1;
  }
  v56 = v45;
  v62 = v46;
  v47 = 61487;
  if ( a4 != 8 )
    v47 = 47;
  v61 = v47;
  if ( a4 == 8 )
    v48 = 61482;
  else
    v48 = 42;
  v49 = 61551;
  if ( a4 != 8 )
    v49 = 111;
  v55 = v48;
  v60 = v49;
  if ( a4 != 8 )
  {
    v11 = 190;
    v9 = 72;
    v7 = 71;
  }
  v50 = 61513;
  if ( !v12 )
  {
    v8 = 56;
    v50 = 73;
  }
  sub_5E03C(a1, a3, v10, -9);
  sub_5E03C(a1, a3, v52, 0);
  sub_5C8F0(a1, a3, 144, -520093697);
  sub_5C8F0(a1, a3, 145, -2147438591);
  sub_5C8F0(a1, a3, 144, 251658240);
  sub_5C8F0(a1, a3, 145, -2147438529);
  sub_5C8F0(a1, a3, 144, -520093697);
  sub_5C8F0(a1, a3, 145, -2147434495);
  sub_5C8F0(a1, a3, 144, 251658240);
  sub_5C8F0(a1, a3, 145, -2147434433);
  sub_5C8F0(a1, a3, 144, -1048321);
  sub_5C8F0(a1, a3, 145, -2147438591);
  sub_5C8F0(a1, a3, 144, 256);
  sub_5C8F0(a1, a3, 145, -2147438530);
  sub_5C8F0(a1, a3, 144, -1048321);
  sub_5C8F0(a1, a3, 145, -2147434495);
  sub_5C8F0(a1, a3, 144, 256);
  sub_5C8F0(a1, a3, 145, -2147434434);
  sub_5C8F0(a1, a3, 144, -4096);
  sub_5C8F0(a1, a3, 145, -2147438591);
  sub_5C8F0(a1, a3, 144, 4);
  sub_5C8F0(a1, a3, 145, -2147438529);
  sub_5C8F0(a1, a3, 144, -4096);
  sub_5C8F0(a1, a3, 145, -2147434495);
  sub_5C8F0(a1, a3, 144, 4);
  sub_5C8F0(a1, a3, 145, -2147434433);
  sub_5E03C(a1, a3, v10, -3);
  sub_5E03C(a1, a3, v52, 0);
  sub_5E03C(a1, a3, v10, 0x7FFFFFFF);
  sub_5E03C(a1, a3, v60, 0x80000000);
  sub_5E03C(a1, a3, v10, -262145);
  sub_5E03C(a1, a3, v52, 0);
  sub_5E03C(a1, a3, v10, -5);
  sub_5E03C(a1, a3, v52, 0);
  sub_5C8F0(a1, a3, 144, 0xFFFFFF);
  sub_5C8F0(a1, a3, 145, -2147438591);
  sub_5C8F0(a1, a3, 144, 838860800);
  sub_5C8F0(a1, a3, 145, -2147438590);
  sub_5C8F0(a1, a3, 144, 0xFFFFFF);
  sub_5C8F0(a1, a3, 145, -2147434495);
  sub_5C8F0(a1, a3, 144, 838860800);
  sub_5C8F0(a1, a3, 145, -2147434494);
  sub_5C8F0(a1, a3, 144, -4);
  sub_5C8F0(a1, a3, 145, -2147438591);
  sub_5C8F0(a1, a3, 144, 0);
  sub_5C8F0(a1, a3, 145, -2147438589);
  sub_5C8F0(a1, a3, 144, -4);
  sub_5C8F0(a1, a3, 145, -2147434495);
  sub_5C8F0(a1, a3, 144, 0);
  sub_5C8F0(a1, a3, 145, -2147434493);
  sub_5C8F0(a1, a3, 144, 0xFFFFFFF);
  sub_5C8F0(a1, a3, 145, -2147438591);
  sub_5C8F0(a1, a3, 144, 0x20000000);
  sub_5C8F0(a1, a3, 145, -2147438587);
  sub_5C8F0(a1, a3, 144, 0xFFFFFFF);
  sub_5C8F0(a1, a3, 145, -2147434495);
  sub_5C8F0(a1, a3, 144, 0x20000000);
  sub_5C8F0(a1, a3, 145, -2147434491);
  sub_5C8F0(a1, a3, 144, -64);
  sub_5C8F0(a1, a3, 145, -2147438591);
  sub_5C8F0(a1, a3, 144, 3);
  sub_5C8F0(a1, a3, 145, -2147438586);
  sub_5C8F0(a1, a3, 144, -64);
  sub_5C8F0(a1, a3, 145, -2147434495);
  sub_5C8F0(a1, a3, 144, 3);
  sub_5C8F0(a1, a3, 145, -2147434490);
  sub_5E03C(a1, a3, v10, -1024);
  sub_5E03C(a1, a3, v55, 50);
  sub_5E03C(a1, a3, v10, 0xFFFFFF);
  sub_5E03C(a1, a3, v61, 838860800);
  sub_5E03C(a1, a3, v10, -4);
  sub_5E03C(a1, a3, v62, 0);
  sub_5E03C(a1, a3, v10, -2049);
  sub_5E03C(a1, a3, v56, 0);
  sub_5E03C(a1, a3, v10, -2097153);
  sub_5E03C(a1, a3, v63, 0);
  sub_5E03C(a1, a3, v10, -536870913);
  sub_5E03C(a1, a3, v57, 0);
  sub_5E03C(a1, a3, v10, -5);
  sub_5E03C(a1, a3, v64, 4);
  sub_5E03C(a1, a3, v10, 0x7FFFFFFF);
  sub_5E03C(a1, a3, v57, 0);
  sub_5E03C(a1, a3, v10, -1025);
  sub_5E03C(a1, a3, v7, 0);
  sub_5C8F0(a1, a3, 144, -7340033);
  sub_5C8F0(a1, a3, 145, -2147450879);
  sub_5C8F0(a1, a3, 144, 0x200000);
  sub_5C8F0(a1, a3, 145, -2147450872);
  sub_5C8F0(a1, a3, 144, -57345);
  sub_5C8F0(a1, a3, 145, -2147450879);
  sub_5C8F0(a1, a3, 144, 40960);
  sub_5C8F0(a1, a3, 145, -2147450871);
  sub_5E03C(a1, a3, v10, -67108865);
  sub_5E03C(a1, a3, v65, 0x4000000);
  sub_5C8F0(a1, a3, 144, -131073);
  sub_5C8F0(a1, a3, 145, -2147450879);
  sub_5C8F0(a1, a3, 144, 0);
  sub_5C8F0(a1, a3, 145, -2147450818);
  sub_5E03C(a1, a3, v10, -262145);
  sub_5E03C(a1, a3, v66, 0x40000);
  sub_5E03C(a1, a3, v10, -1025);
  sub_5E03C(a1, a3, v58, 1024);
  sub_5E03C(a1, a3, v10, -8388609);
  sub_5E03C(a1, a3, v67, 0x800000);
  sub_5E03C(a1, a3, v10, 0xFFFFFFF);
  sub_5E03C(a1, a3, v68, -1610612736);
  sub_5C8F0(a1, a3, 144, -1009);
  sub_5C8F0(a1, a3, 145, -2147450879);
  sub_5C8F0(a1, a3, 144, 576);
  sub_5C8F0(a1, a3, 145, -2147450787);
  sub_5C8F0(a1, a3, 144, -258049);
  sub_5C8F0(a1, a3, 145, -2147450879);
  sub_5C8F0(a1, a3, 144, 147456);
  sub_5C8F0(a1, a3, 145, -2147450787);
  sub_5C8F0(a1, a3, 144, -66060289);
  sub_5C8F0(a1, a3, 145, -2147450879);
  sub_5C8F0(a1, a3, 144, 37748736);
  sub_5C8F0(a1, a3, 145, -2147450787);
  sub_5C8F0(a1, a3, 144, 0xFFFFFFF);
  sub_5C8F0(a1, a3, 145, -2147450879);
  sub_5C8F0(a1, a3, 144, 0x40000000);
  sub_5C8F0(a1, a3, 145, -2147450787);
  sub_5C8F0(a1, a3, 144, -4);
  sub_5C8F0(a1, a3, 145, -2147450879);
  sub_5C8F0(a1, a3, 144, 2);
  sub_5C8F0(a1, a3, 145, -2147450786);
  sub_5C8F0(a1, a3, 144, -1009);
  sub_5C8F0(a1, a3, 145, -2147450879);
  sub_5C8F0(a1, a3, 144, 64);
  sub_5C8F0(a1, a3, 145, -2147450786);
  sub_5C8F0(a1, a3, 144, -258049);
  sub_5C8F0(a1, a3, 145, -2147450879);
  sub_5C8F0(a1, a3, 144, 0x4000);
  sub_5C8F0(a1, a3, 145, -2147450786);
  sub_5C8F0(a1, a3, 144, -66060289);
  sub_5C8F0(a1, a3, 145, -2147450879);
  sub_5C8F0(a1, a3, 144, 0x400000);
  sub_5C8F0(a1, a3, 145, -2147450786);
  sub_5C8F0(a1, a3, 144, 0xFFFFFFF);
  sub_5C8F0(a1, a3, 145, -2147450879);
  sub_5C8F0(a1, a3, 144, 0x40000000);
  sub_5C8F0(a1, a3, 145, -2147450786);
  sub_5C8F0(a1, a3, 144, -4);
  sub_5C8F0(a1, a3, 145, -2147450879);
  sub_5C8F0(a1, a3, 144, 0);
  sub_5C8F0(a1, a3, 145, -2147450785);
  sub_5C8F0(a1, a3, 144, -524289);
  sub_5C8F0(a1, a3, 145, -2147450879);
  sub_5C8F0(a1, a3, 144, 0);
  sub_5C8F0(a1, a3, 145, -2147450815);
  sub_5C8F0(a1, a3, 144, -1009);
  sub_5C8F0(a1, a3, 145, -2147450879);
  sub_5C8F0(a1, a3, 144, 64);
  sub_5C8F0(a1, a3, 145, -2147450878);
  sub_5E03C(a1, a3, v10, -196609);
  sub_5E03C(a1, a3, v53, 196608);
  sub_5E03C(a1, a3, v10, -4);
  sub_5E03C(a1, a3, v59, 3);
  sub_5E03C(a1, a3, v10, -196609);
  sub_5E03C(a1, a3, v59, 196608);
  sub_5E03C(a1, a3, v10, -196609);
  sub_5E03C(a1, a3, v69, 196608);
  sub_5C8F0(a1, a3, 144, -786433);
  sub_5C8F0(a1, a3, 145, -2147450879);
  sub_5C8F0(a1, a3, 144, 786432);
  sub_5C8F0(a1, a3, 145, -2147450818);
  sub_5C8F0(a1, a3, 144, -2);
  sub_5C8F0(a1, a3, 145, -2147450879);
  sub_5C8F0(a1, a3, 144, 1);
  sub_5C8F0(a1, a3, 145, -2147450878);
  sub_5C8F0(a1, a3, 144, -8388609);
  sub_5C8F0(a1, a3, 145, -2147450879);
  sub_5C8F0(a1, a3, 144, 0x800000);
  sub_5C8F0(a1, a3, 145, -2147450808);
  sub_5C8F0(a1, a3, 144, -805306369);
  sub_5C8F0(a1, a3, 145, -2147450879);
  sub_5C8F0(a1, a3, 144, 0x20000000);
  sub_5C8F0(a1, a3, 145, -2147450804);
  sub_5C8F0(a1, a3, 144, -97);
  sub_5C8F0(a1, a3, 145, -2147450879);
  sub_5C8F0(a1, a3, 144, 32);
  sub_5C8F0(a1, a3, 145, -2147450868);
  sub_5E03C(a1, a3, v10, -12289);
  sub_5E03C(a1, a3, v70, 0x2000);
  sub_5E03C(a1, a3, v10, -4194305);
  sub_5E03C(a1, a3, v71, 0x400000);
  sub_5E03C(a1, a3, v10, -497);
  sub_5E03C(a1, a3, v11, 384);
  sub_5E03C(a1, a3, v10, -225);
  sub_5E03C(a1, a3, v72, 0);
  sub_5E03C(a1, a3, v10, -61441);
  sub_5E03C(a1, a3, v11, 0x4000);
  serdes_apb_write_1_chip(a1, 1, 7u, v11, 24576);
  serdes_apb_write_1_chip(a1, 1, 6u, v11, 20480);
  serdes_apb_write_1_chip(a1, 2, 5u, v11, 20480);
  serdes_apb_write_1_chip(a1, 4, 7u, v11, 24576);
  serdes_apb_write_1_chip(a1, 4, 3u, v11, 20480);
  serdes_apb_write_1_chip(a1, 5, 7u, v11, 24576);
  serdes_apb_write_1_chip(a1, 5, 0xFu, v11, 20480);
  serdes_apb_write_1_chip(a1, 6, 7u, v11, 24576);
  serdes_apb_write_1_chip(a1, 6, 0xFu, v11, 20480);
  sub_5E03C(a1, a3, v10, -32769);
  sub_5E03C(a1, a3, v73, 0x8000);
  sub_5E03C(a1, a3, v10, -65537);
  sub_5E03C(a1, a3, v74, 0x10000);
  sub_5E03C(a1, a3, v10, -131073);
  sub_5E03C(a1, a3, v74, 0x20000);
  sub_5E03C(a1, a3, v10, -65521);
  sub_5E03C(a1, a3, v53, 0x8000);
  sub_5E03C(a1, a3, v10, -13);
  sub_5E03C(a1, a3, v75, 8);
  sub_5E03C(a1, a3, v10, -1537);
  sub_5E03C(a1, a3, v9, 1024);
  sub_5C8F0(a1, a3, 144, -13);
  sub_5C8F0(a1, a3, 145, -2147450879);
  sub_5C8F0(a1, a3, 144, 8);
  sub_5C8F0(a1, a3, 145, -2147450878);
  sub_5C8F0(a1, a3, 144, -100663297);
  sub_5C8F0(a1, a3, 145, -2147450879);
  sub_5C8F0(a1, a3, 144, 100663296);
  sub_5C8F0(a1, a3, 145, -2147450820);
  sub_5C8F0(a1, a3, 144, 0x7FFFFFFF);
  sub_5C8F0(a1, a3, 145, -2147450879);
  sub_5C8F0(a1, a3, 144, 0);
  sub_5C8F0(a1, a3, 145, -2147450853);
  sub_5C8F0(a1, a3, 144, -2);
  sub_5C8F0(a1, a3, 145, -2147450879);
  sub_5C8F0(a1, a3, 144, 0);
  sub_5C8F0(a1, a3, 145, -2147450852);
  sub_5E03C(a1, a3, v10, -4);
  sub_5E03C(a1, a3, v56, 1);
  sub_5E03C(a1, a3, v10, -201326593);
  sub_5E03C(a1, a3, v76, 0x4000000);
  sub_5E03C(a1, a3, v10, -805306369);
  sub_5E03C(a1, a3, v77, 0x10000000);
  sub_5C8F0(a1, a3, 144, -28673);
  sub_5C8F0(a1, a3, 145, -2147450879);
  sub_5C8F0(a1, a3, 144, 12288);
  sub_5C8F0(a1, a3, 145, -2147450860);
  sub_5E03C(a1, a3, v10, -32505857);
  sub_5E03C(a1, a3, v54, 0);
  sub_5E03C(a1, a3, v10, 0xFFFFFFF);
  sub_5E03C(a1, a3, v54, 0);
  sub_5E03C(a1, a3, v10, -2);
  sub_5E03C(a1, a3, v7, 0);
  sub_5E03C(a1, a3, v10, -497);
  sub_5E03C(a1, a3, v7, 0);
  sub_5E03C(a1, a3, v10, -126977);
  sub_5E03C(a1, a3, v7, 0);
  sub_5E03C(a1, a3, v10, -32505857);
  sub_5E03C(a1, a3, v7, 0);
  sub_5E03C(a1, a3, v10, 0xFFFFFFF);
  sub_5E03C(a1, a3, v7, 0);
  sub_5E03C(a1, a3, v10, -2);
  sub_5E03C(a1, a3, v9, 0);
  sub_5E03C(a1, a3, v10, -497);
  sub_5E03C(a1, a3, v9, 0);
  sub_5E03C(a1, a3, v10, -126977);
  sub_5E03C(a1, a3, v9, 0);
  sub_5E03C(a1, a3, v10, -32505857);
  sub_5E03C(a1, a3, v9, 0);
  sub_5E03C(a1, a3, v10, 0xFFFFFFF);
  sub_5E03C(a1, a3, v9, 0);
  sub_5E03C(a1, a3, v10, -2);
  sub_5E03C(a1, a3, v50, 0);
  sub_5E03C(a1, a3, v10, -497);
  sub_5E03C(a1, a3, v50, 0);
  sub_5E03C(a1, a3, v10, -126977);
  sub_5E03C(a1, a3, v50, 0);
  sub_5E03C(a1, a3, v10, -32505857);
  sub_5E03C(a1, a3, v50, 0);
  sub_5E03C(a1, a3, v10, 0xFFFFFFF);
  sub_5E03C(a1, a3, v50, 0);
  sub_5E03C(a1, a3, v10, -2);
  sub_5E03C(a1, a3, v58, 0);
  sub_5E03C(a1, a3, v10, -497);
  sub_5E03C(a1, a3, v58, 0);
  sub_5E03C(a1, a3, v10, -126977);
  sub_5E03C(a1, a3, v58, 0);
  sub_5E03C(a1, a3, v10, -917505);
  sub_5E03C(a1, a3, v78, 0);
  sub_5E03C(a1, a3, v10, -234881025);
  sub_5E03C(a1, a3, v78, 0);
  sub_5E03C(a1, a3, v10, -15);
  sub_5E03C(a1, a3, v79, 0);
  sub_5E03C(a1, a3, v10, -3585);
  sub_5E03C(a1, a3, v79, 0);
  sub_5E03C(a1, a3, v10, -917505);
  sub_5E03C(a1, a3, v79, 0);
  sub_5E03C(a1, a3, v10, -234881025);
  sub_5E03C(a1, a3, v79, 0);
  sub_5E03C(a1, a3, v10, -15);
  sub_5E03C(a1, a3, v80, 0);
  sub_5E03C(a1, a3, v10, -3585);
  sub_5E03C(a1, a3, v80, 0);
  sub_5E03C(a1, a3, v10, -917505);
  sub_5E03C(a1, a3, v80, 0);
  sub_5E03C(a1, a3, v10, -917505);
  sub_5E03C(a1, a3, v55, 0);
  sub_5E03C(a1, a3, v10, -234881025);
  sub_5E03C(a1, a3, v55, 0);
  sub_5E03C(a1, a3, v10, -8);
  sub_5E03C(a1, a3, v81, 0);
  sub_5E03C(a1, a3, v10, -1793);
  sub_5E03C(a1, a3, v81, 0);
  sub_5E03C(a1, a3, v10, -917505);
  sub_5E03C(a1, a3, v81, 0);
  sub_5E03C(a1, a3, v10, -234881025);
  sub_5E03C(a1, a3, v81, 0);
  sub_5E03C(a1, a3, v10, -15);
  sub_5E03C(a1, a3, v82, 0);
  sub_5E03C(a1, a3, v10, -241);
  sub_5E03C(a1, a3, v83, 96);
  sub_5E03C(a1, a3, v10, -4);
  sub_5E03C(a1, a3, v53, 2);
  sub_5E03C(a1, a3, v10, -8193);
  sub_5E03C(a1, a3, v84, 0);
  sub_5E03C(a1, a3, v10, -1025);
  sub_5E03C(a1, a3, v85, 0);
  sub_5E03C(a1, a3, v10, -9);
  sub_5E03C(a1, a3, v86, 8);
  sub_5E03C(a1, a3, v10, -134217729);
  sub_5E03C(a1, a3, v87, 0x8000000);
  sub_5E03C(a1, a3, v10, -2);
  sub_5E03C(a1, a3, v54, 0);
  sub_5E03C(a1, a3, v10, -3145729);
  sub_5E03C(a1, a3, v88, 0x200000);
  sub_5E03C(a1, a3, v10, 0xFFFFFFF);
  sub_5E03C(a1, a3, v89, -268435456);
  sub_5E03C(a1, a3, v10, -16);
  sub_5E03C(a1, a3, v90, 8);
  sub_5E03C(a1, a3, v10, -234881025);
  sub_5E03C(a1, a3, v91, 0x8000000);
  sub_5E03C(a1, a3, v10, -8);
  sub_5E03C(a1, a3, v8, 6);
  sub_5E03C(a1, a3, v10, -1793);
  sub_5E03C(a1, a3, v8, 768);
  sub_5E03C(a1, a3, v10, -458753);
  sub_5E03C(a1, a3, v8, 393216);
  sub_5E03C(a1, a3, v10, -117440513);
  sub_5E03C(a1, a3, v8, 0x2000000);
  sub_5E03C(a1, a3, v10, -8);
  sub_5E03C(a1, a3, v92, 6);
  sub_5E03C(a1, a3, v10, -8388609);
  sub_5E03C(a1, a3, v84, 0x800000);
  sub_5E03C(a1, a3, v10, -2049);
  sub_5E03C(a1, a3, v86, 2048);
  sub_5E03C(a1, a3, v10, 0);
  sub_5C8F0(a1, a3, 144, 0);
  sub_5C8F0(a1, a3, 145, -2147450879);
  sub_5C8F0(a1, a3, 144, 0);
  sub_5C8F0(a1, a3, 145, -2147442687);
  sub_5C8F0(a1, a3, 144, 0);
  sub_5C8F0(a1, a3, 145, -2147438591);
  sub_5C8F0(a1, a3, 144, 0);
  sub_5C8F0(a1, a3, 145, -2147434495);
  return 0;
}
