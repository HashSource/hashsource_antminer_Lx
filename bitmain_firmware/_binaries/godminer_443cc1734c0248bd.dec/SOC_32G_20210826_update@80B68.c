int __fastcall SOC_32G_20210826_update(int a1, int a2, unsigned __int8 a3, int a4)
{
  int v6; // r11
  int v7; // r6
  int v8; // r9
  int v9; // r7
  int v10; // r8
  int v11; // r10
  int v13; // [sp+10h] [bp-1084h]
  int v14; // [sp+14h] [bp-1080h]
  int v15; // [sp+18h] [bp-107Ch]
  int v16; // [sp+1Ch] [bp-1078h]
  int v17; // [sp+20h] [bp-1074h]
  int v18; // [sp+24h] [bp-1070h]
  int v19; // [sp+28h] [bp-106Ch]
  int v20; // [sp+2Ch] [bp-1068h]
  int v21; // [sp+30h] [bp-1064h]
  int v22; // [sp+34h] [bp-1060h]
  int v23; // [sp+38h] [bp-105Ch]
  int v24; // [sp+3Ch] [bp-1058h]
  int v25; // [sp+40h] [bp-1054h]
  int v26; // [sp+44h] [bp-1050h]
  int v27; // [sp+48h] [bp-104Ch]
  int v28; // [sp+4Ch] [bp-1048h]
  int v29; // [sp+50h] [bp-1044h]
  int v30; // [sp+54h] [bp-1040h]
  int v31; // [sp+58h] [bp-103Ch]
  int v32; // [sp+5Ch] [bp-1038h]
  int v33; // [sp+60h] [bp-1034h]
  int v34; // [sp+64h] [bp-1030h]
  int v35; // [sp+68h] [bp-102Ch]
  int v36; // [sp+6Ch] [bp-1028h]
  int v37; // [sp+70h] [bp-1024h]
  int v38; // [sp+74h] [bp-1020h]
  int v39; // [sp+78h] [bp-101Ch]
  int v40; // [sp+7Ch] [bp-1018h]
  int v41; // [sp+80h] [bp-1014h]
  int v42; // [sp+84h] [bp-1010h]
  int v43; // [sp+88h] [bp-100Ch]
  int v44; // [sp+8Ch] [bp-1008h]
  char v45[4100]; // [sp+90h] [bp-1004h] BYREF

  if ( a4 == 8 )
  {
    v30 = 61551;
    v41 = 61579;
    v42 = 61580;
    v24 = 61511;
    v43 = 61545;
    v44 = 61512;
    v33 = 61514;
    v34 = 61566;
    v29 = 61465;
    v35 = 61622;
    v36 = 61448;
    v22 = 61487;
    v23 = 61488;
    v28 = 61482;
    v39 = 61630;
    v40 = 61606;
    v37 = 61590;
    v38 = 61564;
    v18 = 30725;
    v19 = 61445;
    v15 = 61469;
    v16 = 30722;
    v17 = 30723;
    v31 = 61472;
    v32 = 61458;
    v8 = 61466;
    v20 = 30726;
    v21 = 61446;
    v10 = 61443;
    v13 = 30783;
    v14 = 61503;
    v11 = 61442;
    v26 = 30782;
    v27 = 61502;
    v6 = 30721;
    v9 = 61550;
    v25 = 61553;
    v7 = 61441;
  }
  else
  {
    v27 = 62;
    v14 = 63;
    v6 = 1;
    v26 = 62;
    v13 = 63;
    v43 = 105;
    v44 = 72;
    v21 = 6;
    v41 = 139;
    v42 = 140;
    v20 = 6;
    v39 = 190;
    v40 = 166;
    v30 = 111;
    v37 = 150;
    v38 = 124;
    v24 = 71;
    v35 = 182;
    v36 = 8;
    v29 = 25;
    v33 = 74;
    v34 = 126;
    v7 = 1;
    v28 = 42;
    v8 = 26;
    v9 = 110;
    v31 = 32;
    v32 = 18;
    v10 = 3;
    v11 = 2;
    v15 = 29;
    v19 = 5;
    v18 = 5;
    v17 = 3;
    v16 = 2;
    v22 = 47;
    v23 = 48;
    v25 = 113;
  }
  V_LOCK();
  logfmt_raw(v45, 0x1000u, 0, "%s ...", "SOC_32G_20210826_update");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "SOC_32G_20210826_update",
    23,
    6127,
    60,
    v45);
  sub_5D4B4(a1, a3, v7, -33);
  sub_5D4B4(a1, a3, v25, 32);
  sub_5D4B4(a1, a3, v7, -9);
  sub_5D4B4(a1, a3, v9, 0);
  sub_5D4B4(a1, a3, v6, -520093697);
  sub_5D4B4(a1, a3, v13, 251658240);
  sub_5D4B4(a1, a3, v7, -520093697);
  sub_5D4B4(a1, a3, v14, 251658240);
  sub_5D4B4(a1, a3, v6, -1048321);
  sub_5D4B4(a1, a3, v26, 256);
  sub_5D4B4(a1, a3, v7, -1048321);
  sub_5D4B4(a1, a3, v27, 256);
  sub_5D4B4(a1, a3, v6, -4096);
  sub_5D4B4(a1, a3, v13, 4);
  sub_5D4B4(a1, a3, v7, -4096);
  sub_5D4B4(a1, a3, v14, 4);
  sub_5D4B4(a1, a3, v7, -262145);
  sub_5D4B4(a1, a3, v9, 0x40000);
  sub_5D4B4(a1, a3, v7, -5);
  sub_5D4B4(a1, a3, v9, 4);
  sub_5D4B4(a1, a3, v7, -3);
  sub_5D4B4(a1, a3, v9, 0);
  sub_5D4B4(a1, a3, v7, -5);
  sub_5D4B4(a1, a3, v15, 0);
  sub_5D4B4(a1, a3, v6, 0xFFFFFF);
  sub_5D4B4(a1, a3, v16, 838860800);
  sub_5D4B4(a1, a3, v7, 0xFFFFFF);
  sub_5D4B4(a1, a3, v11, 838860800);
  sub_5D4B4(a1, a3, v6, -4);
  sub_5D4B4(a1, a3, v17, 0);
  sub_5D4B4(a1, a3, v7, -4);
  sub_5D4B4(a1, a3, v10, 0);
  sub_5D4B4(a1, a3, v6, 0xFFFFFF);
  sub_5D4B4(a1, a3, v16, 0);
  sub_5D4B4(a1, a3, v7, 0xFFFFFF);
  sub_5D4B4(a1, a3, v11, 0);
  sub_5D4B4(a1, a3, v6, -4);
  sub_5D4B4(a1, a3, v17, 0);
  sub_5D4B4(a1, a3, v7, -4);
  sub_5D4B4(a1, a3, v10, 0);
  sub_5D4B4(a1, a3, v7, -1024);
  sub_5D4B4(a1, a3, v28, 50);
  sub_5D4B4(a1, a3, v6, 0xFFFFFFF);
  sub_5D4B4(a1, a3, v18, -268435456);
  sub_5D4B4(a1, a3, v7, 0xFFFFFFF);
  sub_5D4B4(a1, a3, v19, -268435456);
  sub_5D4B4(a1, a3, v6, -64);
  sub_5D4B4(a1, a3, v20, 0);
  sub_5D4B4(a1, a3, v7, -64);
  sub_5D4B4(a1, a3, v21, 0);
  sub_5D4B4(a1, a3, v6, 0xFFFFFFF);
  sub_5D4B4(a1, a3, v18, -268435456);
  sub_5D4B4(a1, a3, v7, 0xFFFFFFF);
  sub_5D4B4(a1, a3, v19, -268435456);
  sub_5D4B4(a1, a3, v6, -64);
  sub_5D4B4(a1, a3, v20, 1);
  sub_5D4B4(a1, a3, v7, -64);
  sub_5D4B4(a1, a3, v21, 1);
  sub_5D4B4(a1, a3, v7, 0xFFFFFF);
  sub_5D4B4(a1, a3, v22, -16777216);
  sub_5D4B4(a1, a3, v7, -4);
  sub_5D4B4(a1, a3, v23, 0);
  sub_5D4B4(a1, a3, v7, 0xFFFFFF);
  sub_5D4B4(a1, a3, v22, 0);
  sub_5D4B4(a1, a3, v7, -4);
  sub_5D4B4(a1, a3, v23, 0);
  sub_5D4B4(a1, a3, v7, -2049);
  sub_5D4B4(a1, a3, v29, 2048);
  sub_5D4B4(a1, a3, v7, 0x7FFFFFFF);
  sub_5D4B4(a1, a3, v8, 0x80000000);
  sub_5D4B4(a1, a3, v7, -1025);
  sub_5D4B4(a1, a3, v24, 1024);
  sub_5D4B4(a1, a3, v7, -536870913);
  sub_5D4B4(a1, a3, v8, 0x20000000);
  sub_5D4B4(a1, a3, v7, -5);
  sub_5D4B4(a1, a3, v15, 0);
  sub_5D4B4(a1, a3, v7, 0x7FFFFFFF);
  sub_5D4B4(a1, a3, v30, 0x80000000);
  sub_5D4B4(a1, a3, v7, -262145);
  sub_5D4B4(a1, a3, v9, 0);
  sub_5D4B4(a1, a3, v7, -5);
  sub_5D4B4(a1, a3, v9, 0);
  sub_5D4B4(a1, a3, v7, 0x7FFFFFFF);
  sub_5D4B4(a1, a3, v8, 0);
  sub_5D4B4(a1, a3, v7, -1025);
  sub_5D4B4(a1, a3, v24, 0);
  sub_5BD68(a1, a3, 144, -7340033);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5BD68(a1, a3, 144, 3145728);
  sub_5BD68(a1, a3, 145, -2147450872);
  sub_5BD68(a1, a3, 144, -57345);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5BD68(a1, a3, 144, 0x8000);
  sub_5BD68(a1, a3, 145, -2147450871);
  sub_5D4B4(a1, a3, v7, -67108865);
  sub_5D4B4(a1, a3, v31, 0x4000000);
  sub_5BD68(a1, a3, 144, -131073);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5BD68(a1, a3, 144, 0);
  sub_5BD68(a1, a3, 145, -2147450818);
  sub_5D4B4(a1, a3, v7, -262145);
  sub_5D4B4(a1, a3, v32, 0x40000);
  sub_5D4B4(a1, a3, v7, -1025);
  sub_5D4B4(a1, a3, v33, 1024);
  sub_5D4B4(a1, a3, v7, -8388609);
  sub_5D4B4(a1, a3, v34, 0x800000);
  sub_5D4B4(a1, a3, v7, 0xFFFFFFF);
  sub_5D4B4(a1, a3, v35, 1610612736);
  sub_5BD68(a1, a3, 144, -1009);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5BD68(a1, a3, 144, 576);
  sub_5BD68(a1, a3, 145, -2147450787);
  sub_5BD68(a1, a3, 144, -258049);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5BD68(a1, a3, 144, 147456);
  sub_5BD68(a1, a3, 145, -2147450787);
  sub_5BD68(a1, a3, 144, -66060289);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5BD68(a1, a3, 144, 37748736);
  sub_5BD68(a1, a3, 145, -2147450787);
  sub_5BD68(a1, a3, 144, 0xFFFFFFF);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5BD68(a1, a3, 144, 0x40000000);
  sub_5BD68(a1, a3, 145, -2147450787);
  sub_5BD68(a1, a3, 144, -4);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5BD68(a1, a3, 144, 2);
  sub_5BD68(a1, a3, 145, -2147450786);
  sub_5BD68(a1, a3, 144, -1009);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5BD68(a1, a3, 144, 80);
  sub_5BD68(a1, a3, 145, -2147450786);
  sub_5BD68(a1, a3, 144, -258049);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5BD68(a1, a3, 144, 20480);
  sub_5BD68(a1, a3, 145, -2147450786);
  sub_5BD68(a1, a3, 144, -66060289);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5BD68(a1, a3, 144, 5242880);
  sub_5BD68(a1, a3, 145, -2147450786);
  sub_5BD68(a1, a3, 144, 0xFFFFFFF);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5BD68(a1, a3, 144, 1342177280);
  sub_5BD68(a1, a3, 145, -2147450786);
  sub_5BD68(a1, a3, 144, -4);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5BD68(a1, a3, 144, 0);
  sub_5BD68(a1, a3, 145, -2147450785);
  sub_5BD68(a1, a3, 144, -524289);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5BD68(a1, a3, 144, 0);
  sub_5BD68(a1, a3, 145, -2147450815);
  sub_5BD68(a1, a3, 144, -1009);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5BD68(a1, a3, 144, 96);
  sub_5BD68(a1, a3, 145, -2147450878);
  sub_5D4B4(a1, a3, v7, -196609);
  sub_5D4B4(a1, a3, v11, 0);
  sub_5D4B4(a1, a3, v7, -4);
  sub_5D4B4(a1, a3, v36, 0);
  sub_5D4B4(a1, a3, v7, -196609);
  sub_5D4B4(a1, a3, v36, 196608);
  sub_5D4B4(a1, a3, v7, -196609);
  sub_5D4B4(a1, a3, v10, 196608);
  sub_5BD68(a1, a3, 144, -786433);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5BD68(a1, a3, 144, 0);
  sub_5BD68(a1, a3, 145, -2147450818);
  sub_5BD68(a1, a3, 144, -8388609);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5BD68(a1, a3, 144, 0x800000);
  sub_5BD68(a1, a3, 145, -2147450808);
  sub_5BD68(a1, a3, 144, -805306369);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5BD68(a1, a3, 144, 0x10000000);
  sub_5BD68(a1, a3, 145, -2147450804);
  sub_5BD68(a1, a3, 144, -97);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5BD68(a1, a3, 144, 96);
  sub_5BD68(a1, a3, 145, -2147450868);
  sub_5D4B4(a1, a3, v7, -12289);
  sub_5D4B4(a1, a3, v37, 12288);
  sub_5D4B4(a1, a3, v7, -4194305);
  sub_5D4B4(a1, a3, v38, 0x400000);
  sub_5D4B4(a1, a3, v7, -497);
  sub_5D4B4(a1, a3, v39, 384);
  sub_5D4B4(a1, a3, v7, -225);
  sub_5D4B4(a1, a3, v40, 0);
  sub_5D4B4(a1, a3, v7, -61441);
  sub_5D4B4(a1, a3, v39, 0x4000);
  sub_5D4B4(a1, a3, v7, -32769);
  sub_5D4B4(a1, a3, v41, 0x8000);
  sub_5D4B4(a1, a3, v7, -65537);
  sub_5D4B4(a1, a3, v42, 0x10000);
  sub_5D4B4(a1, a3, v7, -131073);
  sub_5D4B4(a1, a3, v42, 0x20000);
  sub_5D4B4(a1, a3, v7, -65521);
  sub_5D4B4(a1, a3, v11, 0x8000);
  sub_5D4B4(a1, a3, v7, -13);
  sub_5D4B4(a1, a3, v43, 8);
  sub_5D4B4(a1, a3, v7, -1537);
  sub_5D4B4(a1, a3, v44, 1024);
  sub_5BD68(a1, a3, 144, -13);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5BD68(a1, a3, 144, 8);
  sub_5BD68(a1, a3, 145, -2147450878);
  sub_5BD68(a1, a3, 144, -100663297);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5BD68(a1, a3, 144, 100663296);
  sub_5BD68(a1, a3, 145, -2147450820);
  sub_5BD68(a1, a3, 144, 0x7FFFFFFF);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5BD68(a1, a3, 144, 0);
  sub_5BD68(a1, a3, 145, -2147450853);
  sub_5BD68(a1, a3, 144, -2);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5BD68(a1, a3, 144, 0);
  sub_5BD68(a1, a3, 145, -2147450852);
  sub_5BD68(a1, a3, 144, -28673);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5BD68(a1, a3, 144, 12288);
  sub_5BD68(a1, a3, 145, -2147450860);
  sub_5D4B4(a1, a3, v7, 0);
  sub_5BD68(a1, a3, 144, 0);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5D4B4(a1, a3, v6, 0);
  sub_5D4B4(a1, a3, v7, 0);
  return 0;
}
