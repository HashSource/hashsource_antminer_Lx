int __fastcall SOC_32G_20210826_update(int a1, int a2, unsigned __int8 a3, int a4)
{
  int v6; // r11
  int v7; // r6
  int v8; // r9
  int v9; // r7
  int v10; // r8
  int v11; // r10
  int v12; // r3
  _DWORD *v13; // r3
  int v14; // r1
  int v16; // [sp+10h] [bp-1084h]
  int v17; // [sp+14h] [bp-1080h]
  int v18; // [sp+18h] [bp-107Ch]
  int v19; // [sp+1Ch] [bp-1078h]
  int v20; // [sp+20h] [bp-1074h]
  int v21; // [sp+24h] [bp-1070h]
  int v22; // [sp+28h] [bp-106Ch]
  int v23; // [sp+2Ch] [bp-1068h]
  int v24; // [sp+30h] [bp-1064h]
  int v25; // [sp+34h] [bp-1060h]
  int v26; // [sp+38h] [bp-105Ch]
  int v27; // [sp+3Ch] [bp-1058h]
  int v28; // [sp+40h] [bp-1054h]
  int v29; // [sp+44h] [bp-1050h]
  int v30; // [sp+48h] [bp-104Ch]
  int v31; // [sp+4Ch] [bp-1048h]
  int v32; // [sp+50h] [bp-1044h]
  int v33; // [sp+54h] [bp-1040h]
  int v34; // [sp+58h] [bp-103Ch]
  int v35; // [sp+5Ch] [bp-1038h]
  int v36; // [sp+60h] [bp-1034h]
  int v37; // [sp+64h] [bp-1030h]
  int v38; // [sp+68h] [bp-102Ch]
  int v39; // [sp+6Ch] [bp-1028h]
  int v40; // [sp+70h] [bp-1024h]
  int v41; // [sp+74h] [bp-1020h]
  int v42; // [sp+78h] [bp-101Ch]
  int v43; // [sp+7Ch] [bp-1018h]
  int v44; // [sp+80h] [bp-1014h]
  int v45; // [sp+84h] [bp-1010h]
  int v46; // [sp+88h] [bp-100Ch]
  int v47; // [sp+8Ch] [bp-1008h]
  char v48[4100]; // [sp+90h] [bp-1004h] BYREF

  if ( a4 == 8 )
  {
    v33 = 61551;
    v44 = 61579;
    v45 = 61580;
    v27 = 61511;
    v46 = 61545;
    v47 = 61512;
    v36 = 61514;
    v37 = 61566;
    v32 = 61465;
    v38 = 61622;
    v39 = 61448;
    v25 = 61487;
    v26 = 61488;
    v31 = 61482;
    v42 = 61630;
    v43 = 61606;
    v40 = 61590;
    v41 = 61564;
    v21 = 30725;
    v22 = 61445;
    v18 = 61469;
    v19 = 30722;
    v20 = 30723;
    v34 = 61472;
    v35 = 61458;
    v8 = 61466;
    v23 = 30726;
    v24 = 61446;
    v10 = 61443;
    v16 = 30783;
    v17 = 61503;
    v11 = 61442;
    v29 = 30782;
    v30 = 61502;
    v6 = 30721;
    v9 = 61550;
    v28 = 61553;
    v7 = 61441;
  }
  else
  {
    v30 = 62;
    v17 = 63;
    v6 = 1;
    v29 = 62;
    v16 = 63;
    v46 = 105;
    v47 = 72;
    v24 = 6;
    v44 = 139;
    v45 = 140;
    v23 = 6;
    v42 = 190;
    v43 = 166;
    v33 = 111;
    v40 = 150;
    v41 = 124;
    v27 = 71;
    v38 = 182;
    v39 = 8;
    v32 = 25;
    v36 = 74;
    v37 = 126;
    v7 = 1;
    v31 = 42;
    v8 = 26;
    v9 = 110;
    v34 = 32;
    v35 = 18;
    v10 = 3;
    v11 = 2;
    v18 = 29;
    v22 = 5;
    v21 = 5;
    v20 = 3;
    v19 = 2;
    v25 = 47;
    v26 = 48;
    v28 = 113;
  }
  V_LOCK();
  LOWORD(v12) = -22408;
  HIWORD(v12) = (unsigned int)"0929_update" >> 16;
  logfmt_raw(v48, 0x1000u, 0, v12, "SOC_32G_20210826_update");
  V_UNLOCK();
  LOWORD(v13) = -14756;
  HIWORD(v13) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v14) = -23296;
  HIWORD(v14) = (unsigned int)"zer_tuning_one_lane" >> 16;
  zlog(*v13, v14, 154, "SOC_32G_20210826_update", 23, 6127, 60, v48);
  sub_5E2CC(a1, a3, v7, -33);
  sub_5E2CC(a1, a3, v28, 32);
  sub_5E2CC(a1, a3, v7, -9);
  sub_5E2CC(a1, a3, v9, 0);
  sub_5E2CC(a1, a3, v6, -520093697);
  sub_5E2CC(a1, a3, v16, 251658240);
  sub_5E2CC(a1, a3, v7, -520093697);
  sub_5E2CC(a1, a3, v17, 251658240);
  sub_5E2CC(a1, a3, v6, -1048321);
  sub_5E2CC(a1, a3, v29, 256);
  sub_5E2CC(a1, a3, v7, -1048321);
  sub_5E2CC(a1, a3, v30, 256);
  sub_5E2CC(a1, a3, v6, -4096);
  sub_5E2CC(a1, a3, v16, 4);
  sub_5E2CC(a1, a3, v7, -4096);
  sub_5E2CC(a1, a3, v17, 4);
  sub_5E2CC(a1, a3, v7, -262145);
  sub_5E2CC(a1, a3, v9, 0x40000);
  sub_5E2CC(a1, a3, v7, -5);
  sub_5E2CC(a1, a3, v9, 4);
  sub_5E2CC(a1, a3, v7, -3);
  sub_5E2CC(a1, a3, v9, 0);
  sub_5E2CC(a1, a3, v7, -5);
  sub_5E2CC(a1, a3, v18, 0);
  sub_5E2CC(a1, a3, v6, 0xFFFFFF);
  sub_5E2CC(a1, a3, v19, 838860800);
  sub_5E2CC(a1, a3, v7, 0xFFFFFF);
  sub_5E2CC(a1, a3, v11, 838860800);
  sub_5E2CC(a1, a3, v6, -4);
  sub_5E2CC(a1, a3, v20, 0);
  sub_5E2CC(a1, a3, v7, -4);
  sub_5E2CC(a1, a3, v10, 0);
  sub_5E2CC(a1, a3, v6, 0xFFFFFF);
  sub_5E2CC(a1, a3, v19, 0);
  sub_5E2CC(a1, a3, v7, 0xFFFFFF);
  sub_5E2CC(a1, a3, v11, 0);
  sub_5E2CC(a1, a3, v6, -4);
  sub_5E2CC(a1, a3, v20, 0);
  sub_5E2CC(a1, a3, v7, -4);
  sub_5E2CC(a1, a3, v10, 0);
  sub_5E2CC(a1, a3, v7, -1024);
  sub_5E2CC(a1, a3, v31, 50);
  sub_5E2CC(a1, a3, v6, 0xFFFFFFF);
  sub_5E2CC(a1, a3, v21, -268435456);
  sub_5E2CC(a1, a3, v7, 0xFFFFFFF);
  sub_5E2CC(a1, a3, v22, -268435456);
  sub_5E2CC(a1, a3, v6, -64);
  sub_5E2CC(a1, a3, v23, 0);
  sub_5E2CC(a1, a3, v7, -64);
  sub_5E2CC(a1, a3, v24, 0);
  sub_5E2CC(a1, a3, v6, 0xFFFFFFF);
  sub_5E2CC(a1, a3, v21, -268435456);
  sub_5E2CC(a1, a3, v7, 0xFFFFFFF);
  sub_5E2CC(a1, a3, v22, -268435456);
  sub_5E2CC(a1, a3, v6, -64);
  sub_5E2CC(a1, a3, v23, 1);
  sub_5E2CC(a1, a3, v7, -64);
  sub_5E2CC(a1, a3, v24, 1);
  sub_5E2CC(a1, a3, v7, 0xFFFFFF);
  sub_5E2CC(a1, a3, v25, -16777216);
  sub_5E2CC(a1, a3, v7, -4);
  sub_5E2CC(a1, a3, v26, 0);
  sub_5E2CC(a1, a3, v7, 0xFFFFFF);
  sub_5E2CC(a1, a3, v25, 0);
  sub_5E2CC(a1, a3, v7, -4);
  sub_5E2CC(a1, a3, v26, 0);
  sub_5E2CC(a1, a3, v7, -2049);
  sub_5E2CC(a1, a3, v32, 2048);
  sub_5E2CC(a1, a3, v7, 0x7FFFFFFF);
  sub_5E2CC(a1, a3, v8, 0x80000000);
  sub_5E2CC(a1, a3, v7, -1025);
  sub_5E2CC(a1, a3, v27, 1024);
  sub_5E2CC(a1, a3, v7, -536870913);
  sub_5E2CC(a1, a3, v8, 0x20000000);
  sub_5E2CC(a1, a3, v7, -5);
  sub_5E2CC(a1, a3, v18, 0);
  sub_5E2CC(a1, a3, v7, 0x7FFFFFFF);
  sub_5E2CC(a1, a3, v33, 0x80000000);
  sub_5E2CC(a1, a3, v7, -262145);
  sub_5E2CC(a1, a3, v9, 0);
  sub_5E2CC(a1, a3, v7, -5);
  sub_5E2CC(a1, a3, v9, 0);
  sub_5E2CC(a1, a3, v7, 0x7FFFFFFF);
  sub_5E2CC(a1, a3, v8, 0);
  sub_5E2CC(a1, a3, v7, -1025);
  sub_5E2CC(a1, a3, v27, 0);
  sub_5CB80(a1, a3, 144, -7340033);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 3145728);
  sub_5CB80(a1, a3, 145, -2147450872);
  sub_5CB80(a1, a3, 144, -57345);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 0x8000);
  sub_5CB80(a1, a3, 145, -2147450871);
  sub_5E2CC(a1, a3, v7, -67108865);
  sub_5E2CC(a1, a3, v34, 0x4000000);
  sub_5CB80(a1, a3, 144, -131073);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 0);
  sub_5CB80(a1, a3, 145, -2147450818);
  sub_5E2CC(a1, a3, v7, -262145);
  sub_5E2CC(a1, a3, v35, 0x40000);
  sub_5E2CC(a1, a3, v7, -1025);
  sub_5E2CC(a1, a3, v36, 1024);
  sub_5E2CC(a1, a3, v7, -8388609);
  sub_5E2CC(a1, a3, v37, 0x800000);
  sub_5E2CC(a1, a3, v7, 0xFFFFFFF);
  sub_5E2CC(a1, a3, v38, 1610612736);
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
  sub_5CB80(a1, a3, 144, 80);
  sub_5CB80(a1, a3, 145, -2147450786);
  sub_5CB80(a1, a3, 144, -258049);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 20480);
  sub_5CB80(a1, a3, 145, -2147450786);
  sub_5CB80(a1, a3, 144, -66060289);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 5242880);
  sub_5CB80(a1, a3, 145, -2147450786);
  sub_5CB80(a1, a3, 144, 0xFFFFFFF);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 1342177280);
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
  sub_5CB80(a1, a3, 144, 96);
  sub_5CB80(a1, a3, 145, -2147450878);
  sub_5E2CC(a1, a3, v7, -196609);
  sub_5E2CC(a1, a3, v11, 0);
  sub_5E2CC(a1, a3, v7, -4);
  sub_5E2CC(a1, a3, v39, 0);
  sub_5E2CC(a1, a3, v7, -196609);
  sub_5E2CC(a1, a3, v39, 196608);
  sub_5E2CC(a1, a3, v7, -196609);
  sub_5E2CC(a1, a3, v10, 196608);
  sub_5CB80(a1, a3, 144, -786433);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 0);
  sub_5CB80(a1, a3, 145, -2147450818);
  sub_5CB80(a1, a3, 144, -8388609);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 0x800000);
  sub_5CB80(a1, a3, 145, -2147450808);
  sub_5CB80(a1, a3, 144, -805306369);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 0x10000000);
  sub_5CB80(a1, a3, 145, -2147450804);
  sub_5CB80(a1, a3, 144, -97);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 96);
  sub_5CB80(a1, a3, 145, -2147450868);
  sub_5E2CC(a1, a3, v7, -12289);
  sub_5E2CC(a1, a3, v40, 12288);
  sub_5E2CC(a1, a3, v7, -4194305);
  sub_5E2CC(a1, a3, v41, 0x400000);
  sub_5E2CC(a1, a3, v7, -497);
  sub_5E2CC(a1, a3, v42, 384);
  sub_5E2CC(a1, a3, v7, -225);
  sub_5E2CC(a1, a3, v43, 0);
  sub_5E2CC(a1, a3, v7, -61441);
  sub_5E2CC(a1, a3, v42, 0x4000);
  sub_5E2CC(a1, a3, v7, -32769);
  sub_5E2CC(a1, a3, v44, 0x8000);
  sub_5E2CC(a1, a3, v7, -65537);
  sub_5E2CC(a1, a3, v45, 0x10000);
  sub_5E2CC(a1, a3, v7, -131073);
  sub_5E2CC(a1, a3, v45, 0x20000);
  sub_5E2CC(a1, a3, v7, -65521);
  sub_5E2CC(a1, a3, v11, 0x8000);
  sub_5E2CC(a1, a3, v7, -13);
  sub_5E2CC(a1, a3, v46, 8);
  sub_5E2CC(a1, a3, v7, -1537);
  sub_5E2CC(a1, a3, v47, 1024);
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
  sub_5CB80(a1, a3, 144, -28673);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5CB80(a1, a3, 144, 12288);
  sub_5CB80(a1, a3, 145, -2147450860);
  sub_5E2CC(a1, a3, v7, 0);
  sub_5CB80(a1, a3, 144, 0);
  sub_5CB80(a1, a3, 145, -2147450879);
  sub_5E2CC(a1, a3, v6, 0);
  sub_5E2CC(a1, a3, v7, 0);
  return 0;
}
