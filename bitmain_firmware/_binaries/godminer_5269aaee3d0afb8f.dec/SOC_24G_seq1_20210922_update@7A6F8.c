int __fastcall SOC_24G_seq1_20210922_update(int a1, int a2, unsigned __int8 a3, int a4)
{
  char *v7; // r1
  int v8; // r11
  int v9; // r10
  int v10; // r9
  int v11; // r9
  _DWORD *v12; // r3
  int v13; // r1
  int v14; // r6
  int v15; // r7
  bool v16; // zf
  int v17; // r12
  int v18; // lr
  int v19; // r12
  int v20; // r12
  int v21; // r12
  int v22; // r12
  int v23; // lr
  int v24; // lr
  int v25; // r12
  int v26; // lr
  int v27; // lr
  int v28; // lr
  int v29; // r12
  int v30; // lr
  int v31; // lr
  int v32; // r12
  int v33; // lr
  int v34; // r12
  int v35; // lr
  int v36; // r12
  int v37; // lr
  int v38; // r12
  int v39; // r12
  int v40; // lr
  int v41; // lr
  int v42; // r12
  int v43; // lr
  int v44; // r3
  int v45; // r12
  int v46; // lr
  int v47; // lr
  int v48; // r12
  int v49; // lr
  int v50; // r12
  int v51; // lr
  int v52; // lr
  int v53; // r12
  int v54; // r8
  int v56; // [sp+20h] [bp-10D4h]
  int v57; // [sp+2Ch] [bp-10C8h]
  int v58; // [sp+30h] [bp-10C4h]
  int v59; // [sp+34h] [bp-10C0h]
  int v60; // [sp+38h] [bp-10BCh]
  int v61; // [sp+3Ch] [bp-10B8h]
  int v62; // [sp+40h] [bp-10B4h]
  int v63; // [sp+44h] [bp-10B0h]
  int v64; // [sp+48h] [bp-10ACh]
  int v65; // [sp+4Ch] [bp-10A8h]
  int v66; // [sp+50h] [bp-10A4h]
  int v67; // [sp+54h] [bp-10A0h]
  int v68; // [sp+58h] [bp-109Ch]
  int v69; // [sp+5Ch] [bp-1098h]
  int v70; // [sp+60h] [bp-1094h]
  int v71; // [sp+64h] [bp-1090h]
  int v72; // [sp+68h] [bp-108Ch]
  int v73; // [sp+6Ch] [bp-1088h]
  int v74; // [sp+70h] [bp-1084h]
  int v75; // [sp+74h] [bp-1080h]
  int v76; // [sp+78h] [bp-107Ch]
  int v77; // [sp+7Ch] [bp-1078h]
  int v78; // [sp+80h] [bp-1074h]
  int v79; // [sp+84h] [bp-1070h]
  int v80; // [sp+88h] [bp-106Ch]
  int v81; // [sp+8Ch] [bp-1068h]
  int v82; // [sp+90h] [bp-1064h]
  int v83; // [sp+94h] [bp-1060h]
  int v84; // [sp+98h] [bp-105Ch]
  int v85; // [sp+9Ch] [bp-1058h]
  int v86; // [sp+A0h] [bp-1054h]
  int v87; // [sp+A4h] [bp-1050h]
  int v88; // [sp+A8h] [bp-104Ch]
  int v89; // [sp+ACh] [bp-1048h]
  int v90; // [sp+B0h] [bp-1044h]
  int v91; // [sp+B4h] [bp-1040h]
  int v92; // [sp+B8h] [bp-103Ch]
  int v93; // [sp+BCh] [bp-1038h]
  int v94; // [sp+C0h] [bp-1034h]
  int v95; // [sp+C4h] [bp-1030h]
  int v96; // [sp+C8h] [bp-102Ch]
  int v97; // [sp+CCh] [bp-1028h]
  _DWORD v98[7]; // [sp+D0h] [bp-1024h] BYREF
  int v99; // [sp+ECh] [bp-1008h]
  char v100[4100]; // [sp+F0h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v7) = -6092;
  HIWORD(v7) = ((unsigned int)&loc_12D592 + 2) >> 16;
  v8 = 61511;
  v9 = 61496;
  V_INT((int)v98, v7, *(int *)(a1 + 140));
  LOWORD(v10) = -20196;
  HIWORD(v10) = (unsigned int)"_one_lane" >> 16;
  v56 = v10;
  v11 = 61512;
  logfmt_raw(
    v100,
    0x1000u,
    0,
    v99,
    v98[0],
    v98[1],
    v98[2],
    v98[3],
    v98[4],
    v98[5],
    v98[6],
    v99,
    v56,
    "SOC_24G_seq1_20210922_update");
  V_UNLOCK();
  LOWORD(v12) = -14756;
  HIWORD(v12) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v13) = -23296;
  HIWORD(v13) = (unsigned int)"zer_tuning_one_lane" >> 16;
  v14 = 61441;
  v15 = 61630;
  zlog(*v12, v13, 154, "SOC_24G_seq1_20210922_update", 28, 5062, 60, v100);
  v16 = a4 == 8;
  v17 = 61497;
  if ( a4 != 8 )
    v17 = 57;
  v18 = 61447;
  v97 = v17;
  v19 = 61495;
  if ( a4 != 8 )
  {
    v19 = 55;
    v18 = 7;
  }
  v96 = v19;
  v20 = 61542;
  if ( a4 != 8 )
    v20 = 102;
  v93 = v18;
  v95 = v20;
  v21 = 61541;
  if ( a4 != 8 )
  {
    v21 = 101;
    v18 = 54;
  }
  v94 = v21;
  v22 = 61494;
  if ( a4 == 8 )
    v18 = 61494;
  else
    v22 = 53;
  v92 = v18;
  if ( a4 == 8 )
    v22 = 61493;
  v23 = 61492;
  if ( a4 != 8 )
    v23 = 52;
  v91 = v22;
  v90 = v23;
  v24 = 61490;
  if ( a4 != 8 )
    v24 = 50;
  v25 = 61484;
  v89 = v24;
  v26 = 61446;
  if ( a4 != 8 )
  {
    v26 = 6;
    v25 = 44;
  }
  v88 = v26;
  v87 = v25;
  if ( a4 == 8 )
    v25 = 61483;
  v27 = 61481;
  if ( a4 != 8 )
  {
    v27 = 41;
    v25 = 43;
  }
  v85 = v27;
  v28 = 61480;
  if ( a4 != 8 )
    v28 = 40;
  v86 = v25;
  v29 = 61479;
  v84 = v28;
  if ( a4 != 8 )
    v29 = 39;
  v83 = v29;
  if ( a4 == 8 )
    v29 = 61510;
  v30 = 61556;
  if ( a4 != 8 )
  {
    v30 = 116;
    v29 = 70;
  }
  v82 = v30;
  v31 = 61474;
  if ( a4 != 8 )
    v31 = 34;
  v59 = v29;
  v81 = v31;
  v32 = 61545;
  v33 = 61580;
  if ( a4 != 8 )
  {
    v32 = 105;
    v33 = 140;
  }
  v80 = v32;
  v79 = v33;
  v34 = 61579;
  v35 = 61606;
  if ( a4 != 8 )
  {
    v34 = 139;
    v35 = 166;
  }
  v78 = v34;
  v77 = v35;
  v36 = 61564;
  v37 = 61590;
  if ( a4 != 8 )
  {
    v36 = 124;
    v37 = 150;
  }
  v76 = v36;
  v75 = v37;
  v38 = 61443;
  if ( a4 != 8 )
    v38 = 3;
  v74 = v38;
  if ( a4 == 8 )
    v39 = 61448;
  else
    v39 = 8;
  v64 = v39;
  if ( a4 == 8 )
    v39 = 61442;
  v40 = 61622;
  if ( a4 != 8 )
    v40 = 182;
  v73 = v40;
  v41 = 61566;
  if ( a4 != 8 )
  {
    v41 = 126;
    v39 = 2;
  }
  v72 = v41;
  v58 = v39;
  if ( a4 == 8 )
    v42 = 61514;
  else
    v42 = 74;
  v43 = 61458;
  if ( a4 != 8 )
    v43 = 18;
  v44 = 61550;
  v63 = v42;
  if ( a4 != 8 )
    v44 = 110;
  v71 = v43;
  v45 = 61469;
  v46 = 61472;
  if ( a4 != 8 )
  {
    v45 = 29;
    v46 = 32;
  }
  v57 = v44;
  v70 = v46;
  v47 = 61466;
  v69 = v45;
  if ( a4 != 8 )
    v47 = 26;
  v48 = 61467;
  if ( a4 != 8 )
    v48 = 27;
  v62 = v47;
  v49 = 61465;
  v68 = v48;
  if ( a4 != 8 )
    v49 = 25;
  v50 = 61488;
  if ( a4 != 8 )
  {
    v50 = 48;
    v14 = 1;
  }
  v61 = v49;
  v67 = v50;
  v51 = 61487;
  if ( a4 != 8 )
    v51 = 47;
  v66 = v51;
  if ( a4 == 8 )
    v52 = 61482;
  else
    v52 = 42;
  v53 = 61551;
  if ( a4 != 8 )
    v53 = 111;
  v60 = v52;
  v65 = v53;
  if ( a4 != 8 )
  {
    v15 = 190;
    v11 = 72;
    v8 = 71;
  }
  v54 = 61513;
  if ( !v16 )
  {
    v9 = 56;
    v54 = 73;
  }
  sub_5E2CC(a1, a3, v14, -9);
  sub_5E2CC(a1, a3, v57, 0);
  sub_5CB80(a1, a3, 144, -520093697);
  sub_5CB80(a1, a3, 145, -2147438591);
  sub_5CB80(a1, a3, 144, 251658240);
  sub_5CB80(a1, a3, 145, -2147438529);
  sub_5CB80(a1, a3, 144, -520093697);
  sub_5CB80(a1, a3, 145, -2147434495);
  sub_5CB80(a1, a3, 144, 251658240);
  sub_5CB80(a1, a3, 145, -2147434433);
  sub_5CB80(a1, a3, 144, -1048321);
  sub_5CB80(a1, a3, 145, -2147438591);
  sub_5CB80(a1, a3, 144, 256);
  sub_5CB80(a1, a3, 145, -2147438530);
  sub_5CB80(a1, a3, 144, -1048321);
  sub_5CB80(a1, a3, 145, -2147434495);
  sub_5CB80(a1, a3, 144, 256);
  sub_5CB80(a1, a3, 145, -2147434434);
  sub_5CB80(a1, a3, 144, -4096);
  sub_5CB80(a1, a3, 145, -2147438591);
  sub_5CB80(a1, a3, 144, 4);
  sub_5CB80(a1, a3, 145, -2147438529);
  sub_5CB80(a1, a3, 144, -4096);
  sub_5CB80(a1, a3, 145, -2147434495);
  sub_5CB80(a1, a3, 144, 4);
  sub_5CB80(a1, a3, 145, -2147434433);
  sub_5E2CC(a1, a3, v14, -3);
  sub_5E2CC(a1, a3, v57, 0);
  sub_5E2CC(a1, a3, v14, 0x7FFFFFFF);
  sub_5E2CC(a1, a3, v65, 0x80000000);
  sub_5E2CC(a1, a3, v14, -262145);
  sub_5E2CC(a1, a3, v57, 0);
  sub_5E2CC(a1, a3, v14, -5);
  sub_5E2CC(a1, a3, v57, 0);
  sub_5CB80(a1, a3, 144, 0xFFFFFF);
  sub_5CB80(a1, a3, 145, -2147438591);
  sub_5CB80(a1, a3, 144, 838860800);
  sub_5CB80(a1, a3, 145, -2147438590);
  sub_5CB80(a1, a3, 144, 0xFFFFFF);
  sub_5CB80(a1, a3, 145, -2147434495);
  sub_5CB80(a1, a3, 144, 838860800);
  sub_5CB80(a1, a3, 145, -2147434494);
  sub_5CB80(a1, a3, 144, -4);
  sub_5CB80(a1, a3, 145, -2147438591);
  sub_5CB80(a1, a3, 144, 0);
  sub_5CB80(a1, a3, 145, -2147438589);
  sub_5CB80(a1, a3, 144, -4);
  sub_5CB80(a1, a3, 145, -2147434495);
  sub_5CB80(a1, a3, 144, 0);
  sub_5CB80(a1, a3, 145, -2147434493);
  sub_5CB80(a1, a3, 144, 0xFFFFFFF);
  sub_5CB80(a1, a3, 145, -2147438591);
  sub_5CB80(a1, a3, 144, 0x20000000);
  sub_5CB80(a1, a3, 145, -2147438587);
  sub_5CB80(a1, a3, 144, 0xFFFFFFF);
  sub_5CB80(a1, a3, 145, -2147434495);
  sub_5CB80(a1, a3, 144, 0x20000000);
  sub_5CB80(a1, a3, 145, -2147434491);
  sub_5CB80(a1, a3, 144, -64);
  sub_5CB80(a1, a3, 145, -2147438591);
  sub_5CB80(a1, a3, 144, 3);
  sub_5CB80(a1, a3, 145, -2147438586);
  sub_5CB80(a1, a3, 144, -64);
  sub_5CB80(a1, a3, 145, -2147434495);
  sub_5CB80(a1, a3, 144, 3);
  sub_5CB80(a1, a3, 145, -2147434490);
  sub_5E2CC(a1, a3, v14, -1024);
  sub_5E2CC(a1, a3, v60, 50);
  sub_5E2CC(a1, a3, v14, 0xFFFFFF);
  sub_5E2CC(a1, a3, v66, 838860800);
  sub_5E2CC(a1, a3, v14, -4);
  sub_5E2CC(a1, a3, v67, 0);
  sub_5E2CC(a1, a3, v14, -2049);
  sub_5E2CC(a1, a3, v61, 0);
  sub_5E2CC(a1, a3, v14, -2097153);
  sub_5E2CC(a1, a3, v68, 0);
  sub_5E2CC(a1, a3, v14, -536870913);
  sub_5E2CC(a1, a3, v62, 0);
  sub_5E2CC(a1, a3, v14, -5);
  sub_5E2CC(a1, a3, v69, 4);
  sub_5E2CC(a1, a3, v14, 0x7FFFFFFF);
  sub_5E2CC(a1, a3, v62, 0);
  sub_5E2CC(a1, a3, v14, -1025);
  sub_5E2CC(a1, a3, v8, 0);
  sub_5CB80(a1, a3, 144, -7340033);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 0x200000);
  sub_5CB80(a1, a3, 145, -2147450872);
  sub_5CB80(a1, a3, 144, -57345);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 40960);
  sub_5CB80(a1, a3, 145, -2147450871);
  sub_5E2CC(a1, a3, v14, -67108865);
  sub_5E2CC(a1, a3, v70, 0x4000000);
  sub_5CB80(a1, a3, 144, -131073);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 0);
  sub_5CB80(a1, a3, 145, -2147450818);
  sub_5E2CC(a1, a3, v14, -262145);
  sub_5E2CC(a1, a3, v71, 0x40000);
  sub_5E2CC(a1, a3, v14, -1025);
  sub_5E2CC(a1, a3, v63, 1024);
  sub_5E2CC(a1, a3, v14, -8388609);
  sub_5E2CC(a1, a3, v72, 0x800000);
  sub_5E2CC(a1, a3, v14, 0xFFFFFFF);
  sub_5E2CC(a1, a3, v73, -1610612736);
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
  sub_5CB80(a1, a3, 144, -524289);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 0);
  sub_5CB80(a1, a3, 145, -2147450815);
  sub_5CB80(a1, a3, 144, -1009);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 64);
  sub_5CB80(a1, a3, 145, -2147450878);
  sub_5E2CC(a1, a3, v14, -196609);
  sub_5E2CC(a1, a3, v58, 196608);
  sub_5E2CC(a1, a3, v14, -4);
  sub_5E2CC(a1, a3, v64, 3);
  sub_5E2CC(a1, a3, v14, -196609);
  sub_5E2CC(a1, a3, v64, 196608);
  sub_5E2CC(a1, a3, v14, -196609);
  sub_5E2CC(a1, a3, v74, 196608);
  sub_5CB80(a1, a3, 144, -786433);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 786432);
  sub_5CB80(a1, a3, 145, -2147450818);
  sub_5CB80(a1, a3, 144, -2);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 1);
  sub_5CB80(a1, a3, 145, -2147450878);
  sub_5CB80(a1, a3, 144, -8388609);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 0x800000);
  sub_5CB80(a1, a3, 145, -2147450808);
  sub_5CB80(a1, a3, 144, -805306369);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 0x20000000);
  sub_5CB80(a1, a3, 145, -2147450804);
  sub_5CB80(a1, a3, 144, -97);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 32);
  sub_5CB80(a1, a3, 145, -2147450868);
  sub_5E2CC(a1, a3, v14, -12289);
  sub_5E2CC(a1, a3, v75, 0x2000);
  sub_5E2CC(a1, a3, v14, -4194305);
  sub_5E2CC(a1, a3, v76, 0x400000);
  sub_5E2CC(a1, a3, v14, -497);
  sub_5E2CC(a1, a3, v15, 384);
  sub_5E2CC(a1, a3, v14, -225);
  sub_5E2CC(a1, a3, v77, 0);
  sub_5E2CC(a1, a3, v14, -61441);
  sub_5E2CC(a1, a3, v15, 0x4000);
  serdes_apb_write_1_chip(a1, 1, 7u, v15, 24576);
  serdes_apb_write_1_chip(a1, 1, 6u, v15, 20480);
  serdes_apb_write_1_chip(a1, 2, 5u, v15, 20480);
  serdes_apb_write_1_chip(a1, 4, 7u, v15, 24576);
  serdes_apb_write_1_chip(a1, 4, 3u, v15, 20480);
  serdes_apb_write_1_chip(a1, 5, 7u, v15, 24576);
  serdes_apb_write_1_chip(a1, 5, 0xFu, v15, 20480);
  serdes_apb_write_1_chip(a1, 6, 7u, v15, 24576);
  serdes_apb_write_1_chip(a1, 6, 0xFu, v15, 20480);
  sub_5E2CC(a1, a3, v14, -32769);
  sub_5E2CC(a1, a3, v78, 0x8000);
  sub_5E2CC(a1, a3, v14, -65537);
  sub_5E2CC(a1, a3, v79, 0x10000);
  sub_5E2CC(a1, a3, v14, -131073);
  sub_5E2CC(a1, a3, v79, 0x20000);
  sub_5E2CC(a1, a3, v14, -65521);
  sub_5E2CC(a1, a3, v58, 0x8000);
  sub_5E2CC(a1, a3, v14, -13);
  sub_5E2CC(a1, a3, v80, 8);
  sub_5E2CC(a1, a3, v14, -1537);
  sub_5E2CC(a1, a3, v11, 1024);
  sub_5CB80(a1, a3, 144, -13);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 8);
  sub_5CB80(a1, a3, 145, -2147450878);
  sub_5CB80(a1, a3, 144, -100663297);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 100663296);
  sub_5CB80(a1, a3, 145, -2147450820);
  sub_5CB80(a1, a3, 144, 0x7FFFFFFF);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 0);
  sub_5CB80(a1, a3, 145, -2147450853);
  sub_5CB80(a1, a3, 144, -2);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 0);
  sub_5CB80(a1, a3, 145, -2147450852);
  sub_5E2CC(a1, a3, v14, -4);
  sub_5E2CC(a1, a3, v61, 1);
  sub_5E2CC(a1, a3, v14, -201326593);
  sub_5E2CC(a1, a3, v81, 0x4000000);
  sub_5E2CC(a1, a3, v14, -805306369);
  sub_5E2CC(a1, a3, v82, 0x10000000);
  sub_5CB80(a1, a3, 144, -28673);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 12288);
  sub_5CB80(a1, a3, 145, -2147450860);
  sub_5E2CC(a1, a3, v14, -32505857);
  sub_5E2CC(a1, a3, v59, 0);
  sub_5E2CC(a1, a3, v14, 0xFFFFFFF);
  sub_5E2CC(a1, a3, v59, 0);
  sub_5E2CC(a1, a3, v14, -2);
  sub_5E2CC(a1, a3, v8, 0);
  sub_5E2CC(a1, a3, v14, -497);
  sub_5E2CC(a1, a3, v8, 0);
  sub_5E2CC(a1, a3, v14, -126977);
  sub_5E2CC(a1, a3, v8, 0);
  sub_5E2CC(a1, a3, v14, -32505857);
  sub_5E2CC(a1, a3, v8, 0);
  sub_5E2CC(a1, a3, v14, 0xFFFFFFF);
  sub_5E2CC(a1, a3, v8, 0);
  sub_5E2CC(a1, a3, v14, -2);
  sub_5E2CC(a1, a3, v11, 0);
  sub_5E2CC(a1, a3, v14, -497);
  sub_5E2CC(a1, a3, v11, 0);
  sub_5E2CC(a1, a3, v14, -126977);
  sub_5E2CC(a1, a3, v11, 0);
  sub_5E2CC(a1, a3, v14, -32505857);
  sub_5E2CC(a1, a3, v11, 0);
  sub_5E2CC(a1, a3, v14, 0xFFFFFFF);
  sub_5E2CC(a1, a3, v11, 0);
  sub_5E2CC(a1, a3, v14, -2);
  sub_5E2CC(a1, a3, v54, 0);
  sub_5E2CC(a1, a3, v14, -497);
  sub_5E2CC(a1, a3, v54, 0);
  sub_5E2CC(a1, a3, v14, -126977);
  sub_5E2CC(a1, a3, v54, 0);
  sub_5E2CC(a1, a3, v14, -32505857);
  sub_5E2CC(a1, a3, v54, 0);
  sub_5E2CC(a1, a3, v14, 0xFFFFFFF);
  sub_5E2CC(a1, a3, v54, 0);
  sub_5E2CC(a1, a3, v14, -2);
  sub_5E2CC(a1, a3, v63, 0);
  sub_5E2CC(a1, a3, v14, -497);
  sub_5E2CC(a1, a3, v63, 0);
  sub_5E2CC(a1, a3, v14, -126977);
  sub_5E2CC(a1, a3, v63, 0);
  sub_5E2CC(a1, a3, v14, -917505);
  sub_5E2CC(a1, a3, v83, 0);
  sub_5E2CC(a1, a3, v14, -234881025);
  sub_5E2CC(a1, a3, v83, 0);
  sub_5E2CC(a1, a3, v14, -15);
  sub_5E2CC(a1, a3, v84, 0);
  sub_5E2CC(a1, a3, v14, -3585);
  sub_5E2CC(a1, a3, v84, 0);
  sub_5E2CC(a1, a3, v14, -917505);
  sub_5E2CC(a1, a3, v84, 0);
  sub_5E2CC(a1, a3, v14, -234881025);
  sub_5E2CC(a1, a3, v84, 0);
  sub_5E2CC(a1, a3, v14, -15);
  sub_5E2CC(a1, a3, v85, 0);
  sub_5E2CC(a1, a3, v14, -3585);
  sub_5E2CC(a1, a3, v85, 0);
  sub_5E2CC(a1, a3, v14, -917505);
  sub_5E2CC(a1, a3, v85, 0);
  sub_5E2CC(a1, a3, v14, -917505);
  sub_5E2CC(a1, a3, v60, 0);
  sub_5E2CC(a1, a3, v14, -234881025);
  sub_5E2CC(a1, a3, v60, 0);
  sub_5E2CC(a1, a3, v14, -8);
  sub_5E2CC(a1, a3, v86, 0);
  sub_5E2CC(a1, a3, v14, -1793);
  sub_5E2CC(a1, a3, v86, 0);
  sub_5E2CC(a1, a3, v14, -917505);
  sub_5E2CC(a1, a3, v86, 0);
  sub_5E2CC(a1, a3, v14, -234881025);
  sub_5E2CC(a1, a3, v86, 0);
  sub_5E2CC(a1, a3, v14, -15);
  sub_5E2CC(a1, a3, v87, 0);
  sub_5E2CC(a1, a3, v14, -241);
  sub_5E2CC(a1, a3, v88, 96);
  sub_5E2CC(a1, a3, v14, -4);
  sub_5E2CC(a1, a3, v58, 2);
  sub_5E2CC(a1, a3, v14, -8193);
  sub_5E2CC(a1, a3, v89, 0);
  sub_5E2CC(a1, a3, v14, -1025);
  sub_5E2CC(a1, a3, v90, 0);
  sub_5E2CC(a1, a3, v14, -9);
  sub_5E2CC(a1, a3, v91, 8);
  sub_5E2CC(a1, a3, v14, -134217729);
  sub_5E2CC(a1, a3, v92, 0x8000000);
  sub_5E2CC(a1, a3, v14, -2);
  sub_5E2CC(a1, a3, v59, 0);
  sub_5E2CC(a1, a3, v14, -3145729);
  sub_5E2CC(a1, a3, v93, 0x200000);
  sub_5E2CC(a1, a3, v14, 0xFFFFFFF);
  sub_5E2CC(a1, a3, v94, -268435456);
  sub_5E2CC(a1, a3, v14, -16);
  sub_5E2CC(a1, a3, v95, 8);
  sub_5E2CC(a1, a3, v14, -234881025);
  sub_5E2CC(a1, a3, v96, 0x8000000);
  sub_5E2CC(a1, a3, v14, -8);
  sub_5E2CC(a1, a3, v9, 6);
  sub_5E2CC(a1, a3, v14, -1793);
  sub_5E2CC(a1, a3, v9, 768);
  sub_5E2CC(a1, a3, v14, -458753);
  sub_5E2CC(a1, a3, v9, 393216);
  sub_5E2CC(a1, a3, v14, -117440513);
  sub_5E2CC(a1, a3, v9, 0x2000000);
  sub_5E2CC(a1, a3, v14, -8);
  sub_5E2CC(a1, a3, v97, 6);
  sub_5E2CC(a1, a3, v14, -8388609);
  sub_5E2CC(a1, a3, v89, 0x800000);
  sub_5E2CC(a1, a3, v14, -2049);
  sub_5E2CC(a1, a3, v91, 2048);
  sub_5E2CC(a1, a3, v14, 0);
  sub_5CB80(a1, a3, 144, 0);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 0);
  sub_5CB80(a1, a3, 145, -2147442687);
  sub_5CB80(a1, a3, 144, 0);
  sub_5CB80(a1, a3, 145, -2147438591);
  sub_5CB80(a1, a3, 144, 0);
  sub_5CB80(a1, a3, 145, -2147434495);
  return 0;
}
