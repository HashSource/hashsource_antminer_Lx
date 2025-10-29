int __fastcall set_ticket_mask_dash(int a1, unsigned __int8 a2)
{
  int result; // r0
  _BYTE v5[20]; // [sp+1Ch] [bp+Ch] BYREF
  _DWORD v6[5]; // [sp+101Ch] [bp+100Ch] BYREF

  memset(v6, 0, 0x10u);
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "ticket_mask %s core reg %02x tm %d", "set_ticket_mask_dash", 20, a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_dash/backend_dash.c",
    85,
    "set_ticket_mask_dash",
    20,
    282,
    20,
    v5);
  v6[2] = 1310721;
  v6[0] = a2;
  LOWORD(v6[3]) = 2815;
  result = (*(int (__fastcall **)(int, _DWORD *))(a1 + 160))(a1, v6);
  *(_DWORD *)(a1 + 244) = a2;
  return result;
}
