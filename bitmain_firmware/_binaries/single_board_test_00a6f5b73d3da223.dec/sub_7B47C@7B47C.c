int __fastcall sub_7B47C(int a1, int a2)
{
  int v6; // [sp+1Ch] [bp+Ch] BYREF
  _BYTE v7[16]; // [sp+101Ch] [bp+100Ch] BYREF
  _BYTE v8[1026]; // [sp+102Ch] [bp+101Ch] BYREF
  unsigned __int8 v9; // [sp+142Eh] [bp+141Eh]
  unsigned __int8 v10; // [sp+142Fh] [bp+141Fh]
  int v11; // [sp+1430h] [bp+1420h]
  unsigned __int8 j; // [sp+1436h] [bp+1426h]
  unsigned __int8 i; // [sp+1437h] [bp+1427h]
  char *v14; // [sp+1438h] [bp+1428h]
  int v15; // [sp+143Ch] [bp+142Ch]

  memset(v8, 0, 0x400u);
  v15 = 0;
  v11 = sub_7936C(v7);
  v14 = v8;
  for ( i = 0; i <= 7u; ++i )
  {
    for ( j = 0; j < v11; ++j )
    {
      v10 = v7[j];
      V_LOCK();
      logfmt_raw(
        &v6,
        0x1000u,
        0,
        "%s chip %x core %x cmn status %x",
        "check_cmn_lock_and_reset_worse_phy",
        i,
        v10,
        *(unsigned __int8 *)(a2 + v10 + 16 * i));
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
        83,
        "check_cmn_lock_and_reset_worse_phy",
        34,
        632,
        20,
        &v6);
      if ( *(_BYTE *)(a2 + v10 + 16 * i) )
      {
        v9 = sub_7B344(a1, i, v10);
        if ( v9 == v10 || v9 > 0xFu )
        {
          sprintf(v14, "%1x-%1x ", i, v10);
          v14 += 4;
        }
        else
        {
          sprintf(v14, "%1x-%1x-%1x ", i, v10, v9);
          v14 += 6;
        }
        ++v15;
      }
    }
  }
  V_LOCK();
  logfmt_raw(&v6, 0x1000u, 0, "%s (%d) %s", "check_cmn_lock_and_reset_worse_phy", v15, v8);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "check_cmn_lock_and_reset_worse_phy",
    34,
    646,
    60,
    &v6);
  if ( v15 <= 0 )
    return 0;
  else
    return -1;
}
