int __fastcall SOC_24G_20210916_update(int a1, int a2, unsigned __int8 a3, int a4)
{
  char *v7; // r1
  int v8; // r11
  int v9; // r10
  int v10; // r9
  int v11; // r9
  _DWORD *v12; // r3
  int v13; // r1
  int v14; // r6
  bool v15; // zf
  int v16; // r12
  int v17; // lr
  int v18; // r12
  int v19; // lr
  int v20; // r12
  int v21; // lr
  int v22; // r12
  int v23; // lr
  int v24; // r12
  int v25; // lr
  int v26; // r12
  int v27; // lr
  int v28; // r12
  int v29; // r12
  int v30; // lr
  int v31; // lr
  int v32; // r12
  int v33; // lr
  int v34; // r12
  int v35; // lr
  int v36; // lr
  int v37; // r12
  int v38; // r7
  int v39; // r3
  int v40; // lr
  int v41; // r12
  int v42; // lr
  int v43; // r12
  int v44; // r8
  int v46; // [sp+20h] [bp-10A4h]
  int v47; // [sp+2Ch] [bp-1098h]
  int v48; // [sp+30h] [bp-1094h]
  int v49; // [sp+34h] [bp-1090h]
  int v50; // [sp+38h] [bp-108Ch]
  int v51; // [sp+3Ch] [bp-1088h]
  int v52; // [sp+40h] [bp-1084h]
  int v53; // [sp+44h] [bp-1080h]
  int v54; // [sp+48h] [bp-107Ch]
  int v55; // [sp+4Ch] [bp-1078h]
  int v56; // [sp+50h] [bp-1074h]
  int v57; // [sp+54h] [bp-1070h]
  int v58; // [sp+58h] [bp-106Ch]
  int v59; // [sp+5Ch] [bp-1068h]
  int v60; // [sp+60h] [bp-1064h]
  int v61; // [sp+64h] [bp-1060h]
  int v62; // [sp+68h] [bp-105Ch]
  int v63; // [sp+6Ch] [bp-1058h]
  int v64; // [sp+70h] [bp-1054h]
  int v65; // [sp+74h] [bp-1050h]
  int v66; // [sp+78h] [bp-104Ch]
  int v67; // [sp+7Ch] [bp-1048h]
  int v68; // [sp+80h] [bp-1044h]
  int v69; // [sp+84h] [bp-1040h]
  int v70; // [sp+88h] [bp-103Ch]
  int v71; // [sp+8Ch] [bp-1038h]
  int v72; // [sp+90h] [bp-1034h]
  int v73; // [sp+94h] [bp-1030h]
  int v74; // [sp+98h] [bp-102Ch]
  int v75; // [sp+9Ch] [bp-1028h]
  _DWORD v76[7]; // [sp+A0h] [bp-1024h] BYREF
  int v77; // [sp+BCh] [bp-1008h]
  char v78[4100]; // [sp+C0h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v7) = -6092;
  HIWORD(v7) = ((unsigned int)&loc_12D592 + 2) >> 16;
  v8 = 61481;
  v9 = 61482;
  V_INT((int)v76, v7, *(int *)(a1 + 140));
  LOWORD(v10) = -20196;
  HIWORD(v10) = (unsigned int)"_one_lane" >> 16;
  v46 = v10;
  v11 = 61483;
  logfmt_raw(
    v78,
    0x1000u,
    0,
    v77,
    v76[0],
    v76[1],
    v76[2],
    v76[3],
    v76[4],
    v76[5],
    v76[6],
    v77,
    v46,
    "SOC_24G_20210916_update");
  V_UNLOCK();
  LOWORD(v12) = -14756;
  HIWORD(v12) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v13) = -23296;
  HIWORD(v13) = (unsigned int)"zer_tuning_one_lane" >> 16;
  v14 = 61479;
  zlog(*v12, v13, 154, "SOC_24G_20210916_update", 23, 4352, 60, v78);
  v15 = a4 == 8;
  v16 = 61446;
  if ( a4 != 8 )
    v16 = 6;
  v17 = 61556;
  v75 = v16;
  v18 = 61484;
  if ( a4 != 8 )
  {
    v18 = 44;
    v17 = 116;
  }
  v74 = v18;
  v73 = v17;
  if ( a4 == 8 )
    v19 = 61474;
  else
    v19 = 34;
  v20 = 61512;
  v72 = v19;
  if ( a4 != 8 )
    v20 = 72;
  v21 = 61545;
  if ( a4 != 8 )
    v21 = 105;
  v71 = v20;
  v22 = 61580;
  v70 = v21;
  if ( a4 != 8 )
    v22 = 140;
  v23 = 61579;
  if ( a4 != 8 )
    v23 = 139;
  v53 = v22;
  v24 = 61606;
  v69 = v23;
  if ( a4 != 8 )
    v24 = 166;
  v25 = 61630;
  if ( a4 != 8 )
    v25 = 190;
  v68 = v24;
  v26 = 61564;
  v52 = v25;
  if ( a4 != 8 )
    v26 = 124;
  v27 = 61590;
  if ( a4 != 8 )
    v27 = 150;
  v67 = v26;
  v28 = 61443;
  v66 = v27;
  if ( a4 != 8 )
    v28 = 3;
  v65 = v28;
  if ( a4 == 8 )
    v29 = 61448;
  else
    v29 = 8;
  v51 = v29;
  if ( a4 == 8 )
    v29 = 61442;
  v30 = 61622;
  if ( a4 != 8 )
  {
    v30 = 182;
    v29 = 2;
  }
  v64 = v30;
  v31 = 61566;
  if ( a4 != 8 )
    v31 = 126;
  v48 = v29;
  v63 = v31;
  v32 = 61458;
  v33 = 61514;
  if ( a4 != 8 )
  {
    v32 = 18;
    v33 = 74;
  }
  v61 = v32;
  v62 = v33;
  v34 = 61511;
  v35 = 61472;
  if ( a4 != 8 )
  {
    v34 = 71;
    v35 = 32;
  }
  v59 = v34;
  v60 = v35;
  v36 = 61469;
  if ( a4 != 8 )
    v36 = 29;
  v58 = v36;
  if ( a4 == 8 )
    v36 = 61466;
  v37 = 61467;
  if ( a4 != 8 )
  {
    v37 = 27;
    v36 = 26;
  }
  v57 = v37;
  if ( a4 == 8 )
    v38 = 61441;
  else
    v38 = 1;
  v50 = v36;
  v39 = 61550;
  if ( a4 == 8 )
  {
    v40 = 61465;
  }
  else
  {
    v39 = 110;
    v40 = 25;
  }
  v41 = 61488;
  if ( a4 != 8 )
    v41 = 48;
  v47 = v39;
  v49 = v40;
  v42 = 61551;
  v56 = v41;
  if ( a4 != 8 )
    v42 = 111;
  v43 = 61487;
  if ( a4 != 8 )
    v43 = 47;
  v55 = v43;
  v44 = 61480;
  v54 = v42;
  if ( !v15 )
  {
    v11 = 43;
    v44 = 40;
    v8 = 41;
    v9 = 42;
    v14 = 39;
  }
  sub_5E2CC(a1, a3, v38, -9);
  sub_5E2CC(a1, a3, v47, 0);
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
  sub_5E2CC(a1, a3, v38, -3);
  sub_5E2CC(a1, a3, v47, 0);
  sub_5E2CC(a1, a3, v38, 0x7FFFFFFF);
  sub_5E2CC(a1, a3, v54, 0x80000000);
  sub_5E2CC(a1, a3, v38, -262145);
  sub_5E2CC(a1, a3, v47, 0);
  sub_5E2CC(a1, a3, v38, -5);
  sub_5E2CC(a1, a3, v47, 0);
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
  sub_5E2CC(a1, a3, v38, -1024);
  sub_5E2CC(a1, a3, v9, 50);
  sub_5E2CC(a1, a3, v38, 0xFFFFFF);
  sub_5E2CC(a1, a3, v55, 838860800);
  sub_5E2CC(a1, a3, v38, -4);
  sub_5E2CC(a1, a3, v56, 0);
  sub_5E2CC(a1, a3, v38, -2049);
  sub_5E2CC(a1, a3, v49, 0);
  sub_5E2CC(a1, a3, v38, -2097153);
  sub_5E2CC(a1, a3, v57, 0);
  sub_5E2CC(a1, a3, v38, -536870913);
  sub_5E2CC(a1, a3, v50, 0);
  sub_5E2CC(a1, a3, v38, -5);
  sub_5E2CC(a1, a3, v58, 4);
  sub_5E2CC(a1, a3, v38, 0x7FFFFFFF);
  sub_5E2CC(a1, a3, v50, 0);
  sub_5E2CC(a1, a3, v38, -1025);
  sub_5E2CC(a1, a3, v59, 0);
  sub_5CB80(a1, a3, 144, -7340033);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 0x200000);
  sub_5CB80(a1, a3, 145, -2147450872);
  sub_5CB80(a1, a3, 144, -57345);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 40960);
  sub_5CB80(a1, a3, 145, -2147450871);
  sub_5E2CC(a1, a3, v38, -67108865);
  sub_5E2CC(a1, a3, v60, 0x4000000);
  sub_5CB80(a1, a3, 144, -131073);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 0);
  sub_5CB80(a1, a3, 145, -2147450818);
  sub_5E2CC(a1, a3, v38, -262145);
  sub_5E2CC(a1, a3, v61, 0x40000);
  sub_5E2CC(a1, a3, v38, -1025);
  sub_5E2CC(a1, a3, v62, 1024);
  sub_5E2CC(a1, a3, v38, -8388609);
  sub_5E2CC(a1, a3, v63, 0x800000);
  sub_5E2CC(a1, a3, v38, 0xFFFFFFF);
  sub_5E2CC(a1, a3, v64, 1610612736);
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
  sub_5E2CC(a1, a3, v38, -196609);
  sub_5E2CC(a1, a3, v48, 0x20000);
  sub_5E2CC(a1, a3, v38, -4);
  sub_5E2CC(a1, a3, v51, 2);
  sub_5E2CC(a1, a3, v38, -196609);
  sub_5E2CC(a1, a3, v51, 196608);
  sub_5E2CC(a1, a3, v38, -196609);
  sub_5E2CC(a1, a3, v65, 196608);
  sub_5CB80(a1, a3, 144, -786433);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 786432);
  sub_5CB80(a1, a3, 145, -2147450818);
  sub_5CB80(a1, a3, 144, -2);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 0);
  sub_5CB80(a1, a3, 145, -2147450878);
  sub_5CB80(a1, a3, 144, -8388609);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 0x800000);
  sub_5CB80(a1, a3, 145, -2147450808);
  sub_5CB80(a1, a3, 144, -805306369);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 805306368);
  sub_5CB80(a1, a3, 145, -2147450804);
  sub_5CB80(a1, a3, 144, -97);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 96);
  sub_5CB80(a1, a3, 145, -2147450868);
  sub_5E2CC(a1, a3, v38, -12289);
  sub_5E2CC(a1, a3, v66, 0x2000);
  sub_5E2CC(a1, a3, v38, -4194305);
  sub_5E2CC(a1, a3, v67, 0x400000);
  sub_5E2CC(a1, a3, v38, -497);
  sub_5E2CC(a1, a3, v52, 384);
  sub_5E2CC(a1, a3, v38, -225);
  sub_5E2CC(a1, a3, v68, 0);
  sub_5E2CC(a1, a3, v38, -61441);
  sub_5E2CC(a1, a3, v52, 0);
  serdes_apb_write_1_chip(a1, 1, 7u, 28862, 0x2000);
  serdes_apb_write_1_chip(a1, 1, 5u, 20670, 24576);
  serdes_apb_write_1_chip(a1, 1, 7u, 4286, 24576);
  serdes_apb_write_1_chip(a1, 0, 7u, 16574, 0x2000);
  serdes_apb_write_1_chip(a1, 0, 7u, 24766, 0x2000);
  serdes_apb_write_1_chip(a1, 0, 7u, 28862, 0x2000);
  sub_5E2CC(a1, a3, v38, -32769);
  sub_5E2CC(a1, a3, v69, 0x8000);
  sub_5E2CC(a1, a3, v38, -65537);
  sub_5E2CC(a1, a3, v53, 0x10000);
  sub_5E2CC(a1, a3, v38, -131073);
  sub_5E2CC(a1, a3, v53, 0x20000);
  sub_5E2CC(a1, a3, v38, -65521);
  sub_5E2CC(a1, a3, v48, 0x8000);
  sub_5E2CC(a1, a3, v38, -13);
  sub_5E2CC(a1, a3, v70, 8);
  sub_5E2CC(a1, a3, v38, -1537);
  sub_5E2CC(a1, a3, v71, 1024);
  sub_5CB80(a1, a3, 144, -13);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 8);
  sub_5CB80(a1, a3, 145, -2147450878);
  sub_5CB80(a1, a3, 144, -100663297);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 0x4000000);
  sub_5CB80(a1, a3, 145, -2147450820);
  sub_5CB80(a1, a3, 144, 0x7FFFFFFF);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 0);
  sub_5CB80(a1, a3, 145, -2147450853);
  sub_5CB80(a1, a3, 144, -2);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 1);
  sub_5CB80(a1, a3, 145, -2147450852);
  sub_5E2CC(a1, a3, v38, -4);
  sub_5E2CC(a1, a3, v49, 2);
  sub_5E2CC(a1, a3, v38, -201326593);
  sub_5E2CC(a1, a3, v72, 0x8000000);
  sub_5E2CC(a1, a3, v38, -805306369);
  sub_5E2CC(a1, a3, v73, 0x20000000);
  sub_5CB80(a1, a3, 144, -28673);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 12288);
  sub_5CB80(a1, a3, 145, -2147450860);
  sub_5E2CC(a1, a3, v38, -917505);
  sub_5E2CC(a1, a3, v14, 0);
  sub_5E2CC(a1, a3, v38, -234881025);
  sub_5E2CC(a1, a3, v14, 0);
  sub_5E2CC(a1, a3, v38, -15);
  sub_5E2CC(a1, a3, v44, 0);
  sub_5E2CC(a1, a3, v38, -3585);
  sub_5E2CC(a1, a3, v44, 0);
  sub_5E2CC(a1, a3, v38, -917505);
  sub_5E2CC(a1, a3, v44, 0);
  sub_5E2CC(a1, a3, v38, -234881025);
  sub_5E2CC(a1, a3, v44, 0);
  sub_5E2CC(a1, a3, v38, -15);
  sub_5E2CC(a1, a3, v8, 0);
  sub_5E2CC(a1, a3, v38, -3585);
  sub_5E2CC(a1, a3, v8, 0);
  sub_5E2CC(a1, a3, v38, -917505);
  sub_5E2CC(a1, a3, v8, 0);
  sub_5E2CC(a1, a3, v38, -917505);
  sub_5E2CC(a1, a3, v9, 0);
  sub_5E2CC(a1, a3, v38, -234881025);
  sub_5E2CC(a1, a3, v9, 0);
  sub_5E2CC(a1, a3, v38, -8);
  sub_5E2CC(a1, a3, v11, 0);
  sub_5E2CC(a1, a3, v38, -1793);
  sub_5E2CC(a1, a3, v11, 0);
  sub_5E2CC(a1, a3, v38, -917505);
  sub_5E2CC(a1, a3, v11, 0);
  sub_5E2CC(a1, a3, v38, -234881025);
  sub_5E2CC(a1, a3, v11, 0);
  sub_5E2CC(a1, a3, v38, -15);
  sub_5E2CC(a1, a3, v74, 0);
  sub_5E2CC(a1, a3, v38, -241);
  sub_5E2CC(a1, a3, v75, 96);
  sub_5E2CC(a1, a3, v38, -4);
  sub_5E2CC(a1, a3, v48, 2);
  sub_5E2CC(a1, a3, v38, 0);
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
