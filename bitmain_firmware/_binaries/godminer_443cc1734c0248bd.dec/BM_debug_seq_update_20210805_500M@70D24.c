int __fastcall BM_debug_seq_update_20210805_500M(int a1, int a2, int a3, int a4)
{
  bool v4; // zf
  int v5; // r6
  int v7; // r0
  int v8; // r3
  int v9; // r1
  int v10; // r11
  int v11; // r12
  int v12; // r3
  int v13; // r1
  unsigned __int8 v14; // r5
  int v15; // r12
  int v16; // r3
  int v17; // r9
  int v18; // lr
  int v19; // r1
  int v20; // r11
  int v21; // r12
  int v22; // lr
  int v23; // r7
  int v24; // r9
  int v25; // r0
  int v26; // lr
  int v27; // r7
  int v28; // r9
  int v29; // r10
  int v30; // r8
  int v32; // [sp+14h] [bp-1070h]
  int v33; // [sp+18h] [bp-106Ch]
  int v34; // [sp+1Ch] [bp-1068h]
  int v35; // [sp+20h] [bp-1064h]
  int v36; // [sp+2Ch] [bp-1058h]
  int v37; // [sp+30h] [bp-1054h]
  int v38; // [sp+34h] [bp-1050h]
  int v39; // [sp+38h] [bp-104Ch]
  int v40; // [sp+3Ch] [bp-1048h]
  int v41; // [sp+44h] [bp-1040h]
  int v42; // [sp+48h] [bp-103Ch]
  int v43; // [sp+4Ch] [bp-1038h]
  int v44; // [sp+50h] [bp-1034h]
  int v45; // [sp+54h] [bp-1030h]
  int v46; // [sp+58h] [bp-102Ch]
  int v47; // [sp+5Ch] [bp-1028h]
  int v48; // [sp+60h] [bp-1024h]
  int v49; // [sp+64h] [bp-1020h]
  int v50; // [sp+68h] [bp-101Ch]
  int v51; // [sp+6Ch] [bp-1018h]
  int v52; // [sp+70h] [bp-1014h]
  int v53; // [sp+74h] [bp-1010h]
  int v54; // [sp+78h] [bp-100Ch]
  int v55; // [sp+7Ch] [bp-1008h]
  char v56[4100]; // [sp+80h] [bp-1004h] BYREF

  v4 = a4 == 8;
  v5 = 61590;
  if ( a4 != 8 )
    v5 = 150;
  v51 = v5;
  v7 = 61579;
  if ( a4 == 8 )
    v5 = 61442;
  else
    v7 = 139;
  v8 = 61622;
  v9 = 61566;
  if ( !v4 )
  {
    v8 = 182;
    v9 = 126;
  }
  v10 = 61580;
  v54 = v7;
  if ( v4 )
    v7 = 61448;
  v49 = v8;
  v48 = v9;
  v11 = 61514;
  v12 = 61458;
  if ( !v4 )
  {
    v11 = 74;
    v12 = 18;
  }
  v13 = 61472;
  if ( !v4 )
    v13 = 32;
  v14 = a3;
  if ( v4 )
    a3 = 61580;
  else
    v10 = 124;
  v47 = v11;
  if ( v4 )
    v10 = 61564;
  v46 = v12;
  v15 = 61556;
  v16 = 61457;
  v45 = v13;
  if ( !v4 )
  {
    v16 = 17;
    v15 = 116;
  }
  v40 = v16;
  v17 = 61606;
  if ( v4 )
    v16 = 61550;
  v18 = 61443;
  v19 = 61551;
  if ( !v4 )
  {
    v17 = 166;
    v19 = 111;
  }
  v52 = v10;
  if ( !v4 )
    v18 = 3;
  v44 = v15;
  v20 = 61459;
  if ( !v4 )
    v20 = 19;
  v39 = v19;
  if ( v4 )
    v19 = 61511;
  else
    v7 = 8;
  v53 = v17;
  v21 = 61510;
  v50 = v18;
  if ( !v4 )
    v21 = 70;
  v22 = 61474;
  v23 = 61465;
  if ( !v4 )
  {
    v22 = 34;
    v23 = 25;
  }
  v24 = 61453;
  if ( !v4 )
    v24 = 13;
  v37 = v21;
  if ( v4 )
    v21 = 61466;
  else
    a3 = 140;
  if ( !v4 )
    v21 = 26;
  v35 = v7;
  v43 = v22;
  v25 = 61553;
  v26 = 61509;
  v42 = v23;
  if ( !v4 )
    v26 = 69;
  v41 = v24;
  if ( !v4 )
  {
    v16 = 110;
    v25 = 113;
    v19 = 71;
  }
  v27 = 61470;
  v28 = 61469;
  if ( !v4 )
  {
    v27 = 30;
    v28 = 29;
  }
  v29 = 61441;
  v32 = v21;
  if ( !v4 )
    v29 = 1;
  v36 = v26;
  v30 = 61630;
  if ( !v4 )
  {
    v5 = 2;
    v30 = 190;
  }
  v55 = a3;
  v34 = v16;
  v38 = v25;
  v33 = v19;
  V_LOCK();
  logfmt_raw(v56, 0x1000u, 0, "%s ...", "BM_debug_seq_update_20210805_500M");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "BM_debug_seq_update_20210805_500M",
    33,
    3735,
    60,
    v56);
  sub_5D4B4(a1, v14, v29, -536870913);
  sub_5D4B4(a1, v14, v32, 0x20000000);
  sub_5D4B4(a1, v14, v29, -5);
  sub_5D4B4(a1, v14, v28, 0);
  sub_5D4B4(a1, v14, v29, -5);
  sub_5D4B4(a1, v14, v27, 4);
  sub_5D4B4(a1, v14, v29, -262145);
  sub_5D4B4(a1, v14, v36, 0x40000);
  sub_5D4B4(a1, v14, v29, -262145);
  sub_5D4B4(a1, v14, v37, 0x40000);
  sub_5D4B4(a1, v14, v29, -524289);
  sub_5D4B4(a1, v14, v33, 0x80000);
  sub_5D4B4(a1, v14, v29, -33);
  sub_5D4B4(a1, v14, v38, 32);
  sub_5D4B4(a1, v14, v29, 0x7FFFFFFF);
  sub_5D4B4(a1, v14, v39, 0x80000000);
  sub_5D4B4(a1, v14, v29, -262145);
  sub_5D4B4(a1, v14, v34, 0);
  sub_5D4B4(a1, v14, v29, -5);
  sub_5D4B4(a1, v14, v34, 0);
  sub_5D4B4(a1, v14, v29, 0x7FFFFFFF);
  sub_5D4B4(a1, v14, v32, 0);
  sub_5D4B4(a1, v14, v29, -1025);
  sub_5D4B4(a1, v14, v33, 0);
  sub_5D4B4(a1, v14, v29, -5);
  sub_5D4B4(a1, v14, v40, 0);
  sub_5D4B4(a1, v14, v29, -66060289);
  sub_5D4B4(a1, v14, v20, 0x2000000);
  sub_5BD68(a1, v14, 144, -7340033);
  sub_5BD68(a1, v14, 145, -2147450879);
  sub_5BD68(a1, v14, 144, 0x200000);
  sub_5BD68(a1, v14, 145, -2147450872);
  sub_5BD68(a1, v14, 144, -57345);
  sub_5BD68(a1, v14, 145, -2147450879);
  sub_5BD68(a1, v14, 144, 40960);
  sub_5BD68(a1, v14, 145, -2147450871);
  sub_5BD68(a1, v14, 144, -9);
  sub_5BD68(a1, v14, 145, -2147442687);
  sub_5BD68(a1, v14, 144, 8);
  sub_5BD68(a1, v14, 145, -2147442686);
  sub_5BD68(a1, v14, 144, -4097);
  sub_5BD68(a1, v14, 145, -2147442687);
  sub_5BD68(a1, v14, 144, 4096);
  sub_5BD68(a1, v14, 145, -2147442650);
  sub_5D4B4(a1, v14, v29, -262145);
  sub_5D4B4(a1, v14, v41, 0x40000);
  sub_5BD68(a1, v14, 144, 0x7FFFFFFF);
  sub_5BD68(a1, v14, 145, -2147450879);
  sub_5BD68(a1, v14, 144, 0x80000000);
  sub_5BD68(a1, v14, 145, -2147450853);
  sub_5BD68(a1, v14, 144, -2);
  sub_5BD68(a1, v14, 145, -2147450879);
  sub_5BD68(a1, v14, 144, 0);
  sub_5BD68(a1, v14, 145, -2147450852);
  sub_5BD68(a1, v14, 144, -100663297);
  sub_5BD68(a1, v14, 145, -2147450879);
  sub_5BD68(a1, v14, 144, 0x2000000);
  sub_5BD68(a1, v14, 145, -2147450820);
  sub_5D4B4(a1, v14, v29, -4);
  sub_5D4B4(a1, v14, v42, 1);
  sub_5D4B4(a1, v14, v29, -201326593);
  sub_5D4B4(a1, v14, v43, 0x4000000);
  sub_5D4B4(a1, v14, v29, -805306369);
  sub_5D4B4(a1, v14, v44, 0x10000000);
  sub_5D4B4(a1, v14, v29, -67108865);
  sub_5D4B4(a1, v14, v45, 0x4000000);
  sub_5BD68(a1, v14, 144, -131073);
  sub_5BD68(a1, v14, 145, -2147450879);
  sub_5BD68(a1, v14, 144, 0);
  sub_5BD68(a1, v14, 145, -2147450818);
  sub_5D4B4(a1, v14, v29, -262145);
  sub_5D4B4(a1, v14, v46, 0x40000);
  sub_5D4B4(a1, v14, v29, -1025);
  sub_5D4B4(a1, v14, v47, 1024);
  sub_5D4B4(a1, v14, v29, -8388609);
  sub_5D4B4(a1, v14, v48, 0x800000);
  sub_5D4B4(a1, v14, v29, 0xFFFFFFF);
  sub_5D4B4(a1, v14, v49, 1610612736);
  sub_5BD68(a1, v14, 144, -1009);
  sub_5BD68(a1, v14, 145, -2147450879);
  sub_5BD68(a1, v14, 144, 576);
  sub_5BD68(a1, v14, 145, -2147450787);
  sub_5BD68(a1, v14, 144, -258049);
  sub_5BD68(a1, v14, 145, -2147450879);
  sub_5BD68(a1, v14, 144, 147456);
  sub_5BD68(a1, v14, 145, -2147450787);
  sub_5BD68(a1, v14, 144, -66060289);
  sub_5BD68(a1, v14, 145, -2147450879);
  sub_5BD68(a1, v14, 144, 37748736);
  sub_5BD68(a1, v14, 145, -2147450787);
  sub_5BD68(a1, v14, 144, 0xFFFFFFF);
  sub_5BD68(a1, v14, 145, -2147450879);
  sub_5BD68(a1, v14, 144, 0x40000000);
  sub_5BD68(a1, v14, 145, -2147450787);
  sub_5BD68(a1, v14, 144, -4);
  sub_5BD68(a1, v14, 145, -2147450879);
  sub_5BD68(a1, v14, 144, 2);
  sub_5BD68(a1, v14, 145, -2147450786);
  sub_5BD68(a1, v14, 144, -1009);
  sub_5BD68(a1, v14, 145, -2147450879);
  sub_5BD68(a1, v14, 144, 64);
  sub_5BD68(a1, v14, 145, -2147450786);
  sub_5BD68(a1, v14, 144, -258049);
  sub_5BD68(a1, v14, 145, -2147450879);
  sub_5BD68(a1, v14, 144, 0x4000);
  sub_5BD68(a1, v14, 145, -2147450786);
  sub_5BD68(a1, v14, 144, -66060289);
  sub_5BD68(a1, v14, 145, -2147450879);
  sub_5BD68(a1, v14, 144, 0x400000);
  sub_5BD68(a1, v14, 145, -2147450786);
  sub_5BD68(a1, v14, 144, 0xFFFFFFF);
  sub_5BD68(a1, v14, 145, -2147450879);
  sub_5BD68(a1, v14, 144, 0x40000000);
  sub_5BD68(a1, v14, 145, -2147450786);
  sub_5BD68(a1, v14, 144, -4);
  sub_5BD68(a1, v14, 145, -2147450879);
  sub_5BD68(a1, v14, 144, 0);
  sub_5BD68(a1, v14, 145, -2147450785);
  sub_5BD68(a1, v14, 144, -1009);
  sub_5BD68(a1, v14, 145, -2147450879);
  sub_5BD68(a1, v14, 144, 96);
  sub_5BD68(a1, v14, 145, -2147450878);
  sub_5D4B4(a1, v14, v29, -196609);
  sub_5D4B4(a1, v14, v5, 0);
  sub_5D4B4(a1, v14, v29, -4);
  sub_5D4B4(a1, v14, v35, 0);
  sub_5D4B4(a1, v14, v29, -196609);
  sub_5D4B4(a1, v14, v35, 196608);
  sub_5D4B4(a1, v14, v29, -196609);
  sub_5D4B4(a1, v14, v50, 196608);
  sub_5BD68(a1, v14, 144, -786433);
  sub_5BD68(a1, v14, 145, -2147450879);
  V_LOCK();
  logfmt_raw(v56, 0x1000u, 0, "change list 202100807");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "BM_debug_seq_update_20210805_500M",
    33,
    3869,
    60,
    v56);
  sub_5BD68(a1, v14, 144, 0);
  sub_5BD68(a1, v14, 145, -2147450818);
  sub_5BD68(a1, v14, 144, -8388609);
  sub_5BD68(a1, v14, 145, -2147450879);
  sub_5BD68(a1, v14, 144, 0x800000);
  sub_5BD68(a1, v14, 145, -2147450808);
  sub_5BD68(a1, v14, 144, -805306369);
  sub_5BD68(a1, v14, 145, -2147450879);
  sub_5BD68(a1, v14, 144, 0);
  sub_5BD68(a1, v14, 145, -2147450804);
  sub_5D4B4(a1, v14, v29, -12289);
  sub_5D4B4(a1, v14, v51, 12288);
  sub_5D4B4(a1, v14, v29, -4194305);
  sub_5D4B4(a1, v14, v52, 0x400000);
  sub_5D4B4(a1, v14, v29, -497);
  sub_5D4B4(a1, v14, v30, 384);
  sub_5D4B4(a1, v14, v29, -225);
  sub_5D4B4(a1, v14, v53, 0);
  sub_5D4B4(a1, v14, v29, -61441);
  sub_5D4B4(a1, v14, v30, 0x4000);
  sub_5D4B4(a1, v14, v29, -32769);
  sub_5D4B4(a1, v14, v54, 0x8000);
  sub_5D4B4(a1, v14, v29, -65537);
  sub_5D4B4(a1, v14, v55, 0x10000);
  sub_5D4B4(a1, v14, v29, -131073);
  sub_5D4B4(a1, v14, v55, 0x20000);
  sub_5D4B4(a1, v14, v29, -65521);
  sub_5D4B4(a1, v14, v5, 0x8000);
  sub_5BD68(a1, v14, 144, -100663297);
  sub_5BD68(a1, v14, 145, -2147450879);
  sub_5BD68(a1, v14, 144, 100663296);
  sub_5BD68(a1, v14, 145, -2147450820);
  sub_5D4B4(a1, v14, v29, 0);
  sub_5BD68(a1, v14, 144, 0);
  sub_5BD68(a1, v14, 145, -2147450879);
  sub_5BD68(a1, v14, 144, 0);
  sub_5BD68(a1, v14, 145, -2147442687);
  return 0;
}
