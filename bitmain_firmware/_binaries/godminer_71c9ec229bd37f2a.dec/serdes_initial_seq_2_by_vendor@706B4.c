int __fastcall serdes_initial_seq_2_by_vendor(int a1, int a2, unsigned __int8 a3, int a4)
{
  bool v4; // zf
  int v7; // r0
  int v8; // r2
  int v9; // r12
  int v10; // r1
  int v11; // r3
  int v12; // r6
  int v13; // r7
  int v14; // r8
  int v15; // r9
  int v17; // [sp+14h] [bp-14h]
  int v18; // [sp+18h] [bp-10h]
  int v19; // [sp+1Ch] [bp-Ch]
  int v20; // [sp+20h] [bp-8h]
  int v21; // [sp+24h] [bp-4h]
  char v22[4100]; // [sp+28h] [bp+0h] BYREF

  v4 = a4 == 8;
  if ( a4 == 8 )
  {
    v7 = 61553;
    v8 = (int)v22;
  }
  else
  {
    v8 = 32;
    v7 = 113;
  }
  v9 = 61511;
  v10 = 61510;
  if ( a4 != 8 )
  {
    v9 = 71;
    v10 = 70;
  }
  v11 = 61509;
  if ( !v4 )
    v11 = 69;
  v12 = 61441;
  v19 = v9;
  if ( !v4 )
    v12 = 1;
  v13 = 61470;
  v14 = 61469;
  if ( !v4 )
  {
    v13 = 30;
    v14 = 29;
  }
  v15 = 61466;
  v21 = v8;
  if ( !v4 )
    v15 = 26;
  v20 = v7;
  v18 = v10;
  v17 = v11;
  V_LOCK();
  logfmt_raw(v22, 0x1000u, 0, "%s ...", "serdes_initial_seq_2_by_vendor");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_initial_seq_2_by_vendor",
    30,
    3325,
    60,
    v22);
  sub_5F554(a1, a3, v12, -536870913);
  sub_5F554(a1, a3, v15, 0);
  sub_5F554(a1, a3, v12, -5);
  sub_5F554(a1, a3, v14, 0);
  sub_5F554(a1, a3, v12, -5);
  sub_5F554(a1, a3, v13, 0);
  sub_5F554(a1, a3, v12, -262145);
  sub_5F554(a1, a3, v17, 0);
  sub_5F554(a1, a3, v12, -262145);
  sub_5F554(a1, a3, v18, 0);
  sub_5F554(a1, a3, v12, -524289);
  sub_5F554(a1, a3, v19, 0);
  sub_5F554(a1, a3, v12, -33);
  sub_5F554(a1, a3, v20, 0);
  sub_5F554(a1, a3, v12, -67108865);
  sub_5F554(a1, a3, v21, 0x4000000);
  sub_5DE08(a1, a3, 144, -786433);
  sub_5DE08(a1, a3, 145, -2147450879);
  sub_5DE08(a1, a3, 144, 0);
  sub_5DE08(a1, a3, 145, -2147450818);
  sub_5DE08(a1, a3, 144, -131073);
  sub_5DE08(a1, a3, 145, -2147450879);
  sub_5DE08(a1, a3, 144, 0);
  sub_5DE08(a1, a3, 145, -2147450818);
  sub_5DE08(a1, a3, 144, -1009);
  sub_5DE08(a1, a3, 145, -2147450879);
  sub_5DE08(a1, a3, 144, 624);
  sub_5DE08(a1, a3, 145, -2147450787);
  sub_5DE08(a1, a3, 144, -258049);
  sub_5DE08(a1, a3, 145, -2147450879);
  sub_5DE08(a1, a3, 144, 40894464);
  sub_5DE08(a1, a3, 145, -2147450787);
  sub_5DE08(a1, a3, 144, 0xFFFFFFF);
  sub_5DE08(a1, a3, 145, -2147450879);
  sub_5DE08(a1, a3, 144, 1879048192);
  sub_5DE08(a1, a3, 145, -2147450787);
  sub_5DE08(a1, a3, 144, -4);
  sub_5DE08(a1, a3, 145, -2147450879);
  sub_5DE08(a1, a3, 144, 2);
  sub_5DE08(a1, a3, 145, -2147450786);
  sub_5DE08(a1, a3, 144, -1009);
  sub_5DE08(a1, a3, 145, -2147450879);
  sub_5DE08(a1, a3, 144, 112);
  sub_5DE08(a1, a3, 145, -2147450786);
  sub_5DE08(a1, a3, 144, -258049);
  sub_5DE08(a1, a3, 145, -2147450879);
  sub_5DE08(a1, a3, 144, 28672);
  sub_5DE08(a1, a3, 145, -2147450786);
  sub_5DE08(a1, a3, 144, -66060289);
  sub_5DE08(a1, a3, 145, -2147450879);
  sub_5DE08(a1, a3, 144, 7340032);
  sub_5DE08(a1, a3, 145, -2147450786);
  sub_5DE08(a1, a3, 144, 0xFFFFFFF);
  sub_5DE08(a1, a3, 145, -2147450879);
  sub_5DE08(a1, a3, 144, 1879048192);
  sub_5DE08(a1, a3, 145, -2147450786);
  sub_5DE08(a1, a3, 144, -4);
  sub_5DE08(a1, a3, 145, -2147450879);
  sub_5DE08(a1, a3, 144, 0);
  sub_5DE08(a1, a3, 145, -2147450785);
  sub_5F554(a1, a3, v12, 0);
  sub_5DE08(a1, a3, 144, 0);
  sub_5DE08(a1, a3, 145, -2147450879);
  return 0;
}
