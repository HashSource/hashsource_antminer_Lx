int __fastcall SOC_16G_20210819_update(int a1, int a2, int a3, int a4)
{
  bool v4; // zf
  int v6; // r7
  int v7; // r0
  int v8; // r3
  unsigned __int8 v9; // r5
  int v10; // lr
  int v11; // r10
  int v12; // r1
  int v13; // r12
  int v14; // r3
  int v15; // r10
  int v16; // lr
  int v17; // r1
  int v18; // r12
  int v19; // r3
  int v20; // r9
  int v21; // r11
  int v22; // r8
  int v23; // r6
  int v25; // [sp+14h] [bp-1040h]
  int v26; // [sp+1Ch] [bp-1038h]
  int v27; // [sp+20h] [bp-1034h]
  int v28; // [sp+24h] [bp-1030h]
  int v29; // [sp+28h] [bp-102Ch]
  int v30; // [sp+2Ch] [bp-1028h]
  int v31; // [sp+30h] [bp-1024h]
  int v32; // [sp+34h] [bp-1020h]
  int v33; // [sp+38h] [bp-101Ch]
  int v34; // [sp+3Ch] [bp-1018h]
  int v35; // [sp+40h] [bp-1014h]
  int v36; // [sp+44h] [bp-1010h]
  int v37; // [sp+48h] [bp-100Ch]
  int v38; // [sp+4Ch] [bp-1008h]
  char v39[4100]; // [sp+50h] [bp-1004h] BYREF

  v4 = a4 == 8;
  v6 = 61564;
  v7 = 61606;
  if ( a4 != 8 )
  {
    v6 = 124;
    v7 = 166;
  }
  v8 = 61622;
  if ( !v4 )
    v8 = 182;
  v9 = a3;
  v37 = v7;
  if ( v4 )
  {
    a3 = 61579;
    v7 = 61448;
  }
  v36 = v6;
  v10 = 61443;
  if ( v4 )
    v6 = 61442;
  else
    v10 = 3;
  v11 = 61590;
  v32 = v8;
  if ( !v4 )
    v11 = 150;
  v12 = 61566;
  v13 = 61514;
  if ( !v4 )
  {
    v12 = 126;
    v13 = 74;
  }
  v14 = 61458;
  if ( !v4 )
  {
    v14 = 18;
    a3 = 139;
    v7 = 8;
  }
  v35 = v11;
  v34 = v10;
  v15 = 61469;
  v16 = 61551;
  if ( !v4 )
  {
    v15 = 29;
    v16 = 111;
  }
  v31 = v12;
  v30 = v13;
  v17 = 61472;
  v18 = 61511;
  if ( !v4 )
  {
    v17 = 32;
    v18 = 71;
  }
  v29 = v14;
  v19 = 61466;
  if ( !v4 )
  {
    v19 = 26;
    v6 = 2;
  }
  v20 = 61441;
  v27 = v18;
  if ( !v4 )
    v20 = 1;
  v26 = v16;
  v21 = 61580;
  v22 = 61630;
  if ( !v4 )
  {
    v21 = 140;
    v22 = 190;
  }
  v23 = 61550;
  v38 = a3;
  if ( !v4 )
    v23 = 110;
  v33 = v7;
  v28 = v17;
  v25 = v19;
  V_LOCK();
  logfmt_raw(v39, 0x1000u, 0, "%s ...", "SOC_16G_20210819_update");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_eth/backend_eth.c",
    169,
    "SOC_16G_20210819_update",
    23,
    3922,
    60,
    v39);
  sub_5E03C(a1, v9, v20, -536870913);
  sub_5E03C(a1, v9, v25, 0x20000000);
  sub_5E03C(a1, v9, v20, -5);
  sub_5E03C(a1, v9, v15, 0);
  sub_5E03C(a1, v9, v20, 0x7FFFFFFF);
  sub_5E03C(a1, v9, v26, 0x80000000);
  sub_5E03C(a1, v9, v20, -262145);
  sub_5E03C(a1, v9, v23, 0);
  sub_5E03C(a1, v9, v20, -5);
  sub_5E03C(a1, v9, v23, 0);
  sub_5E03C(a1, v9, v20, 0x7FFFFFFF);
  sub_5E03C(a1, v9, v25, 0);
  sub_5E03C(a1, v9, v20, -1025);
  sub_5E03C(a1, v9, v27, 0);
  sub_5C8F0(a1, v9, 144, -7340033);
  sub_5C8F0(a1, v9, 145, -2147450879);
  sub_5C8F0(a1, v9, 144, 0x200000);
  sub_5C8F0(a1, v9, 145, -2147450872);
  sub_5C8F0(a1, v9, 144, -57345);
  sub_5C8F0(a1, v9, 145, -2147450879);
  sub_5C8F0(a1, v9, 144, 40960);
  sub_5C8F0(a1, v9, 145, -2147450871);
  sub_5E03C(a1, v9, v20, -67108865);
  sub_5E03C(a1, v9, v28, 0x4000000);
  sub_5C8F0(a1, v9, 144, -131073);
  sub_5C8F0(a1, v9, 145, -2147450879);
  sub_5C8F0(a1, v9, 144, 0);
  sub_5C8F0(a1, v9, 145, -2147450818);
  sub_5E03C(a1, v9, v20, -262145);
  sub_5E03C(a1, v9, v29, 0x40000);
  sub_5E03C(a1, v9, v20, -1025);
  sub_5E03C(a1, v9, v30, 1024);
  sub_5E03C(a1, v9, v20, -8388609);
  sub_5E03C(a1, v9, v31, 0x800000);
  sub_5E03C(a1, v9, v20, 0xFFFFFFF);
  sub_5E03C(a1, v9, v32, 1610612736);
  sub_5C8F0(a1, v9, 144, -1009);
  sub_5C8F0(a1, v9, 145, -2147450879);
  sub_5C8F0(a1, v9, 144, 576);
  sub_5C8F0(a1, v9, 145, -2147450787);
  sub_5C8F0(a1, v9, 144, -258049);
  sub_5C8F0(a1, v9, 145, -2147450879);
  sub_5C8F0(a1, v9, 144, 147456);
  sub_5C8F0(a1, v9, 145, -2147450787);
  sub_5C8F0(a1, v9, 144, -66060289);
  sub_5C8F0(a1, v9, 145, -2147450879);
  sub_5C8F0(a1, v9, 144, 37748736);
  sub_5C8F0(a1, v9, 145, -2147450787);
  sub_5C8F0(a1, v9, 144, 0xFFFFFFF);
  sub_5C8F0(a1, v9, 145, -2147450879);
  sub_5C8F0(a1, v9, 144, 0x40000000);
  sub_5C8F0(a1, v9, 145, -2147450787);
  sub_5C8F0(a1, v9, 144, -4);
  sub_5C8F0(a1, v9, 145, -2147450879);
  sub_5C8F0(a1, v9, 144, 2);
  sub_5C8F0(a1, v9, 145, -2147450786);
  sub_5C8F0(a1, v9, 144, -1009);
  sub_5C8F0(a1, v9, 145, -2147450879);
  sub_5C8F0(a1, v9, 144, 64);
  sub_5C8F0(a1, v9, 145, -2147450786);
  sub_5C8F0(a1, v9, 144, -258049);
  sub_5C8F0(a1, v9, 145, -2147450879);
  sub_5C8F0(a1, v9, 144, 0x4000);
  sub_5C8F0(a1, v9, 145, -2147450786);
  sub_5C8F0(a1, v9, 144, -66060289);
  sub_5C8F0(a1, v9, 145, -2147450879);
  sub_5C8F0(a1, v9, 144, 0x400000);
  sub_5C8F0(a1, v9, 145, -2147450786);
  sub_5C8F0(a1, v9, 144, 0xFFFFFFF);
  sub_5C8F0(a1, v9, 145, -2147450879);
  sub_5C8F0(a1, v9, 144, 0x40000000);
  sub_5C8F0(a1, v9, 145, -2147450786);
  sub_5C8F0(a1, v9, 144, -4);
  sub_5C8F0(a1, v9, 145, -2147450879);
  sub_5C8F0(a1, v9, 144, 0);
  sub_5C8F0(a1, v9, 145, -2147450785);
  sub_5C8F0(a1, v9, 144, -1009);
  sub_5C8F0(a1, v9, 145, -2147450879);
  sub_5C8F0(a1, v9, 144, 32);
  sub_5C8F0(a1, v9, 145, -2147450878);
  sub_5E03C(a1, v9, v20, -196609);
  sub_5E03C(a1, v9, v6, 0);
  sub_5E03C(a1, v9, v20, -4);
  sub_5E03C(a1, v9, v33, 0);
  sub_5E03C(a1, v9, v20, -196609);
  sub_5E03C(a1, v9, v33, 0x10000);
  sub_5E03C(a1, v9, v20, -196609);
  sub_5E03C(a1, v9, v34, 0x10000);
  sub_5C8F0(a1, v9, 144, -786433);
  sub_5C8F0(a1, v9, 145, -2147450879);
  sub_5C8F0(a1, v9, 144, 786432);
  sub_5C8F0(a1, v9, 145, -2147450818);
  sub_5C8F0(a1, v9, 144, -8388609);
  sub_5C8F0(a1, v9, 145, -2147450879);
  sub_5C8F0(a1, v9, 144, 0x800000);
  sub_5C8F0(a1, v9, 145, -2147450808);
  sub_5C8F0(a1, v9, 144, -805306369);
  sub_5C8F0(a1, v9, 145, -2147450879);
  sub_5C8F0(a1, v9, 144, 805306368);
  sub_5C8F0(a1, v9, 145, -2147450804);
  sub_5E03C(a1, v9, v20, -12289);
  sub_5E03C(a1, v9, v35, 4096);
  sub_5E03C(a1, v9, v20, -4194305);
  sub_5E03C(a1, v9, v36, 0x400000);
  sub_5E03C(a1, v9, v20, -497);
  sub_5E03C(a1, v9, v22, 384);
  sub_5E03C(a1, v9, v20, -225);
  sub_5E03C(a1, v9, v37, 0);
  sub_5E03C(a1, v9, v20, -61441);
  sub_5E03C(a1, v9, v22, 0);
  sub_5E03C(a1, v9, v20, -32769);
  sub_5E03C(a1, v9, v38, 0x8000);
  sub_5E03C(a1, v9, v20, -65537);
  sub_5E03C(a1, v9, v21, 0x10000);
  sub_5E03C(a1, v9, v20, -131073);
  sub_5E03C(a1, v9, v21, 0x20000);
  sub_5E03C(a1, v9, v20, -65521);
  sub_5E03C(a1, v9, v6, 0x8000);
  sub_5C8F0(a1, v9, 144, -2);
  sub_5C8F0(a1, v9, 145, -2147450879);
  sub_5C8F0(a1, v9, 144, 0);
  sub_5C8F0(a1, v9, 145, -2147450878);
  sub_5E03C(a1, v9, v20, -4);
  sub_5E03C(a1, v9, v6, 2);
  sub_5E03C(a1, v9, v20, 0);
  sub_5C8F0(a1, v9, 144, 0);
  sub_5C8F0(a1, v9, 145, -2147450879);
  return 0;
}
